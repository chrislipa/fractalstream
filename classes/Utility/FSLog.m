//
//  FSLog.m
//  FractalStream
//
//  Created by Christopher Lipa on 5/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "FSLog.h"
#import "CircularOverwriteBuffer.h"


#define NUMBER_OF_LINES_OF_LOG_TO_KEEP 1000

@implementation FSLog
static CircularOverwriteBuffer* loggingArray = nil;
static NSDateFormatter *formatter = nil;
static int FSLogIndentation = 0;


+(void) logInternal:(NSString*) s {
	if (!loggingArray) {
		loggingArray = [[CircularOverwriteBuffer alloc] initWithCapacity:NUMBER_OF_LINES_OF_LOG_TO_KEEP];
	}
	NSLog(@"%@",s);
	[loggingArray addObject:s];

}

+(NSString*) spaces:(int) n {
	NSMutableString* s = [NSMutableString stringWithString:@""];
	for(int i = 0; i<n; i++) {
		[s appendString:@" "];
	}
	return s;
}
+(void) log:(NSString*) string {
	
	if (!formatter) {
		formatter = [[NSDateFormatter alloc] init];
		[formatter setDateFormat:@"dd-MM-yyyy HH:mm"];
	}
	
	NSString   *dateString = [formatter stringFromDate:[NSDate date]];
	
	NSString* s = [NSString stringWithFormat:@"%@%@ %@", [self spaces:FSLogIndentation], dateString,string];
	[self logInternal:s];
}

+(void) enter:(NSString*) string {
	[self log:string];
	FSLogIndentation++;
}

+(void) exit:(NSString*) string {
	FSLogIndentation--;
	[self log:string];
}

+(NSDictionary*) deviceInformation {
	NSMutableDictionary* d = [NSMutableDictionary dictionary];

	
	return d;
}


@end
