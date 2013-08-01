//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by Shervin Shaikh on 7/31/13.
//  Copyright (c) 2013 Shervin Shaikh. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BirdSighting;

@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

- (NSUInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end
