// swift-tools-version:5.10
import PackageDescription

let packageName = "AnsaCore"

let package = Package(
    name: packageName,
    platforms: [
        .iOS(.v16)
    ],
    products: [
        .library(
            name: packageName,
            targets: [packageName]
        ),
    ],
    targets: [
        .binaryTarget(
            name: packageName,
            path: "\(packageName).xcframework"
        )
        ,
    ]
)