//
//  SMLog_Privat.h
//  MobileSDK
//
//  Created by Gauthier Dumont on 23/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//


NSString* stringForLogLevel(SMLogLevel logLevel);

#define L__SMString(...) [NSString stringWithFormat:@"[SMLib:%@]-- %03d %s %@", stringForLogLevel(kSMLogLevel_Location), __LINE__, __PRETTY_FUNCTION__, [NSString stringWithFormat:__VA_ARGS__]]
#define I__SMString(...) [NSString stringWithFormat:@"[SMLib:%@]-- %03d %s %@", stringForLogLevel(kSMLogLevel_Info), __LINE__, __PRETTY_FUNCTION__, [NSString stringWithFormat:__VA_ARGS__]]
#define W__SMString(...) [NSString stringWithFormat:@"[SMLib:%@]-- %03d %s %@", stringForLogLevel(kSMLogLevel_Warning), __LINE__, __PRETTY_FUNCTION__, [NSString stringWithFormat:__VA_ARGS__]]
#define E__SMString(...) [NSString stringWithFormat:@"[SMLib:%@]-- %03d %s %@", stringForLogLevel(kSMLogLevel_Error), __LINE__, __PRETTY_FUNCTION__, [NSString stringWithFormat:__VA_ARGS__]]
#define H__SMString(...) [NSString stringWithFormat:@"[SMLib:%@]-- %03d %s %@", stringForLogLevel(kSMLogLevel_HTTPCall), __LINE__, __PRETTY_FUNCTION__, [NSString stringWithFormat:__VA_ARGS__]]


#define DLogLoc(...)        [[SMLogManager sharedInstance] logString:L__SMString(__VA_ARGS__) LogLevel:kSMLogLevel_Location]
#define DLogInfo(...)       [[SMLogManager sharedInstance] logString:I__SMString(__VA_ARGS__) LogLevel:kSMLogLevel_Info]
#define DLogWarning(...)    [[SMLogManager sharedInstance] logString:W__SMString(__VA_ARGS__) LogLevel:kSMLogLevel_Warning]
#define DLogError(...)      [[SMLogManager sharedInstance] logString:E__SMString(__VA_ARGS__) LogLevel:kSMLogLevel_Error]
#define DLogHTTPCall(...)   [[SMLogManager sharedInstance] logString:H__SMString(__VA_ARGS__) LogLevel:kSMLogLevel_HTTPCall]