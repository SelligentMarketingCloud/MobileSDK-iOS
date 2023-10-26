# SDK Changelog

- __SDK 3.8.1__
    - Fix bug where events sent from Notification Extensions would not be retried when failing
    - Add `profileId` parameter to `SMEvent` (custom event) constructor
    
- __SDK 3.8.0__
    - Add video and audio handling in Notification Content extensions when subclassing `SMNotificationContentViewController`
    - Add public visibility to `SMNotificationMessage/mediaType` property
    - Add public visibility to `SMNotificationMediaType` enum
    - PushOpened event is no longer sent when expanding a Rich Push (align with Android)
    
- __SDK 3.7.0__
    - Add easier way to implement Notification Content and Notification Service extensions by subclassing `SMNotificationContentViewController` and `SMNotificationService`
    - Add out of the box support for GIF in Rich Push (Image) when subclassing `SMNotificationContentViewController`
    - Add GIF support for in-app messages and in-app contents of type `image`
    
- __SDK 3.6.1__
    - Fix bug where in-app messages could not display, in some occasions, if the app was also running with multiple UIWIndow and/or multiple UIWindowScene
    - Fix bug where SMEventSetInfo and SMEventSetInfoIAM could not be sent, in some occasions, if multiple events were also being sent and the app was in the background
    
- __SDK 3.6.0__
    - Raise minimum supported version to iOS 12
    - Add compatibility with xCode 15 and iOS 17
    - Add Privacy manifest (PrivacyInfo.xcprivacy)
    - Add codesigning to provided .xcframework
    - Add support for MacCatalyst (minimum macCatalyst version: 13 (macOS 10.15))
    
- __SDK 3.5.1__
    - Add missing CFBundleShortVersionString in SelligentMobileExtensionsSDK.xcframework

- __SDK 3.5.0__

    - Add `SMManager/areInAppMessagesEnabled` to get the current status of the in-app message service state
    - `last push message` isViewed flag is now set synchronously
    - Fix bug where only push messages containing in-app messages would be added as the `last push message` when the app was in the background/killed
    - Fix bug where `SMManager/displayLastReceivedNotification` would display the push without the `Rich Content` when using `SMManagerSetting/shouldAddInAppMessageFromPushToInAppMessageList` and having called `SMManager/displayInAppMessage(id:options:)` or `SMManager/displayNotification(id:options:)` previously, for the same `notification Id`
    
- __SDK 3.4.0__

    - Fix bug where isViewed flag wasn't properly stored in the `last push message` object
    - Remove geolocation feature
    
- __SDK 3.3.0__

    - Deprecate `SMManager/displayLastReceivedRemoteNotification(options:)` in favor of `SMManager/displayLastReceivedNotificationContent(options:)`
    - Deprecate `SMManager/displayNotification(id:options:)` in favor of `SMManager/displayInAppMessage(id:options:)`
    - Deprecate `SMManager/retrieveLastRemoteNotification()`
    - Add `SMManager/displayLastReceivedNotification()` to display the last Selligent push notification
    - Add `SMManager/retrieveLastReceivedNotificationContent()` which returns a `SMNotificationMessage` instead of a `Dictionary` with `id` and `title`
    - Deprecate `SMConstants/kSMNotification_Data_RemoteNotification`
    - Add `SMConstants/kSMNotification_Object_RemoteNotification` which returns a `SMNotificationMessage` instead of a `Dictionary` with `id` and `title`
    - Deprecate `SMConstants/kSMNotification_Data_InAppMessage`
    - Add `SMConstants/kSMNotification_Object_InAppMessage` which returns an array of `SMInAppMessage` instead of an array of `Dictionary` with `id` and `title`
    - Deprecate `SMManager/executeLinkAction(_:inAppMessage:)` and `SMManager/executeLinkAction(_:inAppContent:)` in favor of `SMManager/executeLinkAction(_:message:)`
    
- __SDK 3.2.1__

    - Add robustness around `Opened` event sent from Notification Content Extension
    - Fix bug that could send an `Opened` event when dismissing a notification in foreground

- __SDK 3.2.0__

    - Improve `SMInAppMessageStyleOptions/transition/.verticalSlide` dismiss transition smoothness
    - Fix `SMManagerSetting/shouldAddInAppMessageFromPushToInAppMessageList` and `SMManager/displayLastReceivedRemoteNotification` behavior: it will now work properly with notifications that have just been received but not displayed or clickd (Notification Service Extension needs to be integrated for this to correctly work)
    - Fix bug where simple push notifications (without IAM) could get added to the IAM message list when setting `SMManagerSetting/shouldAddInAppMessageFromPushToInAppMessageList` to `true` and using `SMManager/displayLastReceivedRemoteNotification`
    - Changed IAM of type `alert` implementation from using `UIAlertController` to a custom set of views
    - Add `SMInAppMessageStyleOptions/alertBackgroundColor`, `SMInAppMessageStyleOptions/alertCornerRadius`, `SMInAppMessageStyleOptions/alertTitleColor`, `SMInAppMessageStyleOptions/alertTitleFont`, `SMInAppMessageStyleOptions/alertBodyColor`, `SMInAppMessageStyleOptions/alertBodyFont`, `SMInAppMessageStyleOptions/alertLinksColor`, `SMInAppMessageStyleOptions/alertLinksBackgroundColor`, `SMInAppMessageStyleOptions/alertLinksSeparatorColor` and `SMInAppMessageStyleOptions/alertLinksFont` to customize the appearance of IAM of type `alert`
    - Add `SMInAppMessageStyleOptions/transition/.opacity` transition option
    - Add networkManager to IAM of type `image` and `url` so the content is automatically reloaded upon regaining connectivity (if it wasn't successfully loaded before)
    - Fix bug where the notification `SMConstants/kSMNotification_Event_DidReceiveRemoteNotification` was broadcasted shortly after calling `SMManager/didReceive(_:options:)` instead of `SMManager/willPresent(_:options:completionHandler:)`
        
- __SDK 3.1.2__

    - Fix `SMInAppMessageStyleOptions/navigationMenuCloseButtonSwitchPosition` behavior when combined with `SMInAppMessageStyleOptions/imageCanBeTapped` set to `true` and the message contains only one link
    - Fix links menu position when `SMInAppMessageStyleOptions/navigationMenuCloseButtonSwitchPosition` is set to `true` and running on iPad
    
- __SDK 3.1.1__

    - Fix `SMInAppMessageStyleOptions/transition/.verticalSlide` crash when running on iPad
    - Fix IAM of type `url` to not reload the initial page but the current one when cancelling the dismiss gesture

- __SDK 3.1.0__

    - Fix navigation bar custom icon proportions
    - Fix IAM of type `html`, `url`, `image` and `map` view size when multiple ones are presented at the same time and its parent is of type `alert`
    - Fix bug where navigation arrows for IAM of type `url` would not get enabled when multiple IAM are being displayed at the same time
    - Add robustness if some SDK public APIs are wrongly implemented by calling them from a background thread
    - Add robustness if multiple IAM are requested to be displayed and/or removed at the same time
    - Re-add support to change logLevel from App extensions `SMManager/apply(_:)`
    - Add `SMInAppMessageStyleOptions` style options for specific IAM displays (if you want to differ from the global styling provided in `SMManagerSetting/configureInAppMessageService(with:)`) from methods: `SMManager/displayNotification(id:options:)`, `SMManager/displayLastReceivedRemoteNotification(options:)`, `SMManager/didReceive(_:options:)`, and `SMManager/willPresent(_:options:completionHandler:)`
    - Add `SMInAppMessageStyleOptions/navigationMenuCloseButtonSwitchPosition` to switch the position of the `Menu` and `Close` buttons
    - Add `SMInAppMessageStyleOptions/presentWithTransition` and `SMInAppMessageStyleOptions/transitioningDelegate` to define whether the default SDK IAM view controllers will be presented with a transition and the possibility to define a custom transition
    - Add `SMInAppMessageStyleOptions/transition` to use a predefined SDK view transition instead of a custom one
    - Add `SMInAppMessageStyleOptions/navigationMenuButtonAlternateAssetName`, `SMInAppMessageStyleOptions/navigationCloseButtonAlternateAssetName`, `SMInAppMessageStyleOptions/navigationArrowBackButtonAlternateAssetName`, `SMInAppMessageStyleOptions/navigationArrowForwardButtonAlternateAssetName` and `SMInAppMessageStyleOptions/reloadButtonAlternateAssetName` to use different images depending on the IAM (or from where is it being displayed)
    - Add `SMInAppMessageStyleOptions/imageCanBeTapped` to define whether IAM of type `image` can execute the (first) link action when clicking on the image directly
    - Add support for `Rate app` and `Open a method in your app` links, when included as Push Notification buttons and implementing the `UNNotificationContentExtension/didReceive(_:completionHandler:)` delegate method
    - Add `UIActivityIndicatorView` to IAM of type `image` and `url` before the content is fully loaded
    - Add reload button (`SM.Relaod`) to IAM of type `image` and `url` if the content could not be loaded (i.e no connectivity) and `SMInAppMessageStyleOptions/reloadButtonColor` property to define its color
    - Add `SMManager/webView(_:didFailProvisionalNavigation:withError:)` to properly have IAM of type `url` working (reload/navigation buttons) when using `SMManager/inAppMessageWKNavigationDelegate(_:)`
    - Add `UIPanGestureRecognizer` to IAM of type `html`, `url`, `image` and `map` so they can be dismissed by swiping from the left/top, if `SMInAppMessageStyleOptions/presentWithTransition` is set to `true` and depending on the `SMInAppMessageStyleOptions/transition` option
        
- __SDK 3.0.1__

    - Fix bug where the deeplink as a main action of a push message would not execute when having both `SelligentMobileSDK` and `SelligentMobileExtensionsSDK` included in the same target (i.e Cocoapods)
    
- __SDK 3.0.0__

    - Migrate SDK to Swift: introduce breaking changes, mostly signature changes: <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/Documentation/Migration_v3.0.0.md">migration document</a>
    - Remove `armv7`, `armv7s`, and `i386` support: Xcode 14 built
    - Raise minimum supported version to iOS 11
    - Create new SDK `FrameworkExtension/SelligentMobileExtensionsSDK.xcframework` to use (only) in App extension targets (i.e notification extensions). Main SDK is to (only) be used in the main App target
    - Remove all deprecated APIs and properties
    - Remove universal library support
    - Correct bug where actionsheets from IAM where showing title and body instead of only menu buttons
    - Add new method to initialize custom events by providing a name
    - Change InApp message of type `image` handling: it doesn't use WebView anymore but UIImageView and caching. Increase performance. Align with Android, there is no scrolling anymore, image fits the size of the screen while maintaining the aspect ratio
    - NotificationCenter messages aren't necessarily posted on the main thread anymore
    - Add close links menu feature when tapping outside the links actionsheet for IAM of type image, html, map and url 
    - Add IAM styling options via `SMInAppMessageStyleOptions`(<a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/Documentation#styling_iam">learn more</a>)
    - Fix bug where the links menu (actionsheet) in IAM would not display for iPad
    - Fix bug where the type of IAM (iamType) would not be stored properly (new property to be used `type`)
    
- __SDK 2.7.7__

    - Fix bug where the SDK was incorrectly flagged as not-safe to use in Application Extensions
    
- __SDK 2.7.6__

    - Fix bug where InAppMessage isViewed flag wasn't correctly updated in cache
    - Fix bug introduced in 2.7.4 where sometimes, after uninstalling the app, the device Id was not properly loaded from keyChain
    
- __SDK 2.7.5__

    - Update PlotProjects integration to support arm64 for simulator, from now on, minimum PlotProjects version supported is 3.5.0
    - Fix bug where clicked events could be sent more than once under certain circumstances
    - Fix bug where some url requests could get cancelled when moving to the background

- __SDK 2.7.4__

    - Correct bug where `Rate app` links (when included as Push Notification buttons) were not being shown
    - Add support for `Close button` links
    
- __SDK 2.7.3__

    - Correct bug where action buttons were not refreshing properly for iOS +12
    - Correct bug where instantiating events before starting SDK produced deviceId to not be loaded
    
- __SDK 2.7.2__

    - Fix some arm64 + simulator compatibility issues for StaticLibrary + podspec and for geolocation version of the SDK
    - Fix PushOpened sent twice if same notification ID is clicked more than once from notification center
    
- __SDK 2.7.1__

    - Add framework version with geolocation
    - Add push provider name in the communication with the platform
    - Add Swift package support
    
- __SDK 2.7.0__

    - Add extra SDK headers in the communications with the platform
    - Add possibility to handle universal link from push/inapp (from Selligent Marketing Cloud, `deeplink` button type only)
    - Fix access level of SMBaseMessage, SMInAppContentMessage, SMInAppMessage, SMLink, SMManager, SMMessage and SMNotificationAnnotationData
    - Correct bug 143908 PushOpened is sent twice sometimes and not removed correctly from resend cache mechanism
    - Add SMRemoteMessageDisplayType to control the SDK behavior when receiving push in foreground
    - Add helper methods to get the SMNotificationMessage from the userInfo and to send Clicked and Opened events
    - Add helper method to get the Provisional push authorization (registerForProvisionalRemoteNotification)
    - Correct bug where for some devices the data was not properly stored for the AppGroup causing the extensions to not work properly (i.e Rich Push)

- __SDK 2.6.2__
    
    - Correct bug 121236 inapp/mainaction from push not called without connectivity
    - Correct bug 143115 in-app message webview navigation arrows disabled
    - Removed processing of optiex url from inside SDK
    
- __SDK 2.6.1__
    
    - Provide device id to main app
    - Provide delegate to allow app to process links contained in an in-app message of type url
    - Add Push in-app message payload to in-app message cache
    - Provide a delegate to allow app to manage display on app side of in-app message linked to a remote notification

- __SDK 2.6__

    - Provide the SDK as a .xcframework
    - Remove geolocalisation api references from core SDK
    
- __SDK 2.5.2__

    - Correct bug 136398 conflict with `SDWebImagePDFCoder` that avoid displays of images
    
- __SDK 2.5.1__

    - Provide helper method to set in app message as deleted
    - Provide helper method to set in app message as unseen
    - Correct bug 124219 send pushopened event when push is viewed only with notification content extension
    - Correct bug 128940 getinappmessage not providing inapp even if they are already broadcasted
    - Correct bug 128941 nil in body property when json in content of inappmessage
    - Correct bug 124144 warning `nil host used in call to ..` is displayed when generating inapp icon buttons
    
- __SDK 2.5__

    - Provide flexibility to In App Message by giving access to public methods and properties that will enable developer to process content

- __SDK 2.4.1__

    - Support of iOS14
    - Correct bug 109032  property contentCreation (creation date) of In AppContent public
    - documentation update to avoid  call to serviceExtensionTimeWillExpire resulting in (Encrypted) displayed even when encryption not applied
    - Correct bug 113738  Events are sent twice
    
- __SDK 2.4__

    - Support of rich push of type image
    - Correct bug 104272 provide an override method to send `SMEventUserLogin` and avoiding login with providing empty mail
    - Remove code that forces having to ask for camera permissions in plist file

- __SDK 2.3.1__

    - Correct bug 102254 set way to provide App Group Id to the SDK

- __SDK 2.3__
    
    - Support call to `didReceiveNotification Response:` to allow trigger action of notification content extension without opening app
    - Correct bug 102401 inappmessage flag was not set correctly

- __SDK 2.2.1__

    - Correct bug 100688 manage useragent without usage of `WKWebView`

- __SDK 2.2__

    - Correct bug 96667 `UIWebView` deprecation - use `WKWebView` instead
    - Correct bug 96827 Buttons inside in-app messages (url/html/image) don't work in SwiftUI
    - Correct bug 90501 add robustness to check if device was already registered 
    - Add robustness when parsing plotID

- __SDK 2.1__
    
    - support of plot projects SDK v3.2.0

- __SDK 2.0.3__

    - format devicetoken without using of `NSData` description property for better support of Xcode 11 and iOS 13

- __SDK 2.0.2.1__

    - Correct bug  86049 User are optouted when App is reinstalled with v2.0.2

- __SDK 2.0.2__

    - Correct bug  77531 device id is nil when performing background fetch and app is killed
    - Correct bug  74907 IAC Url type stuck forever with incorrect URL
    - Correct fetch in app with correct last date fetch when app was killed
    - Correct bug  75572 decryption issues in a swift project
    - Correct all swift warnings
    - Correct mainaction value of open browser type is not decrypted in a simple push
    - Correct bug  73088 in-app message controller not dismissed when clicking on deeplink button
    - Correct bug  77309 conflict with anvato SDK due to common crypto library
    - Correct bug  74898 in-app message of type map is not displayed
    - Correct bug  70428 shouldDisplayRemoteNotification impeach send pushopened event
    - Correct bug  69351 unregister notification functionality in not working correctly

- __SDK 2.0.1__

    - Correct bug  64260 fetching in app message with date - url is not valid and header validation is not successful
    - Correct bug  64246 encoding of url is causing issue when there is a #
    - Improve way optout is retrieved from iOS

- __SDK 2.0__

    - Support decryption of remote notification
    - Changed the way the SDK is initialized from inside a notification extension

- __SDK 1.9__

    - Support action button in push notification center

- __SDK 1.8__

    - Support push only without in-app message
    - Support deeplinking and main action when user click on push notification

- __SDK 1.7.4__

    - Improve how in-app content are managed in cache
    - Correction on dismiss of in-app content viewcontroller when it is not wrapped inside other controller and when a link is present

- __SDK 1.7.3__

    - Improve behavior and robustness of the way in-app messages are fetched
    - Add a type for InApp refresh only for dev use: `.Minutely`

- __SDK 1.7.2__

    - Correction on IAC cache issue when app was killed (file was not updated)

- __SDK 1.7.1__

    - Correction on duplicate symbol due to integrate library

- __SDK 1.7__

    - Added geolocation functionality
    - Misc Bugs correction
    - Add http header to inform which version of the platform is supported
    - Support of bitcode

- __SDK 1.6__

    - iOS 11 support
    - misc bug corrections
    - consolidate received event
    - adapt user-agent of request

- __SDK 1.5.2__

    - correct bug for in-app content that must be displayed only once

- __SDK 1.5.1__

    - correct crash bug that happens when expiration or creation date for in app content is null

- __SDK 1.5__

    - `sendDeviceInfo` deprecated method replaced with `sendDeviceInfo:(SMDeviceInfos*)deviceInfos` method
    - New `SMManager` category for `DataTransaction` with back-end
    - public `SMDeviceInfos` object
    - iOS 10 support of `UserNotifications` framework
    - stop supporting of iOS 7
    - cache on last sent `UserCustomEvent`
    - Update deviceID with the one received from platform

- __SDK 1.4.5__

    - Store last sent user custom event and check if a modification has been done before sending next one

- __SDK 1.4.4__

    -  compare device token based on string instead of `NSData` (bug swift 3 and Data class)

- __SDK 1.4.3__

    - correction for max number of in-app content crash when max > number of messages received
    - creation date of in-app content
    - dismiss when no button in notification payload

- __SDK 1.4.2__

    - correction on `unregisterForRemoteNotification` method
    - issue with the notification when the App was killed

- __SDK 1.4.1__

    - bug corrections

- __SDK 1.4__

    - enum `SMInAppMessageRefreshType` has been renamed to `SMInAppRefreshType` (this enum is used both for in-app message and for in-app content) possible values are :

        - `kSMIA_RefreshType_None`
        - `kSMIA_RefreshType_Hourly`
        - `kSMIA_RefreshType_Daily`

- __SDK 1.3__

    - To access easily all API methods you will need to replace `#import SMManager.h` by `#import SMHelper.h`

- __SDK 1.2__

    - The API `sendEvent:` has been renamed to `send:` (this call will prevent compilation)
    - The API `registerForRemoteNotification` has been added. It allows applications to register remote-notification when they really need it. This, then, becomes a mandatory call for receiving pushes (after starting the library).
