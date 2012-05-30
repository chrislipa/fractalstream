//
//  FSTraceTool.m
//  FSTool Test
//
//  Created by Matt Noonan on 11/13/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import "FSTraceTool.h"

static NSBundle* ourBundle = nil;

@implementation FSTraceTool

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
	The following messages are used to initialize and instantiate your tool.
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* Put any code in here that should be run when the plugin is first loaded (loading a pref file, etc) */
+ (BOOL) preload: (NSBundle*) theBundle {
	if(ourBundle) return NO;
	ourBundle = [theBundle retain];
	
	/* * * * * * * * * * * YOUR CODE HERE * * * * * * * * * * */
	
	return YES;
}

+ (void) destroy {
	/* release any resources loaded by preload here */
	[ourBundle release]; ourBundle = nil;
}

/* Return your tool's user-friendly name here */
- (NSString*) name { 
	return @"Trace Orbits";
}

/* Return a possibly shortened name to appear in the tool menu */
- (NSString*) menuName {
	return @"Orbits";
}

/* Returns a keyboard shortcut for the tool.  Return @"" (NOT nil!) if you don't want a shortcut. */
- (NSString*) keyEquivalent {
	return @"o";
}

/* This tells the controlling window what capabilities your tool has. */
- (BOOL) is: (int) type {
	switch(type) {
		case FSTool_Parametric:
			return NO;
		case FSTool_Dynamical:
			return YES;
		case FSTool_Real:
			return YES;
		case FSTool_Complex:
			return YES;
		default:
			return NO;
	}
}

/* When you receive this message, you should unpackage nib files or other freeze-dried data */
- (void) unfreeze {
	configured = NO;
	inLiveDrawing = NO;
	[NSBundle loadNibNamed: @"FSTraceTool" owner: self];
}

- (void) setOwnerTo: (id) theOwner { owner = theOwner; }


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
	The following messages are used to interact with your tool after it is loaded
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* This message is sent when the user wants to adjust the options on our tool */
- (void) configure {
	[panel orderFront: self];
}

/* The plugin gets this message when the user has switched to your tool. */
- (void) activate {
	if(configured == NO) [self updateConfiguration: self];
}

/* This message is sent when the user switches away from your tool. */
- (void) deactivate {	
	NSLog(@"trace tool got the deactivate message\n");
	[self resetOrbits: self];
	[panel orderOut: self];
}

- (IBAction) updateConfiguration: (id) sender {
	if(configured == NO) {
		currentBatch = 0;
		liveBatch = [owner getBatchNumber];
		animationBatch = [owner getBatchNumber];
		configured = YES;
	}
	iterates = [iteratesField intValue];
	drawBoxes = ([boxesCheckbox state] == NSOnState)? YES : NO;
	drawLines = ([linesCheckbox state] == NSOnState)? YES : NO;
	follow = ([followCheckbox state] == NSOnState)? YES : NO;
	animate = ([animateCheckbox state] == NSOnState)? YES : NO;
	animationStep = 0;
	animationDelay = [delayField intValue];
	[delayField setEnabled: animate];
	[[colorWell color] getRed: &(color[0]) green: &(color[1]) blue: &(color[2]) alpha: NULL];
}

- (IBAction) saveOrbit: (id) sender {
	if(currentBatch == 64) { NSBeep(); return; }
	batch[currentBatch] = [owner getBatchNumber]; 
	[owner changeBatch: liveBatch to: batch[currentBatch]];
	++currentBatch;
	animationStep = 0;
	inLiveDrawing = NO;
}

- (IBAction) resetOrbits: (id) sender {
	int i;
	[owner deleteObjectsInBatch: liveBatch];
	if(currentBatch) for(i = 0; i < currentBatch; i++) [owner deleteObjectsInBatch: batch[i]];
	currentBatch = 0;
	[owner setNeedsDisplay: YES]; 
}

- (void) traceFrom: (NSEvent*) theEvent {
	double p[16], q[16];
	FSViewerItem item;
	int ntraces, i;
	BOOL lines;
	
	ntraces = [iteratesField intValue];
	lines = ([linesCheckbox state] == NSOnState)? YES : NO;
	
	[owner convertEvent: theEvent toPoint: p];
	item.type = FSVO_Dot;
	item.batch = liveBatch;
	item.visible = YES;
	item.point[0][0] = p[0];
	item.point[0][1] = p[1];
	item.color[0][0] = [[colorWell color] redComponent];
	item.color[0][1] = [[colorWell color] greenComponent];
	item.color[0][2] = [[colorWell color] blueComponent];
	item.color[0][3] = 1.0;
	item.color[1][0] = [[colorWell color] redComponent];
	item.color[1][1] = [[colorWell color] greenComponent];
	item.color[1][2] = [[colorWell color] blueComponent];
	item.color[1][3] = 0.5;
	if(inLiveDrawing) [owner deleteObjectsInBatch: liveBatch];
	inLiveDrawing = YES;
	for(i = 0; i < ntraces; i++) {
		[owner drawItem: item];
		[owner runAt: p into: q probe: 0 steps: i + 1];
		if(lines == YES) {
			item.point[1][0] = q[0];
			item.point[1][1] = q[1];
			item.type = FSVO_Line;
			[owner drawItem: item];
		}
		item.point[0][0] = q[0];
		item.point[0][1] = q[1];
		item.type = FSVO_Dot;
		[owner drawItem: item];
	}
	[owner setNeedsDisplay: YES];
}

/* the rest of the code is for handling mouse events in the view which owns the tool */
- (void) mouseEntered: (NSEvent*) theEvent {
}

- (void) mouseExited: (NSEvent*) theEvent {
}

- (void) mouseMoved: (NSEvent*) theEvent {
	if(follow) [self traceFrom: theEvent];
}

- (void) mouseDragged: (NSEvent*) theEvent {
	[self traceFrom: theEvent];
}

- (void) mouseUp: (NSEvent*) theEvent {
}

- (void) mouseDown: (NSEvent*) theEvent {
	[self traceFrom: theEvent];
}

- (void) rightMouseDown: (NSEvent*) theEvent {
}

- (void) scrollWheel: (NSEvent*) theEvent {
}



@end
