# SMManager

## Properties
```swift
@objc var versionLib: String { get set }
```

>The current version of the library

```swift
@objc var deviceId: String { get set }
```

>Currently known Selligent device Id

```swift
@objc static let shared: SMManager { get }
```

>Singleton for ``SMManager`` which allows to access public methods and properties

## Methods
```swift
@objc func start(with settings: SMManagerSetting)
```

>Mandatory method which allows SDK initialization. To be included in application:didFinishLaunchingWithOptions:<br/>

```swift
@objc func reload(settings: SMManagerSetting)
```

>Testing mode ONLY method.<br/>It will re-configure the ``SMManager`` with the new settings.<br/>This is a handy API in case you would like to switch between two backend environments without rebuilding your target.<br/>