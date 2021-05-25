//
//  PASSecureCodingBaseModelObject.h
//  ProatomicSubclasses
//
//  Created by Guillermo Sáenz on 8/13/17.
//  Copyright © 2017 Property Atomic Strong SAC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PASSecureCodingBaseModelObject : NSObject <NSSecureCoding>

+ (NSString *)classNameString;

+ (instancetype)initWithArchivedVersion:(NSData *)archivedVersion;

- (NSData *)getArchivedVersion;

@end
