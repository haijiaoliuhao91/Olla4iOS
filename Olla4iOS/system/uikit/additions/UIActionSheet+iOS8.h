//
//  UIActionSheet+Blocks.h
//  CBoBo
//
//  Created by null on 15/9/10.
//  Copyright (c) 2015年 bobo. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^UIActionSheetiOS8Block) (UIAlertController *actionSheet);
typedef void (^UIActionSheetCompletionBlock) (UIAlertController *actionSheet, NSInteger buttonIndex);

@interface UIActionSheet (iOS8)

+ (void)showWithTitle:(NSString *)title
 cancelButtonTitle:(NSString *)cancelButtonTitle
 otherButtonTitles:(NSArray *)otherButtonTitles
          tapBlock:(UIActionSheetCompletionBlock)tapBlock;


@end
