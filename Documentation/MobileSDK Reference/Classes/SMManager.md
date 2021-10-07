# SMManager Class Reference

**Inherits from** NSObject  
**Declared in** SMManager.h  

## Overview

<h2>Start Library</h2>

In order to start the library, please follow the steps bellow (will mainly happen in your UIApplication&rsquo;s delegate):

<ul>
<li>Use startWithLaunchOptions:Setting: in your application:didFinishLaunchingWithOptions:</li>
<li>Implement methods described in <a href="../Categories/SMManager+RemoteNotification.md">SMManager(RemoteNotification)</a> in your UIApplication&rsquo;s delegate</li>
<li>When building against iOS10 : Implement methods described in <a href="../Categories/SMManager+UserNotification.md">SMManager(UserNotification)</a> in your UIApplication&rsquo;s delegate</li>
</ul>

Starting the library will not register for remote notification.
Don&rsquo;t forget to call registerForRemoteNotification according to your application&rsquo;s need.

From there, your application is ready to handle all incoming remote-notifications.

## Tasks

### 

[&nbsp;&nbsp;versionLib](#/api/name/versionLib) *property* 

[+&nbsp;sharedInstance](#/api/name/sharedInstance)  

[&ndash;&nbsp;startWithLaunchOptions:Setting:](#/api/name/startWithLaunchOptions:Setting:)  

[&ndash;&nbsp;reloadSetting:](#/api/name/reloadSetting:)  

[&ndash;&nbsp;deviceID](#/api/name/deviceID)  

## Properties

<a name="/api/name/versionLib" title="versionLib"></a>
### versionLib

The current version of the library

<code>@property (readonly, nonatomic) NSString *versionLib</code>

#### Declared In
* `SMManager.h`

<a title="Class Methods" name="class_methods"></a>
## Class Methods

<a name="/api/name/sharedInstance" title="sharedInstance"></a>
### sharedInstance

Singleton for SellMobileSDK Class which allow to access public SellMobileSDK methods and properties

<code>+ (instancetype _Nonnull)sharedInstance</code>

#### Return Value
SMManager: singleton instance of SMManager class

#### Declared In
* `SMManager.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="/api/name/deviceID" title="deviceID"></a>
### deviceID

Device id  used by the sdk

<code>- (NSString *_Nullable)deviceID</code>

#### Declared In
* `SMManager.h`

<a name="/api/name/reloadSetting:" title="reloadSetting:"></a>
### reloadSetting:

Optional + used for testing only. This method will re-configure the SMManager with the newly provided information

<code>- (void)reloadSetting:(SMManagerSetting *_Null_unspecified)*setting*</code>

#### Parameters

*setting*  
&nbsp;&nbsp;&nbsp;mandatory <a href="../Classes/SMManagerSetting.md">SMManagerSetting</a> instance to start-up the library  

#### Discussion
This is a handy API in case you would like to switch between two backend environements without rebuilding your target.

<strong>Warning:</strong> This API is provided for testing purposes only. Never use it in production.
Make sure to re-enable any service after calling this API.

#### See Also

* <code><a href="../Classes/SMManagerSetting.md">SMManagerSetting</a></code>

#### Declared In
* `SMManager.h`

<a name="/api/name/startWithLaunchOptions:Setting:" title="startWithLaunchOptions:Setting:"></a>
### startWithLaunchOptions:Setting:

Mandatory method which allows sdk initialisation. To be included in application:didFinishLaunchingWithOptions:
Make sure to provide the launchOptions dictionary

<code>- (void)startWithLaunchOptions:(NSDictionary *_Nullable)*launchOptions* Setting:(SMManagerSetting *_Null_unspecified)*setting*</code>

#### Parameters

*launchOptions*  
&nbsp;&nbsp;&nbsp;NSDictionary instance indicating the reason the app was launched (if any). This dictionary is provided by application:didFinishLaunchingWithOptions  

*setting*  
&nbsp;&nbsp;&nbsp;mandatory <a href="../Classes/SMManagerSetting.md">SMManagerSetting</a> instance to start-up the library  

#### Discussion
This method is mandatory in order to start / initialise the library and should be called in application:didFinishLaunchingWithOptions:

#### See Also

* <code><a href="../Classes/SMManagerSetting.md">SMManagerSetting</a></code>

#### Declared In
* `SMManager.h`

