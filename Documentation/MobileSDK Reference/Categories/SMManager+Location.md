# SMManager(Location) Category Reference

**Declared in** SMManager+Location.h  

## Overview

In order to use the location services features provided by the sdk you will mandatory need to use the lsdk library supporting the plotproject framework .
Otherwise calling the method in this <a href="../Classes/SMManager.md">SMManager</a> category will have no effect and no ios api related to geofencing will be called (as this is all done by the plot project framework)

## Tasks

### 

[&ndash;&nbsp;enableGeoLocation](#/api/name/enableGeoLocation)  

[&ndash;&nbsp;disableGeoLocation](#/api/name/disableGeoLocation)  

[&ndash;&nbsp;isGeoLocationEnabled](#/api/name/isGeoLocationEnabled)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="/api/name/disableGeoLocation" title="disableGeoLocation"></a>
### disableGeoLocation

Disable geolocation services

<code>- (void)disableGeoLocation</code>

#### Discussion
This optional call will disable geolocation services at sdk level. it is independent of iOS location authorisation
Call this API according to your application&rsquo;s need.

#### Declared In
* `SMManager+Location.h`

<a name="/api/name/enableGeoLocation" title="enableGeoLocation"></a>
### enableGeoLocation

Enable geolocation services

<code>- (void)enableGeoLocation</code>

#### Discussion
This optional call will enable geolocation services at sdk level. it is independent of iOS location authorisation
If you use plotproject for geolocation it will be mandatory to call it if you have set enableOnFirstRun to false in the plotconfig.json
Call this API according to your application&rsquo;s need.

#### Declared In
* `SMManager+Location.h`

<a name="/api/name/isGeoLocationEnabled" title="isGeoLocationEnabled"></a>
### isGeoLocationEnabled

Check the geolocation services status

<code>- (BOOL)isGeoLocationEnabled</code>

#### Discussion
This optional call will inform you if geolocation services at sdk level are enabled. it is independent of iOS location authorisation

#### Declared In
* `SMManager+Location.h`

