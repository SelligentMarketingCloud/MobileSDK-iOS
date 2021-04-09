//
//  SMHTTPRequest+SMEvent.h
//  MobileSDK
//
//  Created by Samy Ziat on 02/10/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMHTTPRequest.h"

@class SMEvent;

@interface SMHTTPRequest (SMEvent)

- (void)send_SMEvent:(SMEvent*)event;


- (void)addUnsentEvent:(SMEvent*)event;

//  Try to re-sent failed event
- (void)sendAllUnsentEvent;

//  Save failed events on disk
- (void)saveUnsentEvent;

//  Load previous saved events
- (void)loadUnsentEvent;

//Load last UserCustomEvent sent
-(void)loadLastSentUserCustomEvent;


//  Delete all saved events
- (void) deleteAllUnsentEvent;

- (void) removeUnsentEvent:(SMEvent*)event;

// Check if the custom event has been already sent
- (BOOL)checkIfMustSentCustomEvent:(SMEvent *)event;

//perform final request
- (void)performRequest:(SMEvent *)event HttpRequest:(SMHTTPRequest*)httpRequest;

@end
