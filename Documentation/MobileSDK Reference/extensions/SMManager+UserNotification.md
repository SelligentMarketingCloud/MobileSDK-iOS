# SMManager

## Methods
```swift
@objc func didReceive(_ response: UNNotificationResponse, options: SMInAppMessageStyleOptions? = nil)
```

>Mandatory AP when using UserNotifications framework, to be included in userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler.<br/>Handles remote notification actions.<br/>

```swift
@objc func willPresent(_ notification: UNNotification, options: SMInAppMessageStyleOptions? = nil, completionHandler: ((UNNotificationPresentationOptions) -> Void)?)
```

>Mandatory API when using UserNotifications framework, to be included in userNotificationCenter:willPresentNotification:withCompletionHandler<br/>Handles incoming remote notifications when the app is in foreground.<br/>

```swift
@objc func startExtension(with settings: SMManagerSetting)
```

>Mandatory API when using Notification Extensions.<br/>To be included in didReceiveNotification: when implementing Notification content extension and/or in the didReceiveNotificationRequest:withContentHandler: when implementing Notification service extension.<br/>

```swift
@objc func didReceive(_ response: UNNotificationResponse, completionHandler: @escaping(UNNotificationContentExtensionResponseOption) -> Void)
```

>Optional API when using a Notification content extension, to be included in didReceiveNotificationResponse:completionHandler: if you want the action buttons to be processed without opening the main App.<br/>Handles remote notification actions.<br/>

```swift
@objc func didReceive(_ notification: UNNotification, context: NSExtensionContext?)
```

>Mandatory API when using a Notification content extension, to be included in didReceiveNotification:.<br/>Handles the push action buttons and rich content that may be present in the Marigold Engage notification payload.<br/>

```swift
@objc func didReceive(request: UNNotificationRequest, completion: @escaping (UNMutableNotificationContent) -> Void)
```

>Optional API when using a Notification service extension, to be included in didReceiveNotificationRequest:withContentHandler:.<br/>This allows the SDK to decrypt the payload before displaying it to the user if you have activated the encryption of push, and send the proper push received event to the platform.<br/>

```swift
@objc func didReceive(_ request: UNNotificationRequest, contentHandler: @escaping(UNNotificationContent) -> Void)
```

>Optional API when using a Notification service extension, to be included in didReceiveNotificationRequest:withContentHandler:.<br/>This allows the SDK to decrypt the payload before displaying it to the user if you have activated the encryption of push, and send the proper push received event to the platform.<br/>

```swift
@objc func serviceExtensionTimeWillExpire()
```

>Optional API when using a Notification service extension, to be included in serviceExtensionTimeWillExpire.<br/>Tells the SDK that the extension is about to be terminated.<br/>

```swift
@objc func retrieveNotificationMessage(_ userInfo: [AnyHashable: Any]) -> SMNotificationMessage?
```

>Optional API, retrieves the ``SMNotificationMessage`` object from a given userInfo.<br/>To be used for custom implementations when you need to get the Marigold Engage push object from the provided userInfo to know what has been provided from the backend and use it.<br/>