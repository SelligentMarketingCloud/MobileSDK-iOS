//
//  NSString+SMLocationType.h
//  MobileSDK
//
//  Created by Samy Ziat on 18/12/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SMLocationNature.h"

@interface NSString (SMLocationNature)

+ (NSString*)stringFromLocationNature:(SMLocationNature)nature;

@end
