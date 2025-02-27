# Pixel

Pixel is an iOS app that allows users to adjust the temperature of their photos using OpenCV image processing. With an intuitive slider interface, users can easily modify the warmth or coolness of their images and save the results.

## Demo

https://github.com/user-attachments/assets/d2fcb929-4883-4a28-9cfc-6d0da7861cc7

## Features

- Photo library integration with proper permission handling
- Temperature adjustment slider (-100 to +100)
- Support for both photo library and file system image sources
- Real-time image processing using OpenCV
- Save processed images to Photos or Files
- Modern SwiftUI interface

## Requirements

- iOS 17.0+
- Xcode 16.2+
- Swift 6.0.3
- Git LFS (for handling large OpenCV framework)

## Installation

1. Install Git LFS if you haven't already:
   ```bash
   brew install git-lfs
   ```
2. Clone the repository with Git LFS support:
   ```bash
   git clone https://github.com/nawidodo/Pixel-Swift.git
   cd Pixel-Swift
   git lfs pull
   ```
3. Open `Pixel.xcodeproj` in Xcode
4. Build and run the project

## Usage

1. Launch the app and grant photo library access when prompted
2. Tap the + button to choose an image from either:
   - Photo Library
   - Files
3. Use the temperature slider to adjust the image:
   - Slide right for warmer tones
   - Slide left for cooler tones
4. Save the processed image using the "Save Image" menu:
   - Save to Photos: Adds the image to your photo library
   - Save to Files: Exports the image to your chosen location

## Technical Details

The app is built using:
- SwiftUI for the user interface
- OpenCV for image processing
- PhotosUI for photo library integration
- Swift concurrency for asynchronous operations

## Privacy

The app requires photo library access to:
- Load images for processing
- Save processed images
- All processing is done locally on the device

## License

This project is available under the MIT license. See the LICENSE file for more info.
