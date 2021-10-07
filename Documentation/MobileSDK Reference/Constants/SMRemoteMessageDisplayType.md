# SMRemoteMessageDisplayType Constants Reference

**Declared in** SMRemoteMessageDisplayType.h  

### SMRemoteMessageDisplayType

Defines the behaviour that the SDK will apply when receiving a remote-notification in foreground.

#### Definition
    typedef NS_ENUM(NSInteger, SMRemoteMessageDisplayType ) {   
        
        kSMRemoteMessageDisplayType_Unknown = 0,
        
        kSMRemoteMessageDisplayType_None = 1,
        
        kSMRemoteMessageDisplayType_Notification = 2,
        
        kSMRemoteMessageDisplayType_Automatic = 3,
        
    };

#### Constants

<a name="" title="kSMRemoteMessageDisplayType_Unknown"></a><code>kSMRemoteMessageDisplayType_Unknown</code>

Default value when not explicitly set.

<a name="" title="kSMRemoteMessageDisplayType_None"></a><code>kSMRemoteMessageDisplayType_None</code>

No Push nor in-app notifications will be displayed.

<a name="" title="kSMRemoteMessageDisplayType_Notification"></a><code>kSMRemoteMessageDisplayType_Notification</code>

A Push notification will be displayed.

<a name="" title="kSMRemoteMessageDisplayType_Automatic"></a><code>kSMRemoteMessageDisplayType_Automatic</code>

An in-app notification will be displayed (when there is an in-app notification available within the remote-notification payload).

