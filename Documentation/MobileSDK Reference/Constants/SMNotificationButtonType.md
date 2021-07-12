# SMNotificationButtonType Constants Reference

**Declared in** SMNotificationButtonType.h  

### SMNotificationButtonType

This enumeration declares all known button-type

#### Definition
    typedef NS_ENUM(NSInteger, SMNotificationButtonType ) {   
        
        kSMNotificationButtonType_Unknown = -1,
        
        kSMNotificationButtonType_Simple = 0,
        
        kSMNotificationButtonType_OpenPhoneCall = 1,
        
        kSMNotificationButtonType_OpenSms = 2,
        
        kSMNotificationButtonType_OpenMail = 3,
        
        kSMNotificationButtonType_OpenBrowser = 4,
        
        kSMNotificationButtonType_OpenApplication = 5,
        
        kSMNotificationButtonType_RateApplication = 6,
        
        kSMNotificationButtonType_CustomActionBroadcastEvent = 7,
        
        kSMNotificationButtonType_Return_Text = 8,
        
        kSMNotificationButtonType_Return_Photo = 9,
        
        kSMNotificationButtonType_Return_TextAndPhoto = 10,
        
        kSMNotificationButtonType_Passbook = 11,
        
        kSMNotificationButtonType_DeepLink = 13,
        
    };

#### Constants

<a name="" title="kSMNotificationButtonType_Unknown"></a><code>kSMNotificationButtonType_Unknown</code>

Any received button-type not in this enumeration type will be considered as unknown

<a name="" title="kSMNotificationButtonType_Simple"></a><code>kSMNotificationButtonType_Simple</code>

A button-type that will have no action but when clicked will send back button value to the platform

<a name="" title="kSMNotificationButtonType_OpenPhoneCall"></a><code>kSMNotificationButtonType_OpenPhoneCall</code>

A button-type that will open the Phone application with a ready to use number to dial

<a name="" title="kSMNotificationButtonType_OpenSms"></a><code>kSMNotificationButtonType_OpenSms</code>

A button-type that will open the sms application with a ready to dial sms

<a name="" title="kSMNotificationButtonType_OpenMail"></a><code>kSMNotificationButtonType_OpenMail</code>

A button-type that will open the mail application

<a name="" title="kSMNotificationButtonType_OpenBrowser"></a><code>kSMNotificationButtonType_OpenBrowser</code>

Button that will open a ready to use safari-browser

<a name="" title="kSMNotificationButtonType_OpenApplication"></a><code>kSMNotificationButtonType_OpenApplication</code>

Button that will open a third party application

<a name="" title="kSMNotificationButtonType_RateApplication"></a><code>kSMNotificationButtonType_RateApplication</code>

Button-type which will allow application rating.
This will behave similarly to kSMNotificationButtonType_OpenApplication
In Android terminology, this notion is called &ldquo;Store&rdquo;

<a name="" title="kSMNotificationButtonType_CustomActionBroadcastEvent"></a><code>kSMNotificationButtonType_CustomActionBroadcastEvent</code>

Button that will trigger a notification (broadcast in Android terminology) inside the application for any interested listener.
You may register in your application to a specific event from NSNotificationCenter. The notification is broadcasted as soon as the push is received.
Your back-end team should inform you about the notification-name.
No parameters are currently supported.

<a name="" title="kSMNotificationButtonType_Return_Text"></a><code>kSMNotificationButtonType_Return_Text</code>

Button-type which will allow user to provide back a media-type as answer
Media-type of kind Text

<a name="" title="kSMNotificationButtonType_Return_Photo"></a><code>kSMNotificationButtonType_Return_Photo</code>

Button-type which will allow user to provide back a media-type as answer
Media-type of kind Picture

<a name="" title="kSMNotificationButtonType_Return_TextAndPhoto"></a><code>kSMNotificationButtonType_Return_TextAndPhoto</code>

Button-type which will allow user to provide back a media-type as answer
Media-type of kind Text + Picture

<a name="" title="kSMNotificationButtonType_Passbook"></a><code>kSMNotificationButtonType_Passbook</code>

Button-type which will allow user to add pkpass file inside wallet app

<a name="" title="kSMNotificationButtonType_DeepLink"></a><code>kSMNotificationButtonType_DeepLink</code>

Button-type which will allow user depplink inside specific page in the app

