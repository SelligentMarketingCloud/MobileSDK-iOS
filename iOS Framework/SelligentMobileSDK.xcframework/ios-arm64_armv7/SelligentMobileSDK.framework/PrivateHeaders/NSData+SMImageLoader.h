//
//  NSData+SMImageLoader.h
//  MobileSDK
//
//  Created by Samy Ziat on 12/08/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (SMImageLoader)


//  Icon for button-hamburger-option
+ (instancetype)dataForImage_Hamburger;

//  Icon for a cross to close
+ (instancetype)dataForImage_Close;

//  Icon for a check-send
+ (instancetype)dataForImage_Validate;

//  Icon for a Camera
+ (instancetype)dataForImage_Camera;

//  Icon for photo galerie album
+ (instancetype)dataForImage_PhotoLibrary;

//  Icon to dismiss the keyboard
+ (instancetype)dataForImage_KeyboardHide;

//  Icon for a Back button
+ (instancetype)dataForImage_Back;

//  Icon for a Forward button
+ (instancetype)dataForImage_Forward;

//  Icon for a CloseRed button
+ (instancetype)dataForImage_CloseRed;

@end
