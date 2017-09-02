//
//  SCLocationManager.h
//  SocialProject
//
//  Created by Yuan Fang on 8/26/17.
//  Copyright © 2017 Yuan Fang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CLLocation;

extern NSString * const SCLocationUpdateNotification;

@interface SCLocationManager : NSObject

+ (instancetype)sharedManager;
- (void)getUserPermission;
+ (BOOL)isLocationServicesEnabled;
- (void)startLoadUserLocation;
- (void)stopLoadUserLocation;
- (CLLocation *)getUserCurrentLocation;

@end
