//
//  SMEventIAMOptOut.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 01/12/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMEventSystem.h"

@interface SMEventSetInfoIAM : SMEventSystem


+ (instancetype)eventWithOptOut:(BOOL)optOut;

@end
