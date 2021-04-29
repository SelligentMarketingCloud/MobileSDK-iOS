//
//  SMBlock_Privat.h
//  MobileSDK
//
//  Created by Samy Ziat on 08/12/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

#import "SMHTTPResponse.h"

@class SMNotificationMessage;

/**
 *  @brief A completion handler without any parameter
 */
typedef void(^SMCompletionBlock)(void);


/**
 *  @brief Completion handler with notifMessage
 *
 *  @param notificationMessage SMNotificationMessage instance
 */
typedef void(^SMCompletionBlockWithSMNotification)(SMNotificationMessage *notificationMessage);


/**
 *  @brief Completion handler
 *
 *  @param response The response object returned from the HTTP-query
 *  @param error    Error object returned from the the HTTP-query. Should be nil.
 */
typedef void(^SMCompletionBlockWithHTTPError)(SMHTTPResponse *response, NSError *error);

/**
 *  @brief Completion handler
 *
 *  @param response The response object returned from the HTTP-query
 *  @param data     NSData object returned from the HTTP-query
 */
typedef void(^SMCompletionBlockWithHTTPSuccess)(SMHTTPResponse *response, NSData *data);
