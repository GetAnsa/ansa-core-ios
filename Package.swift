// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "AnsaCore",
    platforms: [.iOS(.v16)],
    products: [
        .library(name: "AnsaCore", targets: ["AnsaCoreWrapper"]),
    ],
    dependencies: [
       .package(url: "https://github.com/hmlongco/Factory", from: "2.3.2")
    ],
    targets: [
        .binaryTarget(
            name: "AnsaCore",
            path: "AnsaCore.xcframework"
        ),

        .binaryTarget(
            name: "AnsaShared",
            path: "AnsaShared.xcframework"
        ),

        .target(
            name: "AnsaCoreWrapper",
            dependencies: [
                 "AnsaCore",
                 "AnsaShared",
                 .product(name: "Factory", package: "Factory"),
            ],
            path: "./Sources"
        ),
    ]
)
