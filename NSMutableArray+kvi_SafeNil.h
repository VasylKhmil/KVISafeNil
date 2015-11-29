//
//  NSArray+kvi_SafeNil.h
//  EditableTableView
//
//  Created by Vasyl Khmil on 11/29/15.
//  Copyright © 2015 Vasyl Khmil. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (kvi_SafeNil)

- (void)kvi_addObject:(nullable id)object;

@end
