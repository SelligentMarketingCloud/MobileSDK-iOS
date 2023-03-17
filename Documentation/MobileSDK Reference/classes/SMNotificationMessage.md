# SMNotificationMessage

## Properties
```swift
@objc var mediaUrl: String { get }
```

>String value providing the title of the message

```swift
@objc var mainAction: SMLink? { get }
```

>String value providing the content of the message

```swift
@objc var notificationButtons: [SMLink] { get }
```

>String value providing the category of the message

## Methods
```swift
override func encode(with coder: NSCoder)
```

>Inherited from NSCoding.encode(with:).

```swift
required init(coder: NSCoder)
```

>Inherited from NSCoding.encode(with:).