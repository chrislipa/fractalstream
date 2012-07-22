//
//  FSScriptLibraryItem.m
//  FractalStream
//
//  Created by Christopher Lipa on 7/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "FSScriptLibraryItem.h"
#import "FSLog.h"
#import "FSSave.h"
@implementation FSScriptLibraryItem

- (id) initWithPath: (NSString*) p file: (NSString*) f {
	ENTER
	self = [super init];
	id x = [[self makeLibraryItemForPath: [NSString stringWithFormat: @"%@%@", p, f]] retain];
	EXIT
	return x;
}

- (id) makeLibraryItemForPath: (NSString*) p {
	ENTER
	NSFileManager* fs;
	fs = [NSFileManager defaultManager];
	path = [p copy];
	children = nil;
	if([fs fileExistsAtPath: p isDirectory: &group] == NO) return nil;
	if(group == YES) {
		/* We are a directory, use the name as our title */
		title = [[path lastPathComponent] copy];
		path = [[NSString stringWithFormat: @"%@/", path] retain];
		description = nil; preview = nil;
	}
	else {
		NSArray* array;
		id item;
		NSEnumerator* en;
		int i;
		/* We are a script, load our data */
		[FSSave useMiniLoads: YES];
		array = [[NSKeyedUnarchiver unarchiveObjectWithData: [NSData dataWithContentsOfFile: p]] minidata];
		en = [array objectEnumerator];
		title = nil; description = nil; preview = nil;
		i = 0;
		while(item = [en nextObject]) {
			switch(i) {
				case 0:
					title = [[NSString stringWithString: item] retain];
					break;
				case 1:  // source
					break;
				case 2:
					description = [[NSData dataWithData: item] retain];
					break;
				case 3:
					if([item isKindOfClass: [NSImage class]]) preview = [item copy];
					else preview = [[NSImage alloc] initWithData: item];
					break; 
				default:
					break;
			}
			++i;
		}
	} 
	EXIT
	return self;
}

- (void) loadChildren {
	ENTER
	NSFileManager* fs;
	NSArray* ar;
	id item;
	NSEnumerator* en;
	BOOL isDirectory;
	children = [[NSMutableArray alloc] init];
	fs = [NSFileManager defaultManager];
	ar = [fs directoryContentsAtPath: path];
	en = [ar objectEnumerator];
	while(item = [en nextObject]) {
		[fs fileExistsAtPath:
         [NSString stringWithFormat: @"%@%@", path, item]
                 isDirectory: &isDirectory
         ];	
		if([item hasSuffix: @".fs"] || isDirectory) 
			[children addObject: [[[FSScriptLibraryItem alloc]
                                   initWithPath: path file: item] autorelease]];
	}
	EXIT
    
}

- (BOOL) isGroup { return group; }
- (NSString*) title { return title; }
- (NSData*) description { return description; }
- (NSString*) path { return path; }
- (NSImage*) image { return preview; }
- (int) numberOfChildren { 
	
	if(group == NO) return 0;
	if(children == nil) [self loadChildren];
	return [children count];
}
- (id) child: (int) c {
	if(children == nil) [self loadChildren];
	return [children objectAtIndex: c];
}

- (void) dealloc {
	ENTER
	[children release];
	[super dealloc];
	EXIT
}

@end

