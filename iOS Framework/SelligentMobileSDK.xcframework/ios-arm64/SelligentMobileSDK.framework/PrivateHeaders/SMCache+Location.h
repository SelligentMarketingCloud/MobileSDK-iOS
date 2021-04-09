//
//  SMCache+Location.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 23/9/2020.
//  Copyright © 2020 Selligent. All rights reserved.
//

#import "SMCache.h"

NS_ASSUME_NONNULL_BEGIN

@interface SMCache (Location)
- (void)cacheForLocationWithLibraryDirectory:(NSString*)libraryDirectory;
- (void)addLocationRegions:(NSMutableArray*)regions;
- (NSMutableArray*) locationRegionsGeofences;
- (void)addLocationTriggers:(NSMutableDictionary*)triggers;
- (NSMutableDictionary*) locationTriggersGeofences;
@end

NS_ASSUME_NONNULL_END
