//
//  SCHomeViewController.h
//  SocialProject
//
//  Created by Yuan Fang on 8/25/17.
//  Copyright © 2017 Yuan Fang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>


@class SCPost;

@interface SCHomeViewController : UIViewController

- (void)loadResultPageWithPosts:(NSArray <SCPost *>*)posts;

@end

