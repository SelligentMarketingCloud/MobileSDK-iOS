//
//  SMCache+InAppContent.h
//  SelligentMobileLib
//
//  Created by Gilbert Schakal on 23/9/2020.
//  Copyright © 2020 Selligent. All rights reserved.
//

#import "SMCache.h"
@class SMInAppContentMessage;


NS_ASSUME_NONNULL_BEGIN

@interface SMCache (InAppContent)

- (void)cacheForIACWithLibraryDirectory:(NSString*)libraryDirectory;

- (void)addIACMessage:(NSArray*)arrayIACMessage;

- (NSMutableArray*) inAppContentMessages;

//Update IAC cache
-(void)updateIACcache:(SMInAppContentMessage*)message;
-(void)cleanIACcache;


@end

NS_ASSUME_NONNULL_END
