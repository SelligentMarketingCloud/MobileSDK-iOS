//
//  SMGeometry.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 08/11/2016.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SMCoordinate.h"

@interface SMGeometry : NSObject

@property (nonatomic) float radius;
@property (nonatomic) NSMutableArray<SMCoordinate*>*coordinate;

//  Default constructor
+ (instancetype)geometryFromDict:(NSDictionary*)geometryDict;
@end
