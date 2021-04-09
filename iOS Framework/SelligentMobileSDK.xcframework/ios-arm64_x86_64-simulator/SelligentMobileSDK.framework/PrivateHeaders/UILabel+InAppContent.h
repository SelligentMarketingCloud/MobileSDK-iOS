//
//  UILabel+InAppContent.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 30/04/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SMInAppContentStyleOptions.h"

@interface UILabel (InAppContent)

+(instancetype)labelWithTitle:(NSString*)title AndOptions:(SMInAppContentStyleOptions*)options;

@end
