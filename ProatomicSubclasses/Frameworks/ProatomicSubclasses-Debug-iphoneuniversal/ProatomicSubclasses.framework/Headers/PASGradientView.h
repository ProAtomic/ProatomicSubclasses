//
//  PASGradientView.h
//  Pods
//
//  Created by Guillermo Saenz on 5/23/16.
//
//

@import UIKit;

IB_DESIGNABLE @interface PASGradientView : UIView

/**
 This is an IB accessible UIColor property, which will determine the color to use in the top part of the gradient.
 */
@property (copy, nonatomic) IBInspectable UIColor *topColor;

/**
 This is an IB accessible UIColor property, which will determine the color to use in the bottom part of the gradient.
 */
@property (copy, nonatomic) IBInspectable UIColor *bottomColor;

/**
 This is an IB accessible float value, which will determine the location of the color to use in the bottom part of the gradient.
 */
@property (assign, nonatomic) IBInspectable CGFloat topColorLocation;

/**
 This is an IB accessible float value, which will determine the location of the color to use in the bottom part of the gradient.
 */
@property (assign, nonatomic) IBInspectable CGFloat bottomColorLocation;

/**
 This method sets the inclination angle of the gradient.
 
 @param angleInDegrees Angle expressed in degrees from 0 - 360.
 */
@property (copy, nonatomic) IBInspectable NSNumber *angle;

/**
 This method assign all the colors that will conform the gradient.
 */
- (void)setColors:(UIColor *) firstColor, ...;

/**
 This method assign all the locations for each color that will conform the gradient.
 */
- (void)setLocations:(NSNumber *) location, ...;

/**
 This method sets the first and second color of a two-color-based gradient. This method is currently deprecated.
 */
- (void)gradientWithColors:(UIColor *)firstColor secondColor:(UIColor *)secondColor __attribute__ ((deprecated("This method is deprecated, please use setColors, setLocations and setAngle to customize your gradient")));

/**
 This method sets the first and second color of a two-color-based gradient plus their locations. This method is currently deprecated.
 */
- (void)gradientWithColors:(UIColor *)firstColor secondColor:(UIColor *)secondColor locationOne:(NSNumber *)locationOne locationTwo:(NSNumber *)locationTwo __attribute__ ((deprecated("This method is deprecated, please use setColors, setLocations and setAngle to customize your gradient")));

@end
