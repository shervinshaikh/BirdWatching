//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by Shervin Shaikh on 7/31/13.
//  Copyright (c) 2013 Shervin Shaikh. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController
@property (strong, nonatomic) BirdSightingDataController *dataController;
@end
