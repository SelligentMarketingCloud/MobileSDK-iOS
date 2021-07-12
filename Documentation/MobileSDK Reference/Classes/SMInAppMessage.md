# SMInAppMessage Class Reference

**Inherits from** <a href="../Classes/SMBaseMessage.md">SMBaseMessage</a> :   
NSObject  
**Declared in** SMInAppMessage.h  

## Overview

<h1>SMInAppMessage :</h1>

## Tasks

### 

[&nbsp;&nbsp;title](#//api/name/title) *property* 

[&nbsp;&nbsp;body](#//api/name/body) *property* 

[&nbsp;&nbsp;arrayMapAnnotations](#//api/name/arrayMapAnnotations) *property* 

[&nbsp;&nbsp;arrayIAMLinks](#//api/name/arrayIAMLinks) *property* 

[&nbsp;&nbsp;iamType](#//api/name/iamType) *property* 

## Properties

<a name="//api/name/arrayIAMLinks" title="arrayIAMLinks"></a>
### arrayIAMLinks

NSArray of <a href="../Classes/SMLink.md">SMLink</a> objects

<code>@property (nonatomic) NSArray *arrayIAMLinks</code>

#### Declared In
* `SMInAppMessage.h`

<a name="//api/name/arrayMapAnnotations" title="arrayMapAnnotations"></a>
### arrayMapAnnotations

NSArray of <a href="../Classes/SMNotificationAnnotationData.md">SMNotificationAnnotationData</a>  objects for map In App message

<code>@property (nonatomic) NSArray *arrayMapAnnotations</code>

#### Declared In
* `SMInAppMessage.h`

<a name="//api/name/body" title="body"></a>
### body

NSString instance providing the content of the message

<code>@property (nonatomic) NSString *body</code>

#### Declared In
* `SMInAppMessage.h`

<a name="//api/name/iamType" title="iamType"></a>
### iamType

<a href="../Constants/SMInAppMessageType.md">SMInAppMessageType</a> instance providing the in app message  type

<code>@property (nonatomic) SMInAppMessageType iamType</code>

#### Declared In
* `SMInAppMessage.h`

<a name="//api/name/title" title="title"></a>
### title

NSString instance providing the title of the message

<code>@property (nonatomic) NSString *title</code>

#### Declared In
* `SMInAppMessage.h`

