# SMManager

## Methods
```swift
@objc func registerForRemoteNotification()
```

>Mandatory method which allows push notification registration.<br/>This API will display a dialog asking user's permission for remote-notifications.<br/>Often, this call is added right after starting the App, howeve, you may call this API later in your code according to your needs.<br/>However, you may call this API later in your code according to your application need. Just remember that this call is mandatory to receive remote-notifications.

```swift
@objc func registerForProvisionalRemoteNotification()
```

>Optional method which allows getting a provisional push token [more info](https://developer.apple.com/documentation/usernotifications/asking_permission_to_use_notifications).<br/>This API will automatically obtain a push token without asking the user, triggering ``SMManager/registerForRemoteNotification()`` afterwards will still present the prompt to the user.

```swift
@objc func enableRemoteNotification()
```

>Use this API to enable Marigold Engage push notifications on current device, by default it is enabled.<br/>

```swift
@objc func disableRemoteNotification()
```

>Use this API to disable Marigold Engage push notifications on current device, by default it is enabled.<br/>

```swift
@objc func didRegisterForRemoteNotifications(deviceToken: Data)
```

>Mandatory API to be included in application:didRegisterForRemoteNotificationsWithDeviceToken:<br/>

```swift
@objc func didFailToRegisterForRemoteNotifications(with error: Error)
```

>Optional API to be included in application:didFailToRegisterForRemoteNotificationsWithError:<br/>

```swift
@objc func displayLastReceivedRemoteNotification(options: SMInAppMessageStyleOptions? = nil)
```

>Display the content linked to the last received remote notification (usually an in-app message).<br/> 

```swift
@objc func displayLastReceivedNotificationContent(options: SMInAppMessageStyleOptions? = nil)
```

>Display the content linked to the last received remote notification (usually an in-app message).<br/> 

```swift
@objc func retrieveLastRemoteNotification() -> [String: String]?
```

>Retrieves the last received remote-notification content<br/>

```swift
@objc func retrieveLastReceivedNotificationContent() -> SMNotificationMessage?
```

>Retrieves the last received remote-notification content<br/>

```swift
@objc func setNotificationMessageAsSeen(_ message: SMNotificationMessage)
```

>Tells to the SDK that a certain ``SMNotificationMessage`` object has been seen.<br/>The SDK will send an opened event to the Marigold Engage platform.<br/>

```swift
@objc func didReceiveRemoteNotification(_ userInfo: [AnyHashable: Any], completionHandler: ((UIBackgroundFetchResult) -> Void)?)
```

>Mandatory API to be included in application:didReceiveRemoteNotification:fetchCompletionHandler when dealing with Silent Push<br/>The SDK will send an opened event to the Marigold Engage platform.<br/>

```swift
@objc func displayLastReceivedNotification()
```

>Displays the last received Marigold Engage push notification (if any)<br/>