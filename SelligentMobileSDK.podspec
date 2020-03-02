Pod::Spec.new do |s|
  s.name         = "SelligentMobileSDK"
  s.version      = "2.2"
  s.summary      = "Selligent Marketing Cloud - Mobile SDK for iOS"
  s.description  = <<-DESC
    The Selligent Marketing Cloud - Mobile SDK is a tool that enables you to use the Selligent Marketing Cloud - Mobile feature in a very easy and straightforward way.
    By incorporating our latest SDK for iOS in your app, we support you in handling push messages, in app messages, in app content, standard and custom events as well as logins and logouts in the app.
                   DESC
  s.homepage     = "https://github.com/SelligentMarketingCloud/MobileSDK-iOS"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = "SelligentMarketingCloud"
  s.platform     = :ios
  s.source       = { :git => "https://github.com/SelligentMarketingCloud/MobileSDK-iOS.git", :tag => "#{s.version}" }
  
  s.source_files  = "iOS Lib/include"
  s.vendored_libraries = "iOS Lib/libSelligentMobile.a"
end
