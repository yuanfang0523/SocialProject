//
//  SCPostDetailViewController.h
//  SocialProject
//
//  Created by Yuan Fang on 8/27/17.
//  Copyright © 2017 Yuan Fang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCPostDetailViewController : UIViewController

- (void)loadDetailViewWithPost:(SCPost *)post;

@end
