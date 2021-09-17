# SMEventUserLogin Class Reference

**Inherits from** <a href="../Classes/SMEventUser.md">SMEventUser</a> :   
<a href="../Classes/SMEvent.md">SMEvent</a> :   
NSObject  
**Declared in** SMEventUserLogin.h  

## Overview

User login event class

<h1>SMEventUserLogin:</h1>

## Tasks

### 

[+&nbsp;eventWithEmail:](#//api/name/eventWithEmail:)  

[+&nbsp;eventWithEmail:Dictionary:](#//api/name/eventWithEmail:Dictionary:)  

[+&nbsp;eventWithDictionary:](#//api/name/eventWithDictionary:)  

<a title="Class Methods" name="class_methods"></a>
## Class Methods

<a name="//api/name/eventWithDictionary:" title="eventWithDictionary:"></a>
### eventWithDictionary:

Create a UserLogin event object that will be sent to platform

<code>+ (instancetype _Nonnull)eventWithDictionary:(NSDictionary *_Nullable)*dict*</code>

#### Parameters

*dict*  
&nbsp;&nbsp;&nbsp;a Dictionary containing an alternate key/value field to search for the user
example: [SMEventUserLogin eventWithDictionary: @{@&ldquo;userID&rdquo;: @&ldquo;1234&rdquo;}];  

#### Return Value
a SMEventUserLogin object

#### Declared In
* `SMEventUserLogin.h`

<a name="//api/name/eventWithEmail:" title="eventWithEmail:"></a>
### eventWithEmail:

Create a UserLogin event object that will be sent to selligent platform when user logged in

<code>+ (instancetype _Nonnull)eventWithEmail:(NSString *_Null_unspecified)*mail*</code>

#### Parameters

*mail*  
&nbsp;&nbsp;&nbsp;the e-mail of the user  

#### Return Value
a SMEventUserLogin object

#### Declared In
* `SMEventUserLogin.h`

<a name="//api/name/eventWithEmail:Dictionary:" title="eventWithEmail:Dictionary:"></a>
### eventWithEmail:Dictionary:

Create a UserLogin event object that will be sent to selligent platform when user logged in

<code>+ (instancetype _Nonnull)eventWithEmail:(NSString *_Null_unspecified)*mail* Dictionary:(NSDictionary&lt;NSString*,NSString*&gt; *_Nullable)*dict*</code>

#### Parameters

*mail*  
&nbsp;&nbsp;&nbsp;the e-mail of the user  

*dict*  
&nbsp;&nbsp;&nbsp;a Dictionary containing a string as data that must be stored and managed by platform
If email is not provided you can use in the dictionary an alternate key/value field to search for the user
example: [SMEventUserLogin eventWithEmail @&ldquo;&rdquo; Dictionary: @{@&ldquo;userID&rdquo;: @&ldquo;1234&rdquo;}];  

#### Return Value
a SMEventUserLogin object

#### Declared In
* `SMEventUserLogin.h`
