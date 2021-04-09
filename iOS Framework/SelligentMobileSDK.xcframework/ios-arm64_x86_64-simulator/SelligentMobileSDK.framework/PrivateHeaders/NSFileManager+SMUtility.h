//
//  NSFileManager+SMUtility.h
//  TestConstraints
//
//  Created by Samy Ziat on 12/08/15.
//  Copyright (c) 2015 Samy Ziat. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileManager (SMUtility)



+ (NSError*)createFolderAtFilePath:(NSString*)filePath;

+ (NSString*)libraryDirectory;

+ (BOOL)directoryExist:(NSString *)directoryPath;

+ (NSDate*)dateCreationOfFileAtPath:(NSString*)filePath;

+ (NSDate*)dateModificationOfFileAtPath:(NSString*)filePath;



@end
