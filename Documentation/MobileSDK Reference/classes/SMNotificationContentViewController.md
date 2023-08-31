# SMNotificationContentViewController

## Properties
```swift
@objc var settings: SMManagerSetting? { get set }
```

>`SMManagerSetting` object that will be used when dealing with the extension behaviour

```swift
@objc var notificationButtonClicksShouldOpenTheApp: Bool { get set }
```

>Whether clicking in a notification button should (always) open the App first, default true.<br/>If set to false, actions that do not need the app to be opened to be executed, won't open it (i.e Open Url, Deeplink, Mail, SMS...)

## Methods
```swift
@objc override init(nibName nibNameOrNil: String?, bundle nibBundleOrNil: Bundle?)
```

>Default initializer called by UNNotificationContentExtension

```swift
@objc override func viewDidLoad()
```

>Creates an specific implementation of the UNNotificationContentExtension view

```swift
@objc func didReceive(_ notification: UNNotification)
```

>Handles the UNNotificationContentExtension behaviour when a push is to be expanded<br/>

```swift
@objc func didReceive(_ response: UNNotificationResponse, completionHandler completion: @escaping (UNNotificationContentExtensionResponseOption) -> Void)
```

>Handles the UNNotificationContentExtension behaviour when clicking in a notification button<br/>