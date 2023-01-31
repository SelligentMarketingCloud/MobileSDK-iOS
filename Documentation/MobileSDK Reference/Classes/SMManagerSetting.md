# SMManagerSetting

## Properties
```swift
@objc var shouldClearBadge: Bool { get set }
```

>Once a new remote-notification is opened, the badge is automaticly reseted.<br/>Should you want to handle this property yourself, you can set this property to **false** before starting the library

```swift
@objc var shouldDisplayRemoteNotification: Bool { get set }
```

>This setting will enable or disable the display of inapp-messages linked to a remote-notification by the SDK.<br/>After tapping a notification, the in-app will be displayed (if any).<br/>Should you want to prevent that behaviour, you can set this property to **false** before starting the library.<br/>

```swift
@objc var shouldAddInAppMessageFromPushToInAppMessageList: Bool { get set }
```

>Used to add the in-app message associated to a remote notification to the in-app message list<br/>Once a new remote-notification is received, if it contains in the payload data for an in-app message, this setting will add the in-app message to the in app messages list . You will need to listen to ``SMConstants/kSMNotification_Event_DidReceiveInAppMessage`` to be informed  that an in-app message is available and you can then retrieve it with ``SMManager/getInAppMessages()``.

```swift
@objc var remoteMessageDisplayType: SMRemoteMessageDisplayType { get set }
```

>This value defines the behaviour that the SDK will adopt when a remote-notification is received when in Foreground.<br/>The behaviour will be as:<br/>*  **kSMRemoteMessageDisplayType_None**: nothing will be displayed.<br/>*  **kSMRemoteMessageDisplayType_Notification**: a Push Notification will be displayed.<br/>*  **kSMRemoteMessageDisplayType_Automatic**:<br/>   **"Push + in-app notifications"**:<br/>       a. With "Message Action": a Push Notification will be displayed (**UNNotificationPresentationOptionAlert** and **UNNotificationPresentationOptionBanner | UNNotificationPresentationOptionList** for iOS 14+).<br/>       b. With "Push Notification Buttons": a Push Notification will be displayed (**UNNotificationPresentationOptionAlert** and **UNNotificationPresentationOptionBanner | UNNotificationPresentationOptionList** for iOS 14+).<br/>       c. With "Rich Push Content": a Push Notification will be displayed (**UNNotificationPresentationOptionAlert** and **UNNotificationPresentationOptionBanner | UNNotificationPresentationOptionList **for iOS 14+).<br/>       d. Others: an in-app message will be displayed (**UNNotificationPresentationOptionNone**).<br/>   **"Mobile push"**: a Push Notification will be displayed (**UNNotificationPresentationOptionAlert** and **UNNotificationPresentationOptionBanner | UNNotificationPresentationOptionList** for iOS 14+).<br/>

```swift
@objc var frameworkType: SMFrameworkType { get set }
```

>This value tells which type of hybrid framework is the SDK running under.<br/>

```swift
@objc var clearCacheIntervalValue: SMClearCache { get set }
```

>This value tells how often the SDK's cache mechanism should clear itself.<br/>Internally, each notification-messages has a life-span.<br/>Clearing the cache stands for deleting notification-messages with an expired life-span.<br/>In other words, only old notification-messages are deleted from the cache.<br/>More recent ones are kept in memory until their life-span expires and a new clearCache is called.<br/>By default, this value is set to **kSMClearCache_Auto**.<br/>

```swift
@objc var appGroupId: String { get set }
```

>This value provides to the SDK  the app group id that you have previously defined in your apple developer portal.<br/>It is used to allow the SDK to share data between the main app and the notification extensions (service and/or content).<br/>The deviceId provided by Selligent mobile platform is stored in this container

## Methods
```swift
@objc init(url: String, clientId: String, privateKey: String) throws
```

>Selligent v1 support. Use this init when integrating with the old system.<br/>Default-mandatory constructor to start the ``SMManager`` shared instance<br/>

```swift
@objc func configureInAppMessageService(with settings: SMManagerSettingIAM)
```

>This call is optional.<br/>However, it is required to enable in-app messages.<br/>

```swift
@objc func configureInAppContentService(with settings: SMManagerSettingIAC)
```

>This call is optional.<br/>However, it is required to enable in-app contents.<br/>