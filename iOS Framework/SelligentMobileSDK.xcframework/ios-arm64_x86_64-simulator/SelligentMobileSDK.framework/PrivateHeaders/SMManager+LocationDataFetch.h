//
//  SMManager+LocationDataFetch.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 16/09/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import "SMManager.h"

#import "SMRegion.h"

@interface SMManager (LocationDataFetch)

- (void)fetchRegionsWithCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;
- (SMRegion*) regionForId:(NSString*)regionId;

@end
