//
//  SMParentController.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 10/07/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SMParentController : NSObject

- (void)controllerDidLoad;

- (void)controllerWillAppear;
- (void)controllerWillDisappear;

- (void)controllerDidAppear;
- (void)controllerDidDisapear;

- (void)controllerwillLayoutSubview;
- (void)controllerDidDidLayoutSubview;

@end
