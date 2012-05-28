//
//  FSToolTest.m
//  FSTool Test
//
//  Created by Matt Noonan on 11/13/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import "FSToolTest.h"

static NSBundle* ourBundle = nil;

@implementation FSToolTest



/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
	The following messages are used to initialize and instantiate your tool.
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* Put any code in here that should be run when the plugin is first loaded (loading a pref file, etc) */
+ (BOOL) preload: (NSBundle*) theBundle {
	if(ourBundle) return NO;
	ourBundle = [theBundle retain];
	
	/* * * * * * * * * * * YOUR CODE HERE * * * * * * * * * * */
	NSLog(@"preloaded FSToolTest v1.01 (in FSToolTest.m)\n");
	
	return YES;
}

+ (void) destroy {
	/* release any resources loaded by preload here */
	[ourBundle release]; ourBundle = nil;
}

/* Return your tool's name here */
- (NSString*) name { 
	return @"FSTool Test Plugin";
}

/* This tells the controlling window what capabilities your tool has. */
- (BOOL) is: (int) type {
	switch(type) {
		case FSTool_Parametric:
			return YES;
		case FSTool_Dynamical:
			return NO;
		case FSTool_Real:
			return NO;
		case FSTool_Complex:
			return YES;
		default:
			return NO;
	}
}

/* When you receive this message, you should unpackage nib files or other freeze-dried data */
- (void) unfreeze {
	[NSBundle loadNibNamed: @"FSToolTest" owner: self];
	[theDisplay setStringValue: @"-"];
}

- (void) setOwnerTo: (id) theOwner { owner = theOwner; }




/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
	The following messages are used to interact with your tool after it is loaded
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


/* The plugin gets this message when the user has switched to your tool. */
- (void) activate {
	[[theDisplay window] orderFront: self];  //	make the period counter window appear
}

/* This message is sent when the user switches away from your tool. */
- (void) deactivate {
	[[theDisplay window] close]; // close the period counter window
}

/* This message is sent when the user wants to adjust the options on our tool */
- (void) configure {
}

/* the rest of the code is for handling mouse events in the view which owns the tool */
- (void) mouseEntered: (NSEvent*) theEvent {
}

- (void) mouseExited: (NSEvent*) theEvent {
}

- (void) mouseMoved: (NSEvent*) theEvent {
}

- (void) mouseDragged: (NSEvent*) theEvent {
}

- (void) mouseUp: (NSEvent*) theEvent {
}

- (void) mouseDown: (NSEvent*) theEvent {
	
	/* code to implement the period counter tool */
	
	void (*kernel)(int, double*, int, double*, int, double);
	double in[9], out[6];
	FSPoint p;
	int i; 
	
	kernel = [owner theKernel];
	[owner convertEvent: theEvent toPoint: &p];
	in[0] = 0.0; in[1] = 0.0; in[2] = 0.0; in[3] = p.x; in[4] = p.y;
	for(i = 0; i < 100; i++) {
		kernel(3, in, 1, out, 1, 100.0);
		in[0] = out[0]; in[1] = out[1];
	}
	p.x = in[0]; p.y = in[1];
	for(i = 0; i < 100; i++) {
		kernel(3, in, 1, out, 1, 100.0);
		if( (((out[0] - p.x)*(out[0] - p.x)) + ((out[1] - p.y)*(out[1] - p.y))) < 0.001) break;
		in[0] = out[0]; in[1] = out[1];
	}				
	if(i == 100) [theDisplay setStringValue: @"?"];
	else [theDisplay setIntValue: i + 1];
}

- (void) rightMouseDown: (NSEvent*) theEvent {
}

- (void) scrollWheel: (NSEvent*) theEvent {
}



@end
