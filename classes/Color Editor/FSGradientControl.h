//
//  FSGradientControl.h
//  FractalStream
//
//  Created by Christopher Lipa on 7/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "FSGradient.h"
#import "FSColorLibraryController.h"

@interface FSGradientControl : NSView {
	FSGradient* gradient;
	IBOutlet NSColorWell* colorWell; 
	BOOL connectedToLibrary;
	FSColorLibraryController* library;
	id noteSender;
}

- (void) connectToLibrary: (id) lib;
- (void) setNotificationSender: (id) ns;
- (void) setGradient: (FSGradient*) grad;
- (void) insertGradient: (FSGradient*) grad;
- (IBAction) fill: (id) sender;
- (void) drawRect: (NSRect) rect;
- (void) mouseDown: (NSEvent*) theEvent;

@end
