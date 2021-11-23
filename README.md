# MobileSDK-iOS

What is the Selligent Marketing Cloud - Mobile SDK for iOS?

The Selligent Marketing Cloud - Mobile SDK is a tool that enables you to use the Selligent Marketing Cloud - Mobile feature in a very easy and straightforward way. 

By incorporating our latest SDK for iOS in your app, we support you in handling Push Notifications, InApp Messages, standard and custom events as well as registrations, unregistrations, logins and logouts in the App.

# MobileSDK-iOS Integration
> **Maximum iOS version supported in the master branch: iOS15**

To integrate the library yourself just download, depending of your needs one of those links: 

​    - <a href="Framework">Framework</a>: SDK framework

​    - <a href="Framework_Geofencing">Framework_Geofencing</a>: SDK framework with support of geofencing

​    - <a href="StaticLib">StaticLib</a>: SDK static library

​    - <a href="StaticLib_Geofencing">StaticLib_Geofencing</a>: SDK static library with support of geofencing
​    
​    
- To install the SDK via Swift Package Manager, use the Github repository URL (below) put the dependency rule to target branch `master`, and choose the version with or without Geofencing:

        https://github.com/SelligentMarketingCloud/MobileSDK-iOS
        
    > If you are using the Geofencing version, the PlotProjects framework will also need to be added to your target(s) either [manually](https://files.plotprojects.com/download-page/) or using CocoaPods (pod 'PlotPlugin').

- To install the SDK via CocoaPods, add one of these pod to your target(s) in your Podfile: 

    for the framework:

        pod 'SelligentMobileSDK/Framework', :git => 'https://github.com/SelligentMarketingCloud/MobileSDK-iOS.git' 

    for the static library: 

        pod 'SelligentMobileSDK', :git => 'https://github.com/SelligentMarketingCloud/MobileSDK-iOS.git' 

    or if you are using geofencing capabilities (it will also install dependency to PlotPlugin):

    for the framework:

        pod 'SelligentMobileSDK/Framework_Geofencing', :git => 'https://github.com/SelligentMarketingCloud/MobileSDK-iOS.git' 

    for the static library: 

        pod 'SelligentMobileSDK/Geofencing', :git => 'https://github.com/SelligentMarketingCloud/MobileSDK-iOS.git' 

    then run
        
        pod install

Finally please refer to the <a href="Documentation#ios--using-the-sdk">SDK full documentation</a> for a correct implementation of the SDK.

# MobileSDK-iOS Documentation

Please check our <a href="Documentation#ios--using-the-sdk">SDK full documentation</a>.

Use our <a href="Documentation/MobileSDK%20Reference#mobilesdk-reference">Reference manual</a> to quickly check all our available methods.

Download our <a href="Documentation/IOSSDKTemplate.zip">example application</a> to see how our SDK needs to be implemented - The swift target (and the extensions inside the project) embed the sdk framework, and the objective c target use the static library.
