# SMBaseMessage Class Reference

**Inherits from** NSObject  
**Declared in** SMBaseMessage.h  

## Overview

This is the Base class for message (push notif, in app message and in app content)

<h1>SMBaseMessage :</h1>

## Tasks

### 

[&nbsp;&nbsp;idMessage](#//api/name/idMessage) *property* 

[&nbsp;&nbsp;)](#//api/name/)) *property* 

[&nbsp;&nbsp;receptionDate](#//api/name/receptionDate) *property* 

[&nbsp;&nbsp;expirationDate](#//api/name/expirationDate) *property* 

[&nbsp;&nbsp;creationDate](#//api/name/creationDate) *property* 

[&nbsp;&nbsp;isViewed](#//api/name/isViewed) *property* 

[&nbsp;&nbsp;isDeleted](#//api/name/isDeleted) *property* 

## Properties

<a name="//api/name/)" title=")"></a>
### )

NSDate instance providing the creation date of the message (<b class="deprecated">Deprecated:</b><span class="deprecated"> Deprecated use receptionDate  instead</span>)

<code>@property (nonatomic) NSDate *__deprecated __deprecated_msg ( &quot;Use receptionDate instead&quot; )</code>

#### Declared In
* `SMBaseMessage.h`

<a name="//api/name/creationDate" title="creationDate"></a>
### creationDate

NSDate instance providing the creation date of the message

<code>@property (nonatomic) NSDate *creationDate</code>

#### Declared In
* `SMBaseMessage.h`

<a name="//api/name/expirationDate" title="expirationDate"></a>
### expirationDate

NSDate instance providing the expiration date of the message

<code>@property (nonatomic) NSDate *expirationDate</code>

#### Declared In
* `SMBaseMessage.h`

<a name="//api/name/idMessage" title="idMessage"></a>
### idMessage

NSString instance providing the id of the message

<code>@property (nonatomic) NSString *idMessage</code>

#### Declared In
* `SMBaseMessage.h`

<a name="//api/name/isDeleted" title="isDeleted"></a>
### isDeleted

bool instance infiorming if the message has  been deleted

<code>@property (nonatomic) bool isDeleted</code>

#### Declared In
* `SMBaseMessage.h`

<a name="//api/name/isViewed" title="isViewed"></a>
### isViewed

bool instance infiorming if the message has already been displayed and viewed by user

<code>@property (nonatomic) bool isViewed</code>

#### Declared In
* `SMBaseMessage.h`

<a name="//api/name/receptionDate" title="receptionDate"></a>
### receptionDate

NSDate instance providing the reception date on sdk side of the message

<code>@property (nonatomic) NSDate *receptionDate</code>

#### Declared In
* `SMBaseMessage.h`

