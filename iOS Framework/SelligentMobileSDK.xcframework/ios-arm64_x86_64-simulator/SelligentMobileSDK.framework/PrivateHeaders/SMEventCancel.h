//
//  SMEventCancel.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 24/11/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMEventAction.h"
#import "SMNotificationButtonData.h"

@interface SMEventCancel : SMEventAction

+ (instancetype)eventWithNotificationButtonData:(SMNotificationButtonData*)button;

@end
