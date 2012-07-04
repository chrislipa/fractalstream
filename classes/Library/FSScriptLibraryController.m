//
//  FSScriptLibraryController.m
//  FractalStream
//
//  Created by Matthew Noonan on 1/27/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "FSScriptLibraryController.h"
#import "FSLog.h"
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

@implementation FSScriptLibraryController

- (void) awakeFromNib {
	ENTER
	useOutlineView = YES;
	[[NSNotificationCenter defaultCenter]
		addObserver: self selector: @selector(newSelection:)
		name: NSOutlineViewSelectionDidChangeNotification object: outline
	];
	library = nil;
	[self reload];
	EXIT
}

- (void) dealloc {
	ENTER
	[[NSNotificationCenter defaultCenter]
		removeObserver: self
		name: NSOutlineViewSelectionDidChangeNotification object: outline
	];
	[super dealloc];
	EXIT
}

- (void) reload {
	ENTER
	NSFileManager* fs;
	NSArray* ar;
	id item;
	NSEnumerator* en;
	BOOL isDirectory;
	NSString* path;
	
#ifdef WINDOWS
	NSLog(@"FSScriptLibraryController needs builtInPlugInsPath, not available in Cocotron\n");
	library = nil;
	EXIT
	return;
#endif
	path = [NSString stringWithFormat: @"%@/", [[[NSBundle mainBundle] builtInPlugInsPath] stringByAppendingPathComponent: @"Scripts/"]];
	if(library) [library release];
	library = [[NSMutableArray alloc] init];
	fs = [NSFileManager defaultManager];
	if(useOutlineView) ar = [fs directoryContentsAtPath: path];
	else ar = [fs subpathsAtPath: path];
	en = [ar objectEnumerator];
	while(item = [en nextObject]) {
		[fs fileExistsAtPath:
			[NSString stringWithFormat: @"%@%@", path, item]
			isDirectory: &isDirectory
		];	
		if([item hasSuffix: @".fs"] || (isDirectory && useOutlineView)) {
			[library addObject: [[[FSScriptLibraryItem alloc] initWithPath: path file: item] autorelease]];
		}
	}
	[outline reloadData];
	EXIT
}

- (int) outlineView: (NSOutlineView*) outlineView numberOfChildrenOfItem: (FSScriptLibraryItem*) item {
	return (item == nil)? ((library == nil)? 0 : [library count]) : (int) [item numberOfChildren]; 
}

- (BOOL) outlineView: (NSOutlineView*) outlineView isItemExpandable: (FSScriptLibraryItem*) item {
	return (item == nil)? YES : (useOutlineView? [item isGroup] : NO);
}

- (id) outlineView: (NSOutlineView*) outlineView child: (int) index ofItem:(FSScriptLibraryItem*) item {
	return (item == nil)? [library objectAtIndex: index] : [item child: index];
}

- (id) outlineView: (NSOutlineView*) outlineView objectValueForTableColumn: (NSTableColumn*) col byItem: (FSScriptLibraryItem*) item {
	return (item == nil)? @"FractalStream Script Library" : [item title];
}

- (IBAction) newScript: (id) sender {
	ENTER
	[theDoc doDocumentLoadWithLibrary: NO];
	EXIT
}

- (IBAction) openScript: (id) sender {
	ENTER
	id item;
	item = [outline itemAtRow: [outline selectedRow]];
	if(item == nil) { NSLog(@"item was nil?\n"); return; }
	if([item path] == nil) return;
	if([item isGroup]) return;
	NSError* error = nil;
	bool retVal = [theDoc readFromData:[NSData dataWithContentsOfFile: [item path]] ofType:@"FractalStream Script" error:&error];
	if(retVal) {
		[theDoc doDocumentLoadWithLibrary: NO];
	}
	EXIT
}

- (IBAction) editScript: (id) sender {
	ENTER
	id item;
	item = [outline itemAtRow: [outline selectedRow]];
	if(item == nil) { NSLog(@"item was nil?\n"); return; }
	if([item path] == nil) return;
	if([item isGroup]) return;
	NSError* error = nil;
	bool retVal = [theDoc readFromData:[NSData dataWithContentsOfFile: [item path]] ofType:@"FractalStream Script" error:&error];
	
	if(retVal)
		[theDoc openEditor];
	EXIT
}

- (IBAction) switchScriptView: (id) sender {
	ENTER
	useOutlineView = ([sender indexOfSelectedItem] == 0)? YES : NO;
	[self reload];
	EXIT
}


- (void) newSelection: (NSNotification*) note {
	ENTER
	id item;
	item = [outline itemAtRow: [outline selectedRow]];
	if (item == nil) {
		[openButton setEnabled: NO];
		[openEditorButton setEnabled: NO];
		[description setString: @""];
		[previewer setImage: [NSImage imageNamed: @"NSRemoveTemplate"]];
		EXIT
		return;
	}
	if ([item isGroup]) {
		[openButton setEnabled: NO];
		[openEditorButton setEnabled: NO];
	}
	else {
		[openButton setEnabled: YES];
		[openEditorButton setEnabled: YES];
	}
	if([item description]) { 
		[description selectAll: self];
		[description replaceCharactersInRange: [description selectedRange]
			withRTFD: (NSData*) [item description]];
	}
	else [description setString: @""];
	if([item image]) [previewer setImage: [item image]];
	else {
		if([item isGroup]) [previewer setImage: [NSImage imageNamed: @"NSMultipleDocuments"]];
		else [previewer setImage: [NSImage imageNamed: @"NSRemoveTemplate"]];
	}
	EXIT
}


@end
