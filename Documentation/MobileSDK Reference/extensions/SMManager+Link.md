# SMManager

## Methods
```swift
@objc func universalLinksDelegate(_ delegate: SMManagerUniversalLinksDelegate)
```

>Used to let the app manage the behaviour of `deeplink` button types containing universal links<br/>

```swift
@objc func setLinkAsClicked(_ link: SMLink, from notificationMessage: SMNotificationMessage)
```

>Tells to the SDK that a certain ``SMLink`` object has been clicked.<br/>This is a convinient method when the behaviour when receiving a remote-notification is handled at App side and the standard events need to be sent back to the Selligent platform.<br/>