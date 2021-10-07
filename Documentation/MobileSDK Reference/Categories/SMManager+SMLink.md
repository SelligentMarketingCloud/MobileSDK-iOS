# SMManager(SMLink) Category Reference

**Declared in** SMManager+SMLink.h  

## Overview

This category will help you to manage specific behaviour related to <a href="../Classes/SMLink.md">SMLink</a>.

## Tasks

### 

[&ndash;&nbsp;universalLinksDelegate:](#/api/name/universalLinksDelegate:)  

[&ndash;&nbsp;setLinkAsClicked:fromMessage:](#/api/name/setLinkAsClicked:fromMessage:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="/api/name/setLinkAsClicked:fromMessage:" title="setLinkAsClicked:fromMessage:"></a>
### setLinkAsClicked:fromMessage:

Tells to the SDK that a certain <a href="../Classes/SMLink.md">SMLink</a> object has been clicked.
The SDK will send a clicked event to the Selligent platform.

<code>- (void)setLinkAsClicked:(SMLink *_Nullable)*link* fromMessage:(SMNotificationMessage *_Nullable)*notificationMessage*</code>

#### Parameters

*link*  
&nbsp;&nbsp;&nbsp;<a href="../Classes/SMLink.md">SMLink</a> that needs to be marked as clicked.  

*notificationMessage*  
&nbsp;&nbsp;&nbsp;The <a href="../Classes/SMNotificationMessage.md">SMNotificationMessage</a> from where the link was extracted.  

#### Discussion
This is a convinient method when the behaviour when receiving a remote-notification is handled at App side
and the standard events need to be sent back to the Selligent platform.

<strong>Warning:</strong> The App will be fully responsible of possible event duplication in the Selligent platform when implementing this method,
as each execution will trigger a new event, so make sure to just trigger it once if you don&rsquo;t want this to happen.

#### See Also

* <code><a href="../Classes/SMLink.md">SMLink</a></code>

* <code><a href="../Classes/SMNotificationMessage.md">SMNotificationMessage</a></code>

#### Declared In
* `SMManager+SMLink.h`

<a name="/api/name/universalLinksDelegate:" title="universalLinksDelegate:"></a>
### universalLinksDelegate:

Used to let the app manage the behaviour of &ldquo;deeplink&rdquo; button types containing universal links.

<code>- (void)universalLinksDelegate:(id&lt;SMManagerUniversalLinksDelegate&gt; _Nullable)*delegate*</code>

#### Parameters

*delegate*  
&nbsp;&nbsp;&nbsp;An object implementing <a href="../Protocols/SMManagerUniversalLinksDelegate.md">SMManagerUniversalLinksDelegate</a> methods  

#### Discussion
This setting will allow you to manage the behaviour of the click in a &ldquo;deeplink&rdquo; button type that contains an universal link.
In order to do it, the delegate object should implement <a href="../Protocols/SMManagerUniversalLinksDelegate.md#/api/name/executeLinkAction:">[SMManagerUniversalLinksDelegate executeLinkAction:]</a> method, it will provide the app with the defined NSURL.

#### See Also

* <code><a href="../Protocols/SMManagerUniversalLinksDelegate.md">SMManagerUniversalLinksDelegate</a></code>

#### Declared In
* `SMManager+SMLink.h`

