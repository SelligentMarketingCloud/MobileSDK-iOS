// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "SelligentMobileSDK",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "SelligentMobileSDK",
            targets: ["SelligentMobileSDK"]),
        .library(
            name: "SelligentMobileSDK_Geofencing",
            targets: ["SelligentMobileSDK_Geofencing"]),
        .library(
            name: "SelligentMobileExtensionsSDK",
            targets: ["SelligentMobileExtensionsSDK"])
    ],
    targets: [
        .binaryTarget(
           name: "SelligentMobileSDK",
           path: "Framework/SelligentMobileSDK.xcframework"),
        .binaryTarget(
           name: "SelligentMobileSDK_Geofencing",
           path: "Framework_Geofencing/SelligentMobileSDK_Geofencing.xcframework"),
        .binaryTarget(
           name: "SelligentMobileExtensionsSDK",
           path: "FrameworkExtension/SelligentMobileExtensionsSDK.xcframework")
    ]
)
