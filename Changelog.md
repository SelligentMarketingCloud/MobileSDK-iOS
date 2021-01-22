- __SDK 2.5.1__

    - Provide helper method to set in app message as deleted
    - Provide helper method to set in app message as unseen
    - Correct bug 124219 send pushopened event when push is viewed only with notification content extension
    - Correct bug 128940 getinappmessage not providing inapp even if they are already broadcasted
    - Correct bug 128941 nil in body property when json in content of inappmessage
    - Correct bug 124144 warning "nil host used in call to .." is displayed when generating inapp icon buttons
    
- __SDK 2.5__

    - provide flexibility to In App Message by giving access to public methods and properties that will enable developer to process content
    
- __SDK 2.4.1__

    - Support of iOS 14
    - Correct bug 109032  property contentCreation (creation date) of In AppContent public
    - documentation update to avoid  call to serviceExtensionTimeWillExpire resulting in (Encrypted) displayed even when encryption not applied
    - Correct bug 113738  Events are sent twice
    
- __SDK 2.4__

    - Support of rich push of type image
    - Correct bug 104272 provide an override method to send SMEventUserLogin and avoiding login with providing empty mail
    - Remove code that forces having to ask for camera permissions in plist file

- __SDK 2.3.1__

    - Correct bug 102254 set way to provide app group id to the sdk

- __SDK 2.3__

    - Support call to didReceiveNotification Response: to allow trigger action of notification content extension without opening app
    - Correct bug 102401 inappmessage flag was not set correctly

- __SDK 2.2.1__

    - Correct bug 100688 manage useragent without usage of WKWebView

- __SDK 2.2__

    - Correct bug 96667 UIWebView deprecation - use WKWebView instead
    - Correct bug 96827 Buttons inside inapp messages (url/html/image) don't work in SwiftUI
    - Correct bug 90501 add robustness to check if device was already registered 
    - Add robustness when parsing plotID

- __SDK 2.1__
    
    - support of plot projects sdk v3.2.0

- __SDK 2.0.3__

    - format devicetoken without using of NSData description property for better support of Xcode11 and iOS 13

- __SDK 2.0.2.1__

    - Correct bug  86049 User are optouted when app is reinstalled with v2.0.2

- __SDK 2.0.2__

    - Correct bug  77531 device id is nil when performing background fetch and app is killed
    - Correct bug  74907 IAC Url type stuck forever with incorrect URL
    - Correct fetch in app with correct last date fetch when app was killed
    - Correct bug  75572 decryption issues in a swift project
    - Correct all swift warnings
    - Correct mainaction value of open browser type is not decrypted in a simple push
    - Correct bug  73088 inapp message controller not dismissed when clicking on deeplink button
    - Correct bug  77309 conflict with anvato sdk due to  common crypto library
    - Correct bug  74898 inapp message of type map is not displayed
    - Correct bug  70428 shouldDisplayRemoteNotification impeach send pushopened event
    - Correct bug  69351 unregister notification functionality in not working correctly

- __SDK 2.0.1__

    - Correct bug  64260 fetching in app message with date - url is not valid and header validation is not successful
    - Correct bug  64246 encoding of url is causing issue when there is a #
    - Improve way optout is retrieved from iOS

- __SDK 2.0__

    - Support decryption of remote notification
    - Changed the way the sdk is initialized from inside a notification extension

- __SDK 1.9__

    - Support action button in push notification center

- __SDK 1.8__

    - Support push only without in app message
    - Support deeplinking and main action when user click on push notification

- __SDK 1.7.4__

    - Improve how In App Content are managed in cache
    - Correction on dismiss of inapp content viewcontroller when it is not wrapped inside other controller and when a link is present

- __SDK 1.7.3__

    - Improve behavior and robustness of the way In App messages are fetch
    - Add a type for In App refresh only for dev use: .Minutely

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

    - correct bug for in app content that must be displayed only once

- __SDK 1.5.1__

    - correct crash bug that happens when expiration or creation date for in app content is null

- __SDK 1.5__

    - sendDeviceInfo deprecated method replaced with sendDeviceInfo:(SMDeviceInfos*)deviceInfos method
    - New SMManager category for DataTransaction with back-end
    - public SMDeviceInfos object
    - iOS 10 support of UserNotifications framework
    - stop supporting of iOS 7
    - cache on last sent UserCustomEvent
    - Update deviceID with the one received from platform

- __SDK 1.4.5__

    - Store last sent user custom event and check if a modification has been done before sending next one

- __SDK 1.4.4__

    -  compare device token based on string instead of NSData (bug swift 3 and Data class)

- __SDK 1.4.3__

    - correction for max number of InApp Content crash when max > number of messages received
    - creation date of in app content
    - dismiss when no button in notification payload

- __SDK 1.4.2__

    - correction on unregisterForRemoteNotification method
    - issue with the notification when the application was killed

- __SDK 1.4.1__

    - bug corrections

- __SDK 1.4__

    - enum SMInAppMessageRefreshType has been renamed in SMInAppRefreshType (this enum is used both for InApp Message and for InApp Content) possible values are :

        - kSMIA_RefreshType_None
        - kSMIA_RefreshType_Hourly
        - kSMIA_RefreshType_Daily

- __SDK 1.3__

    - To access easily all API methods you will need to replace #import SMManager.h by #import SMHelper.h

- __SDK 1.2__

    - The API sendEvent: has been renamed to sendSMEvent: (This call will prevent compilation)
    - The API registerForRemoteNotification has been added. It allows applications to register remote-notification when they really need it. This, then, becomes a mandatory call for receiving pushes (after starting the library).
