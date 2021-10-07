# SMInAppRefreshType Constants Reference

**Declared in** SMInAppRefreshType.h  

### SMInAppRefreshType

#### Definition
    typedef NS_ENUM(NSInteger, SMInAppRefreshType ) {   
        
        kSMIA_RefreshType_None,
        
        kSMIA_RefreshType_Minutely,
        
        kSMIA_RefreshType_Hourly,
        
        kSMIA_RefreshType_Daily,
        
    };

#### Constants

<a name="" title="kSMIA_RefreshType_None"></a><code>kSMIA_RefreshType_None</code>

This explicitely disable the In App fetch  mecahnism

<a name="" title="kSMIA_RefreshType_Minutely"></a><code>kSMIA_RefreshType_Minutely</code>

Allow to fetch In App Minutely (to be used only in development)

<a name="" title="kSMIA_RefreshType_Hourly"></a><code>kSMIA_RefreshType_Hourly</code>

Allow to fetch In App hourly

<a name="" title="kSMIA_RefreshType_Daily"></a><code>kSMIA_RefreshType_Daily</code>

Allow to fetch In App Daily

