# SMNotificationButtonType

>

## Cases
```swift
case unknown = -1
```

>Any received button-type not in this enumeration type will be considered as unknown

```swift
case simple = 0
```

>A button-type that will have no action but when clicked will send back button value to the platform

```swift
case openPhoneCall = 1
```

>A button-type that will open the Phone application with a ready to use number to dial

```swift
case openSms = 2
```

>A button-type that will open the sms application with a ready to dial sms

```swift
case openMail = 3
```

>A button-type that will open the mail application

```swift
case openBrowser = 4
```

>Button that will open a ready to use safari-browser

```swift
case openApplication = 5
```

>Button that will open a third party application

```swift
case rateApplication = 6
```

>Button-type which will allow application rating.

```swift
case customActionBroadcastEvent = 7
```

>Button that will trigger a notification inside the application for any interested listener.<br/>You may register in your application to a specific event from NSNotificationCenter. The notification is broadcasted as soon as the push is received.<br/>Your back-end team should inform you about the notification-name.

```swift
case passbook = 11
```

>Button-type which will allow user to add pkpass file inside wallet app

```swift
case deepLink = 13
```

>Button-type which will allow user depplink inside specific page in the app
