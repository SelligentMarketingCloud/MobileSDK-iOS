//
//  NSString+SMEvent.h
//  MobileSDK
//
//  Created by Gauthier Dumont on 12/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SMEventType.h"

@interface NSString (SMEvent)

+ (NSString*)stringFromSMEventType : (SMEventType) eventType;


@end
