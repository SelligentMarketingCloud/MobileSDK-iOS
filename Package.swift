// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "SelligentMobileSDK",
    platforms: [
        .iOS(.v12),
        .macCatalyst(.v13)
    ],
    products: [
        .library(
            name: "SelligentMobileSDK",
            targets: ["SelligentMobileSDK"]),
        .library(
            name: "SelligentMobileExtensionsSDK",
            targets: ["SelligentMobileExtensionsSDK"])
    ],
    targets: [
        .binaryTarget(
           name: "SelligentMobileSDK",
           path: "Framework/SelligentMobileSDK.xcframework"),
        .binaryTarget(
           name: "SelligentMobileExtensionsSDK",
           path: "FrameworkExtension/SelligentMobileExtensionsSDK.xcframework")
    ]
)
