//
//  SMViewController+NavigationBar.h
//  MobileSDK
//
//  Created by Samy Ziat on 11/08/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMNotifMessageViewController.h"

@interface SMNotifMessageViewController (NavigationBar)

//  Default navigationBar with Close + Hamburger (if any)
- (void)createNavigationBar;



/**
 *  Called to dismiss the ViewController
 *
 *  @warning ViewController to remove might be a UIViewController or UINavigationController
 *  This depends of the type of UIViewController the client-applicaiton is using.
 *  @param sender Might be a UIButton or UIBarButtonItem
 */
- (IBAction)removeViewController:(id)sender;

@end
