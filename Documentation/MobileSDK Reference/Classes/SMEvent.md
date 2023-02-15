# SMEvent

## Properties
```swift
@objc var shouldCache: Bool { get set }
```

>Confirm if the current event should be cached or not<br/>If the event fail to be delivered to your backend, then by default, it is cached into an internal queue.<br/>After a while, the library will automaticly try to send it again.<br/>Should you want to prevent this behaviour, feel free to set this property to **false**.<br/>By default, it is set to **true**

```swift
var description: String { get }
```

>A textual representation of the receiver.

## Methods
```swift
@objc init(name: String = "", properties: [AnyHashable: Any]? = nil)
```

>Create an event object that will be sent to platform<br/>

```swift
@objc func apply(successBlock: ((SMSuccess) -> Void)? = nil, failureBlock: ((SMFailure) -> Void)? = nil)
```

>Allow to initialize a success block and/or a failure block that will be triggered after an event is sent to the platform<br/>

```swift
func encode(with coder: NSCoder)
```

>Inherited from NSCoding.encode(with:).

```swift
required init(coder: NSCoder)
```

>Inherited from NSCoding.encode(with:).