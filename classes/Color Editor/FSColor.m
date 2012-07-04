//
//  FSColor.m
//  FractalStream
//
//  Created by Matthew Noonan on 7/7/09.
//  Copyright 2009 Cornell University. All rights reserved.
//

#import "FSColor.h"
#import "FSLog.h"




@implementation FSColor

- (FSColor*) nextColorForX: (double) X Y: (double) Y {
	FSColor* c;
	float r, g, b;
	c = [[FSColor alloc] init];
	c -> x = X; c -> y = Y;
	switch(nextAutocolor & 7) {
		case 0:		r = 0.0;	g = 0.0;	b = 1.0;	break;
		case 1:		r = 0.0;	g = 1.0;	b = 0.0;	break;
		case 2:		r = 1.0;	g = 0.0;	b = 0.0;	break;
		case 3:		r = 0.0;	g = 1.0;	b = 1.0;	break;
		case 4:		r = 1.0;	g = 1.0;	b = 0.0;	break;
		case 5:		r = 1.0;	g = 0.0;	b = 1.0;	break;
		case 6:		r = 1.0;	g = 0.5;	b = 0.5;	break;
		case 7:		r = 1.0;	g = 1.0;	b = 1.0;	break;
		default:		r = 1.0;	g = 0.0;	b = 0.0;	break; 
	}
	if(nextAutocolor & 8) { r *= 0.5; g *= 0.5; b *= 0.5; }
	c -> gradient = [[FSGradient alloc] initWithR: r G: g B: b];
	if(gradient) {
		[c -> gradient setSmoothing: [gradient smoothing]];
		[c -> gradient setSubdivisions: [gradient subdivisions]];
		[c -> gradient setLinear: [gradient isLinear]];
	}
	else {
		[c -> gradient setSmoothing: 0];
		[c -> gradient setSubdivisions: 16];
		[c -> gradient setLinear: YES];
	}
	++nextAutocolor;
	return [c autorelease];
}

- (BOOL) hasInfinity { return infinity; }
- (void) setHasInfinity: (BOOL) inf { 
	if((infinity != inf) && (inf == YES)) {
		infinity = inf;
		[[NSNotificationCenter defaultCenter] postNotificationName: @"FSAutocolorChanged" object: self];
	}
	else infinity = inf;
}

- (FSColor*) subcolor: (int) i { return ((i < 0) || (i >= [subcolor count]))? nil : [subcolor objectAtIndex: i]; }

- (void) removeAllSubcolors {
	[subcolor release];
	subcolor = [[NSMutableArray alloc] init];
}

- (void) removeSubcolorAtIndex: (int) i {
	[subcolor removeObjectAtIndex: i];
}

- (NSArray*) subcolors { return subcolor; }
- (double) xVal { return x; }
- (double) yVal { return y; }

- (id) init {
	self = [super init];
	name = nil;
	subcolor = [[NSMutableArray alloc] init];
	gradient = nil;
	locked = NO;
	nextAutocolor = 0;
	ac = NO;
	infinity = NO;
	return self;
}

- (void) dealloc {
	[super dealloc];
}


- (id) initWithCoder: (NSCoder*) coder {
	self = [super init];
	name = [[coder decodeObjectForKey: @"name"] retain];
	//subcolor = [[coder decodeObjectForKey: @"subcolor"] retain];
	//nextAutocolor = [[coder decodeObjectForKey: @"nextAutocolor"] intValue];
	// ignore saved autocolors
	subcolor = [[NSMutableArray alloc] init];
	nextAutocolor = 0;
	gradient = [[coder decodeObjectForKey: @"color"] retain];
	locked = [[coder decodeObjectForKey: @"locked"] boolValue];
	ac = [[coder decodeObjectForKey: @"useAutocolor"] boolValue];
	infinity = NO;
	
	return self;
}

- (void) encodeWithCoder: (NSCoder*) coder {
	[coder encodeObject: name forKey: @"name"];
	[coder encodeObject: subcolor forKey: @"subcolor"];
	[coder encodeObject: gradient forKey: @"color"];
	[coder encodeObject: [NSNumber numberWithBool: locked] forKey: @"locked"];
	[coder encodeObject: [NSNumber numberWithBool: ac] forKey: @"useAutocolor"];
	[coder encodeObject: [NSNumber numberWithInt: nextAutocolor] forKey: @"nextAutocolor"];
	return;
}

- (void) createNewSubcolorForX: (double) X Y: (double) Y {
	[subcolor addObject: [self nextColorForX: X Y: Y]]; 
	NSLog(@"createNewSubcolorForX: %f Y: %f\n", X, Y);
	// tell the world: we made a new color
	[self performSelectorOnMainThread: @selector(notifyAutocolorChanged) withObject: nil waitUntilDone: NO];
}

- (FSGradient*) gradientForX: (double) X Y: (double) Y withTolerance: (double) epsilon allowNew: (BOOL) allow {
	NSEnumerator* en;
	FSColor* c;
	
	if(ac == NO) return gradient;
	en = [subcolor objectEnumerator];
	if((locked == NO) && (allow == YES)) {
		synchronizeTo(subcolor) {
			while((c = [en nextObject])) if([c isNearX: X Y: Y withTolerance: epsilon]) return [c gradient];
			if([subcolor count] >= 100) return [[[FSGradient alloc] initWithR: 0.4 G: 0.4 B: 0.4] autorelease];
			c = [self nextColorForX: X Y: Y];
			[subcolor addObject: c]; 
			// tell the world: we made a new color
			[self performSelectorOnMainThread: @selector(notifyAutocolorChanged) withObject: nil waitUntilDone: NO];
			return [c gradient];
		}
	}
	else {
		// create blended gradient
		int i,j;
		double weight;
		double w[1024];
		double d;
		float r, g, b, t/*, dt*/;
		int s;
		FSGradient* gr;
		NSColor* co;
		weight = 0.0; i = 0;
		while((c = [en nextObject])) { 
			d = (([c xVal] - X) * ([c xVal] - X) + ([c yVal] - Y) * ([c yVal] - Y)); 
			if(d <= 0.00000001) d = 0.00000001;
			weight += 1.0 / d; 
			w[i++] = 1.0 / d;
		}
		if(weight <= 0.0) { 
			gr = [[FSGradient alloc] initWithR: 0.2 G: 0.2 B: 0.2];
			return [gr autorelease];
		}
		gr = [[FSGradient alloc] init];
		s = [[self baseGradient] subdivisions]; if(s <= 0) s = 1;
		t = 0.0; 
		//dt = 1.0 / (float) s;
		for(i = 0; i < s; i++) {
			r = 0.0; g = 0.0; b = 0.0;
			j = 0;
			en = [subcolor objectEnumerator];
			while((c = [en nextObject])) {
				co = [[[c baseGradient] colorArray] objectAtIndex: j];
				r += w[j] * [co redComponent] / weight;
				g += w[j] * [co greenComponent] / weight;
				b += w[j] * [co blueComponent] / weight;
				++j;
			}
			if(i == 0) [gr resetToColor: [NSColor colorWithDeviceRed: r green: g blue: b alpha: 1.0]];
			else [gr addColor: [NSColor colorWithDeviceRed: r green: g blue: b alpha: 1.0] atStop: t];
		}
		return [gr autorelease];
	}
}

- (void) notifyAutocolorChanged {
	[[NSNotificationCenter defaultCenter] postNotificationName: @"FSAutocolorChanged" object: self];
}

- (BOOL) isNearX: (double) X Y: (double) Y withTolerance: (double) epsilon {
	return (((x - X)*(x - X) + (y - Y)*(y - Y)) <= (epsilon*epsilon))? YES : NO;
}

- (void) setGradient: (FSGradient*) grad {
	[self setGradient: grad forColor: -1];
}

- (void) setGradient: (FSGradient*) grad forColor: (int) color {
	if(color < 0) { if(gradient) [gradient release]; gradient = [grad retain]; }
	else if(color < [subcolor count]) [[subcolor objectAtIndex: color] setGradient: grad];
}

- (FSGradient*) gradient {
	return ac? nil : gradient;
}

- (FSGradient*) baseGradient {
	return gradient;
}

- (void) useAutocolor: (BOOL) a { ac = a; }
- (BOOL) usesAutocolor { return ac; }

- (BOOL) isLocked { return locked; }
- (void) setLocked: (BOOL) l { locked = l; }
- (NSString*) name { return name; }
- (void) setName: (NSString*) n {
	if(name) [name release];
	name = [n retain];
}

@end

