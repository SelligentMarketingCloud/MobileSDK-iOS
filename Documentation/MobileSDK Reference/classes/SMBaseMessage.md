# SMBaseMessage

## Properties
```swift
@objc var idMessage: String { get }
```

>String value of the message Id

```swift
@objc var receptionDate: Date { get }
```

>Date value of the message reception date

```swift
@objc var expirationDate: Date? { get }
```

>Date value of the message expiration date, if any

```swift
@objc var creationDate: Date { get }
```

>Date value of the message creation date

```swift
@objc var isViewed: Bool { get }
```

>Bool value indication whether the message has been viewed (at least once), or not

```swift
@objc var type: SMNotificationMessageType { get }
```

>The inapp-message type (if any)

```swift
var hash: Int { get }
```

>Returns an integer that can be used as a table address in a hash table structure

## Methods
```swift
func encode(with coder: NSCoder)
```

>Inherited from NSCoding.encode(with:)

```swift
required init(coder: NSCoder)
```

>Inherited from NSCoding.encode(with:)

```swift
override func isEqual(_ object: Any?) -> Bool
```

>Returns a Boolean value that indicates whether the receiver and a given object are equal