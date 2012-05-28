//
//  CircularOverwriteBuffer.h
//  FractalStream
//
//  Created by Christopher Lipa on 5/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CircularOverwriteBuffer : NSObject {
	int _capacity;
	NSMutableArray* _array;
	int _startIndex;
	int _endIndex;
}



-(id) initWithCapacity:(int) capacity;
-(NSArray*) allObjects;
-(void) addObject:(id) object;


@end
