# SMManager(InAppMessage) Category Reference

**Declared in** SMManager+InAppMessage.h  

## Overview

In-Application-Message (IAM) is an optional service which will <strong>automatically</strong> retrieve messages from the back-end at specific frequencies.
Once new messages were retrieved, the library notifies the application about it.
Then, the application may display any IAM as a usual notification.

The retrieved IAM share the exact same format as the remote-notification.
However, they are not live messages and, therefore should NOT be considered as an alternative to remote-notification.
Remote-push-notificaitons are almost live messages that are pushed to devices.
While IAM are non-live-messages that the SDK fetch at specific intervals according to provided fetch-mode.

<h2>Implementation:</h2>

In a nutshell, activate the IAM-service is a two steps process:

<ul>
<li>First, create an SMManagerSettingIAM instance and inject it in SMManagerSetting with <a href="../Classes/SMManagerSetting.md#/api/name/configureInAppMessageServiceWithSetting:">[SMManagerSetting configureInAppMessageServiceWithSetting:]</a></li>
<li>Then, enable the IAM-service with <a href="#/api/name/enableInAppMessage:">enableInAppMessage:</a></li>
</ul>

However, additional steps might be required according to desired fetching-mode.
Each of these steps are explained in further details bellow.

In order to be notified about new IAM, the application must register to correct notification <em>kSMNotification_Event_DidReceiveInAppMessage</em>
(Please read SMNSNotification for additional information).
This notification will provide you with the IAM&rsquo;s unique ID.
Please be aware that it’s the unique application’s chance to capture and store that information.

<h2>Displaying IAM</h2>

As IAM and remote-notification share the same format, they are both displayed using the same APIs.
Please read the documentation in <a href="../Categories/SMManager+RemoteNotification.md">SMManager(RemoteNotification)</a> to know how to display any kind of notification.

Since sdk v 2.5 you have the possibility to store the In App Message on your side and process them the way you want
In order to do that, once you are notified that In App Messages are available you can call <a href="#/api/name/getInAppMessages">getInAppMessages</a> to receive a NSArray of <a href="../Classes/SMInAppMessage.md">SMInAppMessage</a>
Once a <a href="../Classes/SMInAppMessage.md">SMInAppMessage</a> has been displayed and has been seen by the user you need to call <a href="#/api/name/setInAppMessageAsSeen:">setInAppMessageAsSeen:</a> to inform Selligent that the In App message has been opened
In case there is links in the In App Message and in case one of the link is triggered by user please call executeLinkAction:: to process the action related to the link and inform Selligent that the link has been clicked

<h2>Fetching modes</h2>

IAM may be retrieved from two different modes corresponding to the application&rsquo;s state:

<ul>
<li>Foreground-fetch &ndash; When the application is in foreground.</li>
<li>Background-fetch &ndash; When the application is in background.</li>
</ul>

Each of these modes is <strong>optional</strong>. In other words, you can use one mode or the other, or even both at the same time.
Choosing the adequate mode depends on the application&rsquo;s need and can be managed by the application&rsquo;s developper.
Off course, to allow the SDK to retrieve IAM as fast as possible, we recommand using both modes at the same time.

Following documentation explains how to activate each mode:

<h2>Fetching IAM in foreground</h2>

In order to retrieve IAM while the application is running, make sure to do the folllowing:

<ul>
<li>Create and configure an <a href="../Classes/SMManagerSettingIAM.md">SMManagerSettingIAM</a> instance accordingly.</li>
<li>Provide the created <a href="../Classes/SMManagerSettingIAM.md">SMManagerSettingIAM</a> instance to <a href="../Classes/SMManager.md">SMManager</a> before starting the library</li>
<li>Enable In App message by calling <a href="#/api/name/enableInAppMessage:">enableInAppMessage:</a> when your application needs it.</li>
</ul>

<h2>Fetching IAM in background</h2>

Initially, this mode has been added as a complementary-option to the foreground-mode.
However, it can be used as a single-fetch-mode if fits best your application&rsquo;s need.

To understand better how often the OS will execute the background-fetch, make sure to read the following <a href="https://developer.apple.com/library/ios/documentation/iPhone/Conceptual/iPhoneOSProgrammingGuide/BackgroundExecution/BackgroundExecution.md#//apple_ref/doc/uid/TP40007072-CH4-SW56">Apple-documentation</a>

In order to support this mode, make sure to :

<ul>
<li>Create the <a href="../Classes/SMManagerSettingIAM.md">SMManagerSettingIAM</a> instance accordingly.</li>
<li>Provide the created <a href="../Classes/SMManagerSettingIAM.md">SMManagerSettingIAM</a> instance to <a href="../Classes/SMManager.md">SMManager</a> before starting the library.</li>
<li>In the application&rsquo;s target, enable the following: Capabilities > Background Modes > Background Fetch</li>
<li>Implement performFetchWithCompletionHandler: in UIApplicaiton&rsquo;s delegate (under delegate method application:performFetchWithCompletionHandler:)</li>
<li>Enable In App message by calling <a href="#/api/name/enableInAppMessage:">enableInAppMessage:</a> when your application needs it.</li>
</ul>

## Tasks

### 

[&ndash;&nbsp;enableInAppMessage:](#/api/name/enableInAppMessage:)  

[&ndash;&nbsp;performIAMFetchWithCompletionHandler:](#/api/name/performIAMFetchWithCompletionHandler:)  

[&ndash;&nbsp;getInAppMessages](#/api/name/getInAppMessages)  

[&ndash;&nbsp;setInAppMessageAsSeen:](#/api/name/setInAppMessageAsSeen:)  

[&ndash;&nbsp;setInAppMessageAsUnseen:](#/api/name/setInAppMessageAsUnseen:)  

[&ndash;&nbsp;setInAppMessageAsDeleted:](#/api/name/setInAppMessageAsDeleted:)  

[&ndash;&nbsp;executeLinkAction:InAppMessage:](#/api/name/executeLinkAction:InAppMessage:)  

[&ndash;&nbsp;inAppMessageWKNavigationDelegate:](#/api/name/inAppMessageWKNavigationDelegate:)  

[&ndash;&nbsp;removeViewController](#/api/name/removeViewController)  

[&ndash;&nbsp;inAppMessageDelegate:](#/api/name/inAppMessageDelegate:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="/api/name/enableInAppMessage:" title="enableInAppMessage:"></a>
### enableInAppMessage:

Call this API in order to enable / disable the IAM-service according to your application&rsquo;s need.

<code>- (void)enableInAppMessage:(BOOL)*shouldEnable*</code>

#### Parameters

*shouldEnable*  
&nbsp;&nbsp;&nbsp;TRUE will enable IAM. FALSE will disable it.  

#### Discussion
Most application will call this API right after starting the SDK.
However, it make no harm to call it later on when user trigger, for instance, a UISwitch.

<strong>Warning:</strong> Before enabling IAM-service, make sure to :

<ul>
<li>Start the SDK. Enabling the IAM-service before starting the SDK will have no effect.</li>
<li>Configure correctly the IAM-service via <a href="../Classes/SMManagerSetting.md#/api/name/configureInAppMessageServiceWithSetting:">configureInAppMessageServiceWithSetting:</a></li>
</ul>


#### Declared In
* `SMManager+InAppMessage.h`

<a name="/api/name/executeLinkAction:InAppMessage:" title="executeLinkAction:InAppMessage:"></a>
### executeLinkAction:InAppMessage:

This method must be called whenever a user has clicked on a link that you  manage to display

<code>- (void)executeLinkAction:(SMLink *_Nullable)*link* InAppMessage:(SMInAppMessage *_Nullable)*inAppMessage*</code>

#### Parameters

*link*  
&nbsp;&nbsp;&nbsp;a <a href="../Classes/SMLink.md">SMLink</a> object  

*inAppMessage*  
&nbsp;&nbsp;&nbsp;a <a href="../Classes/SMInAppMessage.md">SMInAppMessage</a> object  

#### Discussion
This will allow the sdk to inform the services that a link has been clicked and to process the action associated with the link

#### See Also

* <code><a href="../Classes/SMLink.md">SMLink</a></code>

* <code><a href="../Classes/SMInAppMessage.md">SMInAppMessage</a></code>

#### Declared In
* `SMManager+InAppMessage.h`

<a name="/api/name/getInAppMessages" title="getInAppMessages"></a>
### getInAppMessages

This will return an array of In App Messages

<code>- (NSArray *_Nonnull)getInAppMessages</code>

#### Return Value
returns an NSArray of <a href="../Classes/SMInAppMessage.md">SMInAppMessage</a>

#### Discussion
All the valid IAM will be retrieved even if they were already provided to the device

#### Declared In
* `SMManager+InAppMessage.h`

<a name="/api/name/inAppMessageDelegate:" title="inAppMessageDelegate:"></a>
### inAppMessageDelegate:

this setting will allow you to  manage on app side the display of the in-app message linked to a push remote notification
In order to display it in your side the delegate object should implement <a href="../Protocols/SMManagerInAppMessageDelegate.md#/api/name/displayInAppMessage:">[SMManagerInAppMessageDelegate displayInAppMessage:]</a> method it will provide tha app with a <a href="../Classes/SMInAppMessage.md">SMInAppMessage</a> object

<code>- (void)inAppMessageDelegate:(id&lt;SMManagerInAppMessageDelegate&gt; _Nullable)*delegate*</code>

#### Parameters

*delegate*  
&nbsp;&nbsp;&nbsp;an object implementing <a href="../Protocols/SMManagerInAppMessageDelegate.md">SMManagerInAppMessageDelegate</a>  methods  

#### See Also

* <code><a href="../Protocols/SMManagerInAppMessageDelegate.md">SMManagerInAppMessageDelegate</a></code>

#### Declared In
* `SMManager+InAppMessage.h`

<a name="/api/name/inAppMessageWKNavigationDelegate:" title="inAppMessageWKNavigationDelegate:"></a>
### inAppMessageWKNavigationDelegate:

This method will allow you to provide an instance of a class to the sdk . This class will implement the WKNavigationDelegate methods
In this case when the sdk displays an In App Message in a WKWebView you will  for example be able to process the linked click on the app side by implementing  decidePolicyForNavigationAction on the provided class

<code>- (void)inAppMessageWKNavigationDelegate:(id&lt;WKNavigationDelegate&gt; _Nullable)*delegate*</code>

#### Parameters

*delegate*  
&nbsp;&nbsp;&nbsp;an object implementing WKNavigationDelegate methods  

#### Declared In
* `SMManager+InAppMessage.h`

<a name="/api/name/performIAMFetchWithCompletionHandler:" title="performIAMFetchWithCompletionHandler:"></a>
### performIAMFetchWithCompletionHandler:

This will allow the SDK to fetch the IAM when the OS will allow so.

<code>- (void)performIAMFetchWithCompletionHandler:(void ( ^ _Nullable ) ( UIBackgroundFetchResult ))*completionHandler*</code>

#### Parameters

*completionHandler*  
&nbsp;&nbsp;&nbsp;The block-completion to be processed. Provided by the delegate call  

#### Discussion
To be included in application:performFetchWithCompletionHandler:

<strong>Warning:</strong> Make sure to enable background-fetch in the application&rsquo;s capabilities

#### Declared In
* `SMManager+InAppMessage.h`

<a name="/api/name/removeViewController" title="removeViewController"></a>
### removeViewController

This method must be called whenever a user has clicked on a link that you  manage to display

<code>- (void)removeViewController</code>

#### Discussion
This will allow the sdk to inform the services that a link has been clicked and to process the action associated with the link

#### Declared In
* `SMManager+InAppMessage.h`

<a name="/api/name/setInAppMessageAsDeleted:" title="setInAppMessageAsDeleted:"></a>
### setInAppMessageAsDeleted:

This method will mark an IAM as deleted

<code>- (void)setInAppMessageAsDeleted:(SMInAppMessage *_Nullable)*inAppMessage*</code>

#### Parameters

*inAppMessage*  
&nbsp;&nbsp;&nbsp;an <a href="../Classes/SMInAppMessage.md">SMInAppMessage</a> object  

#### Discussion
The message will be not be provided again to the device once deleted

#### See Also

* <code><a href="../Classes/SMInAppMessage.md">SMInAppMessage</a></code>

#### Declared In
* `SMManager+InAppMessage.h`

<a name="/api/name/setInAppMessageAsSeen:" title="setInAppMessageAsSeen:"></a>
### setInAppMessageAsSeen:

This method will mark an IAM as viewed, send the Open event to the server and update  <a href="../Classes/SMInAppMessage.md">SMInAppMessage</a> object in cache with isViewed property set to  true

<code>- (void)setInAppMessageAsSeen:(SMInAppMessage *_Nullable)*inAppMessage*</code>

#### Parameters

*inAppMessage*  
&nbsp;&nbsp;&nbsp;an <a href="../Classes/SMInAppMessage.md">SMInAppMessage</a> object  

#### Discussion
The message will  still be provided to the device with the flag isViewed set to true

#### See Also

* <code><a href="../Classes/SMInAppMessage.md">SMInAppMessage</a></code>

#### Declared In
* `SMManager+InAppMessage.h`

<a name="/api/name/setInAppMessageAsUnseen:" title="setInAppMessageAsUnseen:"></a>
### setInAppMessageAsUnseen:

This method will mark an IAM as unseen

<code>- (void)setInAppMessageAsUnseen:(SMInAppMessage *_Nullable)*inAppMessage*</code>

#### Parameters

*inAppMessage*  
&nbsp;&nbsp;&nbsp;an <a href="../Classes/SMInAppMessage.md">SMInAppMessage</a> object  

#### Discussion
The message will be  provided to the device with the flag isViewed set to false

#### See Also

* <code><a href="../Classes/SMInAppMessage.md">SMInAppMessage</a></code>

#### Declared In
* `SMManager+InAppMessage.h`

