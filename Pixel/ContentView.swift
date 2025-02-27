//
//  ContentView.swift
//  Pixel
//
//  Created by nugroho.widodo on 26/02/25.
//

import SwiftUI
import PhotosUI

struct ContentView: View {
    @ObservedObject private var viewModel = ImageProcessingViewModel()
    @State private var photoPickerItem: PhotosPickerItem?
    @State private var isFilePickerPresented = false
    @State private var isPhotoPickerPresented = false

    var body: some View {
        NavigationStack {
            VStack(spacing: 20) {
                if let image = viewModel.processedImage ?? viewModel.selectedImage {
                    Image(uiImage: image)
                        .resizable()
                        .scaledToFit()
                        .frame(maxHeight: 300)
                } else {
                    ContentUnavailableView("No Image Selected", systemImage: "photo")
                }
                
                if viewModel.selectedImage != nil {
                    VStack(spacing: 12) {
                        HStack {
                            Text("Temperature")
                            Spacer()
                            Text(String(format: "%.1f", viewModel.temperatureValue))
                        }
                        
                        Slider(value: $viewModel.temperatureValue, in: -100...100, step: 1) {
                            Text("Temperature")
                        } minimumValueLabel: {
                            Image(systemName: "thermometer.snowflake")
                        } maximumValueLabel: {
                            Image(systemName: "thermometer.sun")
                        }
                        .onChange(of: viewModel.temperatureValue) {
                            viewModel.processImage()
                        }

                        if viewModel.processedImage != nil {
                            Menu {
                                Button(action: viewModel.saveProcessedImage) {
                                    Label("Save to Photos", systemImage: "photo.on.rectangle")
                                }
                                Button {
                                    viewModel.saveToFiles()
                                } label: {
                                    Label("Save to Files", systemImage: "folder")
                                }
                            } label: {
                                Text("Save Image")
                                    .frame(maxWidth: .infinity)
                            }
                            .buttonStyle(.bordered)
                        }
                    }
                    .padding()
                    .background(Color(uiColor: .systemBackground))
                    .clipShape(RoundedRectangle(cornerRadius: 15))
                    .shadow(radius: 2)
                }
            }
            .padding()
            .navigationTitle("Pixel")
            .toolbar {
                Menu {
                    Button {
                        isFilePickerPresented.toggle()
                    } label: {
                        Label("Choose from Files", systemImage: "folder")
                    }
                    Button {
                        isPhotoPickerPresented.toggle()
                    } label: {
                        Label("Choose from Photos", systemImage: "photo")
                    }
                } label: {
                    Image(systemName: "plus.circle")
                }
            }
            .fileImporter(
                isPresented: $isFilePickerPresented,
                allowedContentTypes: [.jpeg]
            ) { result in
                switch result {
                case .success(let url):
                    viewModel.loadImageFromFile(url: url)
                case .failure(let error):
                    viewModel.errorMessage = error.localizedDescription
                }
            }
            .onChange(of: photoPickerItem) { _, newValue in
                if let item = newValue {
                    viewModel.loadImage(from: item)
                }
            }
        }
        .alert("Error", isPresented: .constant(viewModel.errorMessage != nil)) {
            Button("OK") {
                viewModel.errorMessage = nil
            }
        } message: {
            if let error = viewModel.errorMessage {
                Text(error)
            }
        }
        .photosPicker(isPresented: $isPhotoPickerPresented, selection: $photoPickerItem)
    }
}

#Preview {
    ContentView()
}
