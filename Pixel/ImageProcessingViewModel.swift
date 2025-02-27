//
//  ImageProcessingViewModel.swift
//  Pixel
//
//  Created by nugroho.widodo on 26/02/25.
//

import SwiftUI
import PhotosUI
import opencv2.Swift

@MainActor
class ImageProcessingViewModel: ObservableObject {
    @Published var selectedImage: UIImage?
    @Published var processedImage: UIImage?
    @Published var temperatureValue: Double = 0.0
    @Published var isProcessing = false
    @Published var errorMessage: String?
    
    func loadImage(from item: PhotosPickerItem) {
        Task {
            do {
                guard let imageData = try await item.loadTransferable(type: Data.self),
                      let uiImage = UIImage(data: imageData) else {
                    throw ImageProcessingError.invalidImageData
                }
                selectedImage = uiImage
                processedImage = nil
                errorMessage = nil
                temperatureValue = 0
            } catch {
                errorMessage = error.localizedDescription
            }
        }
    }
    
    func processImage() {
        guard let image = selectedImage else { return }
        isProcessing = true
        let result = adjustTemperature(image: image, value: temperatureValue)
        processedImage = result
        isProcessing = false
    }
    
    func saveProcessedImage() {
        guard let processedImage = processedImage else { return }
        
        UIImageWriteToSavedPhotosAlbum(processedImage, nil, nil, nil)
    }
    
    private func isJPEGFormat(_ data: Data) -> Bool {
        guard data.count >= 3 else { return false }
        // Check for JPEG signature (FF D8 FF)
        return data[0] == 0xFF && data[1] == 0xD8 && data[2] == 0xFF
    }
    
    func loadImageFromFile(url: URL) {
        guard url.startAccessingSecurityScopedResource() else {
            errorMessage = "Failed to access the selected file"
            return
        }
        defer { url.stopAccessingSecurityScopedResource() }
        
        do {
            let imageData = try Data(contentsOf: url)
            guard isJPEGFormat(imageData) else {
                throw ImageProcessingError.invalidJPEGFormat
            }
            guard let uiImage = UIImage(data: imageData) else {
                throw ImageProcessingError.invalidImageData
            }
            selectedImage = uiImage
            processedImage = nil
            errorMessage = nil
            temperatureValue = 0
        } catch {
            errorMessage = error.localizedDescription
        }
    }
    func saveToFiles() {
        guard let processedImage = processedImage,
              let imageData = processedImage.jpegData(compressionQuality: 1) else { return }
        
        let temporaryDirectory = FileManager.default.temporaryDirectory
        let fileName = "processed_image_\(Int(Date().timeIntervalSince1970)).jpg"
        let fileURL = temporaryDirectory.appendingPathComponent(fileName)
        
        do {
            try imageData.write(to: fileURL)
            let panel = UIDocumentPickerViewController(forExporting: [fileURL], asCopy: true)
            if let windowScene = UIApplication.shared.connectedScenes.first as? UIWindowScene,
               let window = windowScene.windows.first,
               let controller = window.rootViewController {
                controller.present(panel, animated: true)
            }
        } catch {
            errorMessage = "Failed to save image: \(error.localizedDescription)"
        }
    }

    func adjustTemperature(image: UIImage, value temperature: Double) -> UIImage {
        let cvImage = Mat(uiImage: image)
        cvImage.convert(to: cvImage, rtype: CV_32F ,alpha: 1.0/255.0)

        var channels = [Mat]()
        Core.split(m: cvImage, mv: &channels)

        let normalizedTemp = temperature / 100.0
        let redAdjust = normalizedTemp > 0 ? (1.0 + normalizedTemp * 0.5) : (1.0 - abs(normalizedTemp) * 0.5)
        let blueAdjust = normalizedTemp < 0 ? (1.0 + normalizedTemp * 0.5) : (1.0 - normalizedTemp * 0.5)

        Core.multiply(src1: channels[0], srcScalar: Scalar(redAdjust), dst: channels[0])
        Core.multiply(src1: channels[2], srcScalar: Scalar(blueAdjust), dst: channels[2])

        let adjustedImage = Mat()
        Core.merge(mv: channels, dst: adjustedImage)

        adjustedImage.convert(to: adjustedImage, rtype: CvType.CV_8UC3, alpha: 255.0)

        return adjustedImage.toUIImage()
    }
}

enum ImageProcessingError: LocalizedError {
    case invalidImageData
    case invalidJPEGFormat
    
    var errorDescription: String? {
        switch self {
        case .invalidImageData:
            return "Could not load the selected image"
        case .invalidJPEGFormat:
            return "The selected file is not a valid JPEG image"
        }
    }
}
