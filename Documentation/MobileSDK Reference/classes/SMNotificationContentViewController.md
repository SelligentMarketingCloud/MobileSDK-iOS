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

```swift
var mediaPlayPauseButtonType: UNNotificationContentExtensionMediaPlayPauseButtonType { get set }
```

>Implement this property when you want the system to display a media playback button in your notification interface. Return an appropriate constant indicating the type of button you want.

```swift
@objc var mediaPlayPauseButtonTintColor: UIColor { get set }
```

>The tint color for the media playback button.

```swift
@objc var mediaPlayPauseButtonFrame: CGRect { get set }
```

>The frame rectangle to use for displaying a media playback button.

## Methods
```swift
@objc override init(nibName nibNameOrNil: String?, bundle nibBundleOrNil: Bundle?)
```

>Default initializer called by UNNotificationContentExtension

```swift
@objc open func didReceive(_ notification: UNNotification)
```

>Handles the UNNotificationContentExtension behaviour when a push is to be expanded<br/>

```swift
@objc open func didReceive(_ response: UNNotificationResponse, completionHandler completion: @escaping (UNNotificationContentExtensionResponseOption) -> Void)
```

>Handles the UNNotificationContentExtension behaviour when clicking in a notification button<br/>

```swift
@objc override func viewDidLoad()
```

>Called after the view has been loaded. For view controllers created in code, this is after -loadView. For view controllers unarchived from a nib, this is after the view is set.

```swift
@objc override func viewWillDisappear(_ animated: Bool)
```

>Called when the view is about to be dismissed, covered, or otherwise hidden.

```swift
@objc func mediaPlay()
```

>Tells you to begin playback of your media content.

```swift
@objc func mediaPause()
```

>Tells you to pause playback of your media content.