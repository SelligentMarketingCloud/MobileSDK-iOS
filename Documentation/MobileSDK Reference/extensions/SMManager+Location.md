# SMManager

## Methods
```swift
@objc func enableGeoLocation()
```

>Enable geolocation services.<br/>This optional call will enable geolocation services at SDK level. it is independent of iOS location authorization.<br/>If you use plotproject for geolocation it will be mandatory to call it if you have set enableOnFirstRun to false in the plotconfig.json.<br/>Call this API according to your application's need.

```swift
@objc func disableGeoLocation()
```

>Disable geolocation services.<br/>This optional call will disable geolocation services at SDK level. it is independent of iOS location authorization.<br/>Call this API according to your application's need.

```swift
@objc func isGeoLocationEnabled() -> Bool
```

>Check the geolocation services status.<br/>This optional call will inform you if geolocation services at SDK level are enabled. it is independent of iOS location authorization