//
//  NSArray+kvi_SafeNil.m
//  EditableTableView
//
//  Created by Vasyl Khmil on 11/29/15.
//  Copyright © 2015 Vasyl Khmil. All rights reserved.
//

#import "NSMutableArray+kvi_SafeNil.h"

@implementation NSMutableArray (kvi_SafeNil)

- (void)kvi_addObject:(nullable id)object {
    if (object != nil) {
        
        [self addObject:object];
        
    }
}

@end
