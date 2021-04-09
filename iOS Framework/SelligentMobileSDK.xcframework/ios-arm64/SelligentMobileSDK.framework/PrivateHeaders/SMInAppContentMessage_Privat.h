//
//  SMInAppContentMessage_Privat.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 25/05/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import "SMInAppContentMessage.h"
#import "SMBaseMessage_Privat.h"

@interface SMInAppContentMessage()

/*!
 *  [SMDisplayMode.h] instance providing the displayMode of the message
 */
@property (nonatomic) SMDisplayMode  displayMode;

/*!
 *  bool instance infiorming if the message has already been displayed to user in currentsession
 *  this will not be saved in cache and will be used when message must be displayed once
 */
@property (nonatomic) bool    isViewedInFirstSession;

/*!
 *  bool instance infiorming if the image must be downloaded
 */
@property (nonatomic) bool    toBeDownloaded;

//  Default constructor
+ (instancetype)contentMessageFromPayLoad:(NSDictionary*)contentPayload;

@end
