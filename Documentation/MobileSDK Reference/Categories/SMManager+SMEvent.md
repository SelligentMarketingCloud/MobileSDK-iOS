# SMManager(SMEvent) Category Reference

**Declared in** SMManager+SMEvent.h  

## Overview

<h1>Sending events :</h1>

Sending any set of data to the back-end can be done with the API <a href="#//api/name/sendSMEvent:">sendSMEvent:</a>

<h1>Event type :</h1>

Few default events are already available for you to be used.
They all inhirit from <a href="../Classes/SMEvent.md">SMEvent</a> and are configurable through their constructors.
At the time of this writing, they default provided events are :

<ul>
<li><a href="../Classes/SMEventUserLogin.md">SMEventUserLogin</a></li>
<li><a href="../Classes/SMEventUserLogout.md">SMEventUserLogout</a></li>
<li><a href="../Classes/SMEventUserRegistration.md">SMEventUserRegistration</a></li>
<li><a href="../Classes/SMEventUserUnregistration.md">SMEventUserUnregistration</a></li>
</ul>

<h1>Custom events :</h1>

Simplest case is to create an instance of <a href="../Classes/SMEvent.md">SMEvent</a>.
Then, inject your data in it (Code example bellow).

Also, you can subclass from default provided event-type or even create your own sub-classes of events.

The library will keep sending events to the backend as far as they inhirit from <a href="../Classes/SMEvent.md">SMEvent</a>.

<h1>Injecting custom data in events :</h1>

Any information can be appended to an event and sent to your back-end.
This is basically done by creating a dictionary containing your data and injecting it as in the example bellow.

<code>
//  Dictionary with your custom data
NSDictionary *dictMyCustomData = @{@"MyKey": @"MyValue"};
//  Create the event
SMEvent *event = [SMEvent eventWithDictionary:dictMyCustomData];
//  Sent the event to the back-end
[[SMManager sharedInstance] sendSMEvent:event];
</code>

The exemple above is considered as a custom event.
The same principle can be applied to any event-type subclasses stated above or to your own subclasses of <a href="../Classes/SMEvent.md">SMEvent</a>.

<h1>SMManager+<a href="../Classes/SMEvent.md">SMEvent</a> :</h1>

## Tasks

### 

[&ndash;&nbsp;sendSMEvent:](#//api/name/sendSMEvent:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/sendSMEvent:" title="sendSMEvent:"></a>
### sendSMEvent:

Send an event to the Selligent platform

<code>- (void)sendSMEvent:(SMEvent *)*event*</code>

#### Parameters

*event*  
&nbsp;&nbsp;&nbsp;An <a href="../Classes/SMEvent.md">SMEvent</a> object containing your event  

#### Discussion
Should you want to track the event&rsquo;s response, please check <a href="../Classes/SMEvent.md">SMEvent</a>

#### Declared In
* `SMManager+SMEvent.h`

