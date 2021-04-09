//
//  SMViewController.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 26/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SMNotificationMessage.h"
#import "SMNSNotification.h"

@interface SMNotifMessageViewController : UIViewController


/*!
 *  SMViewController will create a controller depending on the message type
 *
 *  @param notifMessage SMNotificationMessage instance containing notif info
 *
 *  @return ViewController instance which will display buttons
 */
+ (instancetype)viewControllerWithNotificationMessage:(SMNotificationMessage*)notifMessage;


@property (nonatomic, strong) SMNotificationMessage *notifMessage;

-(void)displayMediaContent:(NSNotification *)notif;


@end
