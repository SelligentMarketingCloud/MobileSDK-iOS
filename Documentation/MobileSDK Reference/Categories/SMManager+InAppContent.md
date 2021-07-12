# SMManager(InAppContent) Category Reference

**Declared in** SMManager+InAppContent.h  

## Overview

<h1>Introduction :</h1>

In-Application-Content (IAC) is an optional service which will retrieve messages from the back-end each time the application enters foregrounds at specific frequencies and if connection is available.

Once new messages were retrieved, the library notifies the application about it.

Each IAC is is from a specific type [SMInAppContentType] and is also linked to a category defined by yourself

<h1>Implementation :</h1>

In a nutshell, activate the IAC-service is a one step process:

<ul>
<li>Create an SMManagerSettingIAC instance and inject it in SMManagerSetting with <a href="../Classes/SMManagerSetting.md#//api/name/configureInAppContentServiceWithSetting:">[SMManagerSetting configureInAppContentServiceWithSetting:]</a></li>
</ul>

In order to be notified about new IAC, the application must register to correct notification <em>kSMNotification_Event_DidReceiveInAppContent</em>
(Please read SMNSNotification for additional information).
This notification will provide you with the number of IAC&rsquo;s by category.
Please be aware that it’s the unique application’s chance to capture and store that information.

<h1>Displaying IAC :</h1>

<ul>
<li>With the SDK view controllers:</li>
</ul>

Each IAC is from a specific type for a specific category.

Selligent SDK provide a specific view controller for each type of in app content

<ul>
<li><a href="../Classes/SMInAppContentHTMLViewController.md">SMInAppContentHTMLViewController</a> for IAC of type kSMInAppContentType_HTML</li>
<li><a href="../Classes/SMInAppContentURLViewController.md">SMInAppContentURLViewController</a> for IAC of type kSMInAppContentType_Url</li>
<li><a href="../Classes/SMInAppContentImageViewController.md">SMInAppContentImageViewController</a> for IAC of type kSMInAppContentType_Image</li>
</ul>

You can check each of this object for more information about how to use them.

All this view controller can also be customised with the use of <a href="../Classes/SMInAppContentStyleOptions.md">SMInAppContentStyleOptions</a>.

Once the sdk has provided you with the correct view controller

<code>SMInAppContentURLViewController* vc = [SMInAppContentURLViewController viewControllerForCategory:@"anycategory"];</code>

You can call <a href="#//api/name/showSMController:InContainerView:OfParentViewController:">showSMController:InContainerView:OfParentViewController:</a> if you expect to display the In App Content in a UIContainerView that is defined in your app :

<code>[[SMManager sharedInstance] showSMController:vc InContainerView:_containerView OfParentViewController:self];</code>

Or you can present it to be displayed in full screen mode :

<code>[self presentViewController:vc animated:YES completion:nil];</code>

Be aware that if your UIContainerView is defined in storyboard and that no category has been provided to it you will need to inform it with prepareForSegue:sender:

<code>-(void) prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
if([segue.identifier isEqualToString:@"YourSegue"]){
_sminappcontentviewcontroller = segue.destinationViewController;
[self.sminappcontentviewcontroller setCategory:@"anycategory"];
}
}</code>

<ul>
<li>With your own view controllers</li>
</ul>

In this case you can call <a href="#//api/name/getInAppContentsForCategory:Type:">getInAppContentsForCategory:Type:</a> or <a href="#//api/name/getInAppContentsForCategory:Type:Max:">getInAppContentsForCategory:Type:Max:</a>

Those methods will present you an NSArray of <a href="../Classes/SMInAppContentMessage.md">SMInAppContentMessage</a> with all (or a maximum number, precised by the Max parameter) IAC for a category and for a type.

If you decide to use this way of interacting with IAC it is important that you keep in mind that you will be responsible of the display of the content and you will have to call to <a href="#//api/name/setInAppContentAsSeen:">setInAppContentAsSeen:</a> whenever an InAppContent is showed to the user and to <a href="#//api/name/executeLinkAction:InAppContent:">executeLinkAction:InAppContent:</a> whenever user interact with an action link of the in app content.

<h1>Fetching modes :</h1>

IAC may be retrieved from two different modes corresponding to the application&rsquo;s state:

<ul>
<li>Foreground-fetch &ndash; When the application is in foreground.</li>
<li>Background-fetch &ndash; When the application is in background.</li>
</ul>

Each of these modes is <strong>optional</strong>. In other words, you can use one mode or the other, or even both at the same time.
Choosing the adequate mode depends on the application&rsquo;s need and can be managed by the application&rsquo;s developper.
Off course, to allow the SDK to retrieve IAC as fast as possible, we recommand using both modes at the same time.

Following documentation explains how to activate each mode:

<h1>Fetching IAC in foreground :</h1>

In order to retrieve IAC while the application is running, make sure to do the folllowing:

<ul>
<li>Create and configure an <a href="../Classes/SMManagerSettingIAC.md">SMManagerSettingIAC</a> instance accordingly.</li>
<li>Provide the created <a href="../Classes/SMManagerSettingIAC.md">SMManagerSettingIAC</a> instance to <a href="../Classes/SMManager.md">SMManager</a> before starting the library</li>
</ul>

<h1>Fetching IAC in background :</h1>

Initially, this mode has been added as a complementary-option to the foreground-mode.
However, it can be used as a single-fetch-mode if fits best your application&rsquo;s need.

To understand better how often the OS will execute the background-fetch, make sure to read the following <a href="https://developer.apple.com/library/ios/documentation/iPhone/Conceptual/iPhoneOSProgrammingGuide/BackgroundExecution/BackgroundExecution.md#//apple_ref/doc/uid/TP40007072-CH4-SW56">Apple-documentation</a>

In order to support this mode, make sure to :

<ul>
<li>Create the <a href="../Classes/SMManagerSettingIAC.md">SMManagerSettingIAC</a> instance accordingly.</li>
<li>Provide the created <a href="../Classes/SMManagerSettingIAC.md">SMManagerSettingIAC</a> instance to <a href="../Classes/SMManager.md">SMManager</a> before starting the library.</li>
<li>In the application&rsquo;s target, enable the following: Capabilities > Background Modes > Background Fetch</li>
<li>Implement performFetchWithCompletionHandler: in UIApplication&rsquo;s delegate (under delegate method application:performFetchWithCompletionHandler:)</li>
</ul>

<h1>SMManager+InAppContent :</h1>

## Tasks

### 

[&ndash;&nbsp;showSMController:InContainerView:OfParentViewController:](#//api/name/showSMController:InContainerView:OfParentViewController:)  

[&ndash;&nbsp;getInAppContentsForCategory:Type:](#//api/name/getInAppContentsForCategory:Type:)  

[&ndash;&nbsp;getInAppContentsForCategory:Type:Max:](#//api/name/getInAppContentsForCategory:Type:Max:)  

[&ndash;&nbsp;setInAppContentAsSeen:](#//api/name/setInAppContentAsSeen:)  

[&ndash;&nbsp;executeLinkAction:InAppContent:](#//api/name/executeLinkAction:InAppContent:)  

[&ndash;&nbsp;performIACFetchWithCompletionHandler:](#//api/name/performIACFetchWithCompletionHandler:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="//api/name/executeLinkAction:InAppContent:" title="executeLinkAction:InAppContent:"></a>
### executeLinkAction:InAppContent:

This method must be called whenever a user has clicked on a link that you  manage to display

<code>- (void)executeLinkAction:(SMLink *)*link* InAppContent:(SMInAppContentMessage *)*inAppContent*</code>

#### Parameters

*link*  
&nbsp;&nbsp;&nbsp;a <a href="../Classes/SMLink.md">SMLink</a> object  

*inAppContent*  
&nbsp;&nbsp;&nbsp;a <a href="../Classes/SMInAppContentMessage.md">SMInAppContentMessage</a> object
   

#### Discussion
This will allow the sdk to inform the services that a link has been clicked and to process the action associated with the link

#### Declared In
* `SMManager+InAppContent.h`

<a name="//api/name/getInAppContentsForCategory:Type:" title="getInAppContentsForCategory:Type:"></a>
### getInAppContentsForCategory:Type:

This will return an array of In App Contents

<code>- (NSArray *)getInAppContentsForCategory:(NSString *)*category* Type:(SMInAppContentType)*type*</code>

#### Parameters

*category*  
&nbsp;&nbsp;&nbsp;NSString the category for which you want your In App Contents  

*type*  
&nbsp;&nbsp;&nbsp;An <a href="../Constants/SMInAppContentType.md">SMInAppContentType</a> - Url, Html or image  

#### Return Value
returns an NSArray of <a href="../Classes/SMInAppContentMessage.md">SMInAppContentMessage</a>
 

#### Discussion
All the IAC will be retrieved

#### Declared In
* `SMManager+InAppContent.h`

<a name="//api/name/getInAppContentsForCategory:Type:Max:" title="getInAppContentsForCategory:Type:Max:"></a>
### getInAppContentsForCategory:Type:Max:

This will return an array of In App Contents

<code>- (NSArray *)getInAppContentsForCategory:(NSString *)*category* Type:(SMInAppContentType)*type* Max:(int)*max*</code>

#### Parameters

*category*  
&nbsp;&nbsp;&nbsp;An NSString the category for which you want your In App Contents  

*type*  
&nbsp;&nbsp;&nbsp;An <a href="../Constants/SMInAppContentType.md">SMInAppContentType</a> - Url, Html or image  

*max*  
&nbsp;&nbsp;&nbsp;An int  

#### Return Value
returns an NSArray of <a href="../Classes/SMInAppContentMessage.md">SMInAppContentMessage</a>
 

#### Discussion
This overload allows you to define the max number of IAC to retrieve

#### Declared In
* `SMManager+InAppContent.h`

<a name="//api/name/performIACFetchWithCompletionHandler:" title="performIACFetchWithCompletionHandler:"></a>
### performIACFetchWithCompletionHandler:

This will allow the SDK to fetch the IAC when the OS will allow so.

<code>- (void)performIACFetchWithCompletionHandler:(void ( ^ ) ( UIBackgroundFetchResult ))*completionHandler*</code>

#### Parameters

*completionHandler*  
&nbsp;&nbsp;&nbsp;The block-completion to be processed. Provided by the delegate call  

#### Discussion
To be included in application:performFetchWithCompletionHandler:

<strong>Warning:</strong> Make sure to enable background-fetch in the application&rsquo;s capabilities

#### Declared In
* `SMManager+InAppContent.h`

<a name="//api/name/setInAppContentAsSeen:" title="setInAppContentAsSeen:"></a>
### setInAppContentAsSeen:

This method will mark an IAC as viewed, save it in the cache and send the Open event to the server

<code>- (void)setInAppContentAsSeen:(SMInAppContentMessage *)*inAppContent*</code>

#### Parameters

*inAppContent*  
&nbsp;&nbsp;&nbsp;an <a href="../Classes/SMInAppContentMessage.md">SMInAppContentMessage</a> object
   

#### Discussion
If the display mode is set to 0 (display once), the IAC will be discarded from the cache and will not be provided to you anymore with <a href="#//api/name/getInAppContentsForCategory:Type:">getInAppContentsForCategory:Type:</a> or <a href="#//api/name/getInAppContentsForCategory:Type:Max:">getInAppContentsForCategory:Type:Max:</a>

#### Declared In
* `SMManager+InAppContent.h`

<a name="//api/name/showSMController:InContainerView:OfParentViewController:" title="showSMController:InContainerView:OfParentViewController:"></a>
### showSMController:InContainerView:OfParentViewController:

Call when SDK has already provided you with a <a href="../Classes/SMInAppContentViewController.md">SMInAppContentViewController</a> (of any type : <a href="../Classes/SMInAppContentHTMLViewController.md">SMInAppContentHTMLViewController</a> , <a href="../Classes/SMInAppContentImageViewController.md">SMInAppContentImageViewController</a> or <a href="../Classes/SMInAppContentURLViewController.md">SMInAppContentURLViewController</a>) and you want to display it in a UIContainerView defined anywhere in your app.

<code>- (void)showSMController:(SMInAppContentViewController *)*smViewController* InContainerView:(UIView *)*containerView* OfParentViewController:(UIViewController *)*parentViewController*</code>

#### Parameters

*smViewController*  
&nbsp;&nbsp;&nbsp;a <a href="../Classes/SMInAppContentViewController.md">SMInAppContentViewController</a>  

*containerView*  
&nbsp;&nbsp;&nbsp;the UIContainerView in which In App Content will be displayed  

*parentViewController*  
&nbsp;&nbsp;&nbsp;the parent UIViewController of your UIContainerView  

#### Discussion
The viewcontroller will take all available space in  the UIContainerView

#### Declared In
* `SMManager+InAppContent.h`

