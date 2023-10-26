# SMNotificationMessage

## Properties
```swift
@objc var mediaType { get }
```

>The type of rich media that the notification has

```swift
@objc var mediaUrl: String { get }
```

>String value providing the title of the message

```swift
@objc var mainAction: SMLink? { get }
```

>The link behind the main action of the remote notification

```swift
@objc var notificationButtons: [SMLink] { get }
```

>Links that the remote notification has

## Methods
```swift
override func encode(with coder: NSCoder)
```

>Inherited from NSCoding.encode(with:)

```swift
required init(coder: NSCoder)
```

>Inherited from NSCoding.encode(with:)