# SMLogLevel Constants Reference

**Declared in** SMLog.h  

### SMLogLevel

Enumeration type for the log granularity

#### Definition
    typedef NS_OPTIONS(NSInteger, SMLogLevel ) {   
        
        kSMLogLevel_None = 0,
        
        kSMLogLevel_Info = 1 &lt; &lt; 1,
        
        kSMLogLevel_Warning = 1 &lt; &lt; 2,
        
        kSMLogLevel_Error = 1 &lt; &lt; 3,
        
        kSMLogLevel_HTTPCall = 1 &lt; &lt; 4,
        
        kSMLogLevel_Location = 1 &lt; &lt; 5,
        
        kSMLogLevel_All = 0 xFF,
        
    };

#### Constants

<a name="" title="kSMLogLevel_None"></a><code>kSMLogLevel_None</code>

No log printed at all.
This is the suggested log-level for release.

<a name="" title="kSMLogLevel_Info"></a><code>kSMLogLevel_Info</code>

Default log-entry.
Basically inform user when library starts / ends.

<a name="" title="kSMLogLevel_Warning"></a><code>kSMLogLevel_Warning</code>

Only warning messages are printed

<a name="" title="kSMLogLevel_Error"></a><code>kSMLogLevel_Error</code>

Only Error messages are being printed

<a name="" title="kSMLogLevel_HTTPCall"></a><code>kSMLogLevel_HTTPCall</code>

Print only HTTP-requests stuff

<a name="" title="kSMLogLevel_Location"></a><code>kSMLogLevel_Location</code>

Print only location-requests stuff

<a name="" title="kSMLogLevel_All"></a><code>kSMLogLevel_All</code>

Print everything. Do not use for release!!!

