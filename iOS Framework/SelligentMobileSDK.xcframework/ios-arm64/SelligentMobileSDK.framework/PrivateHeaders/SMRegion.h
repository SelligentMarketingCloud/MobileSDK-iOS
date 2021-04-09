//
//  SMRegion.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 06/09/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SMGeometry.h"

@interface SMRegion : NSObject

@property (nonatomic) NSString  * idRegion;
@property (nonatomic) BOOL keepHistory;
@property (nonatomic) SMGeometry * geometry;
@property (nonatomic) NSMutableArray<NSString*>* triggersIds;
@property (nonatomic) BOOL isInside;

//  Default constructor
+ (instancetype)regionFromPayLoad:(NSDictionary*)regionPayload;

@end
