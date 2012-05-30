//
//  FSTraceTool.m
//  FSTool Test
//
//  Created by Matt Noonan on 11/13/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import "FSSnapshotTool.h"

static NSBundle* ourBundle = nil;

@implementation FSSnapshotTool

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
	return @"Snapshot";
}

/* Return a possibly shortened name to appear in the tool menu */
- (NSString*) menuName {
	return @"Snapshot";
}

/* Returns a keyboard shortcut for the tool.  Return @"" (NOT nil!) if you don't want a shortcut. */
- (NSString*) keyEquivalent {
	return @"c";
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
	wentDown = NO;
	realPixelWidth = realPixelHeight = 1; multiplier = 1.0;
	batch = -1;
	c[0] = 0.8; c[1] = 0.8; c[2] = 0.8;
	[NSBundle loadNibNamed: @"FSSnapshotTool" owner: self];
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
	[panel orderOut: self];
}

- (IBAction) updateConfiguration: (id) sender {
	if(configured == NO) {
		configured = YES;
	}

}


- (IBAction) updateDimensions: (id) sender {
	if(sender == widthBox) multiplier = [widthBox floatValue] / (float) realPixelWidth;
	else if(sender == heightBox) multiplier = [heightBox floatValue] / (float) realPixelHeight;
	else if(sender == multiplierBox) multiplier = [multiplierBox floatValue];
	[widthBox setIntValue: multiplier * ((float) realPixelWidth + 0.5)];
	[heightBox setIntValue: multiplier * ((float) realPixelHeight + 0.5)];
	[multiplierBox setFloatValue: multiplier];
}

- (IBAction) takeSnapshot: (id) sender {
	NSSavePanel* savePanel;
		
	imagex = [widthBox intValue];
	imagey = [heightBox intValue];
	if((imagex <= 0) || (imagey <= 0)) return;
	
	NSLog(@"z = %f + i%f\n", z[0], z[1]);
	savePanel = [NSSavePanel savePanel];
	if([savePanel runModal] == NSFileHandlingPanelOKButton) {
	}
	
	NSLog(@"Selected file is \"%@\"\n", [savePanel filename]);
	filename = [[savePanel filename] retain];
	tempFilenamePrefix = [[NSString stringWithFormat: @"%@fssnapshot", NSTemporaryDirectory()] retain];
	[owner getViewerDataTo: &savedData];
	[owner getViewerDataTo: &data];
	viewx = ([owner bounds].size.width + 0.5);
	viewy = ([owner bounds].size.height + 0.5);
	pix[1] = savedData.pixelSize * ((float) viewx / (float) imagex);
	pix[0] = savedData.aspectRatio * pix[1];
	center[0] = z[0] + pix[0] * ((float) viewx)/2.0;
	center[1] = z[1] - pix[1] * ((float) viewy)/2.0;
	dcenter[0] = pix[0] * (float) viewx;
	dcenter[1] = pix[1] * (float) viewy;
	xframes = (int)(((float) imagex / (float) viewx)) + 1;
	yframes = (int)(((float) imagey / (float) viewy)) + 1;
	x = 0; y = 0;
	data.center[0] = center[0];
	data.center[1] = center[1];
	data.pixelSize = pix[1];
	NSLog(@"z = %f + i%f, starting center at (%f, %f) with pixelSize = %f.  frames = %i x %i\n", z[0], z[1], center[0], center[1], data.pixelSize, xframes, yframes);
	[owner setRenderCompletedMessage: @selector(nextSnapshot) forObject: self];
	[owner setViewerData: &data];
}

- (void) nextSnapshot {
	NSImage* snap;
	NSAutoreleasePool* pool;
	NSString* tmp;
	
	pool = [[NSAutoreleasePool alloc] init];
	snap = [owner snapshot];
	
	tmp = [NSString stringWithFormat: @"%@X%iY%i.tiff", tempFilenamePrefix, x, y];
	NSLog(@"writing snapshot to %@\n", tmp);
	[[snap TIFFRepresentation] writeToFile: tmp atomically: YES];
	
	++x;
	data.center[0] += dcenter[0];
	if(x == xframes) {
		data.center[0] = center[0];
		++y;
		data.center[1] -= dcenter[1];
	}
	if(y == yframes) {
		[owner setRenderCompletedMessage: @selector(nextSnapshot) forObject: nil];
		[self assembleSnapshots];
		[owner setViewerData: &savedData];
	}
	else [owner setViewerData: &data];
	[pool release];
}

- (void) assembleSnapshots {




	[tempFilenamePrefix release];
	[filename release];
}



/* the rest of the code is for handling mouse events in the view which owns the tool */
- (void) mouseEntered: (NSEvent*) theEvent {
}

- (void) mouseExited: (NSEvent*) theEvent {
}

- (void) mouseMoved: (NSEvent*) theEvent {
}

- (void) mouseDragged: (NSEvent*) theEvent {
	if(wentDown == NO) return;
	[owner convertEvent: theEvent toPoint: w];
	[owner drawBoxFrom: lastClick to: [theEvent locationInWindow] withColor: c];
}

- (void) mouseUp: (NSEvent*) theEvent {
	double t;
	if(wentDown == NO) return;
	wentDown = NO;
	[owner convertEvent: theEvent toPoint: w];
	[owner drawBoxFrom: lastClick to: [theEvent locationInWindow] withColor: c];
	realPixelWidth = lastClick.x - [theEvent locationInWindow].x;
	realPixelHeight = lastClick.y - [theEvent locationInWindow].y;
	if(realPixelWidth < 0) realPixelWidth = -realPixelWidth;
	if(realPixelHeight < 0) realPixelHeight = -realPixelHeight;
	[widthBox setIntValue: multiplier * ((float) realPixelWidth + 0.5)];
	[heightBox setIntValue: multiplier * ((float) realPixelHeight + 0.5)];
	NSLog(@"z = %f + i%f, w = %f + i%f\n", z[0], z[1], w[0], w[1]);
	if(z[0] > w[0]) t = w[0]; w[0] = z[0]; z[0] = t;
	if(z[1] < w[1]) t = w[1]; w[1] = z[1]; z[1] = t;
}

- (void) mouseDown: (NSEvent*) theEvent {
	[owner convertEvent: theEvent toPoint: z];
	lastClick = [theEvent locationInWindow];
	wentDown = YES;
}

- (void) rightMouseDown: (NSEvent*) theEvent {
}

- (void) scrollWheel: (NSEvent*) theEvent {
}



@end
