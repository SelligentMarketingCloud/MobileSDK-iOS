# SMManager(SMEvent) Category Reference

**Declared in** SMManager+SMEvent.h  

## Overview

Sending any set of data to the back-end can be done with the API <a href="#/api/name/sendSMEvent:">sendSMEvent:</a>

<h2>Event type</h2>

Few default events are already available for you to be used.
They all inhirit from <a href="../Classes/SMEvent.md">SMEvent</a> and are configurable through their constructors.
At the time of this writing, they default provided events are :

<ul>
<li><a href="../Classes/SMEventUserLogin.md">SMEventUserLogin</a></li>
<li><a href="../Classes/SMEventUserLogout.md">SMEventUserLogout</a></li>
<li><a href="../Classes/SMEventUserRegistration.md">SMEventUserRegistration</a></li>
<li><a href="../Classes/SMEventUserUnregistration.md">SMEventUserUnregistration</a></li>
</ul>

<h2>Custom events</h2>

Simplest case is to create an instance of <a href="../Classes/SMEvent.md">SMEvent</a>.
Then, inject your data in it (Code example bellow).

Also, you can subclass from default provided event-type or even create your own sub-classes of events.

The library will keep sending events to the backend as far as they inhirit from <a href="../Classes/SMEvent.md">SMEvent</a>.

<h2>Injecting custom data in events</h2>

Any information can be appended to an event and sent to your back-end.
This is basically done by creating a dictionary containing your data and injecting it as in the example bellow.

```
//  Dictionary with your custom data

NSDictionary *dictMyCustomData = @{@&ldquo;MyKey&rdquo;: @&ldquo;MyValue&rdquo;};

//  Create the event

SMEvent *event = [SMEvent eventWithDictionary:dictMyCustomData];

//  Sent the event to the back-end

[[SMManager sharedInstance] sendSMEvent:event];
```

The exemple above is considered as a custom event.
The same principle can be applied to any event-type subclasses stated above or to your own subclasses of <a href="../Classes/SMEvent.md">SMEvent</a>.

## Tasks

### 

[&ndash;&nbsp;sendSMEvent:](#/api/name/sendSMEvent:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="/api/name/sendSMEvent:" title="sendSMEvent:"></a>
### sendSMEvent:

Send an event to the Selligent platform

<code>- (void)sendSMEvent:(SMEvent *_Nullable)*event*</code>

#### Parameters

*event*  
&nbsp;&nbsp;&nbsp;An <a href="../Classes/SMEvent.md">SMEvent</a> object containing your event  

#### Discussion
Should you want to track the event&rsquo;s response, please check <a href="../Classes/SMEvent.md">SMEvent</a>

#### See Also

* <code><a href="../Classes/SMEvent.md">SMEvent</a></code>

#### Declared In
* `SMManager+SMEvent.h`

