//
//  CircularOverwriteBuffer.m
//  FractalStream
//
//  Created by Christopher Lipa on 5/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "CircularOverwriteBuffer.h"

@interface CircularOverwriteBuffer ()
@property (readwrite) int capacity;
@property (readwrite, retain) NSMutableArray* array;
@property (readwrite) int startIndex;
@property (readwrite) int endIndex;
@end



@implementation CircularOverwriteBuffer

@synthesize capacity = _capacity;
@synthesize array = _array;
@synthesize startIndex = _startIndex;
@synthesize endIndex = _endIndex;

-(id) initWithCapacity:(int) p_capacity {
	if (self = [super init]) {
		self.capacity = p_capacity;
		self.array = [NSMutableArray arrayWithCapacity:p_capacity+1];
		self.startIndex = 0;
		self.endIndex = 0;
	}
	return self;
}

-(NSArray*) allObjects {
	NSMutableArray* retArray = [NSMutableArray arrayWithCapacity:[self.array count]];
	for (int i = self.startIndex; i != self.endIndex; i = (i+1)%(self.capacity +1)) {
		[retArray addObject:[self.array objectAtIndex:i]];
	}
	return retArray;
}
-(void) addObject:(id) object {
	if ([self.array count] > self.endIndex) {
		[self.array replaceObjectAtIndex:self.endIndex withObject:object];
	} else {
		[self.array addObject:object];
	}
	self.endIndex = (self.endIndex+1) % (self.capacity+1);
	if (self.startIndex == self.endIndex) {
		self.startIndex = (self.startIndex+1) % (self.capacity+1);
	}
}


-(void) dealloc {
	[_array release];
	_array = nil;
	[super dealloc];
}

@end
