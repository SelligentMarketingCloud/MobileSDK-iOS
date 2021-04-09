//
//  SMReturnMedia.h
//  MobileSDK
//
//  Created by Samy Ziat on 29/09/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMEventAction.h"

@class UIImage;

#import "SMEventReturnMediaData.h"
#import "SMNotificationButtonData.h"


@interface SMEventReturnMedia : SMEventAction


/*!
 *  @return TRUE if an attachement should be sent. FALSE otherwise.
 *  @warning Once a media was delivered, the mediaData is added and this property set to FALSE
 */
@property (nonatomic) BOOL shouldSendAttachment;


/**
 *  This represent the NSData representation of the UIImage in JPEG format
 */
@property (nonatomic, strong) NSData *attachmentEncodedData;

/**
 *  The media object retrieved from backend.
 *  If this object exists, it means that the media was successfully processed.
 *  This media is mandatory for sending the event.
 */
@property (nonatomic, strong) SMEventReturnMediaData *mediaData;



/**
 *  Default constructor for all returned media type
 */
+ (instancetype)eventWithNotificationButtonData:(SMNotificationButtonData*)button Image:(UIImage*)image;
+ (instancetype)eventWithNotificationButtonData:(SMNotificationButtonData*)button Image:(UIImage*)image Text:(NSString*)text;


- (NSDictionary*)dictionaryOfAttachedMedia;

@end
