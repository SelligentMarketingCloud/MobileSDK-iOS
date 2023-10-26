# SMInAppMessage

## Properties
```swift
@objc var title: String { get }
```

>String value providing the title of the message

```swift
@objc var body: String { get }
```

>String value providing the content of the message

```swift
@objc var arrayMapAnnotations: [SMNotificationAnnotationData] { get }
```

>The anotations for map type messages

```swift
@objc var arrayIAMLinks: [SMLink] { get }
```

>Links that the message can contain

```swift
@objc var apsTitle: String { get }
```

>String value providing the title of the remote-notification

```swift
@objc var apsBody: String { get }
```

>String value providing the body of the remote-notification

## Methods
```swift
override func encode(with coder: NSCoder)
```

>Inherited from NSCoding.encode(with:)

```swift
required init(coder: NSCoder)
```

>Inherited from NSCoding.encode(with:)