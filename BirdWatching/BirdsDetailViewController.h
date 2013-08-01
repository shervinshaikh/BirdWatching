//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by Shervin Shaikh on 7/31/13.
//  Copyright (c) 2013 Shervin Shaikh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BirdsDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
