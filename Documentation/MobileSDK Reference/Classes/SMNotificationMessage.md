# SMNotificationMessage Class Reference

**Inherits from** <a href="../Classes/SMInAppMessage.md">SMInAppMessage</a> :   
<a href="../Classes/SMBaseMessage.md">SMBaseMessage</a> :   
NSObject  
**Declared in** SMNotificationMessage.h  

## Tasks

### 

[&nbsp;&nbsp;mediaUrl](#/api/name/mediaUrl) *property* 

[&nbsp;&nbsp;mainAction](#/api/name/mainAction) *property* 

[&nbsp;&nbsp;notificationButtons](#/api/name/notificationButtons) *property* 

## Properties

<a name="/api/name/mainAction" title="mainAction"></a>
### mainAction

<a href="../Classes/SMNotificationButtonData.md">SMNotificationButtonData</a> instance providing the main action behind the remote-notification banner

<code>@property (readonly, nonatomic) SMNotificationButtonData *mainAction</code>

#### See Also

* <code><a href="../Classes/SMNotificationButtonData.md">SMNotificationButtonData</a></code>

#### Declared In
* `SMNotificationMessage.h`

<a name="/api/name/mediaUrl" title="mediaUrl"></a>
### mediaUrl

NSString instance providing url of the Rich media attached to the remote-notification

<code>@property (readonly, nonatomic) NSString *mediaUrl</code>

#### Declared In
* `SMNotificationMessage.h`

<a name="/api/name/notificationButtons" title="notificationButtons"></a>
### notificationButtons

NSArray of <a href="../Classes/SMLink.md">SMLink</a> objects from the remote-notification

<code>@property (readonly, nonatomic) NSArray *notificationButtons</code>

#### Declared In
* `SMNotificationMessage.h`

