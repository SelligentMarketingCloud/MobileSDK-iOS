# SMInAppContentMessage Class Reference

**Inherits from** <a href="../Classes/SMBaseMessage.md">SMBaseMessage</a> :   
NSObject  
**Declared in** SMInAppContentMessage.h  

## Tasks

### 

[&nbsp;&nbsp;title](#/api/name/title) *property* 

[&nbsp;&nbsp;body](#/api/name/body) *property* 

[&nbsp;&nbsp;category](#/api/name/category) *property* 

[&nbsp;&nbsp;iacType](#/api/name/iacType) *property* 

[&nbsp;&nbsp;)](#/api/name/)) *property* 

[&nbsp;&nbsp;arrayIACLinks](#/api/name/arrayIACLinks) *property* 

## Properties

<a name="/api/name/)" title=")"></a>
### )

NSDate instance providing the expiration date of the message

<code>@property (readonly, nonatomic) NSDate *contentExpiration __deprecated __deprecated_msg ( &quot;Use expirationDate instead.&quot; )</code>

#### Discussion


<strong>Warning:</strong> Deprecated - use expirationDate on <a href="../Classes/SMBaseMessage.md">SMBaseMessage</a> instead

#### Declared In
* `SMInAppContentMessage.h`

<a name="/api/name/arrayIACLinks" title="arrayIACLinks"></a>
### arrayIACLinks

NSArray of <a href="../Classes/SMLink.md">SMLink</a> objects

<code>@property (readonly, nonatomic) NSArray *arrayIACLinks</code>

#### Declared In
* `SMInAppContentMessage.h`

<a name="/api/name/body" title="body"></a>
### body

NSString instance providing the content of the message

<code>@property (readonly, nonatomic) NSString *body</code>

#### Declared In
* `SMInAppContentMessage.h`

<a name="/api/name/category" title="category"></a>
### category

NSString instance providing the category of the message

<code>@property (readonly, nonatomic) NSString *category</code>

#### Declared In
* `SMInAppContentMessage.h`

<a name="/api/name/iacType" title="iacType"></a>
### iacType

<a href="../Constants/SMInAppContentType.md">SMInAppContentType</a> instance providing the in app content type of the message

<code>@property (readonly, nonatomic) SMInAppContentType iacType</code>

#### See Also

* <code><a href="../Constants/SMInAppContentType.md">SMInAppContentType</a></code>

#### Declared In
* `SMInAppContentMessage.h`

<a name="/api/name/title" title="title"></a>
### title

NSString instance providing the title of the message

<code>@property (readonly, nonatomic) NSString *title</code>

#### Declared In
* `SMInAppContentMessage.h`

