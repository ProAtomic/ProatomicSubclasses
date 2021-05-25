//
//  PASScrollViewInnerShadowContainerView.h
//  RPPNoticias
//
//  Created by Guillermo Sáenz on 4/19/15.
//  Copyright (c) 2015 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

/**
 This class aims to create an inner shadow for a scrollview.
 */
@interface PASScrollViewInnerShadowContainerView : UIView

@property (nonatomic, assign) IBInspectable CGFloat fadePercentage;
@property (assign, nonatomic, getter=isHorizontal) IBInspectable BOOL horizontal;

/**
 This is the scrollview that will host the inner shadow.
 */
@property (nonatomic, weak) IBOutlet UIScrollView *scrollView;

@end

