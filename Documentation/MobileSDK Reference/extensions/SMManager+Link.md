# SMManager

## Methods
```swift
@objc func universalLinksDelegate(_ delegate: SMManagerUniversalLinksDelegate)
```

>Used to let the app manage the behavior of `deeplink` button types containing universal links<br/>

```swift
@objc func setLinkAsClicked(_ link: SMLink, from message: SMBaseMessage)
```

>Tells to the SDK that a certain ``SMLink`` object has been clicked.<br/>This is a convinient method when the behavior when receiving a remote-notification is handled at App side and the standard events need to be sent back to the Marigold Engage platform.<br/>

```swift
@objc func executeLinkAction(_ link: SMLink, message: SMBaseMessage)
```

>This method must be called whenever a user has clicked on a link where you manage its display<br/>The action behind the link will be triggered, and the corresponding Clicked event will be sent to the backend<br/>