# SMNSNotification Constants Reference

**Declared in** SMNSNotification.h  

### SMNSNotification

This file gathers all kSMNotification values used as NSNotification-names and NSNotification data keys

#### Constants

<a name="" title="kSMNotification_Event_ButtonClicked"></a>
<code>kSMNotification_Event_ButtonClicked</code>

An NSNotification with this name is broadcasted when the user interacts with a remote-notification.
Useful to retrieve user's actions on a received remote-notification, developers may listen to kSMNotification_Event_ButtonClicked from NSNotificationCenter.

<a name="" title="kSMNotification_Event_WillDisplayNotification"></a>
<code>kSMNotification_Event_WillDisplayNotification</code>

An NSNotification with this name is broadcasted shortly before Dismissing the current remote-notification.
Primary-application may use this notification to resume any paused work (see kSMNotification_Event_WillDisplayNotification).

<a name="" title="kSMNotification_Event_DidReceiveRemoteNotification"></a>
<code>kSMNotification_Event_DidReceiveRemoteNotification</code>

An NSNotification with this name is broadcasted shortly after receiving a remote-notification.
Primary-application may use this notification to decide when to display any remote-notification

<a name="" title="kSMNotification_Event_DidReceiveInAppMessage"></a>
<code>kSMNotification_Event_DidReceiveInAppMessage</code>

An NSNotification with this name is broadcasted shortly after receiving InApp messages.
Primary-application may use this notification to manage the received InApp messages.

<a name="" title="kSMNotification_Event_DidReceiveInAppContent"></a>
<code>kSMNotification_Event_DidReceiveInAppContent</code>

An NSNotification with this name is broadcasted shortly after receiving device id from mobile platform.
Primary-application may use this notification to manage the received device id.

<a name="" title="kSMNotification_Data_ButtonData"></a>
<code>kSMNotification_Data_ButtonData</code>

NSString representing a key to retrieve an object inside NSNotification.
Use the key kSMNotification_Data_RemoteNotification to retrieve an NSDictionary instance with push ID and name.

<a name="" title="kSMNotification_Data_InAppMessage"></a>
<code>kSMNotification_Data_InAppMessage</code>

NSString representing a key to retrieve an object inside NSNotification.
Use the key kSMNotification_Data_InAppMessage to retrieve an NSDictionary instance with an array of SMNotificationMessage.

<a name="" title="kSMNotification_Data_InAppContent"></a>
<code>kSMNotification_Data_InAppContent</code>

NSString representing a key to retrieve an object inside NSNotification.
Use the key kSMNotification_Data_InAppContent to retrieve an NSDictionary instance with an array of  in app contents categories as key and number of in app contents for the category as value.

<a name="" title="kSMNotification_Data_DeviceId"></a>
<code>kSMNotification_Data_DeviceId</code>

NSString representing a key to retrieve a string  inside NSNotification.
Use the key kSMNotification_Data_DeviceId to retrieve an NString instance with device id value.
