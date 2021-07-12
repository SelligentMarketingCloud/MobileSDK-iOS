# SMManager(SilentPush) Category Reference

**Declared in** SMManager+SilentPush.h  

## Overview

Optionally, you can support silent-remote-notificaiton which will not render anything on the device.
To know more about this topic, please visit <a href="https://developer.apple.com/library/ios/documentation/NetworkingInternet/Conceptual/RemoteNotificationsPG/Chapters/ApplePushService.md#//apple_ref/doc/uid/TP40008194-CH100-SW1">the Apple documentation.</a>

Even if you&rsquo;re not planning to use silent-pushes, we recommand enabling this service in your application anyway.
As using this service will also improve rendering time for the usual (non-silent) remote-notifications.

<h1>Implementation :</h1>

In a nutshell, you should do the following :

<ul>
<li>In the application&rsquo;s target, enable the following: Capabilities > Background Modes > Remote Notifications</li>
<li>Removing previous call to didReceiveRemoteNotification: (see last point of &ldquo;Start library&rdquo;)</li>
<li>Implement <a href="#//api/name/didReceiveRemoteNotification:fetchCompletionHandler:">didReceiveRemoteNotification:fetchCompletionHandler:</a> in UIApplication&rsquo;s delegate.</li>
</ul>

<h1>SMManager+SilentPush :</h1>

## Tasks

### 

[&ndash;&nbsp;didReceiveRemoteNotification:fetchCompletionHandler:](#//api/name/didReceiveRemoteNotification:fetchCompletionHandler:)  

[&ndash;&nbsp;didReceiveRemoteNotification:fetchCompletionHandler:ForceResultFetch:](#//api/name/didReceiveRemoteNotification:fetchCompletionHandler:ForceResultFetch:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/didReceiveRemoteNotification:fetchCompletionHandler:" title="didReceiveRemoteNotification:fetchCompletionHandler:"></a>
### didReceiveRemoteNotification:fetchCompletionHandler:

Mandatory API to be included in application:didReceiveRemoteNotification:fetchCompletionHandler
Handle and display the received notification according to different application state.

<code>- (void)didReceiveRemoteNotification:(NSDictionary *)*userInfo* fetchCompletionHandler:(void ( ^ ) ( UIBackgroundFetchResult ))*completionHandler*</code>

#### Parameters

*userInfo*  
&nbsp;&nbsp;&nbsp;An NSDictionary that contains information related to the remote notification. Provided by the delegate call  

*completionHandler*  
&nbsp;&nbsp;&nbsp;The block-completion to be processed after the download. Provided by the delegate call  

#### Discussion
It is recommended to use this API over didReceiveRemoteNotification: as it handles silent-remote-notificaitons.

<strong>Warning:</strong> You must enable &ldquo;Remote notifications&rdquo; in your application&rsquo;s Capabilities in order to use this API.
If this capability is not useful to your application, you must use didReceiveRemoteNotification: instead.

#### Declared In
* `SMManager+SilentPush.h`

<a name="//api/name/didReceiveRemoteNotification:fetchCompletionHandler:ForceResultFetch:" title="didReceiveRemoteNotification:fetchCompletionHandler:ForceResultFetch:"></a>
### didReceiveRemoteNotification:fetchCompletionHandler:ForceResultFetch:

See <a href="#//api/name/didReceiveRemoteNotification:fetchCompletionHandler:">didReceiveRemoteNotification:fetchCompletionHandler:</a>

<code>- (void)didReceiveRemoteNotification:(NSDictionary *)*userInfo* fetchCompletionHandler:(void ( ^ ) ( UIBackgroundFetchResult ))*completionHandler* ForceResultFetch:(UIBackgroundFetchResult)*resultFetch*</code>

#### Parameters

*userInfo*  
&nbsp;&nbsp;&nbsp;An NSDictionary that contains information related to the remote notification. Provided by the delegate call  

*completionHandler*  
&nbsp;&nbsp;&nbsp;The block-completion to be processed after the download. Provided by the delegate call  

*resultFetch*  
&nbsp;&nbsp;&nbsp;The enumeration that might be overiden by application if needed  

#### Discussion
This API is provided in order to force the fetch result to a specific value.
Use it only if your application need to overide the service.
Otherwise, please use <a href="#//api/name/didReceiveRemoteNotification:fetchCompletionHandler:">didReceiveRemoteNotification:fetchCompletionHandler:</a>

<strong>Warning:</strong> You must enable &ldquo;Remote notifications&rdquo; in your application&rsquo;s Capabilities in order to use this API.
If this capability is not useful to your application, you must use didReceiveRemoteNotification: instead.

#### Declared In
* `SMManager+SilentPush.h`

