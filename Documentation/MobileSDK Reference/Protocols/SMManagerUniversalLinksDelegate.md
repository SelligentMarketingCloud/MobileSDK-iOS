# SMManagerUniversalLinksDelegate Protocol Reference

**Conforms to** NSObject  
**Declared in** SMManagerUniversalLinksDelegate.h  

## Overview

This protocol will give you the possibility to manage the behaviour when clicking a &ldquo;deeplink&rdquo; button type containing an universal link.

## Tasks

### 

[&ndash;&nbsp;executeLinkAction:](#/api/name/executeLinkAction:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="/api/name/executeLinkAction:" title="executeLinkAction:"></a>
### executeLinkAction:

Invoked when a &ldquo;deeplink&rdquo; button type, whose URL scheme is HTTP or HTTPS, is clicked

<code>- (void)executeLinkAction:(NSURL *_Nonnull)*url*</code>

#### Parameters

*url*  
&nbsp;&nbsp;&nbsp;The NSURL introduced as value of the button that has been clicked  

#### Declared In
* `SMManagerUniversalLinksDelegate.h`

