//
//  SCHomeTableViewCell.h
//  SocialProject
//
//  Created by Yuan Fang on 8/25/17.
//  Copyright © 2017 Yuan Fang. All rights reserved.
//


#import <UIKit/UIKit.h>

@class SCPost;

@interface SCHomeTableViewCell : UITableViewCell

- (void)loadCellWithPost:(SCPost *)post;
+ (CGFloat)cellHeight;

@end

