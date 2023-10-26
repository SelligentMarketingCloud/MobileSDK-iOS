# SMConstants

## Properties
```swift
@objc static let kSMErrorDomain: String { get }
```

>Domain used by the SDK for custom error handling

```swift
@objc static let kSMNotification_Event_ButtonClicked: String { get }
```

>It is broadcasted when the user interacts with a Remote Notification. It can be used to retrieve user action on a received remote-notification

```swift
@objc static let kSMNotification_Event_WillDisplayNotification: String { get }
```

>It is broadcasted shortly before displaying a Remote Notification's content. It can be used to pause any ongoing work before the Remote Notification is displayed. This notification-name is also triggered even if you disable ``SMManagerSetting/shouldDisplayRemoteNotification``

```swift
@objc static let kSMNotification_Event_WillDismissNotification: String { get }
```

>It is broadcasted shortly before dismissing the current Remote Notification's content. It can be used to resume any paused work

```swift
@objc static let kSMNotification_Event_DidReceiveRemoteNotification: String { get }
```

>It is broadcasted shortly after receiving a Remote Notification. It can be used to decide when to display a remote-notification

```swift
@objc static let kSMNotification_Event_DidReceiveInAppMessage: String { get }
```

>It is broadcasted shortly after receiving in-app messages. It can be used to manage the received in-app messages

```swift
@objc static let kSMNotification_Event_DidReceiveInAppContent: String { get }
```

>It is broadcasted shortly after receiving in-app contents

```swift
@objc static let kSMNotification_Event_DidReceiveDeviceId: String { get }
```

>It is broadcasted shortly after receiving a Marigold Engage deviceId value. It can be used to manage the received device id

```swift
@objc static let kSMNotification_Data_ButtonData: String { get }
```

>Use this Key to retrieve the object ``SMLink``, from the NSNotification-name ``SMConstants/kSMNotification_Event_ButtonClicked``

```swift
@objc static let kSMNotification_Data_RemoteNotification: String { get }
```

>Use this Key to retrieve a Dictionary instance with the Push Id and title, from the NSNotification-name ``SMConstants/kSMNotification_Event_DidReceiveRemoteNotification``

```swift
@objc static let kSMNotification_Object_RemoteNotification: String { get }
```

>Use this Key to retrieve an SMNotificationMessage instance with the Push content, from the NSNotification-name ``SMConstants/kSMNotification_Event_DidReceiveRemoteNotification``

```swift
@objc static let kSMNotification_Data_InAppMessage: String { get }
```

>Use this Key to retrieve an Array instance with Dictionary instances containing  id and title as properties, from the NSNotification-name ``SMConstants/kSMNotification_Event_DidReceiveInAppMessage``

```swift
@objc static let kSMNotification_Object_InAppMessage: String { get }
```

>Use this Key to retrieve an SMInAppMessage instance with the message content, from the NSNotification-name ``SMConstants/kSMNotification_Event_DidReceiveInAppMessage``

```swift
@objc static let kSMNotification_Data_InAppContent: String { get }
```

>Use this Key to retrieve an Array instance of ``SMInAppContentMessage``, from the NSNotification-name ``SMConstants/kSMNotification_Event_DidReceiveInAppContent``

```swift
@objc static let kSMNotification_Data_DeviceId: String { get }
```

>Use this Key to retrieve an `String` instance with the Marigold Engage deviceId value, from the NSNotification-name ``SMConstants/kSMNotification_Event_DidReceiveDeviceId``
