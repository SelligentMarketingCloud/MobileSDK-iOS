//
//  NSBundle+SMPlistVerificator.h
//  MobileSDK
//
//  Created by Samy Ziat on 29/12/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SMLocationAuthorisationType.h"


@interface NSBundle (SMPlistVerificator)


+ (BOOL)verifyPListLocationSetUp:(SMLocationAuthorisationType)type;


@end
