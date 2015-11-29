//
//  NSDictionary+kvi_SafeNil.h
//  EditableTableView
//
//  Created by Vasyl Khmil on 11/29/15.
//  Copyright © 2015 Vasyl Khmil. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (kvi_SafeNil)

- (void)kvi_setValue:(nullable id)value forKey:(nullable NSString *)key;

- (void)kvi_setObject:(nullable id)object forKey:(nullable id<NSCopying>)key;

@end
