# SMManagerSetting(Location) Category Reference

**Declared in** SMManagerSetting+Location.h  

## Overview

This category will help you to enable the geolocation service.

## Tasks

### 

[&ndash;&nbsp;configureLocationService](#/api/name/configureLocationService)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="/api/name/configureLocationService" title="configureLocationService"></a>
### configureLocationService

Optional API to enable location services.

<code>- (void)configureLocationService</code>

#### Discussion
This call is useless if the sdk version is not the one associated to the plotproject framework
However in the case you are using the sdk version associated to plotproject framework, it is the first step to enable Location service.
It is the first step to inform the sdk that geo location services are going to be used by the

<strong>Warning:</strong> To use location service you will mandatory need to have PlotProject.framework in your app and the correct version of the selligent sdk library

#### Declared In
* `SMManagerSetting+Location.h`

