# SMManager

## Methods
```swift
@objc func show(controller: SMInAppContentViewController, in view: UIView, of viewController: UIViewController)
```

>Call to show an ``SMInAppContentViewController``.<br/>The viewcontroller will take all available space in  the container view<br/>

```swift
@objc func getInAppContents(for category: String, type: SMInAppContentType) -> [SMInAppContentMessage]
```

>This will return an array of known (and not expired) ``SMInAppContentMessage``<br/>

```swift
@objc func setInAppContentAsSeen(_ content: SMInAppContentMessage)
```

>This method will mark an IAC as viewed and send the Open event to the server<br/>

```swift
@objc func executeLinkAction(_ link: SMLink, inAppContent: SMInAppContentMessage)
```

>This method must be called whenever a user has clicked on a link where you manage its display<br/>The action behind the link will be triggered, and the corresponding Clicked event will be sent to the backend<br/>

```swift
@objc func performIACFetch(completion: @escaping (UIBackgroundFetchResult) -> ())
```

>This will tell the SDK to fetch the IAC, if the OS allows to so at that time<br/>