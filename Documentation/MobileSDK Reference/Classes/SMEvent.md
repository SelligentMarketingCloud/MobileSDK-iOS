# SMEvent Class Reference

**Inherits from** NSObject  
**Declared in** SMEvent.h  

## Overview

This is the Base class for all type of events

## Tasks

### 

[&nbsp;&nbsp;shouldCache](#/api/name/shouldCache) *property* 

[+&nbsp;eventWithDictionary:](#/api/name/eventWithDictionary:)  

[&ndash;&nbsp;applyBlockSuccess:BlockFailure:](#/api/name/applyBlockSuccess:BlockFailure:)  

## Properties

<a name="/api/name/shouldCache" title="shouldCache"></a>
### shouldCache

Confirm if the current event should be cached or not

<code>@property (nonatomic) BOOL shouldCache</code>

#### Discussion
If the event fail to be delivered to your backend, then by default, it is cached into an internal queue.
After a while, the library will automaticly try to send it again.
Should you want to prevent this behaviour, feel free to set this property to FALSE.
By default, it is set to TRUE

#### Declared In
* `SMEvent.h`

<a title="Class Methods" name="class_methods"></a>
## Class Methods

<a name="/api/name/eventWithDictionary:" title="eventWithDictionary:"></a>
### eventWithDictionary:

Create a generic event object that will be sent to platform

<code>+ (instancetype _Nonnull)eventWithDictionary:(NSDictionary *_Nullable)*dict*</code>

#### Parameters

*dict*  
&nbsp;&nbsp;&nbsp;A Dictionary containing any kind of custom datas that must be stored and managed by platform  

#### Return Value
An SMEvent object

#### Declared In
* `SMEvent.h`

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="/api/name/applyBlockSuccess:BlockFailure:" title="applyBlockSuccess:BlockFailure:"></a>
### applyBlockSuccess:BlockFailure:

Allow to initialize a success block and/or a failure block that will be triggered after an event is sent to the platform

<code>- (void)applyBlockSuccess:(SMCompletionBlockSuccess _Nullable)*blockSuccess* BlockFailure:(SMCompletionBlockFailure _Nullable)*blockFailure*</code>

#### Parameters

*blockSuccess*  
&nbsp;&nbsp;&nbsp;An <a href="../Blocks/SMCompletionBlockSuccess.md">SMCompletionBlockSuccess</a> block that will be triggered if the send to the platform is successfull  

*blockFailure*  
&nbsp;&nbsp;&nbsp;An <a href="../Blocks/SMCompletionBlockFailure.md">SMCompletionBlockFailure</a> block that will be triggered if the send to the platform has failed  

#### Discussion
This method may be used as follow:

```
NSDictionary *dictMyCustomData = @{@&ldquo;MyKey&rdquo;: @&ldquo;MyValue&rdquo;};

SMEvent *event = [SMEvent eventWithDictionary:dictMyCustomData];

[event applyBlockSuccess:^(SMSuccess *success) {

//  My code for success}

BlockFailure:^(SMFailure *failure) {

//  My code for failure }];

[[SMManager sharedInstance] sendSMEvent:event];
```

This method is optional. Use it only if you need it.

<strong>Warning:</strong> It is developer&rsquo;s responsability to make sure no strong retrain cycles are added to the completion-blocks.
Make sure to read the following <a href="https://developer.apple.com/library/ios/documentation/Cocoa/Conceptual/ProgrammingWithObjectiveC/WorkingwithBlocks/WorkingwithBlocks.md#//apple_ref/doc/uid/TP40011210-CH8-SW16">Apple documentation.</a>

#### See Also

* <code><a href="../Blocks/SMCompletionBlockSuccess.md">SMCompletionBlockSuccess</a></code>

* <code><a href="../Blocks/SMCompletionBlockFailure.md">SMCompletionBlockFailure</a></code>

#### Declared In
* `SMEvent.h`

