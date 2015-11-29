//
//  NSDictionary+kvi_SafeNil.m
//  EditableTableView
//
//  Created by Vasyl Khmil on 11/29/15.
//  Copyright © 2015 Vasyl Khmil. All rights reserved.
//

#import "NSMutableDictionary+kvi_SafeNil.h"

@implementation NSMutableDictionary (kvi_SafeNil)

- (void)kvi_setValue:(id)value forKey:(NSString *)key {
    if (key != nil) {
        
        [self setValue:value forKey:key];
    }
}

- (void)kvi_setObject:(id)object forKey:(id<NSCopying>)key {
    if (key != nil) {
        
        [self setObject:object forKey:key];
    }
}

@end
