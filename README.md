# MobileSDK-iOS

What is the Selligent Marketing Cloud - Mobile SDK for iOS?

The Selligent Marketing Cloud - Mobile SDK is a tool that enables you to use the Selligent Marketing Cloud - Mobile feature in a very easy and straightforward way. 

By incorporating our latest SDK for iOS in your app, we support you in handling push messages, in app messages, in app content, standard and custom events as well as logins and logouts in the app.

# MobileSDK-iOS Integration

To integrate the library yourself just download, depending of your needs one of those links: 

​	- <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/iOS%20Framework" target="_blank">iOS Framework</a>  : sdk framework

​	- <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/iOS%20Lib" target="_blank">iOS Library</a>  : sdk static library

​	- <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/tree/master/iOS%20Lib-%20Plot%20geofencing%20support" target="_blank">iOS Lib- Plot geofencing support</a> : sdk static library with support of geofencing

Or you can use CocoaPods by adding one of these pod to your main target, and also to your notification extensions targets in your Podfile: 

for the framework:

    pod 'SelligentMobileSDK/Framework', :git => 'https://github.com/SelligentMarketingCloud/MobileSDK-iOS.git' 

for the static library: 

    pod 'SelligentMobileSDK', :git => 'https://github.com/SelligentMarketingCloud/MobileSDK-iOS.git' 

or if you are using geofencing capabilities (it will also install dependency to PlotPlugin)

    pod 'SelligentMobileSDK/Geofencing', :git => 'https://github.com/SelligentMarketingCloud/MobileSDK-iOS.git' 

then run
    
    pod install

Then please refer to the <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/blob/master/Documentation/Using%20the%20SDK.pdf" target="_blank">SDK full documentation</a> for a correct implementation of the sdk

# MobileSDK-iOS Documentation

Please check our <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/blob/master/Documentation/Using%20the%20SDK.pdf" target="_blank">SDK full documentation</a>

Use our <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/blob/master/Documentation/MobileSDK%20Reference.pdf" target="_blank">Reference manual</a> to quickly check all our available methods

Download our <a href="https://github.com/SelligentMarketingCloud/MobileSDK-iOS/blob/master/Documentation/iOSSDKTemplate.zip" target="_blank">iOS example application</a> to see how our SDK needs to be implemented - The swift target (and the extensions inside the project) embed the sdk framework, and the objective c target use the static library.
