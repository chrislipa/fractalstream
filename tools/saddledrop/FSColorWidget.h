//
//  FSColorWidget.h
//  FractalStream
//
//  Created by Matt Noonan on 1/14/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#include <stdlib.h>


@interface FSColorWidget : NSObject <NSCoding> {
	IBOutlet NSMatrix* colorMatrix;
	IBOutlet NSColorWell* colorWell;
	IBOutlet NSButton* magGradient;
	IBOutlet NSButton* magShade;
	IBOutlet NSButton* phaseGradient;
	IBOutlet NSButton* phaseShade;
	IBOutlet NSPopUpButton* colorButton;
	NSArray* names;
	float colorArray[8][8][3];
	float fullColorArray[64][8][8][3];
	int currentColor;
}

- (IBAction) reset: (id) sender;
- (IBAction) submit: (id) sender;
- (IBAction) change: (id) sender;

- (NSArray*) names;

- (void) encodeWithCoder: (NSCoder*) coder;
- (id) initWithCoder: (NSCoder*) coder;

@end

@interface FSColorWidgetCell : NSCell {
	NSColor* color;
	BOOL active;
	NSColorWell* colorWell;
}

- (NSColor*) color;
- (BOOL) active;
- (void) setColorToR: (float) r G: (float) g B: (float) b;
- (void) setColorWellTo: (NSColorWell*) cw;
- (void) setNamesTo: (NSArray*) newNames;


@end