//
//  PASCountryPickerView.h
//  Universal
//
//  Created by Guillermo Sáenz on 12/10/17.
//  Copyright © 2017 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

@interface PASCountryPickerView : UIPickerView

@property (nonnull, nonatomic, copy, readonly) NSString *country;

@property (nonnull, copy, nonatomic) NSLocale *locale;

@end
