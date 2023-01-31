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

>Array of ``SMNotificationAnnotationData`` objects for map inapp-notification

```swift
@objc var arrayIAMLinks: [SMLink] { get }
```

>Array of ``SMLink`` objects

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

>Inherited from NSCoding.encode(with:).

```swift
required init(coder: NSCoder)
```

>Inherited from NSCoding.encode(with:).