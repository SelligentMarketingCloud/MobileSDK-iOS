//
//  SMEventClickButton.h
//  MobileSDK
//
//  Created by Gauthier Dumont on 09/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMEventAction.h"
#import "SMNotificationButtonData.h"



@interface SMEventButtonClicked : SMEventAction

+ (instancetype)eventWithNotificationButtonData:(SMNotificationButtonData*)button;

@end
