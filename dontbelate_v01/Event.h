//
//  Event.h
//  dontbelate_v01
//
//  Created by nichols on 3/26/15.
//  Copyright (c) 2015 nichols. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface Event : NSObject
 
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *time;
 
@end