//
//  NSObject+kvi_SafeNil.h
//  EditableTableView
//
//  Created by Vasyl Khmil on 11/27/15.
//  Copyright © 2015 Vasyl Khmil. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (kvi_SafeNil)

- (void)kvi_performSelector:(SEL)selector;

@end
