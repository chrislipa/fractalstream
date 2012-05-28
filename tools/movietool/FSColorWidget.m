//
//  FSColorWidget.m
//  FractalStream
//
//  Created by Matt Noonan on 1/14/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import "FSColorWidget.h"


@implementation FSColorWidget

- (void) awakeFromNib {
	int c, i, j;
	float shade, fill;
	
	NSLog(@"colorWidget awoke from nib\n");
	for(c = 0; c < 64; c++) {
		for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) {
			shade = (c & 8)? 0.3 : 0.7;
			fill = (float) i / 4.0;
			if(fill > 1.0) fill = 2.0 - fill;
			fill *= 0.5;
			fullColorArray[c][j][i][0] = (float)((c+1) & 4) * shade + fill;
			fullColorArray[c][j][i][1] = (float)((c+1) & 2) * shade + fill;
			fullColorArray[c][j][i][2] = (float)((c+1) & 1) * shade + fill;
		}
	}


	/* set up the color picker */
	[colorMatrix setCellClass: [FSColorWidgetCell class]];
	[colorMatrix setPrototype: nil];
	[colorMatrix setCellSize: NSMakeSize(20.0, 20.0)];
	for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) [colorMatrix addColumn];
	for(i = 0; i < 8; i++) [colorMatrix removeColumn: 0];

	[colorMatrix selectCellAtRow: -1 column: -1];
	[colorMatrix selectCellAtRow: 0 column: 0];
	[colorMatrix sendAction];
	
	for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) {
		[[colorMatrix cellAtRow: i column: j] setColorWellTo: colorWell]; 
		[[colorMatrix cellAtRow: i column: j] 
			setColorToR: 0.0
			G: 0.0
			B: 0.0
		];
		[[colorMatrix cellAtRow: i column: j] untoggle];
	}

	[[colorMatrix cellAtRow: 0 column: 0] 
		setColorToR: 0.0
		G: 0.0
		B: 1.0
	];
	[[colorMatrix cellAtRow: 0 column: 4] 
		setColorToR: 0.0
		G: 1.0
		B: 1.0
	];
	[[colorMatrix cellAtRow: 0 column: 0] retoggle];
	[[colorMatrix cellAtRow: 0 column: 4] retoggle];
	[self submit: self];
	
}

- (void) reset: (id) sender {
	int i, j;
	for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) {
		[[colorMatrix cellAtRow: i column: j] setColorToR: 0.0 G: 0.0 B: 0.0 ];	
		[[colorMatrix cellAtRow: i column: j] untoggle];
		[colorMatrix drawCellAtRow: i column: j];
	}
}

- (void) submit: (id) sender {
	int i, j, n, I, J;
	float tcolor[8][8][3];
	float count;
	BOOL touch[8][8], ttouch[8][8], touched;
	int tlog, phaseGradientOn;
	float r, g, b;
	
	tlog = 0;
	phaseGradientOn = ([phaseGradient state] == NSOnState)? 1 : 0;
	
	for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) {
		[[[colorMatrix cellAtRow: i column: j] color] getRed: &r green: &g blue: &b alpha: NULL];
		colorArray[i][j][0] = r;
		colorArray[i][j][1] = g;
		colorArray[i][j][2] = b;
		touch[i][j] = [[colorMatrix cellAtRow: i column: j] active];
	}
	for(n = 0; n < 100; n++) {
	for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) {
		if((touch[i][j] == NO) || (tlog != 0)) {
			r = g = b = 0.0;
			count = 0.0;
			
			I = i - 1; 
			J = j;
			if((tlog == 0) || phaseGradientOn) {
			if(I < 0) I = 7; if(J < 0) J = 7; if(I > 7) I = 0; if(J > 7) J = 0;
			if(touch[I][J] == YES) {
				count += 1.0;
				r += colorArray[I][J][0];
				g += colorArray[I][J][1];
				b += colorArray[I][J][2];
			}
			I = i + 1; 
			J = j;
			if(I < 0) I = 7; if(J < 0) J = 7; if(I > 7) I = 0; if(J > 7) J = 0;
			if(touch[I][J] == YES) {
				count += 1.0;
				r += colorArray[I][J][0];
				g += colorArray[I][J][1];
				b += colorArray[I][J][2];
			}
			I = i; 
			J = j - 1;
			if(I < 0) I = 7; if(J < 0) J = 7; if(I > 7) I = 0; if(J > 7) J = 0;
			if(touch[I][J] == YES) {
				count += 1.0;
				r += colorArray[I][J][0];
				g += colorArray[I][J][1];
				b += colorArray[I][J][2];
			}
			}
			I = i; 
			J = j + 1;
			if(I < 0) I = 7; if(J < 0) J = 7; if(I > 7) I = 0; if(J > 7) J = 0;
			if(touch[I][J] == YES) {
				count += 1.0;
				r += colorArray[I][J][0];
				g += colorArray[I][J][1];
				b += colorArray[I][J][2];
			}
			ttouch[i][j] = touch[i][j];
			if(tlog) {
				count += 2.0;
				r += 2.0 * colorArray[i][j][0];
				g += 2.0 * colorArray[i][j][1];
				b += 2.0 * colorArray[i][j][2];
			}
			if(count != 0.0) {
				r /= count;
				g /= count;
				b /= count;
				ttouch[i][j] = YES;
			}
		}
		else { r = colorArray[i][j][0]; g = colorArray[i][j][1]; b = colorArray[i][j][2]; ttouch[i][j] = YES; }
		
		tcolor[i][j][0] = r;
		tcolor[i][j][1] = g;
		tcolor[i][j][2] = b;
	}
	touched = YES;
	for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) {
		touch[i][j] = ttouch[i][j];
		if(touch[i][j] == NO) touched = NO;
	}
	if(tlog == 2) break;
	if(touched == YES) tlog++; 
	for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) {
		colorArray[i][j][0] = fullColorArray[currentColor][i][j][0] = tcolor[i][j][0];
		colorArray[i][j][1] = fullColorArray[currentColor][i][j][1] = tcolor[i][j][1];
		colorArray[i][j][2] = fullColorArray[currentColor][i][j][2] = tcolor[i][j][2];
	}
	}
	for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) {
		[[colorMatrix cellAtRow: i column: j] setColorToR: tcolor[i][j][0] G: tcolor[i][j][1] B: tcolor[i][j][2] ];
		[[colorMatrix cellAtRow: i column: j] untoggle];
		[colorMatrix drawCellAtRow: i column: j];		
	}
}

- (void) colorArrayValue: (float*) cA {
	int c, i, j, k;
	for(c = 0; c < 64; c++) for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) for(k = 0; k < 3; k++)
		cA[(8*8*3*c) + (i*8*3) + (j * 3) + k] = fullColorArray[c][i][j][k];
}

- (IBAction) change: (id) sender {
	/* user selected a different color */
	int newColor, i, j, k;

	newColor = [colorButton indexOfSelectedItem];
	for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) for(k = 0; k < 3; k++) {
		fullColorArray[currentColor][i][j][k] = colorArray[i][j][k];
		colorArray[i][j][k] = fullColorArray[newColor][i][j][k];
		[[colorMatrix cellAtRow: i column: j] setColorToR: colorArray[i][j][0] G: colorArray[i][j][1] B: colorArray[i][j][2] ];	
		[[colorMatrix cellAtRow: i column: j] untoggle];
		[colorMatrix drawCellAtRow: i column: j];
	}
	currentColor = newColor;
}

- (int) numberOfColors { return [names count]; }

- (NSArray*) names { return names; }

- (void) setNamesTo: (NSArray*) newNames { 
	NSLog(@"FSColorWidget %@ got new names %@\n", self, newNames);
	
	names = [[NSArray arrayWithArray: newNames] retain];
	[self setup];
}

- (void) setup {
	NSEnumerator* namesEnumerator;
	NSString* aName;
	
	namesEnumerator = [names objectEnumerator];
	[colorButton removeAllItems];
	while(aName = [namesEnumerator nextObject])[colorButton addItemWithTitle: aName];
	[colorButton selectItemAtIndex: 0];
	currentColor = 0;
}

- (void) getColorsFrom: (FSColorWidget*) cw {
	int i, j, k, c;
	names = [[NSArray arrayWithArray: cw->names] retain];
	for(k = 0; k < [self numberOfColors]; k++) for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) for(c = 0; c < 3; c++) {
			fullColorArray[k][i][j][c] = cw->fullColorArray[k][i][j][c];
			if(k == 0) colorArray[i][j][c] = fullColorArray[k][i][j][c];
	}
	[self setup];
	for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) {
		[[colorMatrix cellAtRow: i column: j] setColorToR: fullColorArray[0][i][j][0] G:  fullColorArray[0][i][j][1] B:  fullColorArray[0][i][j][2] ];
		[[colorMatrix cellAtRow: i column: j] untoggle];
		[colorMatrix drawCellAtRow: i column: j];		
	}
	
}

- (void) encodeWithCoder: (NSCoder*) coder
{
	int i, j, k, c, l, size;
	float* flat;
	
	// version 0
	NSLog(@"FSColorWidget %@ encodeWithCoder\n", self);
	NSLog(@"colors: %@\n", names);
	NSLog(@"number of colors: %i\n", [self numberOfColors]);
	size = 8 * 8 * 3 * [self numberOfColors];
	flat = malloc(sizeof(float) * size);
	l = 0;
	NSLog(@"flat = %p\n", flat);
	for(k = 0; k < [self numberOfColors]; k++) for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) for(c = 0; c < 3; c++) 
		flat[l++] = fullColorArray[k][i][j][c];
	NSLog(@"encoding names: %@\n", names);
	[coder encodeObject: names];
	NSLog(@"encoding an array of %i floats at %p\n", size, flat);
	[coder encodeArrayOfObjCType: @encode(float) count: size at: flat];
	free(flat);
}

- (id) initWithCoder: (NSCoder*) coder
{
	float* flat;
	int i, j, k, c, l, size;
	self = [super init];

	// version 0
	names = [[coder decodeObject] retain];
	NSLog(@"fscolorwidget initWithCoder found these names: %@\n", names);
	size = 8 * 8 * 3 * [self numberOfColors];
	flat = malloc(sizeof(float) * size);
	[coder decodeArrayOfObjCType: @encode(float) count: size at: flat];
	l = 0;
	for(k = 0; k < [self numberOfColors]; k++) for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) for(c = 0; c < 3; c++) 
		fullColorArray[k][i][j][c] = flat[l++];
	free(flat);
	return self;
}


@end

@implementation FSColorWidgetCell

- (id) initImageCell: (NSImage*) image {
	NSLog(@"FSColorWidgetCell got initImageCell\n");
	return self;
}

- (id) initTextCell: (NSString*) string {
	NSLog(@"FSColorWidgetCell got initImageCell\n");
	return self;
}

- (SEL) action { return @selector(toggle:); }
- (id) target { return self; }

- (id) init {
	float r, g, b;
	self = [super init]; 
	
	r = (float) random() / (float) RAND_MAX;
	g = (float) random() / (float) RAND_MAX;
	b = (float) random() / (float) RAND_MAX;
	color = [[NSColor colorWithCalibratedRed: r green: g blue: b alpha: 1.0] retain];	
	active = NO;
	return self;
}

- (void) setColorToR: (float) r G: (float) g B: (float) b {
	[color release];
	color = [[NSColor colorWithCalibratedRed: r green: g blue: b alpha: 1.0] retain];
}

- (void) drawInteriorWithFrame: (NSRect) frame inView: (NSView*) view
{
	if(active == YES) {
		[[NSColor whiteColor] set];
		NSRectFill(frame);
		frame = NSInsetRect(frame, 2.0, 2.0);
		[[NSColor blackColor] set];
		NSRectFill(frame);
		frame = NSInsetRect(frame, 2.0, 2.0);
	}
	[color set];
	NSRectFill(frame);
	
}

- (void) setColorWellTo: (NSColorWell*) cw { colorWell = [cw retain]; }

- (NSColor*) color { return color; }
- (BOOL) active { return active; }
- (void) toggle: (id) sender {
	if(active == NO) {
		[color release];
		color = [[colorWell color] retain];
	}
	active = (active == YES)? NO: YES;
}
- (void) untoggle { active = NO; }
- (void) retoggle { active = YES; }

@end