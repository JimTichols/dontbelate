//
//  EventDetailsViewController.m
//  dontbelate_v01
//
//  Created by nichols on 4/7/15.
//  Copyright (c) 2015 nichols. All rights reserved.
//

#import "EventDetailsViewController.h"

@implementation EventDetailsViewController


- (IBAction)cancel:(id)sender
{
    [self.delegate eventDetailsViewControllerDidCancel:self];
}
- (IBAction)done:(id)sender
{
    [self.delegate eventDetailsViewControllerDidSave:self];
}


@synthesize delegate;


@end
