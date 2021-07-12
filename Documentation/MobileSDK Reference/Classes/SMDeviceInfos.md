# SMDeviceInfos Class Reference

**Inherits from** NSObject  
**Declared in** SMDeviceInfos.h  

## Overview

<h1>SMDeviceInfos :</h1>

## Tasks

### 

[&nbsp;&nbsp;externalId](#//api/name/externalId) *property* 

[+&nbsp;defaultDeviceInfos](#//api/name/defaultDeviceInfos)  

[+&nbsp;deviceInfosWithExternalId:](#//api/name/deviceInfosWithExternalId:)  

## Properties

<a name="//api/name/externalId" title="externalId"></a>
### externalId

Any External Id in your possession that you wish to transmit to the back-end

<code>@property (nonatomic) NSString *externalId</code>

#### Discussion
NSString
By default, it is an empty string

#### Declared In
* `SMDeviceInfos.h`

<a title="Class Methods" name="class_methods"></a>
## Class Methods

<a name="//api/name/defaultDeviceInfos" title="defaultDeviceInfos"></a>
### defaultDeviceInfos

Create a generic deviceinfos object

<code>+ (instancetype _Nullable)defaultDeviceInfos</code>

#### Return Value
a SMDeviceInfos object

#### Declared In
* `SMDeviceInfos.h`

<a name="//api/name/deviceInfosWithExternalId:" title="deviceInfosWithExternalId:"></a>
### deviceInfosWithExternalId:

Create a deviceinfos object with an external id property already set with the value provided

<code>+ (instancetype _Nullable)deviceInfosWithExternalId:(NSString *_Nullable)*externalId*</code>

#### Parameters

*externalId*  
&nbsp;&nbsp;&nbsp;a string containing the id you want to provide to the back-end  

#### Return Value
a SMDeviceInfos object

#### Declared In
* `SMDeviceInfos.h`

