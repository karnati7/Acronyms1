//
//  AIMeaning.h
//  Acronym
//
//  Created by Sahithya
//  Copyright (c) 2015 Sahithya All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIMeaning : NSObject
@property (nonatomic, copy) NSString *meaning;
@property NSInteger frequency;
@property NSInteger since;
@property (nonatomic, copy) NSMutableArray *variations;

@end
