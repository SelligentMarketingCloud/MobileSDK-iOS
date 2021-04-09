//
//  SMCoordinate.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 08/11/2016.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SMCoordinate : NSObject

@property (nonatomic) float latitude;
@property (nonatomic) float longitude;

//  Default constructor
+ (instancetype)coordinateFromDict:(NSDictionary*)coordinateDict;

@end
