# SMManager

## Methods
```swift
@objc func enable(inAppMessage: Bool)
```

>Call this API in order to enable / disable the IAM-service according to your application's need<br/>

```swift
@objc func performIAMFetch(completion: @escaping (UIBackgroundFetchResult) -> Void)
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
@objc func inAppMessageDelegate(_ delegate: SMManagerInAppMessageDelegate)
```

>Used to let the app display the in-app message linked to a remote notification<br/>

```swift
@objc func displayNotification(id: String, options: SMInAppMessageStyleOptions? = nil)
```

>Display the content of a given in-app message id.<br/>

```swift
@objc func displayInAppMessage(id: String, options: SMInAppMessageStyleOptions? = nil)
```

>Display the content of a given in-app message id.<br/>

```swift
@objc func areInAppMessagesEnabled() -> SMInAppMessageServiceState
```

>Gets the current state of the in-app message service.<br/>