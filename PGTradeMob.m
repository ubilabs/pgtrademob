//
//  PGTradeMob.m
//  
//
//  Created by Frank Müller on 24.08.12.
//  Copyright 2012 Ubilabs GmbH All rights reserved.
//

#import "PGTradeMob.h"


@implementation PGTradeMob

- (void)trackActionOnce:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options {
  
  NSString *action = [options objectForKey:@"action"];
  NSNumber *value  = [options objectForKey:@"value"];
  NSString *subid  = [options objectForKey:@"subid"];
  
  [TMUniversalTracking trackActionOnce: action
                              forValue: value
                              andSubId: subid];
}


- (void)trackActionAlways:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options {
  
  NSString *action = [options objectForKey:@"action"];
  NSNumber *value  = [options objectForKey:@"value"];
  NSString *subid  = [options objectForKey:@"subid"];
  
  [TMUniversalTracking trackActionAlways: action
                                forValue: value
                                andSubId: subid];
}

- (void)trackAppload:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options {
  [TMUniversalTracking trackAppload];
}

- (void)debugMode:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options {
  [TMUniversalTracking debugMode];
}

- (void)disableGPS:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options {
  [TMUniversalTracking disableGPS];
}

@end
