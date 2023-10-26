# SMNotificationService

## Properties
```swift
@objc var settings: SMManagerSetting? { get set }
```

>`SMManagerSetting` object that will be used when dealing with the extension behaviour

```swift
@objc var encryptionEnabled: Bool { get set }
```

>Whether encryption is enabled or not (needs to be aligned with the Marigold Engage backend configuration), default false

## Methods
```swift
@objc override func didReceive(_ request: UNNotificationRequest, withContentHandler contentHandler: @escaping(UNNotificationContent) -> Void)
```

>Handles the UNNotificationServiceExtension behaviour when a push is received<br/>

```swift
@objc override func serviceExtensionTimeWillExpire()
```

>If encryption is enabled and the process times out, the push content will be marked as "(Encrypted)" before being delivered to the user