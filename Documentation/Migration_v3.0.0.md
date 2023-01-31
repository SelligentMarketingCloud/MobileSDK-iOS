# Migrating to v3.0.0
Many method signatures have changed at the same time that the SDK has been completely migrated to Swift.

```swift
// Old
SMManager.sharedInstance()
// New
SMManager.shared

// Old
SMManager.sharedInstance().start(launchOptions: [AnyHashable : Any]?, setting: SMManagerSetting)
// New
SMManager.shared.start(with: SMManagerSetting)

// Old
SMManager.sharedInstance().deviceID()
// New
SMManager.shared.deviceId

// Old
SMManager.sharedInstance().didFailToRegisterForRemoteNotificationsWithError(Error)
// New
SMManager.shared.didFailToRegisterForRemoteNotifications(with: Error)

// Old
SMManager.sharedInstance().didRegisterForRemoteNotifications(withDeviceToken: Data)
// New
SMManager.shared.didRegisterForRemoteNotifications(deviceToken: Data)

// Old
SMManager.sharedInstance().displayLastReceivedRemotePushNotification()
// New
SMManager.shared.displayLastReceivedRemoteNotification()

// Old
SMManager.sharedInstance().displayNotificationID(String?)
// New
SMManager.shared.displayNotification(id: String)

// Old
SMManager.sharedInstance().getInAppContents(forCategory: String?, type: SMInAppContentType, max: Int32)
// New
SMManager.shared.getInAppContents(for: String, type: SMInAppContentType)

// Old
SMManager.sharedInstance().performIACFetch(completionHandler: ((UIBackgroundFetchResult) -> Void)?)
// New
SMManager.shared.performIACFetch(completion: (UIBackgroundFetchResult) -> ())

// Old
SMManager.sharedInstance().didReceiveRemoteNotification([AnyHashable : Any]?, fetchCompletionHandler: ((UIBackgroundFetchResult) -> Void)?)
// New
SMManager.shared.didReceiveRemoteNotification([AnyHashable : Any], completionHandler: ((UIBackgroundFetchResult) -> ())) -> ())

// Old
SMManager.sharedInstance().performIAMFetch(completionHandler: ((UIBackgroundFetchResult) -> Void)?)
// New
SMManager.shared.performIAMFetch(completion: (UIBackgroundFetchResult) -> ())

// Old
SMManager.sharedInstance().reload(SMManagerSetting)
// New
SMManager.shared.reload(settings: SMManagerSetting)

// Old
SMManager.sharedInstance().retrieveLastRemotePushNotification()
// New
SMManager.shared.retrieveLastRemoteNotification()

// Old
SMManager.sharedInstance().didReceive(UNNotification, with: NSExtensionContext?)
// New
SMManager.shared.didReceive(UNNotification, context: NSExtensionContext?)

// Old
SMManager.sharedInstance().didReceive(UNNotificationResponse, withCompletionHandler: ((UNNotificationContentExtensionResponseOption) -> Void)?)
// New
SMManager.shared.didReceive(UNNotificationResponse, completionHandler: (UNNotificationContentExtensionResponseOption) -> Void)

// Old
SMManager.sharedInstance().didReceive(UNNotificationRequest)
// New
SMManager.shared.didReceive(request: UNNotificationRequest)

// Old
SMManager.sharedInstance().didReceive(UNNotificationRequest, withContentHandler: ((UNNotificationContent) -> Void)?)
// New
SMManager.shared.didReceive(UNNotificationRequest, contentHandler: (UNNotificationContent) -> Void)

// Old
SMManager.sharedInstance().willPresent(UNNotification, withCompletionHandler: ((UNNotificationPresentationOptions) -> Void)?)
// New
SMManager.shared.willPresent(UNNotification, completionHandler: ((UNNotificationPresentationOptions) -> Void)?)

// Old
SMManagerSetting(url: String?, clientID: String?, privateKey: String?)
// New
try! SMManagerSetting(url: String, clientId: String, privateKey: String)
      
// Old
SMManagerSettingIAC.setting(with: SMInAppRefreshType)
// New
SMManagerSettingIAC(refreshType: SMInAppRefreshType)

// Old
SMManagerSettingIAC.setting(with: SMInAppRefreshType, shouldPerformBackgroundFetch: Bool)
// New
try! SMManagerSettingIAC(refreshType: SMInAppRefreshType, backgroundFetch: Bool)

// Old
SMManagerSettingIAM.setting(with: SMInAppRefreshType)
// New
SMManagerSettingIAM(refreshType: SMInAppRefreshType)

// Old
SMManagerSettingIAM.setting(with: SMInAppRefreshType, shouldPerformBackgroundFetch: Bool)
// New
try! SMManagerSettingIAM(refreshType: SMInAppRefreshType, backgroundFetch: Bool)
        
// Old
SMEvent(dictionary: [AnyHashable : Any]?)
// New
SMEvent(name: String, properties: [AnyHashable : Any]?)  

// Old
SMEventUserLogin(dictionary: [AnyHashable : Any]?)
// New
SMEventUserLogin(profileId: String, properties: [AnyHashable : Any]?)

// Old
SMEventUserLogout(dictionary: [AnyHashable : Any]?)
// New
SMEventUserLogout(profileId: String, properties: [AnyHashable : Any]?)

// Old
SMEventUserRegistration(dictionary: [AnyHashable : Any]?)
// New
SMEventUserRegistration(profileId: String, properties: [AnyHashable : Any]?)

// Old
SMEventUserUnregistration(dictionary: [AnyHashable : Any]?)
// New
SMEventUserUnregistration(profileId: String, properties: [AnyHashable : Any]?)

// Old
SMManager.sharedInstance().load(SMInAppContentStyleOptions?)
// New
SMManagerSettingIAC.styleOptions

// Old
SMInAppMessage.iamType
// New
SMInAppMessage.type (from SMBaseMessage)
```

Direct IAM personalization options have been added.

```swift
// Additionally, you can replace the default SDK images used in the navigation bar by having any of the following `image assets` in your main app's bundle: `SM.Close`, `SM.Menu`, `SM.Back`, `SM.Forward`. Make sure the width and height of these assets are equal and that they are transparent PNG/vector image.
// Switch to .hourly or .daily if you want to treat standalone inapp messages too
let iamSetting = SMManagerSettingIAM(refreshType: .hourly)

// Applies to inapp messages of type image, html, map or url
iamSetting.styleOptions.navigationTitleColor = .black
iamSetting.styleOptions.navigationTitleFont = .systemFont(ofSize: 20, weight: .bold)
iamSetting.styleOptions.navigationBackgroundColor = .cyan
iamSetting.styleOptions.navigationMenuButtonColor = .blue
iamSetting.styleOptions.navigationCloseButtonColor = .red
iamSetting.styleOptions.navigationArrowButtonsColor = .black
iamSetting.styleOptions.viewBackgroundColor = .cyan

// Applies to any type of inapp message
iamSetting.styleOptions.linksColor = .blue

settings.configureInAppMessageService(with: iamSetting)
```
    
Some others have been removed.

```swift
SMManager.sharedInstance().didReceiveRemoteNotification([AnyHashable : Any])
SMManager.sharedInstance().didRegisterUserNotificationSettings()
SMManager.sharedInstance().willPresent(UNNotification)
SMManager.sharedInstance().resetStyleOptions()
SMInAppContentStyleOptions.defaultStyling
SMManagerSettingIAC.settingWithBackgroundFetchOnly()
SMManagerSettingIAM.settingWithBackgroundFetchOnly()
SMDeviceInfos.default()
```
