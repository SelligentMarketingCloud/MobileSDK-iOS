# SMInAppMessage Class Reference

**Inherits from** <a href="../Classes/SMBaseMessage.md">SMBaseMessage</a> :   
NSObject  
**Declared in** SMInAppMessage.h  

## Tasks

### 

[&nbsp;&nbsp;title](#/api/name/title) *property* 

[&nbsp;&nbsp;body](#/api/name/body) *property* 

[&nbsp;&nbsp;arrayMapAnnotations](#/api/name/arrayMapAnnotations) *property* 

[&nbsp;&nbsp;arrayIAMLinks](#/api/name/arrayIAMLinks) *property* 

[&nbsp;&nbsp;iamType](#/api/name/iamType) *property* 

[&nbsp;&nbsp;apsTitle](#/api/name/apsTitle) *property* 

[&nbsp;&nbsp;apsBody](#/api/name/apsBody) *property* 

## Properties

<a name="/api/name/apsBody" title="apsBody"></a>
### apsBody

NSString instance providing the <a href="#/api/name/body">body</a> of the remote-notification

<code>@property (readonly, nonatomic) NSString *apsBody</code>

#### Declared In
* `SMInAppMessage.h`

<a name="/api/name/apsTitle" title="apsTitle"></a>
### apsTitle

NSString instance providing the <a href="#/api/name/title">title</a> of the remote-notification

<code>@property (readonly, nonatomic) NSString *apsTitle</code>

#### Declared In
* `SMInAppMessage.h`

<a name="/api/name/arrayIAMLinks" title="arrayIAMLinks"></a>
### arrayIAMLinks

NSArray of <a href="../Classes/SMLink.md">SMLink</a> objects from the inapp-notification

<code>@property (readonly, nonatomic) NSArray *arrayIAMLinks</code>

#### Declared In
* `SMInAppMessage.h`

<a name="/api/name/arrayMapAnnotations" title="arrayMapAnnotations"></a>
### arrayMapAnnotations

NSArray of <a href="../Classes/SMNotificationAnnotationData.md">SMNotificationAnnotationData</a>  objects for map inapp-notification

<code>@property (readonly, nonatomic) NSArray *arrayMapAnnotations</code>

#### Declared In
* `SMInAppMessage.h`

<a name="/api/name/body" title="body"></a>
### body

NSString instance providing the content of the inapp-notification

<code>@property (readonly, nonatomic) NSString *body</code>

#### Declared In
* `SMInAppMessage.h`

<a name="/api/name/iamType" title="iamType"></a>
### iamType

<a href="../Constants/SMInAppMessageType.md">SMInAppMessageType</a> instance providing the in inapp-notification type

<code>@property (readonly, nonatomic) SMInAppMessageType iamType</code>

#### See Also

* <code><a href="../Constants/SMInAppMessageType.md">SMInAppMessageType</a></code>

#### Declared In
* `SMInAppMessage.h`

<a name="/api/name/title" title="title"></a>
### title

NSString instance providing the title of the inapp-notification

<code>@property (readonly, nonatomic) NSString *title</code>

#### Declared In
* `SMInAppMessage.h`

