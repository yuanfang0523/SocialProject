//
//  SCPostManager.h
//  SocialProject
//
//  Created by Yuan Fang on 8/27/17.
//  Copyright © 2017 Yuan Fang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class SCPost;
@class CLLocation;

@interface SCPostManager : NSObject

+ (void)createPostWithMessage:(NSString *)message andCompletion:(void(^)(NSError *error))completionBlock;

+ (void)getPostsWithLocation:(CLLocation *)location range:(NSInteger)range andCompletion:(void(^)(NSArray <SCPost *>* posts, NSError *error))completionBlock;


@end
