//
//  SCUser.h
//  SocialProject
//
//  Created by Yuan Fang on 8/27/17.
//  Copyright © 2017 Yuan Fang. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface SCUser : NSObject

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *password;

+ (BOOL)isUserLogin;
+ (void)userLogInSuccess;
+ (NSString *)defaultUserName;
+ (void)saveDefaultUserName:(NSString *)username;

@end

