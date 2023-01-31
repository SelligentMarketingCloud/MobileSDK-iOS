# SMRemoteMessageDisplayType

>

## Cases
```swift
case unknown = 0
```

>Default value when not explicitly set

```swift
case none = 1
```

>No Push nor in-app messages will be displayed

```swift
case notification = 2
```

>A Push notification will be displayed

```swift
case automatic = 3
```

>An in-app message will be displayed (when there is an in-app message available within the remote-notification payload)
