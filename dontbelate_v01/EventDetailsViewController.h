//
//  EventDetailsViewController.h
//  dontbelate_v01
//
//  Created by nichols on 4/7/15.
//  Copyright (c) 2015 nichols. All rights reserved.
//

#import <UIKit/UIKit.h>
@class EventDetailsViewController;
 
@protocol EventDetailsViewControllerDelegate <NSObject>
- (void)eventDetailsViewControllerDidCancel:
  (EventDetailsViewController *)controller;
- (void)eventDetailsViewControllerDidSave:
  (EventDetailsViewController *)controller;
@end
 
@interface EventDetailsViewController : UITableViewController
 
@property (nonatomic, weak) id <EventDetailsViewControllerDelegate> delegate;
 
- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;
 
@end


