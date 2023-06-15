Pod::Spec.new do |s|
  s.platform                    = :ios, "11.0"
  s.name                        = "SelligentMobileSDK"
  s.version                     = "3.4.0"
  s.summary                     = "Selligent Marketing Cloud - Mobile SDK for iOS"
  s.description                 = <<-DESC
    The Selligent Marketing Cloud - Mobile SDK is a tool that enables you to use the Selligent Marketing Cloud - Mobile feature in a very easy and straightforward way.
    By incorporating our latest SDK for iOS in your app, we support you in handling push messages, in app messages, in app content, standard and custom events as well as logins and logouts in the app.
                   DESC
  s.homepage                    = "https://www.selligent.com"
  s.license                     = { :type => "MIT", :file => "LICENSE" }
  s.author                      = { "SelligentMarketingCloud" => "mobile@selligent.com" }
  s.source                      = { :git => "https://github.com/SelligentMarketingCloud/MobileSDK-iOS.git", :tag => "v" + s.version.to_s }
  s.social_media_url            = "https://twitter.com/Selligent"
  s.default_subspec             = "Framework"
  s.swift_version               = "5.0"

  s.subspec "Framework" do |sf|
    sf.vendored_frameworks      = "Framework/SelligentMobileSDK.xcframework"
  end
  
  s.subspec "FrameworkExtension" do |sf|
    sf.vendored_frameworks      = "FrameworkExtension/SelligentMobileExtensionsSDK.xcframework"
  end
end
