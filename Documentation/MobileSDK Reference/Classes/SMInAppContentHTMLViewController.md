# SMInAppContentHTMLViewController Class Reference

**Inherits from** <a href="../Classes/SMInAppContentViewController.md">SMInAppContentViewController</a> :   
UIViewController  
**Declared in** SMInAppContentHTMLViewController.h  

## Overview

a view controller for HTML In App Content

<h1>SMInAppContentHTMLViewController :</h1>

## Tasks

### 

[+&nbsp;viewControllerForCategory:](#//api/name/viewControllerForCategory:)  

[+&nbsp;viewControllerForCategory:AndOptions:](#//api/name/viewControllerForCategory:AndOptions:)  

[+&nbsp;viewControllerForCategory:InNumberOfBoxes:](#//api/name/viewControllerForCategory:InNumberOfBoxes:)  

[+&nbsp;viewControllerForCategory:InNumberOfBoxes:AndOptions:](#//api/name/viewControllerForCategory:InNumberOfBoxes:AndOptions:)  

<a title="Class Methods" name="class_methods"></a>
## Class Methods

<a name="//api/name/viewControllerForCategory:" title="viewControllerForCategory:"></a>
### viewControllerForCategory:

This will provide you a custom viewcontroller with all HTML in app content for a specific category

<code>+ (instancetype)viewControllerForCategory:(NSString *)*category*</code>

#### Parameters

*category*  
&nbsp;&nbsp;&nbsp;a NSString of the desired category of In App Content  

#### Return Value
a SMInAppContentHTMLViewController

#### Discussion
The viewcontroller will take all available space in screen and will contain a close button if it is presented as it is. Otherwise the app will have to define a UIContainerView which will contain the view controller

#### Declared In
* `SMInAppContentHTMLViewController.h`

<a name="//api/name/viewControllerForCategory:AndOptions:" title="viewControllerForCategory:AndOptions:"></a>
### viewControllerForCategory:AndOptions:

This will provide you a custom viewcontroller with all HTML in app content for a specific category

<code>+ (instancetype)viewControllerForCategory:(NSString *)*category* AndOptions:(SMInAppContentStyleOptions *)*options*</code>

#### Parameters

*category*  
&nbsp;&nbsp;&nbsp;a NSString of the desired category of In App Content  

*options*  
&nbsp;&nbsp;&nbsp;a <a href="../Classes/SMInAppContentStyleOptions.md">SMInAppContentStyleOptions</a> object allowing you to customise the in app content  

#### Return Value
a SMInAppContentHTMLViewController

#### Discussion
The viewcontroller will take all available space in screen and will contain a close button if it is presented as it is. Otherwise the app will have to define a UIContainerView which will contain the view controller

#### Declared In
* `SMInAppContentHTMLViewController.h`

<a name="//api/name/viewControllerForCategory:InNumberOfBoxes:" title="viewControllerForCategory:InNumberOfBoxes:"></a>
### viewControllerForCategory:InNumberOfBoxes:

This will provide you a custom viewcontroller with HTML in app content for a specific category

<code>+ (instancetype)viewControllerForCategory:(NSString *)*category* InNumberOfBoxes:(int)*numberofboxes*</code>

#### Parameters

*category*  
&nbsp;&nbsp;&nbsp;a NSString of the desired category of In App Content  

*numberofboxes*  
&nbsp;&nbsp;&nbsp;an int corresponding to the maximum numbers of.md boxes that the view controller must contain  

#### Return Value
a SMInAppContentHTMLViewController

#### Discussion
The viewcontroller will take all available space in screen and will contain a close button if it is presented as it is. Otherwise the app will have to provide a UIContainerView which will contain the view controller

#### Declared In
* `SMInAppContentHTMLViewController.h`

<a name="//api/name/viewControllerForCategory:InNumberOfBoxes:AndOptions:" title="viewControllerForCategory:InNumberOfBoxes:AndOptions:"></a>
### viewControllerForCategory:InNumberOfBoxes:AndOptions:

This will provide you a custom viewcontroller with HTML in app content for a specific category

<code>+ (instancetype)viewControllerForCategory:(NSString *)*category* InNumberOfBoxes:(int)*numberofboxes* AndOptions:(SMInAppContentStyleOptions *)*options*</code>

#### Parameters

*category*  
&nbsp;&nbsp;&nbsp;a NSString of the desired category of In App Content  

*numberofboxes*  
&nbsp;&nbsp;&nbsp;an int corresponding to the maximum numbers of.md boxes that the view controller must contain  

*options*  
&nbsp;&nbsp;&nbsp;a <a href="../Classes/SMInAppContentStyleOptions.md">SMInAppContentStyleOptions</a> object allowing you to customise the in app content  

#### Return Value
a SMInAppContentHTMLViewController

#### Discussion
The viewcontroller will take all available space in screen and will contain a close button if it is presented as it is. Otherwise the app will have to provide a UIContainerView which will contain the view controller

#### Declared In
* `SMInAppContentHTMLViewController.h`

