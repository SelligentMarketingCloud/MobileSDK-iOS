# SMManagerSettingIAM Class Reference

**Inherits from** NSObject  
**Declared in** SMManagerSettingIAM.h  

## Overview

This class allow you to configure the In-App-Message service.
Such instance must be created before starting the library.

## Tasks

### 

[+&nbsp;settingWithBackgroundFetchOnly](#/api/name/settingWithBackgroundFetchOnly)  

[+&nbsp;settingWithRefreshType:](#/api/name/settingWithRefreshType:)  

[+&nbsp;settingWithRefreshType:ShouldPerformBackgroundFetch:](#/api/name/settingWithRefreshType:ShouldPerformBackgroundFetch:)  

<a title="Class Methods" name="class_methods"></a>
## Class Methods

<a name="/api/name/settingWithBackgroundFetchOnly" title="settingWithBackgroundFetchOnly"></a>
### settingWithBackgroundFetchOnly

Constructor to be used in order to create the SMManagerSettingIAM instance

<code>+ (instancetype _Nonnull)settingWithBackgroundFetchOnly</code>

#### Discussion
use this constructor to enable background-mode only.
The OS will refresh automaticly the IAM based on how often the user interacts with the application

<strong>Warning:</strong> If background-fetch is not enabled in Application&rsquo;s Capabilities, the IAM-service will not start.
See <a href="../Categories/SMManager+InAppMessage.md">SMManager(InAppMessage)</a> for additional information.

#### Declared In
* `SMManagerSettingIAM.h`

<a name="/api/name/settingWithRefreshType:" title="settingWithRefreshType:"></a>
### settingWithRefreshType:

Constructor to be used in order to create the SMManagerSettingIAM instance

<code>+ (instancetype _Nonnull)settingWithRefreshType:(SMInAppRefreshType)*refreshType*</code>

#### Parameters

*refreshType*  
&nbsp;&nbsp;&nbsp;The type of refresh to consider when the application is in foreground  

#### Discussion
Use this constructor should you want to perform periodic refresh when the application is in foreground-state only.
For enabling backgroundState, use <a href="#/api/name/settingWithRefreshType:ShouldPerformBackgroundFetch:">settingWithRefreshType:ShouldPerformBackgroundFetch:</a> instead

#### See Also

* <code><a href="../Constants/SMInAppRefreshType.md">SMInAppRefreshType</a></code>

#### Declared In
* `SMManagerSettingIAM.h`

<a name="/api/name/settingWithRefreshType:ShouldPerformBackgroundFetch:" title="settingWithRefreshType:ShouldPerformBackgroundFetch:"></a>
### settingWithRefreshType:ShouldPerformBackgroundFetch:

Constructor to be used in order to create the SMManagerSettingIAM instance

<code>+ (instancetype _Nonnull)settingWithRefreshType:(SMInAppRefreshType)*refreshType* ShouldPerformBackgroundFetch:(BOOL)*shouldPerformBackgroundFetch*</code>

#### Parameters

*refreshType*  
&nbsp;&nbsp;&nbsp;The type of refresh to consider when the application is in foreground  

*shouldPerformBackgroundFetch*  
&nbsp;&nbsp;&nbsp;If set to TRUE, it will activate UIApplication-BackGround-Fetch-mode automaticly  

#### Discussion
This constructor provides you with more control on foreground / background fetch.
Should you want to restrict to only one fetch-mode, feel free to use other constructors.

#### See Also

* <code><a href="../Constants/SMInAppRefreshType.md">SMInAppRefreshType</a></code>

#### Declared In
* `SMManagerSettingIAM.h`

