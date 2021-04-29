//
//  SMInAppViewController_privat.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 12/04/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import "SMInAppContentViewController.h"
#import "SMInAppContentStyleOptions.h"


@interface SMInAppContentViewController ()
/*!
 *  Confirm if the current event should be cached or not
 *  @discussion If the event fail to be delivered to your backend, then by default, it is cached into an internal queue.
 *  After a while, the library will automaticly try to send it again.
 *  Should you want to prevent this behaviour, feel free to set this property to FALSE.
 *  By default, it is set to TRUE
 */
@property (nonatomic) SMInAppContentType type;

/**
 *  If you manage to use SMInAppContentViewController in a UIContainerView.
 *  Should you want to handle this property yourself, you can set this property to FALSE before starting the library
 *  Default value is set to TRUE
 */
@property (nonatomic) bool isWrappedInContainer;

@property (nonatomic, strong) SMInAppContentMessage *notifMessage;
@property (nonatomic, strong) NSArray *arrayMessage;
@property (nonatomic) long numberOfBoxesToDisplay;
@property (strong,atomic) SMInAppContentStyleOptions *styleOptions;

- (void)addButtonDismiss;

- (instancetype)initViewControllerType:(SMInAppContentType)type ForCategory:(NSString*)category InNumberOfBoxes:(NSNumber*) numberofboxes AndOptions:(SMInAppContentStyleOptions *)options;

@end
