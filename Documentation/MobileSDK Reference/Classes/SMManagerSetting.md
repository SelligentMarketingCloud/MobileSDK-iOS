# SMManagerSetting Class Reference

**Inherits from** NSObject  
**Declared in** SMManagerSetting.h  

## Overview

This class allow you to configure the <a href="../Classes/SMManager.md">SMManager</a>.
Such instance must be created before starting the library.
Creating an SMManagerSetting&rsquo;s instance is pretty straightforward as there&rsquo;s only <a href="#/api/name/settingWithUrl:ClientID:PrivateKey:">one constructor for doing so</a>.
This sole constructor is sufficent to get you started.

Additional parameters described in this header will provide you with additional control and <strong><em>are all optional</em></strong>.

<h2>Being user-friendly</h2>

When the application is in foreground and receive a remote-notification, by default, the library will display it on the current visible UIViewController. This behaviour might be unwanted and may disturb the user if he appears to navigate in a different context. Should you want to prevent that behaviour and display the remote-notification shortly after (when the user will be in a more appropriate context), please follow these steps :

<ul>
<li>Create an SMManagerSetting with the default constructor as usual.</li>
<li>Set <a href="#/api/name/shouldDisplayRemoteNotification">shouldDisplayRemoteNotification</a> to FALSE.</li>
<li>Start the library as usual <a href="../Classes/SMManager.md#/api/name/startWithLaunchOptions:Setting:">[SMManager startWithLaunchOptions:Setting:]</a></li>
<li>Listen to NSNotification-name: <em>kSMNotification_Event_DidReceiveRemoteNotification</em> (declared in SMNSNotification)</li>
</ul>

At this point, remote-notification are NOT displayed when the application is in foreground. (Other application&rsquo;s state are not affected).
Then, displaying the remote-notification is up to the application and can be done at any time by :

<ul>
<li>Retrieve the last remote-notification with <a href="../Categories/SMManager+RemoteNotification.md#/api/name/retrieveLastRemotePushNotification">[SMManager(RemoteNotification) retrieveLastRemotePushNotification]</a></li>
<li>Display the notification according to its ID with <a href="../Categories/SMManager+RemoteNotification.md#/api/name/displayNotificationID:">[SMManager(RemoteNotification) displayNotificationID:]</a></li>
</ul>

Or, more straightforwardly :

<ul>
<li>Display the last known remote notification by calling : <a href="../Categories/SMManager+RemoteNotification.md#/api/name/displayLastReceivedRemotePushNotification">[SMManager(RemoteNotification) displayLastReceivedRemotePushNotification]</a></li>
</ul>

<h2>IAM</h2>

In-Application-Message-service is configurable using SMManagerSettingIAM which you&rsquo;ll inject using the API configureInAppMessageServiceWithSetting:
A dedicated topic regarding this topic can be found in <a href="../Categories/SMManager+InAppMessage.md">SMManager(InAppMessage)</a>

<h2>IAC</h2>

In-Application-Content-service is configurable using SMManagerSettingIAC which you&rsquo;ll inject using the API configureInAppContentServiceWithSetting:
A dedicated topic regarding this topic can be found in <a href="../Categories/SMManager+InAppContent.md">SMManager(InAppContent)</a>

## Tasks

### 

[&nbsp;&nbsp;shouldClearBadge](#/api/name/shouldClearBadge) *property* 

[&nbsp;&nbsp;shouldDisplayRemoteNotification](#/api/name/shouldDisplayRemoteNotification) *property* 

[&nbsp;&nbsp;shouldAddInAppMessageFromPushToInAppMessageList](#/api/name/shouldAddInAppMessageFromPushToInAppMessageList) *property* 

[&nbsp;&nbsp;clearCacheIntervalValue](#/api/name/clearCacheIntervalValue) *property* 

[&nbsp;&nbsp;appGroupId](#/api/name/appGroupId) *property* 

[&nbsp;&nbsp;remoteMessageDisplayType](#/api/name/remoteMessageDisplayType) *property* 

[+&nbsp;settingWithUrl:ClientID:PrivateKey:](#/api/name/settingWithUrl:ClientID:PrivateKey:)  

[&ndash;&nbsp;configureInAppMessageServiceWithSetting:](#/api/name/configureInAppMessageServiceWithSetting:)  

[&ndash;&nbsp;configureInAppContentServiceWithSetting:](#/api/name/configureInAppContentServiceWithSetting:)  

## Properties

<a name="/api/name/appGroupId" title="appGroupId"></a>
### appGroupId

This value provides to the sdk  the app group id that you have previously defined in your apple developer portal.

<code>@property (nonatomic, strong) NSString *appGroupId</code>

#### Discussion
it is used to allow the sdk to share data between the main app and the notifications extensions (service and/or content)
The deviceid provided by selligent mobile platform is stored encrypted in this container

#### Declared In
* `SMManagerSetting.h`

<a name="/api/name/clearCacheIntervalValue" title="clearCacheIntervalValue"></a>
### clearCacheIntervalValue

This value tells how often the SDK&rsquo;s cache mechanism should clear itself.

<code>@property (nonatomic) SMClearCache clearCacheIntervalValue</code>

#### Discussion
Internally, each notification-messages has a life-span.
Clearing the cache stands for deleting notification-messages with an expired life-span.
In other words, only old notification-messages are deletesd from the cache.
More recent ones are kept in memory until their life-span expires and a new clearCache is called.
By default, this value is set to kSMClearCache_Auto.
Configuring this value highly depends of how frequently the application will query specific notification-messages.
As if the application query a notification-message which is not in the cache anymore, it will automaticaly fetch it from the backend.
In other words, it depends how often you call the API <a href="../Categories/SMManager+RemoteNotification.md#/api/name/displayNotificationID:">[SMManager(RemoteNotification) displayNotificationID:]</a>.

In a nutshell:

<ul>
<li>If the application will never query <a href="../Categories/SMManager+RemoteNotification.md#/api/name/displayNotificationID:">[SMManager(RemoteNotification) displayNotificationID:]</a>, we recommend keeping this value to default.</li>
<li>If the application use IAM-service, we recommend keeping this value to default.</li>
<li>On the other hand, if the application abuse <a href="../Categories/SMManager+RemoteNotification.md#/api/name/displayNotificationID:">[SMManager(RemoteNotification) displayNotificationID:]</a>, we recommend selecting a value higher than the default one according to your application&rsquo;s need.</li>
</ul>


<strong>Warning:</strong> As soon as IAM-service is enabled, the SDK will consider kSMClearCache_Weekly as being the default value. Except if you explicitly overide the property.
In 99% of the cases, you should not overide this property as the SDK is smart enough to handle the cache mechanism by itself.
Keep also in mind that this behavior  is only applicable for notification and IAM that doesn&rsquo;t have a n expiration date set

#### See Also

* <code><a href="../Constants/SMClearCache.md">SMClearCache</a></code>

#### Declared In
* `SMManagerSetting.h`

<a name="/api/name/remoteMessageDisplayType" title="remoteMessageDisplayType"></a>
### remoteMessageDisplayType

This value defines the behaviour that the SDK will adopt when a remote-notification is received when in Foreground.

<code>@property (nonatomic) SMRemoteMessageDisplayType remoteMessageDisplayType</code>

#### Discussion
The behaviour will be as:

iOS 10+:

<ul>
<li>kSMRemoteMessageDisplayType_None: nothing will be displayed.</li>
<li>kSMRemoteMessageDisplayType_Notification: a Push Notification will be displayed.</li>
<li>kSMRemoteMessageDisplayType_Automatic:<br/>
&ldquo;Push + in-app notifications&rdquo;:<br/>
1) With &ldquo;Message Action&rdquo;: a Push Notification will be displayed (UNNotificationPresentationOptionAlert and UNNotificationPresentationOptionBanner | UNNotificationPresentationOptionList for iOS 14+).<br/>
2) With &ldquo;Push Notification Buttons&rdquo;: a Push Notification will be displayed (UNNotificationPresentationOptionAlert and UNNotificationPresentationOptionBanner | UNNotificationPresentationOptionList for iOS 14+).<br/>
3) With &ldquo;Rich Push Content&rdquo;: a Push Notification will be displayed (UNNotificationPresentationOptionAlert and UNNotificationPresentationOptionBanner | UNNotificationPresentationOptionList for iOS 14+).<br/>
4) Others: an in-app message will be displayed (UNNotificationPresentationOptionNone).<br/><br/>
&ldquo;Mobile push&rdquo;: a Push Notification will be displayed (UNNotificationPresentationOptionAlert and UNNotificationPresentationOptionBanner | UNNotificationPresentationOptionList for iOS 14+).</li>
</ul>

iOS 9-:

<ul>
<li>kSMRemoteMessageDisplayType_None: nothing will be displayed.</li>
<li>kSMRemoteMessageDisplayType_Notification: nothing will be displayed.</li>
<li>kSMRemoteMessageDisplayType_Automatic:<br/>
&ldquo;Push + in-app notifications&rdquo;: an in-app message will be displayed.<br/>
&ldquo;Mobile push&rdquo;: the &ldquo;Message Action&rdquo; will be executed<br/></li>
</ul>


<strong>Warning:</strong> For iOS 10+, the SDK will only take this setting into account when the UNNotificationPresentationOptions delegate is provided (see <a href="../Categories/SMManager+UserNotification.md">SMManager(UserNotification)</a> for more information).

<strong>Warning:</strong> If not set, the default value (kSMRemoteMessageDisplayType_Unknown) will use kSMRemoteMessageDisplayType_Notification for iOS 10+ and kSMRemoteMessageDisplayType_Automatic for iOS 9-.

#### See Also

* <code><a href="../Constants/SMRemoteMessageDisplayType.md">SMRemoteMessageDisplayType</a></code>

#### Declared In
* `SMManagerSetting.h`

<a name="/api/name/shouldAddInAppMessageFromPushToInAppMessageList" title="shouldAddInAppMessageFromPushToInAppMessageList"></a>
### shouldAddInAppMessageFromPushToInAppMessageList

Used to add the in-app message associated to a remote notification to the in-app message list

<code>@property (nonatomic) BOOL shouldAddInAppMessageFromPushToInAppMessageList</code>

#### Discussion
Once a new remote-notification is received, if it contains in the payload  datas for an in-app message, this setting will add the in-app message to the in app messages list . You will need to listen to  kSMNotification_Event_DidReceiveInAppMessage NSNotification  to be informed  that an in-app message is available and you can then retrieve it with [SMManager(InAppMessages) getInAppMessages]  helper method and use in an inbox for example
by default the in app message will be displayed if you wish to display it by yourself you will need to provide a class by calling <a href="../Categories/SMManager+InAppMessage.md#/api/name/inAppMessageDelegate:">[SMManager(InAppMessage) inAppMessageDelegate:]</a> . This class will conform to SMManagerInAppMessageDelegate protocol and implement <a href="../Protocols/SMManagerInAppMessageDelegate.md#/api/name/displayInAppMessage:">[SMManagerInAppMessageDelegate displayInAppMessage:]</a> method
Default value is set to FALSE

#### Declared In
* `SMManagerSetting.h`

<a name="/api/name/shouldClearBadge" title="shouldClearBadge"></a>
### shouldClearBadge

Once a new remote-notification is displayed, the badge is automaticly reseted.
Should you want to handle this property yourself, you can set this property to FALSE before starting the library
Default value is set to TRUE

<code>@property (nonatomic) BOOL shouldClearBadge</code>

#### Declared In
* `SMManagerSetting.h`

<a name="/api/name/shouldDisplayRemoteNotification" title="shouldDisplayRemoteNotification"></a>
### shouldDisplayRemoteNotification

This property does not have an impact when <a href="../Categories/SMManager+RemoteNotification.md#/api/name/displayNotificationID:">[SMManager(RemoteNotification) displayNotificationID:]</a> or  <a href="../Categories/SMManager+RemoteNotification.md#/api/name/displayLastReceivedRemotePushNotification">[SMManager(RemoteNotification) displayLastReceivedRemotePushNotification]</a> are called.
Once you set this value to TRUE, the application becomes responsable about displaying the inapp-notification linked to the received remote-notification.

<code>@property (nonatomic) BOOL shouldDisplayRemoteNotification</code>

#### Discussion
This setting will enable or disable the display of inapp-messages linked to a remote-notification by the SDK.
In iOS 10+ after tapping a notification, the inapp will be displayed (if any).
In iOS 9-, and when the app is in foreground, once a new remote-notification is received, the linked inapp-notification will be displayed (if any).
Should you want to prevent that behaviour, you can set this property to FALSE before starting the library.
Default value is set to TRUE.

<strong>Warning:</strong> This property does not have an impact when <a href="../Categories/SMManager+RemoteNotification.md#/api/name/displayNotificationID:">[SMManager(RemoteNotification) displayNotificationID:]</a> or  <a href="../Categories/SMManager+RemoteNotification.md#/api/name/displayLastReceivedRemotePushNotification">[SMManager(RemoteNotification) displayLastReceivedRemotePushNotification]</a> are called.
Once you set this value to TRUE, the application becomes responsable about displaying the inapp-notification linked to the received remote-notification.

#### Declared In
* `SMManagerSetting.h`

<a title="Class Methods" name="class_methods"></a>
## Class Methods

<a name="/api/name/settingWithUrl:ClientID:PrivateKey:" title="settingWithUrl:ClientID:PrivateKey:"></a>
### settingWithUrl:ClientID:PrivateKey:

Default-mandatory constructor to start the <a href="../Classes/SMManager.md">SMManager</a> shared-instance

<code>+ (instancetype _Nonnull)settingWithUrl:(NSString *_Nullable)*urlName* ClientID:(NSString *_Nullable)*clientID* PrivateKey:(NSString *_Nullable)*privateKey*</code>

#### Parameters

*urlName*  
&nbsp;&nbsp;&nbsp;NSString instance representing the urlname of your backend.  

*clientID*  
&nbsp;&nbsp;&nbsp;NSString instance referencing the client&rsquo;s ID  

*privateKey*  
&nbsp;&nbsp;&nbsp;NSString instance containing a valid private-key used to secure requests  

#### Return Value
SMManagerSetting new instance. <a href="../Classes/SMFailure.md">SMFailure</a> in case of error

#### Discussion


<strong>Warning:</strong> All these parameters are mandatory.
If any of them is nil, the library won&rsquo;t start.
Please contact our support to get valid configuration-setting.

#### Declared In
* `SMManagerSetting.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="/api/name/configureInAppContentServiceWithSetting:" title="configureInAppContentServiceWithSetting:"></a>
### configureInAppContentServiceWithSetting:

An invalid or nil setting is considered as an error and will not startUp the IAC-service.
Don&rsquo;t forget to enable In App content according to application need by calling [SMManager(InAppContent) enableInAppContent:]

<code>- (void)configureInAppContentServiceWithSetting:(SMManagerSettingIAC *_Nullable)*settingIAC*</code>

#### Parameters

*settingIAC*  
&nbsp;&nbsp;&nbsp;The <a href="../Classes/SMManagerSettingIAC.md">SMManagerSettingIAC</a> instance containing the IAC desired configuration.  

#### Discussion
This call is optional. It is not needed to successfully start the SDK.
However, it is required to enable In-Application-Content.
Please read <a href="../Categories/SMManager+InAppContent.md">SMManager(InAppContent)</a> for additional information.

<strong>Warning:</strong> An invalid or nil setting is considered as an error and will not startUp the IAC-service.
Don&rsquo;t forget to enable In App content according to application need by calling [SMManager(InAppContent) enableInAppContent:]

#### See Also

* <code><a href="../Classes/SMManagerSettingIAC.md">SMManagerSettingIAC</a></code>

#### Declared In
* `SMManagerSetting.h`

<a name="/api/name/configureInAppMessageServiceWithSetting:" title="configureInAppMessageServiceWithSetting:"></a>
### configureInAppMessageServiceWithSetting:

An invalid or nil setting is considered as an error and will not startUp the IAM-service.
Don&rsquo;t forget to enable In App message according to application need by calling <a href="../Categories/SMManager+InAppMessage.md#/api/name/enableInAppMessage:">[SMManager(InAppMessage) enableInAppMessage:]</a>

<code>- (void)configureInAppMessageServiceWithSetting:(SMManagerSettingIAM *_Nullable)*settingIAM*</code>

#### Parameters

*settingIAM*  
&nbsp;&nbsp;&nbsp;The <a href="../Classes/SMManagerSettingIAM.md">SMManagerSettingIAM</a> instance containing the IAM desired configuration.  

#### Discussion
This call is optional. It is not needed to successfully start the SDK.
However, it is required to enable In-Application-Message.
Please read <a href="../Categories/SMManager+InAppMessage.md">SMManager(InAppMessage)</a> for additional information.

<strong>Warning:</strong> An invalid or nil setting is considered as an error and will not startUp the IAM-service.
Don&rsquo;t forget to enable In App message according to application need by calling <a href="../Categories/SMManager+InAppMessage.md#/api/name/enableInAppMessage:">[SMManager(InAppMessage) enableInAppMessage:]</a>

#### See Also

* <code><a href="../Classes/SMManagerSettingIAM.md">SMManagerSettingIAM</a></code>

#### Declared In
* `SMManagerSetting.h`

