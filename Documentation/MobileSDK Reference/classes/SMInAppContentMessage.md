# SMInAppContentMessage

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
@objc var category: String { get }
```

>String value providing the category of the message

```swift
@objc var iacType: SMInAppContentType { get }
```

>The content type of the message

```swift
@objc var arrayIACLinks: [SMLink] { get }
```

>Links that the message can contain

## Methods
```swift
override func encode(with coder: NSCoder)
```

>Inherited from NSCoding.encode(with:)

```swift
required init(coder: NSCoder)
```

>Inherited from NSCoding.encode(with:)