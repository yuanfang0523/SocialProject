//
//  SCCreatePostViewController.h
//  SocialProject
//
//  Created by Yuan Fang on 8/27/17.
//  Copyright © 2017 Yuan Fang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCCreatePostViewControllerDelegate <NSObject>

- (void)didCreatePost;

@end
@interface SCCreatePostViewController : UIViewController

@property (nonatomic, weak) id<SCCreatePostViewControllerDelegate> delegate;

@end
