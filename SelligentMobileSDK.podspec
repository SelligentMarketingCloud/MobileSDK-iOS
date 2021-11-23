Pod::Spec.new do |s|
  s.platform     = :ios, "10.0"
  s.name         = "SelligentMobileSDK"
  s.version      = "2.7.1"
  s.summary      = "Selligent Marketing Cloud - Mobile SDK for iOS"
  s.description  = <<-DESC
    The Selligent Marketing Cloud - Mobile SDK is a tool that enables you to use the Selligent Marketing Cloud - Mobile feature in a very easy and straightforward way.
    By incorporating our latest SDK for iOS in your app, we support you in handling push messages, in app messages, in app content, standard and custom events as well as logins and logouts in the app.
                   DESC
  s.homepage     = "https://github.com/SelligentMarketingCloud/MobileSDK-iOS"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = "SelligentMarketingCloud"
  s.source       = { :git => "https://github.com/SelligentMarketingCloud/MobileSDK-iOS.git", :tag => "#{s.version}" }
  
  s.default_subspec = "Core"

  s.subspec "Core" do |sc|
    sc.source_files  = "StaticLib/include"
    sc.vendored_libraries = "StaticLib/libSelligentMobile.a"
  end
  
  s.subspec "Geofencing" do |sg|
    sg.source_files  = "StaticLib_Geofencing/include"
    sg.vendored_libraries = "StaticLib_Geofencing/libSelligentMobile_Geofencing.a"
    sg.dependency "PlotPlugin"
  end
  
  s.subspec "Framework" do |sf|
    sf.vendored_frameworks = "Framework/SelligentMobileSDK.xcframework"
  end
  
  s.subspec "Framework_Geofencing" do |sfg|
    sfg.vendored_frameworks = "Framework_Geofencing/SelligentMobileSDK_Geofencing.xcframework"
    sfg.dependency "PlotPlugin"
  end
end
