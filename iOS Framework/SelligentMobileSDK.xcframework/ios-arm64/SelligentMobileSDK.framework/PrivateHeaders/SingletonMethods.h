#define SingletonMethods(_CLASS_NAME_) \
static _CLASS_NAME_ *theInstance = nil;\
\
+ (instancetype)sharedInstance {\
    static dispatch_once_t onceToken;\
    dispatch_once(&onceToken, ^{\
    theInstance = [[self alloc] init];\
    });\
	return theInstance;\
}\

