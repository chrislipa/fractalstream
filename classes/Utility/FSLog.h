//
//  FSLog.h
//  FractalStream
//
//  Created by Christopher Lipa on 5/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#define LOGGING_LEVEL 5

#import <Foundation/Foundation.h>



@interface FSLog : NSObject
+(void) log:(NSString*) string;
+(void) enter:(NSString*) string;
+(void) exit:(NSString*) string;
+(NSDictionary*) deviceInformation;
@end


#define PRIVATE_LOG(x, ...) [FSLog log:[NSString stringWithFormat:@"%s:%d %@", __PRETTY_FUNCTION__, __LINE__, [NSString stringWithFormat:x, ##__VA_ARGS__]]];
#define PRIVATE_EXIT [FSLog exit:[NSString stringWithFormat:@"EXIT  %s", __PRETTY_FUNCTION__]];
#define PRIVATE_ENTER [FSLog enter:[NSString stringWithFormat:@"ENTER %s", __PRETTY_FUNCTION__]];


#define LOG(x, ...) PRIVATE_LOG(x, ##__VA_ARGS__)
#define EXIT PRIVATE_EXIT
#define ENTER PRIVATE_ENTER