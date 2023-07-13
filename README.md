# MobileSDK-iOS

What is the Selligent Marketing Cloud - Mobile SDK for iOS?

The Selligent Marketing Cloud - Mobile SDK is a tool that enables you to use the Selligent Marketing Cloud - Mobile feature in a very easy and straightforward way. 

By incorporating our latest SDK for iOS in your app, we support you in handling Push Notifications, In-App Messages, standard and custom events as well as registrations, unregistrations, logins and logouts in the App.

# MobileSDK-iOS Integration
> **Minimum supported iOS version: 12**
> **Minimum supported macCatalyst version: 13 (macOS 10.15)**

- To integrate the library yourself just download, depending of your needs one of those links: 
    - <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/Framework">Framework</a>: The main SDK to include in your App target
    - <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/FrameworkExtension">FrameworkExtension</a>: The SDK to include in your App target and to be used in your extension target(s)
    
- To install the SDK via Swift Package Manager, use the Github repository URL (below) and put the dependency rule to target branch `master` (plus the extensions SDK if you have any notification extension target). Add both to the main App target.

        https://github.com/SelligentMarketingCloud/MobileSDK-iOS

- To install the SDK via CocoaPods, add one of these pod to your target(s) in your Podfile: 

    for the framework: ``pod 'SelligentMobileSDK/Framework'``
        
    if you have app extensions (to be included in the extension targets): ``pod 'SelligentMobileSDK/FrameworkExtension'``

    and then run ``pod install`` or ``pod update``

Finally please refer to the <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/Documentation#ios--using-the-sdk">SDK full documentation</a> for a correct implementation of the SDK.

# MobileSDK-iOS Documentation

Please check our <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/Documentation#ios--using-the-sdk">SDK full documentation</a>.

Use our <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/Documentation/MobileSDK%20Reference#mobilesdk-reference">Reference manual</a> to quickly check all our available methods.

Download our <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/Documentation/iOSSDKTemplate.zip">example application</a> to see how our SDK needs to be implemented. Do note though that it is just an example to see where/how the SDK code needs to be integrated but it is not supposed to be used as a base project for your App, or anything similar.
