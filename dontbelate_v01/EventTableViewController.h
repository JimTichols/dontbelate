//
//  EventsTableViewController.h
//  dontbelate_v01
//
//  Created by nichols on 3/26/15.
//  Copyright (c) 2015 nichols. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EventDetailsViewController.h"


@interface EventTableViewController : UITableViewController <EventDetailsViewControllerDelegate>
@property (nonatomic, strong) NSMutableArray *events;

@end
