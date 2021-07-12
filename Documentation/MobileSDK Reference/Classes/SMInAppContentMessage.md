# SMInAppContentMessage Class Reference

**Inherits from** <a href="../Classes/SMBaseMessage.md">SMBaseMessage</a> :   
NSObject  
**Declared in** SMInAppContentMessage.h  

## Overview

<h1>SMInAppContentMessage :</h1>

## Tasks

### 

[&nbsp;&nbsp;title](#//api/name/title) *property* 

[&nbsp;&nbsp;body](#//api/name/body) *property* 

[&nbsp;&nbsp;category](#//api/name/category) *property* 

[&nbsp;&nbsp;iacType](#//api/name/iacType) *property* 

[&nbsp;&nbsp;)](#//api/name/)) *property* 

[&nbsp;&nbsp;arrayIACLinks](#//api/name/arrayIACLinks) *property* 

## Properties

<a name="//api/name/)" title=")"></a>
### )

NSDate instance providing the expiration date of the message (<b class="deprecated">Deprecated:</b><span class="deprecated"> Deprecated use expirationDate on SMBaseMessage instead</span>)

<code>@property (nonatomic) NSDate *__deprecated __deprecated_msg ( &quot;Use expirationDate instead.&quot; )</code>

#### Declared In
* `SMInAppContentMessage.h`

<a name="//api/name/arrayIACLinks" title="arrayIACLinks"></a>
### arrayIACLinks

NSArray of <a href="../Classes/SMLink.md">SMLink</a> objects

<code>@property (nonatomic) NSArray *arrayIACLinks</code>

#### Declared In
* `SMInAppContentMessage.h`

<a name="//api/name/body" title="body"></a>
### body

NSString instance providing the content of the message

<code>@property (nonatomic) NSString *body</code>

#### Declared In
* `SMInAppContentMessage.h`

<a name="//api/name/category" title="category"></a>
### category

NSString instance providing the category of the message

<code>@property (nonatomic) NSString *category</code>

#### Declared In
* `SMInAppContentMessage.h`

<a name="//api/name/iacType" title="iacType"></a>
### iacType

<a href="../Constants/SMInAppContentType.md">SMInAppContentType</a> instance providing the in app content type of the message

<code>@property (nonatomic) SMInAppContentType iacType</code>

#### Declared In
* `SMInAppContentMessage.h`

<a name="//api/name/title" title="title"></a>
### title

NSString instance providing the title of the message

<code>@property (nonatomic) NSString *title</code>

#### Declared In
* `SMInAppContentMessage.h`

