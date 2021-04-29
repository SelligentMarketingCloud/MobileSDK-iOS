//
//  SMNotifButtonViewController.h
//  MobileSDK
//
//  Created by Samy Ziat on 11/09/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SMLink_privat.h"


@interface SMNotifButtonViewController : UIViewController

@property (nonatomic, strong) SMNotificationButtonData *notifButtonData;

+ (instancetype)viewControllerWithNotificationButtonData:(SMNotificationButtonData*)notifBtnData;


@end
