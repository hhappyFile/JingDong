//
//  LolitaFunctions.h
//  Lolita
//
//  Created by 金亮齐 on 16/6/30.
//  Copyright © 2016年 醉看红尘这场梦. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>




typedef NS_ENUM(NSUInteger, FollowType) {
    TypeFollow,
    TypeFollowing,
    TypeFollowed
};


@interface LolitaFunctions : NSObject{
    CGRect screenRect;
}

#pragma mark - Share Instance
+ (id)sharedObject;



#pragma mark - App Methods

-(UIColor *)colorWithR:(int)red g:(int)green b:(int)blue alpha:(float)alpha;
-(UIImageView *)leftViewForTextFieldWithImage:(NSString *)imageName;
-(UILabel *)leftViewForTextFieldWithTest:(NSString *)test;
-(BOOL)validateEmail:(NSString *)email;
-(UIView *)showLoadingViewWithText:(NSString *)strMessage inView:(UIView *)view;
-(void)hideLoadingView:(UIView *)loadingView;

-(NSString *)setTimeElapsedForDate:(NSDate *)starDate;


#pragma mark - Resizing image

-(UIImage *)resizeImageWithImage:(UIImage *)image toSize:(CGSize)newSize;

@end
