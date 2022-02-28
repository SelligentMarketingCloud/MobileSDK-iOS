# MobileSDK-iOS

What is the Selligent Marketing Cloud - Mobile SDK for iOS?

The Selligent Marketing Cloud - Mobile SDK is a tool that enables you to use the Selligent Marketing Cloud - Mobile feature in a very easy and straightforward way. 

By incorporating our latest SDK for iOS in your app, we support you in handling Push Notifications, In-App Messages, standard and custom events as well as registrations, unregistrations, logins and logouts in the App.

# MobileSDK-iOS Integration
> **Maximum iOS version supported in the master branch: iOS15**

To integrate the library yourself just download, depending of your needs one of those links: 

​    - <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/Framework">Framework</a>: SDK framework

​    - <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/Framework_Geofencing">Framework_Geofencing</a>: SDK framework with support of geofencing

​    - <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/StaticLib">StaticLib</a>: SDK static library

​    - <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/StaticLib_Geofencing">StaticLib_Geofencing</a>: SDK static library with support of geofencing
​    
​    
- To install the SDK via Swift Package Manager, use the Github repository URL (below) put the dependency rule to target branch `master`, and choose the version with or without Geofencing:

        https://github.com/SelligentMarketingCloud/MobileSDK-iOS
        
    > If you are using the Geofencing version, the PlotProjects framework will also need to be added to your target(s) either [manually](https://files.plotprojects.com/download-page/) or using CocoaPods (pod 'PlotPlugin').

- To install the SDK via CocoaPods, add one of these pod to your target(s) in your Podfile: 

    for the framework:

        pod 'SelligentMobileSDK/Framework'

    for the static library: 

        pod 'SelligentMobileSDK'

    or if you are using geofencing capabilities (it will also install dependency to PlotPlugin):

    for the framework:

        pod 'SelligentMobileSDK/Framework_Geofencing' 

    for the static library: 

        pod 'SelligentMobileSDK/Geofencing'

    then run
        
        pod install

Finally please refer to the <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/Documentation#ios--using-the-sdk">SDK full documentation</a> for a correct implementation of the SDK.

# MobileSDK-iOS Documentation

Please check our <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/Documentation#ios--using-the-sdk">SDK full documentation</a>.

Use our <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/Documentation/MobileSDK%20Reference#mobilesdk-reference">Reference manual</a> to quickly check all our available methods.

Download our <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/Documentation/IOSSDKTemplate.zip">example application</a> to see how our SDK needs to be implemented. Do note though that it is just an example to see where/how the SDK code needs to be integrated but it is not supposed to be used as a base project for your App, or anything similar.
