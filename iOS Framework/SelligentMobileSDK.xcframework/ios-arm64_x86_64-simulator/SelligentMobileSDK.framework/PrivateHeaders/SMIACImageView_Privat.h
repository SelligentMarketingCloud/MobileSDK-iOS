//
//  SMImageView_Privat.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 05/04/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import "SMInAppContentMessage_Privat.h"

#import "SMInAppContentStyleOptions.h"

@interface SMIACImageView()

+(instancetype) imageFromIACMessage:(SMInAppContentMessage*)message IsWrapped:(bool)isWrapped WithOptions:(SMInAppContentStyleOptions*)options;

@end