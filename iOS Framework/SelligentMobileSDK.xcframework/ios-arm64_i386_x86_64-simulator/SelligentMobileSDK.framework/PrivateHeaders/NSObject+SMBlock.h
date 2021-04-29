//
//  NSObject+block.h
//  MobileSDK
//
//  Created by Samy Ziat on 12/08/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (SMBlock)




- (void)executeBlock:(SMCompletionBlock)block;
- (void)executeBlock:(SMCompletionBlock)block Completion:(SMCompletionBlock)completion;
- (void)executeBlock:(SMCompletionBlock)block Completion:(SMCompletionBlock)completion Error:(SMCompletionBlock)errorCallback;
- (void)executeBlock:(SMCompletionBlock)block Completion:(SMCompletionBlock)completion Error:(SMCompletionBlock)errorCallback Queue:(dispatch_queue_t)queue;

@end
