//
//  UIView+SMAutolayout.h
//  MobileSDK
//
//  Created by Samy Ziat on 19/08/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SMInAppContentStyleOptions.h"
#import "SMContentAlignment.h"

@interface UIView (SMAutolayout)


+ (instancetype)viewAutolayout;

- (void)applyEnglobeConstraint2View:(UIView *)view;
- (void)applyEnglobeConstraint2IACView:(UIView *)view StatusBarIsHidden:(bool)isHidden;
- (void)applyConstraint2ButtonDismiss:(UIButton *)button StatusBarIsHidden:(bool)isHidden;
- (void)applyConstraint2ScrollView:(UIScrollView *)scrollView StatusBarIsHidden:(bool)isHidden;

// IAC box constraints
- (void)applyMarginConstraint2Box:(UIView*)view WithOptions:(SMInAppContentStyleOptions*)options;
- (void)applyTopConstraint2Box:(UIView*)view toItem:(UIView*)previousView WithOptions:(SMInAppContentStyleOptions*)options;
- (void)applyBottomConstraint2View:(UIView*)view WithOptions:(SMInAppContentStyleOptions*)options;

//IAC box textview and label constraints
- (void)applyConstraint2BoxLabel:(UILabel*)label TextView:(UITextView*)textView WithOptions:(SMInAppContentStyleOptions*)options;

//IAC box links constraints
- (void)applyConstraint2Links:(UIButton*)link TextView:(UITextView*)textView  WithOptions:(SMInAppContentStyleOptions*)options;
- (void)applyFinalConstraint2Links:(NSArray*)arrayLinks WithOptions:(SMInAppContentStyleOptions*)options;

//IAC imageview activity indicator constraints
- (void)applyConstraints2ActivityIndicatorView:(UIActivityIndicatorView*)activity;


@end
