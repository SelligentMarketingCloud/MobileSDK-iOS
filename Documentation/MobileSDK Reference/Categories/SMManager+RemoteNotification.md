# SMManager(RemoteNotification) Category Reference

**Declared in** SMManager+RemoteNotification.h  

## Overview

This category contains the basic step-by-step implementation to get you started.
Make sure to read the category <a href="../Categories/SMManager+SilentPush.md">SMManager(SilentPush)</a> to learn more about background-remote-notification.

<h1>Handling Remote Notifications:</h1>

In order to receive remote-notification from the back-end,  all the following methods must be included in you application&rsquo;s delegate:

<ul>
<li><a href="#//api/name/didRegisterForRemoteNotificationsWithDeviceToken:">didRegisterForRemoteNotificationsWithDeviceToken:</a></li>
<li><a href="#//api/name/didRegisterUserNotificationSettings:">didRegisterUserNotificationSettings:</a></li>
<li><a href="#//api/name/didFailToRegisterForRemoteNotificationsWithError:">didFailToRegisterForRemoteNotificationsWithError:</a></li>
<li><a href="#//api/name/didReceiveRemoteNotification:">didReceiveRemoteNotification:</a></li>
</ul>

Finally, make sure to call <a href="#//api/name/registerForRemoteNotification">registerForRemoteNotification</a> according to your application&rsquo;s need.

<h1>Receiving Remote Notifications:</h1>

When a remote-notification is received, the library will automatically display a custom UIViewController.
Should you want to prevent this behaviour, feel free to configure the <a href="../Classes/SMManagerSetting.md">SMManagerSetting</a> accordingly before starting the <a href="../Classes/SMManager.md">SMManager</a>.

Before displaying the remote-notification&rsquo;s UIVIewController, the library will broadcast an NSNotification offering the application a chance to pause any ongoing heavy task.
The same principle is applied before dismissing the UIVIewController providing the application the opportunity to start again the paused heavy-task.

Finally, should you want to know when the user interact with UIViewController&rsquo;s control, an NSNotification is also posted providing information about the selected element.
For additionnal information about NSNotification processing and handling, please check SMNSNotification

<h1>Displaying notification :</h1>

The application can display any notification based on its ID using the API <a href="#//api/name/displayNotificationID:">displayNotificationID:</a>
These IDs can be retrieved from broadcasted NSNotification.
(Please read SMNSNotification for additional information).

A convenient method is provided to display the last received remote-notification using <a href="#//api/name/displayLastReceivedRemotePushNotification">displayLastReceivedRemotePushNotification</a>

<h1>SMManager+RemoteNotification :</h1>

## Tasks

### 

[&ndash;&nbsp;registerForRemoteNotification](#//api/name/registerForRemoteNotification)  

[&ndash;&nbsp;unregisterForRemoteNotification](#//api/name/unregisterForRemoteNotification)  

[&ndash;&nbsp;enableRemoteNotification](#//api/name/enableRemoteNotification)  

[&ndash;&nbsp;disableRemoteNotification](#//api/name/disableRemoteNotification)  

[&ndash;&nbsp;didRegisterForRemoteNotificationsWithDeviceToken:](#//api/name/didRegisterForRemoteNotificationsWithDeviceToken:)  

[&ndash;&nbsp;didRegisterUserNotificationSettings:](#//api/name/didRegisterUserNotificationSettings:)  

[&ndash;&nbsp;didRegisterUserNotificationSettings](#//api/name/didRegisterUserNotificationSettings)  

[&ndash;&nbsp;didFailToRegisterForRemoteNotificationsWithError:](#//api/name/didFailToRegisterForRemoteNotificationsWithError:)  

[&ndash;&nbsp;didReceiveRemoteNotification:](#//api/name/didReceiveRemoteNotification:)  

[&ndash;&nbsp;displayNotificationID:](#//api/name/displayNotificationID:)  

[&ndash;&nbsp;displayLastReceivedRemotePushNotification](#//api/name/displayLastReceivedRemotePushNotification)  

[&ndash;&nbsp;retrieveLastRemotePushNotification](#//api/name/retrieveLastRemotePushNotification)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/didFailToRegisterForRemoteNotificationsWithError:" title="didFailToRegisterForRemoteNotificationsWithError:"></a>
### didFailToRegisterForRemoteNotificationsWithError:

Mandatory API to be included in application:didFailToRegisterForRemoteNotificationsWithError

<code>- (void)didFailToRegisterForRemoteNotificationsWithError:(NSError *)*error*</code>

#### Parameters

*error*  
&nbsp;&nbsp;&nbsp;An NSError object that encapsulates information why registration did not succeed. Provided by the delegate call  

#### Discussion
Called when the user has deactivated remote-notification or if any other error happen.

#### Declared In
* `SMManager+RemoteNotification.h`

<a name="//api/name/didReceiveRemoteNotification:" title="didReceiveRemoteNotification:"></a>
### didReceiveRemoteNotification:

Mandatory API to be included in application:didReceiveRemoteNotification
Handle and display remote notification when application is in foreground

<code>- (void)didReceiveRemoteNotification:(NSDictionary *)*userInfo*</code>

#### Parameters

*userInfo*  
&nbsp;&nbsp;&nbsp;An NSDictionary that contains information related to the remote notification. Provided by the delegate call  

#### Discussion
This method is not mandatory anymore if you implement didReceiveRemoteNotification:fetchCompletionHandler:
For additional information about background-remote-notifications, please check <a href="../Categories/SMManager+SilentPush.md">SMManager(SilentPush)</a> for further details.

#### Declared In
* `SMManager+RemoteNotification.h`

<a name="//api/name/didRegisterForRemoteNotificationsWithDeviceToken:" title="didRegisterForRemoteNotificationsWithDeviceToken:"></a>
### didRegisterForRemoteNotificationsWithDeviceToken:

Mandatory API to be included in application:didRegisterForRemoteNotificationsWithDeviceToken:

<code>- (void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)*deviceToken*</code>

#### Parameters

*deviceToken*  
&nbsp;&nbsp;&nbsp;A string that identifies the device to APNs.  

#### Discussion
This method is mandatory to handle properly all notifications

#### Declared In
* `SMManager+RemoteNotification.h`

<a name="//api/name/didRegisterUserNotificationSettings" title="didRegisterUserNotificationSettings"></a>
### didRegisterUserNotificationSettings

Mandatory API to be included in application:didRegisterUserNotificationSettings

<code>- (void)didRegisterUserNotificationSettings</code>

#### Discussion
This method confirms the type of notification the user would like to receive.

#### Declared In
* `SMManager+RemoteNotification.h`

<a name="//api/name/didRegisterUserNotificationSettings:" title="didRegisterUserNotificationSettings:"></a>
### didRegisterUserNotificationSettings:

Deprecated method - replaced by  <a href="#//api/name/didRegisterUserNotificationSettings">didRegisterUserNotificationSettings</a>;
Mandatory API to be included in application:<a href="#//api/name/didRegisterUserNotificationSettings">didRegisterUserNotificationSettings</a> (<b class="deprecated">Deprecated:</b><span class="deprecated"> Deprecated method - replaced by  didRegisterUserNotificationSettings;</span>)

<code>- (void)didRegisterUserNotificationSettings:(UIUserNotificationSettings *)*notificationSettings*</code>

#### Parameters

*notificationSettings*  
&nbsp;&nbsp;&nbsp;The user notification settings that are available to your app.  

#### Discussion


<strong>Warning:</strong> Deprecated method - replaced by  <a href="#//api/name/didRegisterUserNotificationSettings">didRegisterUserNotificationSettings</a>;
Mandatory API to be included in application:<a href="#//api/name/didRegisterUserNotificationSettings">didRegisterUserNotificationSettings</a>This method confirms the type of notification the user would like to receive.

#### Declared In
* `SMManager+RemoteNotification.h`

<a name="//api/name/disableRemoteNotification" title="disableRemoteNotification"></a>
### disableRemoteNotification

Use this API to disable the selligent notification on current device. In other words, the device will not receive any remote-notification from selligent backend server anymore.

<code>- (void)disableRemoteNotification</code>

#### Discussion


<strong>Warning:</strong> This does NOT call unregisterForRemoteNotifications on the sharedApplication instance.
Therefore, the application can still receive third-party remote-notifications.

#### Declared In
* `SMManager+RemoteNotification.h`

<a name="//api/name/displayLastReceivedRemotePushNotification" title="displayLastReceivedRemotePushNotification"></a>
### displayLastReceivedRemotePushNotification

Retrieve and display the last known notification.

<code>- (void)displayLastReceivedRemotePushNotification</code>

#### Discussion
Basically, This API is a helpher which combine both <a href="#//api/name/retrieveLastRemotePushNotification">retrieveLastRemotePushNotification</a> and <a href="#//api/name/displayNotificationID:">displayNotificationID:</a>
It only focuses on remote-notification. Not on IAM.
At this stage, only the very last remote-notification can be recovered, previous ones are automaticly overriden.
To learn more about this API, please read documentation in <a href="../Classes/SMManagerSetting.md">SMManagerSetting</a>, more particularly <a href="../Classes/SMManagerSetting.md#//api/name/shouldDisplayRemoteNotification">[SMManagerSetting shouldDisplayRemoteNotification]</a>

#### Declared In
* `SMManager+RemoteNotification.h`

<a name="//api/name/displayNotificationID:" title="displayNotificationID:"></a>
### displayNotificationID:

Display a notification based on its ID

<code>- (void)displayNotificationID:(NSString *)*idNotification*</code>

#### Parameters

*idNotification*  
&nbsp;&nbsp;&nbsp;NSString instance referencing the unique notification&rsquo;s ID  

#### Discussion
Basically, the application may store notification&rsquo;s IDs and then display them according to its need.
In this context, the word &ldquo;notification&rdquo; stands for either a remote-notification or an InAppMessage.
This feature has initially been added to allow applications to display remote-notifications at any time (not directly when the push is received).
Then, it has been extended to display In-App-Messages. For additional information about IAM, please read <a href="../Categories/SMManager+InAppMessage.md">SMManager(InAppMessage)</a>.

#### Declared In
* `SMManager+RemoteNotification.h`

<a name="//api/name/enableRemoteNotification" title="enableRemoteNotification"></a>
### enableRemoteNotification

Use this API to enable the selligent notification on current device. In other words, the device will receive any remote-notification from selligent backend server.

<code>- (void)enableRemoteNotification</code>

#### Discussion


<strong>Warning:</strong> This is independent from [SMManager registerForRemoteNotification] and from notification settings for the app on device level.

#### Declared In
* `SMManager+RemoteNotification.h`

<a name="//api/name/registerForRemoteNotification" title="registerForRemoteNotification"></a>
### registerForRemoteNotification

Mandatory method which allows notification registration

<code>- (void)registerForRemoteNotification</code>

#### Discussion
This API will display a dialog asking user&rsquo;s permission for remote-notifications (when app is launched the very 1st time).
Often, this call is added right after startWithLaunchOptions:Setting:
However, you may call this API later in your code according to your application need. Just remember that this call is mandatory to receive remote-notifications

<strong>Warning:</strong> If your device has already been registered to remote-notifications by your application or a third-party framework, then this call is not mandatory.

#### Declared In
* `SMManager+RemoteNotification.h`

<a name="//api/name/retrieveLastRemotePushNotification" title="retrieveLastRemotePushNotification"></a>
### retrieveLastRemotePushNotification

Retrieve information about the last received remote-notification

<code>- (NSDictionary *)retrieveLastRemotePushNotification</code>

#### Return Value
NSDictionary instance containing basic information about the last push, nil if no push was received so far.

#### Discussion
This is a convinient method to quickly retrieve the last remote-notificaiton known by the device.
At this stage, only the very last remote-notification can be recovered, previous ones are automaticly overriden.
To learn more about this API, please read documentation in <a href="../Classes/SMManagerSetting.md">SMManagerSetting</a>, more particularly <a href="../Classes/SMManagerSetting.md#//api/name/shouldDisplayRemoteNotification">[SMManagerSetting shouldDisplayRemoteNotification]</a>

#### Declared In
* `SMManager+RemoteNotification.h`

<a name="//api/name/unregisterForRemoteNotification" title="unregisterForRemoteNotification"></a>
### unregisterForRemoteNotification

Use this API to unregister the current device. In other words, the device will not receive any remote-notification from our backend server anymore.

<code>- (void)unregisterForRemoteNotification</code>

#### Discussion


<strong>Warning:</strong> This does NOT call unregisterForRemoteNotifications on the sharedApplication instance.
Therefore, the application can still receive third-party remote-notifications.

#### Declared In
* `SMManager+RemoteNotification.h`

