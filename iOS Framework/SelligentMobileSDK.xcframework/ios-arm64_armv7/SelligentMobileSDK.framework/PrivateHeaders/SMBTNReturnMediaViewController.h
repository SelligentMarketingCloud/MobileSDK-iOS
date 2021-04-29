//
//  SMNotifReturnMediaViewController.h
//  MobileSDK
//
//  Created by Samy Ziat on 08/09/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//


#import "SMNotifButtonViewController.h"

#import "SMEventReturnMedia.h"

#import "UIDevice+SMSystemInfo.h"



@interface SMBTNReturnMediaViewController : SMNotifButtonViewController





//  Children may call these methods if needed
- (IBAction)validatePressed:(UIBarButtonItem*)sender;
- (IBAction)showPickerController_TakePicture:(UIBarButtonItem*)sender;
- (IBAction)showPickerController_Library:(UIBarButtonItem*)sender;


//  Children may overide these methods if needed
- (void)viewDidLoad_ConfigureView;
- (void)handleResultedImage:(UIImage*)image;
- (SMEventReturnMedia*)retrieveEventReturnMedia;


@end
