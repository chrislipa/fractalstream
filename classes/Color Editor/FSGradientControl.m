//
//  FSGradientControl.m
//  FractalStream
//
//  Created by Christopher Lipa on 7/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "FSGradientControl.h"
#import "FSLog.h"

@implementation FSGradientControl

- (void) awakeFromNib { 
	ENTER
	gradient = [[FSGradient alloc] init];
	[self setNeedsDisplay: YES];
	EXIT
}

- (void) connectToLibrary: (id) lib {
	library = lib;
}

- (void) setNotificationSender: (id) ns { 
	noteSender = ns; 
}

- (void) setGradient: (FSGradient*) grad { 
	[gradient release];
	gradient = [grad retain];
	[self setNeedsDisplay: YES];
}

- (void) insertGradient: (FSGradient*) grad {
	//	NSLog(@"telling gradient %@ to copy from gradient %@\n", gradient, grad);
	[gradient setStops: [grad stopArray] andColors: [grad colorArray]];
	if(noteSender) [[NSNotificationCenter defaultCenter] postNotificationName: @"FSColorsChanged" object: noteSender];
	[self setNeedsDisplay: YES];
}

- (IBAction) fill: (id) sender {
	[gradient resetToColor: [colorWell color]];
	if(library != nil) [library saveColor: gradient];
	if(noteSender) [[NSNotificationCenter defaultCenter] postNotificationName: @"FSColorsChanged" object: noteSender];
	[self setNeedsDisplay: YES];
}

- (void) mouseDown: (NSEvent*) theEvent {
	float stop;
	NSPoint clickInView;
	clickInView = [self convertPoint: [theEvent locationInWindow] fromView: nil];
	stop = (float) (clickInView.x - [self bounds].origin.x) / (float) [self bounds].size.width;
	if((stop >= 0.0) && (stop <= 1.0)) {
		[gradient addColor: [colorWell color] atStop: stop];
		if(library != nil) [library saveColor: gradient];
		if(noteSender) [[NSNotificationCenter defaultCenter] postNotificationName: @"FSColorsChanged" object: noteSender];
		[self setNeedsDisplay: YES];
	}
}


- (void) drawRect: (NSRect) rect {
	int i;
	float x, dx;
	int width/* height*/;
	NSRect slice;
	width = [self bounds].size.width;
	//height = [self bounds].size.height;
	x = 0.0;
	dx = 1.0 / (float) [self bounds].size.width;
	for(i = 0; i < width; i++, x += dx) {
		slice = NSMakeRect([self bounds].origin.x + (float) i + 0.5, [self bounds].origin.y + 0.5, 1, [self bounds].size.height);
		[[gradient colorForOffset: x] set];
		[NSBezierPath fillRect: slice];
	}
	[[NSColor blackColor] set];
	[NSBezierPath strokeRect: 
	 NSMakeRect([self bounds].origin.x + 0.5, [self bounds].origin.y + 0.5, [self bounds].size.width - 1.0, [self bounds].size.height - 1.0)
	 ];
	[NSBezierPath fillRect: 
	 NSMakeRect([self bounds].origin.x + (float) (width / 2), [self bounds].origin.y + 0.5, 1.0, [self bounds].size.height / 6.0)
	 ];
	[NSBezierPath fillRect: 
	 NSMakeRect([self bounds].origin.x + (float) (width / 4), [self bounds].origin.y + 0.5, 1.0, [self bounds].size.height / 8.0)
	 ];
	[NSBezierPath fillRect: 
	 NSMakeRect([self bounds].origin.x + 3.0 * (float) (width / 4), [self bounds].origin.y + 0.5, 1.0, [self bounds].size.height / 8.0)
	 ];
}

@end
