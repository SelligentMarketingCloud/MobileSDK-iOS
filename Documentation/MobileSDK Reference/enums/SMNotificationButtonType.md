# SMNotificationButtonType

>

## Cases
```swift
case unknown = -1
```

>Any received button-type not in this enumeration will be considered as unknown

```swift
case simple = 0
```

>A button-type that will have no action but when will send back a Clicked event to the platform

```swift
case openPhoneCall = 1
```

>A button-type that will open the phone application with a ready to use number to dial

```swift
case openSms = 2
```

>A button-type that will open the sms application with a ready to dial sms

```swift
case openMail = 3
```

>A button-type that will open the mail application with a ready to send email address

```swift
case openBrowser = 4
```

>A button-type that will open safari with a specific URL

```swift
case openApplication = 5
```

>A button-type that will open a third party application

```swift
case rateApplication = 6
```

>A button-type which will allow application rating.

```swift
case customActionBroadcastEvent = 7
```

>A button-type that will trigger a notification inside the application for any interested listener.<br/>You may register in your application to a specific event from NSNotificationCenter. The notification is broadcasted as soon as button is clicked.<br/>Your back-end team should inform you about the notification-name.

```swift
case passbook = 11
```

>A button-type which will allow to open a pkpass file

```swift
case deepLink = 13
```

>A button-type which will allow user to execute a depplink
