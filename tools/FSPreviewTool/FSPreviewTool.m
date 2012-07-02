//
//  FSToolTest.m
//  FSTool Test
//
//  Created by Matt Noonan on 11/13/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import "FSPreviewTool.h"
#import "FSViewer.h"
static NSBundle* ourBundle = nil;

@implementation FSPreviewTool



/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
	The following messages are used to initialize and instantiate your tool.
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* Put any code in here that should be run when the plugin is first loaded (loading a pref file, etc) */
+ (BOOL) preload: (NSBundle*) theBundle {
	if(ourBundle) return NO;
	ourBundle = [theBundle retain];
	
	/* * * * * * * * * * * YOUR CODE HERE * * * * * * * * * * */
	NSLog(@"preloaded FSPreviewTool v0.1\n");
	
	return YES;
}

+ (void) destroy {
	/* release any resources loaded by preload here */
	[ourBundle release]; ourBundle = nil;
}

/* Return your tool's name here */
- (NSString*) name { 
	return @"Dynamics Preview";
}

/* Return a possibly shortened name to appear in the tool menu */
- (NSString*) menuName {
	return @"Preview";
}

/* Returns a keyboard shortcut for the tool.  Return @"" (NOT nil!) if you don't want a shortcut. */
- (NSString*) keyEquivalent {
	return @"v";
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
	[NSBundle loadNibNamed: @"FSPreviewTool" owner: self];
	memorized = NO;
	[[viewport window] close]; // close the preview window
}

- (void) setOwnerTo: (id) theOwner { owner = theOwner; }




/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
	The following messages are used to interact with your tool after it is loaded
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


/* The plugin gets this message when the user has switched to your tool. */
- (void) activate {
	if(memorized == NO) {
		/* Get data from the main view */
		[owner getViewerDataTo: &data];
		data.pixelSize *= 4.0;
		data.detailLevel = 1.0;
		data.program = 3;
		data.center[0] = 0.0;
		data.center[1] = 0.0;
		data.par[0] = 0.0;
		data.par[1] = 0.0;
		data.eventManager = nil;
	}
	[viewport setColorPicker: [owner colorPicker]];
	[viewport setViewerData: &data];
	[[viewport window] orderFront: self];  //	make the preview window appear
}

/* This message is sent when the user switches away from your tool. */
- (void) deactivate {
	[[viewport window] close]; // close the period counter window
}

- (void) preview: (NSEvent*) theEvent {
	[owner convertEvent: theEvent toPoint: data.par];
	[viewport setViewerData: &data];
}

- (IBAction) memorize: (id) sender {
	[owner getViewerDataTo: &data];
	memorized = YES;
	data.pixelSize *= 4.0;
	data.program = 3;
	[viewport setViewerData: &data];
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
	[self preview: theEvent];
}

- (void) mouseUp: (NSEvent*) theEvent {
	[self preview: theEvent];
}

- (void) mouseDown: (NSEvent*) theEvent {
	[self preview: theEvent];
}

- (void) rightMouseDown: (NSEvent*) theEvent {
}

- (void) scrollWheel: (NSEvent*) theEvent {
}



@end
