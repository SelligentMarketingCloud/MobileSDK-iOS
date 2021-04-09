//
//  SMImageLoader.h
//  TestConstraints
//
//  Created by Samy Ziat on 12/08/15.
//  Copyright (c) 2015 Samy Ziat. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UIImage;
#import "SMImageName.h"
#import "SMInAppContentMessage.h"

@interface SMImageManager : NSObject

+ (instancetype)sharedInstance;

/**
 *  Provide full-filePath of an image according to its name
 *
 *  @param imageName one of the image name declared in SMImageName.h
 *  @return NSString representing the desired filePath
 */
- (NSString*)filePathForImageName:(NSString*)imageName;


/**
 *  Quickly provide an UIImage according to provided name
 *  @discussion this call filePathForImageName: and create an UIImage instance out of it
 *  @param imageName one of the image name declared in SMImageName.h
 *  @return UIImage new instance
 */
- (UIImage*)imageForImageName:(NSString*)imageName;


-(void)downloadInAppContentImage :(NSString*)imagePath;
-(void)fetchInAppContentImage :(NSString*)imagePath ImageView:(UIImageView*)imageView Spinner:(UIActivityIndicatorView*)spinner;



@end
