//
//  SMTextView.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 15/04/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SMInAppContentMessage_Privat.h"
#import "SMInAppContentStyleOptions.h"

@interface SMIACBoxView : UIView

+(SMIACBoxView*) textViewWithMessage:(SMInAppContentMessage*)message StyleOptions:(SMInAppContentStyleOptions*)styleOptions;

@end
