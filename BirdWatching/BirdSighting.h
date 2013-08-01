//
//  BirdSighting.h
//  BirdWatching
//
//  Created by Shervin Shaikh on 7/31/13.
//  Copyright (c) 2013 Shervin Shaikh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) NSDate *date;

-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date;

@end
