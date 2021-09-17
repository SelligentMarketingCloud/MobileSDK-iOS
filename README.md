# MobileSDK-iOS

What is the Selligent Marketing Cloud - Mobile SDK for iOS?

The Selligent Marketing Cloud - Mobile SDK is a tool that enables you to use the Selligent Marketing Cloud - Mobile feature in a very easy and straightforward way. 

By incorporating our latest SDK for iOS in your app, we support you in handling Push Notifications, InApp Messages, standard and custom events as well as registrations, unregistrations, logins and logouts in the App.

# MobileSDK-iOS Integration
> **Maximum iOS version supported in the master branch: iOS15**<br/>**Minimum iOS version supported in the master branch: iOS10**

To integrate the library yourself just download, depending of your needs one of those links: 

​    - <a href="iOS%20Framework">iOS Framework</a>: SDK framework

​    - <a href="iOS%20Lib">iOS Library</a>: SDK static library

​    - <a href="iOS%20Lib-%20Plot%20geofencing%20support">iOS Lib- Plot geofencing support</a>: SDK static library with support of geofencing

Or you can use CocoaPods by adding one of these pod to your main target, and also to your notification extensions targets in your Podfile: 

for the framework:

    pod 'SelligentMobileSDK/Framework', :git => 'https://github.com/SelligentMarketingCloud/MobileSDK-iOS.git' 

for the static library: 

    pod 'SelligentMobileSDK', :git => 'https://github.com/SelligentMarketingCloud/MobileSDK-iOS.git' 

or if you are using geofencing capabilities (it will also install dependency to PlotPlugin)

    pod 'SelligentMobileSDK/Geofencing', :git => 'https://github.com/SelligentMarketingCloud/MobileSDK-iOS.git' 

then run
    
    pod install

Then please refer to the <a href="Documentation#ios--using-the-sdk">SDK full documentation</a> for a correct implementation of the SDK

# MobileSDK-iOS Documentation

Please check our <a href="Documentation#ios--using-the-sdk">SDK full documentation</a>

Use our <a href="Documentation/MobileSDK%20Reference#mobilesdk-reference">Reference manual</a> to quickly check all our available methods

Download our <a href="Documentation/iOSSDKTemplate.zip">iOS example application</a> to see how our SDK needs to be implemented - The swift target (and the extensions inside the project) embed the sdk framework, and the objective c target use the static library.
