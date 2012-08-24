//
//  PGTradeMob.h
//  
//
//  Created by Frank Müller on 24.08.12.
//  Copyright 2012 Ubilabs GmbH All rights reserved.
//

#import "TMUniversalTracking.h"

#ifdef PHONEGAP_FRAMEWORK
  #import <PhoneGap/PGPlugin.h>
#else
  #import "PGPlugin.h"
#endif

@interface PGTradeMob : PGPlugin

/*
 can be used to inform the Trademob Server about specific actions (non consumable / tracked once) of the user,
 for example if the user has finished the third level of a game, has registered a premium account or used another
 specific function.
*/
- (void)trackActionOnce:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;


/*
 can be used to inform the Trademob Server about specific actions (consumable / tracked each time it will be called)
 of the user, for example if the user bought something with your app
*/
- (void)trackActionAlways:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;


/*
 notify the Trademob Server when the app is started for the first time and then send data concerning app usage 
 frequency in regular intervals. If this method is run manually for the first time it registers itself to the
 "UIApplicationWillEnterForegroundNotification" and will report appstart events each time this event is fired by the app.
*/
- (void)trackAppload:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;


/*
 This mode is global and should be called once, before any other SDK action is done. If you are currently integrating 
 the SDK turn on the debug mode to see if the SDK works properly and reaches the Trademob System.
 The debug mode cannot be turned off by command. If you no longer want debug logs remove the command from your app.
*/
- (void)debugMode:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;


/*
 if your app utilized the GPS location service, the trademob SDK will read current GPS data from the device and use 
 it for tracking. If you want to prohibit the SDK to use GPS data call this method.
 This method should be called once before any SDK tracking method is called.
*/
- (void)disableGPS:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;


@end
