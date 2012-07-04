//
//  FSGradient.h
//  FractalStream
//
//  Created by Christopher Lipa on 7/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSGradient : NSObject <NSCoding> {
	NSString* name;
	NSMutableArray* stopArray;
	NSMutableArray* colorArray;
	int smoothing;
	BOOL linear;
	int subdivisions;
	float* cache;
	BOOL cacheDirty;
}

- (id) init;
- (void) dealloc;
- (id) initWithR: (float) r G: (float) g B: (float) b;
- (NSString*) name;
- (void) setColorName: (NSString*) newName;
- (NSColor*) colorForOffset: (float) offset;
- (void) addColor: (NSColor*) color atStop: (float) offset;
- (void) resetToColor: (NSColor*) c;
- (void) setSmoothing: (int) sm;
- (int) smoothing;
- (void) setLinear: (BOOL) li;
- (BOOL) isLinear;
- (int) subdivisions;
- (void) setSubdivisions: (int) sd;
- (float*) getColorCache;
- (NSArray*) stopArray;
- (NSArray*) colorArray;
- (void) setStops: (NSArray*) stops andColors: (NSArray*) colors;
- (float*) getColorCache ;
@end