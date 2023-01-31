# SMManager

## Methods
```swift
@objc func enable(inAppMessage: Bool)
```

>Call this API in order to enable / disable the IAM-service according to your application's need.<br/>

```swift
@objc func performIAMFetch(completion: @escaping (UIBackgroundFetchResult) -> ())
```

>This will allow tell the SDK to fetch the IAM, if the OS allows to so at that time<br/>

```swift
@objc func getInAppMessages() -> [SMInAppMessage]
```

>This will return an array of known (and not expired) ``SMInAppMessage``<br/>

```swift
@objc func setInAppMessageAsSeen(_ message: SMInAppMessage)
```

>This method will mark an IAM as viewed, send the Open event to the server and update the object in cache with isViewed property set to  true<br/>

```swift
@objc func setInAppMessageAsUnseen(_ message: SMInAppMessage)
```

>This method will mark an IAM as unseen and update the object in cache with isViewed property set to  false<br/>

```swift
@objc func setInAppMessageAsDeleted(_ message: SMInAppMessage)
```

>This method will mark an IAM as deleted<br/>

```swift
@objc func executeLinkAction(_ link: SMLink, inAppMessage: SMInAppMessage)
```

>This method must be called whenever a user has clicked on a link where you manage its display<br/>The action behind the link will be triggered, and the corresponding Clicked event will be sent to the backend<br/>

```swift
@objc func inAppMessageWKNavigationDelegate(_ delegate: WKNavigationDelegate)
```

>In  case the sdk displays an In App Message in a WKWebView you will for example be able to process the linked click on the app side by implementing decidePolicyForNavigationAction on the provided class<br/>

```swift
@objc func inAppMessageDelegate(_ delegate: SMManagerInAppMessageDelegate)
```

>Used to let the app display the in-app message linked to a remote notification<br/>

```swift
@objc func removeViewController()
```

>This method must be called whenever a user has clicked on a link that you  manage to display<br/>It will remove the view controller from your App hierarchy