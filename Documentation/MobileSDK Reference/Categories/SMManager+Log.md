# SMManager(Log) Category Reference

**Declared in** SMManager+Log.h  

## Overview

This category will help you debug the library.
Please check <a href="../Constants/SMLogLevel.md">SMLogLevel</a> for all available possibilities.

Should you want to get back to us, please set logLevel to kSMLogLevel_All and provide with console logs.

<h1>SMManager+Log :</h1>

## Tasks

### 

[&ndash;&nbsp;applyLogLevel:](#//api/name/applyLogLevel:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/applyLogLevel:" title="applyLogLevel:"></a>
### applyLogLevel:

Set the log level of the library console

<code>- (void)applyLogLevel:(SMLogLevel)*logLevel*</code>

#### Parameters

*logLevel*  
&nbsp;&nbsp;&nbsp;<a href="../Constants/SMLogLevel.md">SMLogLevel</a> enumeration type. Default = kSMLogLevel_None  

#### Discussion
This is an optional setting that may help you debug the library calls.
This call can be done at any time (before or after starting the library).
However, in order to avoid missing any error log, we recommand setting this value before starting the library.

<strong>Warning:</strong> It is developer&rsquo;s responsability to enable log-level in Debug or release mode.
No distinction are being aplied by the library.
For obvious performance reason, it is always recommended to turn log off in release mode.

#### Declared In
* `SMManager+Log.h`

