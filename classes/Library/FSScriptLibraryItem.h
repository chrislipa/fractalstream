//
//  FSScriptLibraryItem.h
//  FractalStream
//
//  Created by Christopher Lipa on 7/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSScriptLibraryItem : NSObject {
	NSImage* preview;
	NSString* title;
	NSData* description;
	NSString* path;
	NSMutableArray* children;
	BOOL group;
}

- (void) loadChildren;
- (id) initWithPath: (NSString*) p file: (NSString*) f;
- (id) makeLibraryItemForPath: (NSString*) p;
- (BOOL) isGroup;
- (NSString*) title;
- (NSData*) description;
- (int) numberOfChildren;
- (id) child: (int) c;
- (NSString*) path;
- (NSImage*) image;

@end