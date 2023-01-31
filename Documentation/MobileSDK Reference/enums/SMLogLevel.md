# SMLogLevel

>

## Cases
```swift
case none = 0
```

>No log printed at all.<br/>This is the suggested log-level for release.

```swift
case info = 1
```

>Default log-entry.<br/>Basically inform user when library starts / ends.

```swift
case warning = 2
```

>Only warning messages are printed

```swift
case error = 3
```

>Only Error messages are being printed

```swift
case httpCall = 4
```

>Print only HTTP-requests stuff

```swift
case location = 5
```

>Print only location-requests stuff

```swift
case all = -1
```

>Print everything. Do not use for release!
