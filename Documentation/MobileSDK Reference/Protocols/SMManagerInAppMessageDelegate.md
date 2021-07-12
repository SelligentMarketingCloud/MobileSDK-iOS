# SMManagerInAppMessageDelegate Protocol Reference

**Conforms to** NSObject  
**Declared in** SMManagerInAppMessageDelegate.h  

## Overview

This protocol will help you intercept the inapp messages and allow you to display them your own way or store them somewhere to be shown later.

<h1>SMManagerInAppMessageDelegate <NSObject> :</h1>

## Tasks

### 

[&ndash;&nbsp;displayInAppMessage:](#//api/name/displayInAppMessage:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/displayInAppMessage:" title="displayInAppMessage:"></a>
### displayInAppMessage:

Invoked when an inapp message linked to a remote notification is received by sdk.

<code>- (void)displayInAppMessage:(SMInAppMessage *)*inAppMessage*</code>

#### Parameters

*inAppMessage*  
&nbsp;&nbsp;&nbsp;The inAppMessage object containing all necessary datas for you to display content of the message  

#### Declared In
* `SMManagerInAppMessageDelegate.h`

