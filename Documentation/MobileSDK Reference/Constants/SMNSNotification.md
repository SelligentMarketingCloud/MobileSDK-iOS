# SMNSNotification Constants Reference

**Declared in** SMNSNotification.h  

This file gathers all kSMNotification values used as NSNotification-names and NSNotification data keys

#### Constants

<a name="" title="kSMNotification_Event_ButtonClicked"></a>
<code>kSMNotification_Event_ButtonClicked</code>

An NSNotification with this name is broadcasted when the user interacts with a remote-notification.
It can be used to retrieve user action on a received remote-notification.

<a name="" title="kSMNotification_Event_WillDisplayNotification"></a>
<code>kSMNotification_Event_WillDisplayNotification</code>

An NSNotification with this name is broadcasted shortly before displaying a remote-notification.
It can be used to pause any ongoing work before the Remote Notification is displayed.

<a name="" title="kSMNotification_Event_WillDismissNotification"></a>
<code>kSMNotification_Event_WillDismissNotification</code>

An NSNotification with this name is broadcasted shortly before dismissing the current remote-notification.
It can be used to resume any paused work.

<a name="" title="kSMNotification_Event_DidReceiveRemoteNotification"></a>
<code>kSMNotification_Event_DidReceiveRemoteNotification</code>

An NSNotification with this name is broadcasted shortly after receiving a remote-notification.
It can be used to decide when to display a remote-notification.

<a name="" title="kSMNotification_Event_DidReceiveInAppMessage"></a>
<code>kSMNotification_Event_DidReceiveInAppMessage</code>

An NSNotification with this name is broadcasted shortly after receiving in-app messages.
It can be used to manage the received in-app messages.

<a name="" title="kSMNotification_Event_DidReceiveInAppContent"></a>
<code>kSMNotification_Event_DidReceiveInAppContent</code>

An NSNotification with this name is broadcasted shortly after receiving in-app contents.
It can be used to manage the received in-app contents.

<a name="" title="kSMNotification_Event_DidReceiveDeviceId"></a>
<code>kSMNotification_Event_DidReceiveDeviceId</code>

An NSNotification with this name is broadcasted shortly after receiving device id from mobile platform.
It can be used to manage the received device id.

<a name="" title="kSMNotification_Data_ButtonData"></a>
<code>kSMNotification_Data_ButtonData</code>

NSString representing a key to retrieve an object inside NSNotification.
It can be used to retrieve an SMNotificationButtonData instance, using the key kSMNotification_Data_ButtonData.

<a name="" title="kSMNotification_Data_RemoteNotification"></a>
<code>kSMNotification_Data_RemoteNotification</code>

NSString representing a key to retrieve an object inside NSNotification.
It can be used to retrieve an NSDictionary instance with the push ID and title, using the key kSMNotification_Data_RemoteNotification.

<a name="" title="kSMNotification_Data_InAppMessage"></a>
<code>kSMNotification_Data_InAppMessage</code>

NSString representing a key to retrieve an object inside NSNotification.
It can be used to retrieve an NSDictionary instance with an array of SMNotificationMessage, using the key kSMNotification_Data_InAppMessage.

<a name="" title="kSMNotification_Data_InAppContent"></a>
<code>kSMNotification_Data_InAppContent</code>

NSString representing a key to retrieve an object inside NSNotification.
It can be used to retrieve an NSDictionary instance with an array of in-app contents categories as key and number of in app-contents for the category as value, using the key kSMNotification_Data_InAppContent.

<a name="" title="kSMNotification_Data_DeviceId"></a>
<code>kSMNotification_Data_DeviceId</code>

NSString representing a key to retrieve a string  inside NSNotification.
It can be used to retrieve an NString instance with the device id value, using the key kSMNotification_Data_DeviceId.
