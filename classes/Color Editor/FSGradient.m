//
//  FSGradient.m
//  FractalStream
//
//  Created by Christopher Lipa on 7/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#import "FSGradient.h"
#import "FSLog.h"
@implementation FSGradient 

- (id) initWithR: (float) r G: (float) g B: (float) b {
	
	self = [super init];
	[self resetToColor: [NSColor colorWithCalibratedRed: r*0.5 green: g*0.5 blue: b*0.5 alpha: 1.0]];
	[self addColor: [NSColor colorWithCalibratedRed: r + 0.5*g green: g+0.4*b blue: b+0.2*r alpha: 1.0] atStop: 0.5];
	smoothing = 0;
	linear = YES;
	subdivisions = 16;
	cacheDirty = YES;
	cache = malloc(subdivisions * 3 * sizeof(float));
	
	return self;
}

- (id) init {
	
 	self = [super init];
	[self resetToColor: [NSColor colorWithCalibratedRed: 1.0 green: 1.0 blue: 1.0 alpha: 1.0]];
	name = [ @"< please name me >" retain];
	smoothing = 0;
	linear = YES;
	subdivisions = 16;
	cacheDirty = YES;
	cache = malloc(subdivisions * 3 * sizeof(float));
	
	return self;
}

- (void) dealloc {
	ENTER
	free(cache);
	[name release];
	[stopArray release];
	[colorArray release];
	[super dealloc];
	EXIT
}

- (id) initWithCoder: (NSCoder*) coder {
	
	self = [super init];
	name = [[coder decodeObjectForKey: @"name"] retain];
	stopArray = [[coder decodeObjectForKey: @"stops"] retain];
	colorArray = [[coder decodeObjectForKey: @"colors"] retain];
	smoothing = [[coder decodeObjectForKey: @"isSmooth"] intValue];
	linear = [[coder decodeObjectForKey: @"isLinear"] boolValue];
	subdivisions = [[coder decodeObjectForKey: @"subdivisions"] intValue];
	cacheDirty = YES;
	cache = malloc(subdivisions * 3 * sizeof(float));
	
	return self;
}

- (void) encodeWithCoder: (NSCoder*) coder {
	
	[coder encodeObject: name forKey: @"name"];
	[coder encodeObject: stopArray forKey: @"stops"];
	[coder encodeObject: colorArray forKey: @"colors"];
	[coder encodeObject: [NSNumber numberWithInt: smoothing] forKey: @"isSmooth"];
	[coder encodeObject: [NSNumber numberWithBool: linear] forKey: @"isLinear"];
	[coder encodeObject: [NSNumber numberWithInt: subdivisions] forKey: @"subdivisions"];
	
	return;
}

- (NSString*) name { return name; }
- (void) setColorName: (NSString*) newName {
	ENTER
	[name release];
	name = [[NSString stringWithString: newName] retain];
	EXIT
}


- (void) resetToColor: (NSColor*) c {
	
	NSColor* cd;
	cd = [NSColor colorWithCalibratedRed: [c redComponent]
								   green: [c greenComponent]
									blue: [c blueComponent]
								   alpha: 1.0
		  ];
	stopArray = [[NSMutableArray arrayWithObjects: [NSNumber numberWithFloat: 0.0], [NSNumber numberWithFloat: 1.0], nil] retain];
	colorArray = [[NSMutableArray arrayWithObjects: cd, cd, nil] retain];
	cacheDirty = YES;
	
}

- (NSColor*) colorForOffset: (float) offset {
	
	NSNumber* stop;
	NSColor *c0, *c1/*, *c*/;
	NSEnumerator* stopEnumerator, *colorEnumerator;
	float r, g, b, x, x0, x1;
	int index;
	stopEnumerator = [stopArray objectEnumerator];
	colorEnumerator = [colorArray objectEnumerator];
	c0 = [colorEnumerator nextObject]; c1 = nil;
	x0 = 0.0; [stopEnumerator nextObject];
	x1 = x0;
	index = 0;
	offset -= (float)((int) offset);
	while ((stop = [stopEnumerator nextObject])) {
		++index;
		c1 = [colorEnumerator nextObject];
		x1 = [stop floatValue];
		if(x1 >= offset) break;
		c0 = c1;		
		x0 = x1;
	}
	x = 1.0 - (offset - x0) / (x1 - x0);
	r = [c0 redComponent] * x + [c1 redComponent] * (1.0 - x);
	g = [c0 greenComponent] * x + [c1 greenComponent] * (1.0 - x);
	b = [c0 blueComponent] * x + [c1 blueComponent] * (1.0 - x);
	
	return [NSColor colorWithCalibratedRed: r green: g blue: b alpha: 1.0];
}

- (void) addColor: (NSColor*) color atStop: (float) offset {
	NSNumber* stop;
	//NSColor/* *c0,*/ /**c1*//*, *c*/;
	NSEnumerator* stopEnumerator, *colorEnumerator;
	float/* r, g, b, x, x0,*/ x1;
	int index;
	stopEnumerator = [stopArray objectEnumerator];
	colorEnumerator = [colorArray objectEnumerator];
	/*c0 = */[colorEnumerator nextObject];
	/*x0 = 0.0;*/ [stopEnumerator nextObject];
	index = 0;
	while ((stop = [stopEnumerator nextObject])) {
		++index;
		/*c1 = */[colorEnumerator nextObject];
		x1 = [stop floatValue];
		if(x1 >= offset) break;
		//c0 = c1;		
		//x0 = x1;
	}
	[colorArray insertObject: color atIndex: index];
	[stopArray insertObject: [NSNumber numberWithFloat: offset] atIndex: index];
	cacheDirty = YES;
}

- (void) setSmoothing: (int) sm { smoothing = sm; cacheDirty = YES; }
- (int) smoothing { return smoothing; }

- (void) setLinear: (BOOL) li { linear = li; cacheDirty = YES; }
- (BOOL) isLinear { return linear; }

- (int) subdivisions { return subdivisions; }
- (void) setSubdivisions: (int) sd {
	subdivisions = sd;
	if((subdivisions <= 0) || subdivisions > 1024) subdivisions = 1024;
	cacheDirty = YES;
}

- (float*) getColorCache {
	int i;
	float t, dt;
	NSColor* c;
	if(cacheDirty == NO) return cache;
	cache = realloc(cache, 3 * 8 * subdivisions * sizeof(float));
	for(i = 0, t = 0.0, dt = 1.0 / (float) subdivisions; i < subdivisions; i++, t += dt) {
		c = [self colorForOffset: t];
		cache[3 * i + 0] = [c redComponent];
		cache[3 * i + 1] = [c greenComponent];
		cache[3 * i + 2] = [c blueComponent];
	}
	cacheDirty = NO;
	return cache;
}

- (NSArray*) stopArray { return stopArray; }
- (NSArray*) colorArray { return colorArray; }
- (void) setStops: (NSArray*) stops andColors: (NSArray*) colors {
	if(stopArray) [stopArray release];
	if(colorArray) [colorArray release];
	stopArray = [[NSMutableArray arrayWithArray: stops] retain];
	colorArray = [[NSMutableArray arrayWithArray: colors] retain];
	cacheDirty = YES;
}

@end