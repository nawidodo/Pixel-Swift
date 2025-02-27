//
//  PixelApp.swift
//  Pixel
//
//  Created by nugroho.widodo on 26/02/25.
//

import SwiftUI
import Photos

@main
struct PixelApp: App {
    @State private var isPhotoPermissionGranted = false
    
    var body: some Scene {
        WindowGroup {
            Group {
                if isPhotoPermissionGranted {
                    ContentView()
                } else {
                    PermissionRequestView(isPermissionGranted: $isPhotoPermissionGranted)
                }
            }
            .onAppear {
                checkPhotoPermission()
            }
        }
    }
    
    private func checkPhotoPermission() {
        switch PHPhotoLibrary.authorizationStatus(for: .readWrite) {
        case .authorized, .limited:
            isPhotoPermissionGranted = true
        case .notDetermined:
            PHPhotoLibrary.requestAuthorization(for: .readWrite) { status in
                DispatchQueue.main.async {
                    isPhotoPermissionGranted = status == .authorized || status == .limited
                }
            }
        case .denied, .restricted:
            isPhotoPermissionGranted = false
        @unknown default:
            isPhotoPermissionGranted = false
        }
    }
}

struct PermissionRequestView: View {
    @Binding var isPermissionGranted: Bool
    
    var body: some View {
        VStack(spacing: 20) {
            Image(systemName: "photo")
                .font(.system(size: 60))
                .foregroundColor(.gray)
            
            Text("Photo Library Access Required")
                .font(.title2)
                .fontWeight(.bold)
            
            Text("This app needs access to your photos to load and save images. Please grant access in Settings.")
                .multilineTextAlignment(.center)
                .foregroundColor(.gray)
            
            Button("Open Settings") {
                if let settingsURL = URL(string: UIApplication.openSettingsURLString) {
                    UIApplication.shared.open(settingsURL)
                }
            }
            .buttonStyle(.bordered)
        }
        .padding()
        .onAppear {
            // Recheck permission when view appears
            checkPermission()
        }
    }
    
    private func checkPermission() {
        let status = PHPhotoLibrary.authorizationStatus(for: .readWrite)
        DispatchQueue.main.async {
            isPermissionGranted = status == .authorized || status == .limited
        }
    }
}
