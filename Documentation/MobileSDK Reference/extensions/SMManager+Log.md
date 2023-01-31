# SMManager

## Methods
```swift
@objc func apply(_ logLevel: SMLogLevel)
```

>Set the log level of the library console.<br/>This is an optional setting that may help you debug the library calls.<br/>This call can be done at any time (before or after starting the library).<br/>However, in order to avoid missing any error log, we recommand setting this value before starting the library.<br/>