# SMBaseMessage Class Reference

**Inherits from** NSObject  
**Declared in** SMBaseMessage.h  

## Overview

This is the Base class for message (push notif, in app message and in app content)

## Tasks

### 

[&nbsp;&nbsp;idMessage](#/api/name/idMessage) *property* 

[&nbsp;&nbsp;)](#/api/name/)) *property* 

[&nbsp;&nbsp;receptionDate](#/api/name/receptionDate) *property* 

[&nbsp;&nbsp;expirationDate](#/api/name/expirationDate) *property* 

[&nbsp;&nbsp;creationDate](#/api/name/creationDate) *property* 

[&nbsp;&nbsp;isViewed](#/api/name/isViewed) *property* 

## Properties

<a name="/api/name/)" title=")"></a>
### )

NSDate instance providing the creation date of the message

<code>@property (readonly, nonatomic) NSDate *dateCreation __deprecated __deprecated_msg ( &quot;Use receptionDate instead&quot; )</code>

#### Discussion


<strong>Warning:</strong> Deprecated - use <a href="#/api/name/receptionDate">receptionDate</a>  instead

#### Declared In
* `SMBaseMessage.h`

<a name="/api/name/creationDate" title="creationDate"></a>
### creationDate

NSDate instance providing the creation date of the message

<code>@property (readonly, nonatomic) NSDate *creationDate</code>

#### Declared In
* `SMBaseMessage.h`

<a name="/api/name/expirationDate" title="expirationDate"></a>
### expirationDate

NSDate instance providing the expiration date of the message

<code>@property (readonly, nonatomic) NSDate *expirationDate</code>

#### Declared In
* `SMBaseMessage.h`

<a name="/api/name/idMessage" title="idMessage"></a>
### idMessage

NSString instance providing the id of the message

<code>@property (readonly, nonatomic) NSString *idMessage</code>

#### Declared In
* `SMBaseMessage.h`

<a name="/api/name/isViewed" title="isViewed"></a>
### isViewed

bool instance infiorming if the message has already been displayed and viewed by user

<code>@property (readonly, nonatomic) bool isViewed</code>

#### Declared In
* `SMBaseMessage.h`

<a name="/api/name/receptionDate" title="receptionDate"></a>
### receptionDate

NSDate instance providing the reception date on sdk side of the message

<code>@property (readonly, nonatomic) NSDate *receptionDate</code>

#### Declared In
* `SMBaseMessage.h`

