# SMManager(UserNotification) Category Reference

**Declared in** SMManager+UserNotification.h  

## Overview

In addition to the implementation of category <a href="../Categories/SMManager+RemoteNotification.md">SMManager(RemoteNotification)</a>, this category will supply a support of iOS 10 and usage of UserNotifications framework

Make sure to read the category <a href="../Categories/SMManager+RemoteNotification.md">SMManager(RemoteNotification)</a> to learn more about remote-notification for support of iOS version 8 and 9 and to correctly register for remote notification.

If you build against iOS 10+ and you use UserNotifications framework we then recommend you to implement those 2 methods of UNUserNotificationCenterDelegate in your appdelegate:

<ul>
<li><a href="../Classes/SMManager.md">SMManager</a> <a href="#//api/name/didReceiveNotificationResponse:">didReceiveNotificationResponse:</a></li>
<li><a href="../Classes/SMManager.md">SMManager</a> <a href="#//api/name/didReceiveNotificationResponse:withCompletionHandler:">didReceiveNotificationResponse:withCompletionHandler:</a></li>
<li><a href="../Classes/SMManager.md">SMManager</a> <a href="#//api/name/willPresentNotification:">willPresentNotification:</a></li>
<li><a href="../Classes/SMManager.md">SMManager</a> <a href="#//api/name/willPresentNotification:withCompletionHandler:">willPresentNotification:withCompletionHandler:</a></li>
</ul>

Register your appdelegate to the UNUserNotificationCenter by adding the following two lines in the didFinishLaunchingWithOptions delegate.

<code>UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];</code>

<code>center.delegate = self;</code>

<strong>Notification extensions</strong>

In this category you will also find the support for notification extensions target (content and service)

Init extensions (to be used for each extensions that will be added to your project):

<ul>
<li><a href="../Classes/SMManager.md">SMManager</a> <a href="#//api/name/startExtensionWithSetting:">startExtensionWithSetting:</a></li>
</ul>

Notification content extension :

<ul>
<li><a href="../Classes/SMManager.md">SMManager</a> <a href="#//api/name/didReceiveNotification:">didReceiveNotification:</a></li>
</ul>

Notification service extension :

<ul>
<li><a href="../Classes/SMManager.md">SMManager</a> <a href="#//api/name/didReceiveNotificationRequest:">didReceiveNotificationRequest:</a></li>
<li><a href="../Classes/SMManager.md">SMManager</a> <a href="#//api/name/didReceiveNotificationRequest:withContentHandler:">didReceiveNotificationRequest:withContentHandler:</a></li>
<li><a href="../Classes/SMManager.md">SMManager</a> <a href="#//api/name/serviceExtensionTimeWillExpire">serviceExtensionTimeWillExpire</a></li>
</ul>

<h1>SMManager+UserNotifications :</h1>

## Tasks

### 

[&ndash;&nbsp;didReceiveNotificationResponse:](#//api/name/didReceiveNotificationResponse:)  

[&ndash;&nbsp;didReceiveNotificationResponse:withCompletionHandler:](#//api/name/didReceiveNotificationResponse:withCompletionHandler:)  

[&ndash;&nbsp;willPresentNotification:](#//api/name/willPresentNotification:)  

[&ndash;&nbsp;willPresentNotification:withCompletionHandler:](#//api/name/willPresentNotification:withCompletionHandler:)  

[&ndash;&nbsp;startExtensionWithSetting:](#//api/name/startExtensionWithSetting:)  

[&ndash;&nbsp;didReceiveNotification:](#//api/name/didReceiveNotification:)  

[&ndash;&nbsp;didReceiveNotificationRequest:](#//api/name/didReceiveNotificationRequest:)  

[&ndash;&nbsp;didReceiveNotificationRequest:withContentHandler:](#//api/name/didReceiveNotificationRequest:withContentHandler:)  

[&ndash;&nbsp;serviceExtensionTimeWillExpire](#//api/name/serviceExtensionTimeWillExpire)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/didReceiveNotification:" title="didReceiveNotification:"></a>
### didReceiveNotification:

Optional API, when building against iOS 10+ and using a Notification Content Extension target, to be included in NotificationViewController didReceiveNotification:
Handle the push action buttons that may be present in the selligent notification payload

<code>- (void)didReceiveNotification:(UNNotification *_Nonnull)*notification*</code>

#### Parameters

*notification*  
&nbsp;&nbsp;&nbsp;A UNNotification that contains information about the notification.  

#### Discussion
This allows the SDK to display the action buttons in the push notification outside of the app.

The category that must be added to Info.plist of the Notification Content Extension target is mandatory and must be SELLIGENT_BUTTON.

#### Declared In
* `SMManager+UserNotification.h`

<a name="//api/name/didReceiveNotificationRequest:" title="didReceiveNotificationRequest:"></a>
### didReceiveNotificationRequest:

Optional API, when building against iOS 10+ and using a Notification Service Extension target, to be included in NotificationService <a href="#//api/name/didReceiveNotificationRequest:withContentHandler:">didReceiveNotificationRequest:withContentHandler:</a>
Handle the selligent payload before displaying it to the user

<code>- (UNMutableNotificationContent *_Nullable)didReceiveNotificationRequest:(UNNotificationRequest *_Nonnull)*request*</code>

#### Parameters

*request*  
&nbsp;&nbsp;&nbsp;A UNNotificationRequest that contains the original notification request.  

#### Return Value
UNMutableNotificationContent the updated content of the payload.

#### Discussion
This allows the SDK to decrypt the payload before displaying it to the user if you have activated the encryption of push.you can use this method if you have decided to trigger the block to execute with the modified content by yourself otherwise if you want the sdk to manage all steps please use <a href="../Classes/SMManager.md">SMManager</a> <a href="#//api/name/didReceiveNotificationRequest:withContentHandler:">didReceiveNotificationRequest:withContentHandler:</a>

#### Declared In
* `SMManager+UserNotification.h`

<a name="//api/name/didReceiveNotificationRequest:withContentHandler:" title="didReceiveNotificationRequest:withContentHandler:"></a>
### didReceiveNotificationRequest:withContentHandler:

Optional API, when building against iOS 10+ and using a Notification Service Extension target, to be included in NotificationService didReceiveNotificationRequest:withContentHandler:
Handle the selligent payload before displaying it to the user

<code>- (void)didReceiveNotificationRequest:(UNNotificationRequest *_Nonnull)*request* withContentHandler:(void ( ^ _Nullable ) ( UNNotificationContent *_Nonnull ))*contentHandler*</code>

#### Parameters

*request*  
&nbsp;&nbsp;&nbsp;A UNNotificationRequest that contains the original notification request.  

*contentHandler*  
&nbsp;&nbsp;&nbsp;The block to execute with the modified content  

#### Discussion
This allows the SDK to decrypt the payload before displaying it to the user if you have activated the encryption of push.you can use this method if you want the sdk to manage the display of the notification after teh decryption has been processed

#### Declared In
* `SMManager+UserNotification.h`

<a name="//api/name/didReceiveNotificationResponse:" title="didReceiveNotificationResponse:"></a>
### didReceiveNotificationResponse:

Mandatory API when used inside App in AppDelegate (but is optional for Notification Content Extension), when building against iOS 10+ and using UserNotifications framework, to be included in userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler.
Handle and display remote notification.

<code>- (void)didReceiveNotificationResponse:(UNNotificationResponse *_Nonnull)*response*</code>

#### Parameters

*response*  
&nbsp;&nbsp;&nbsp;A UNNotificationResponse that contains information about the notification and the interaction the user has done with it. Provided by the delegate call  

#### Discussion
This method is mandatory when used in AppDelegate but is optional when implementing Notification content extension. When used in Notification Content Extension it  provides to the sdk the ability to process the action that should be triggered without opening the app (in this case don&rsquo;t forget to call the completionhandler with the desired UNNotificationContentExtensionResponseOption

#### Declared In
* `SMManager+UserNotification.h`

<a name="//api/name/didReceiveNotificationResponse:withCompletionHandler:" title="didReceiveNotificationResponse:withCompletionHandler:"></a>
### didReceiveNotificationResponse:withCompletionHandler:

Mandatory API, when building against iOS 10+ and using UserNotifications framework, to be included in userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler
Handle and display remote notification.

<code>- (void)didReceiveNotificationResponse:(UNNotificationResponse *_Nonnull)*response* withCompletionHandler:(void ( ^ _Nullable ) ( void ))*completionHandler*</code>

#### Parameters

*response*  
&nbsp;&nbsp;&nbsp;A UNNotificationResponse that contains information about the notification and the interaction the user has done with it. Provided by the delegate call  

*completionHandler*  
&nbsp;&nbsp;&nbsp;A completion that will be called.  

#### Declared In
* `SMManager+UserNotification.h`

<a name="//api/name/serviceExtensionTimeWillExpire" title="serviceExtensionTimeWillExpire"></a>
### serviceExtensionTimeWillExpire

Optional API, when building against iOS 10+ and using a Notification Service Extension target, to be included in NotificationService serviceExtensionTimeWillExpire
Tells the sdk that the extension is about to be terminated.

<code>- (void)serviceExtensionTimeWillExpire</code>

#### Discussion
this method is to be implemented only if you have implemented <a href="../Classes/SMManager.md">SMManager</a> <a href="#//api/name/didReceiveNotificationRequest:withContentHandler:">didReceiveNotificationRequest:withContentHandler:</a>

#### Declared In
* `SMManager+UserNotification.h`

<a name="//api/name/startExtensionWithSetting:" title="startExtensionWithSetting:"></a>
### startExtensionWithSetting:

Mandatory method which allows sdk initialisation when building against iOS 10+ and using Notification Extensions .
To be included in <a href="#//api/name/didReceiveNotification:">didReceiveNotification:</a> when implementing Notification content extension and/or in <a href="#//api/name/didReceiveNotificationRequest:withContentHandler:">didReceiveNotificationRequest:withContentHandler:</a> when implementing Notification service extension

<code>- (void)startExtensionWithSetting:(SMManagerSetting *_Nonnull)*setting*</code>

#### Parameters

*setting*  
&nbsp;&nbsp;&nbsp;mandatory <a href="../Classes/SMManagerSetting.md">SMManagerSetting</a> instance to start-up the library - this setting mus tbe initialised with only url, clienID and privateKet provided by selligent  

#### Discussion
This method is mandatory in order to start / initialise the library and should be called in in <a href="#//api/name/didReceiveNotification:">didReceiveNotification:</a> when implementing Notification content extension and/or in <a href="#//api/name/didReceiveNotificationRequest:withContentHandler:">didReceiveNotificationRequest:withContentHandler:</a> when implementing Notification service extension

#### See Also

* <code><a href="../Classes/SMManagerSetting.md">SMManagerSetting</a></code>

#### Declared In
* `SMManager+UserNotification.h`

<a name="//api/name/willPresentNotification:" title="willPresentNotification:"></a>
### willPresentNotification:

Mandatory API, when building against iOS 10+ and using UserNotifications framework, to be included in userNotificationCenter:willPresentNotification:withCompletionHandler
Handle the remote notification when app is in foreground.

<code>- (void)willPresentNotification:(UNNotification *_Nonnull)*notification*</code>

#### Parameters

*notification*  
&nbsp;&nbsp;&nbsp;A UNNotification that contains information about the notification.  

#### Discussion
This allows the SDK to inform the services that the Selligent push has been received.

Calling this method does not call any CompletionHandler. You will have to call the completion handler with your preferred option.

For example you can call inside this delegate :
completionHandler(UNNotificationPresentationOptionAlert);

#### Declared In
* `SMManager+UserNotification.h`

<a name="//api/name/willPresentNotification:withCompletionHandler:" title="willPresentNotification:withCompletionHandler:"></a>
### willPresentNotification:withCompletionHandler:

Mandatory API, when building against iOS 10+ and using UserNotifications framework, to be included in userNotificationCenter:willPresentNotification:withCompletionHandler
Handle the remote notification when app is in foreground and call the completionHandler(UNNotificationPresentationOptionAlert) by default.

<code>- (void)willPresentNotification:(UNNotification *_Nonnull)*notification* withCompletionHandler:(void ( ^ _Nullable ) ( UNNotificationPresentationOptions options ))*completionHandler*</code>

#### Parameters

*notification*  
&nbsp;&nbsp;&nbsp;A UNNotification that contains information about the notification.  

*completionHandler*  
&nbsp;&nbsp;&nbsp;A Completion handler that will be called with UNNotificationPresentationOptionAlert by default.  

#### Discussion
This allows the SDK to inform the services that the Selligent push has been received.

You don&rsquo;t need to call the completion handler in the delegate anymore.

#### Declared In
* `SMManager+UserNotification.h`

