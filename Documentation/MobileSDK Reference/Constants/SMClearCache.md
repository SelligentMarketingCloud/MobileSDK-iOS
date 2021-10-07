# SMClearCache Constants Reference

**Declared in** SMClearCache.h  

### SMClearCache

Enumeration used to define how often the SDK&rsquo;s cache should automaticaly clear itself

#### Definition
    typedef NS_ENUM(NSInteger, SMClearCache ) {   
        
        kSMClearCache_Auto,
        
        kSMClearCache_None,
        
        kSMClearCache_Week,
        
        kSMClearCache_Month,
        
        kSMClearCache_Quarter,
        
    };

#### Constants

<a name="" title="kSMClearCache_Auto"></a><code>kSMClearCache_Auto</code>

This is the default value.

<a name="" title="kSMClearCache_None"></a><code>kSMClearCache_None</code>

This explicitely disable the SDK-cache mechanism

<a name="" title="kSMClearCache_Week"></a><code>kSMClearCache_Week</code>

Clear the cache weekly

<a name="" title="kSMClearCache_Month"></a><code>kSMClearCache_Month</code>

Clear the cache each month

<a name="" title="kSMClearCache_Quarter"></a><code>kSMClearCache_Quarter</code>

Clear the cache every three months

