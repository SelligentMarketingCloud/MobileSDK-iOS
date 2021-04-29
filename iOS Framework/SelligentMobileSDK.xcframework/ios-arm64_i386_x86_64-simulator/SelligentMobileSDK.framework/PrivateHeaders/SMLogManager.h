//
//  SMLogManager.h
//  MobileSDK
//
//  Created by Gauthier Dumont on 23/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SMLogManager : NSObject

@property (nonatomic) SMLogLevel logLevel;

+ (instancetype) sharedInstance;

- (void)logString:(NSString*)string LogLevel:(SMLogLevel)logLevel;


@end
