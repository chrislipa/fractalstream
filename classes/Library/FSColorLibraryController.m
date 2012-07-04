//
//  FSColorLibraryController.m
//  FractalStream
//
//  Created by Matthew Noonan on 1/27/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "FSColorLibraryController.h"
#import "FSGradientControl.h"
#import "FSLog.h"
@implementation FSColorLibraryController

- (void) awakeFromNib {
	ENTER
	library = [[NSMutableArray alloc] init];
	index = -1;
	if(outline) [[NSNotificationCenter defaultCenter]
		addObserver: self selector: @selector(outlineSelectedColor:)
		name: NSOutlineViewSelectionDidChangeNotification object: outline
	];
	[self loadColorLibrary: self];
	if(outline) [editor connectToLibrary: self];
	else [editor connectToLibrary: nil];
	EXIT
}

- (void) dealloc {
	ENTER
	[[NSNotificationCenter defaultCenter] removeObserver: self];
	[super dealloc];
	EXIT
}

- (IBAction) newColor: (id) sender {
	ENTER
	[library addObject: [[[FSGradient alloc] init] autorelease]];
	[outline reloadData];
	[self saveColor: nil];
	EXIT
}

- (IBAction) deleteColor: (id) sender {
	ENTER
	if([outline selectedRow] >= 0) [library removeObjectAtIndex: [outline selectedRow]];
	[outline reloadData];
	[self saveColor: nil];
	EXIT
}

- (IBAction) changeColor: (id) sender {
	ENTER
	if([button indexOfSelectedItem]) {
		[editor insertGradient: [library objectAtIndex: [button indexOfSelectedItem] - 1]];
		[button selectItemAtIndex: 0];
	}
	EXIT
}

- (IBAction) loadColorLibrary: (id) sender {
	//NSFileManager* fs;
	//NSArray* ar;
	id item;
	NSEnumerator* en;
	//BOOL isDirectory;
	NSString* path;
	
#ifdef WINDOWS
	NSLog(@"FSColorLibraryController needed plugins, broken on Cocotron\n");
	return;
#endif
//	NSLog(@"color library %@ got loadColorLibrary from %@\n", self, sender);
	path = [NSString stringWithFormat: @"%@/", [[[NSBundle mainBundle] builtInPlugInsPath] stringByAppendingPathComponent: @"Colors/"]];
	if(library) [library release];

	library = [[NSKeyedUnarchiver unarchiveObjectWithFile: [NSString stringWithFormat: @"%@%@", path, @"ColorLibrary"]] retain];
	if(library == nil) library = [[NSMutableArray alloc] init];
	if(outline == nil) {
		en = [library objectEnumerator];
		while((item = [en nextObject])) [button addItemWithTitle: [item name]];
	}
	if(outline) { [outline reloadData]; [editor setGradient: [outline itemAtRow: [outline selectedRow]]]; }
//	NSLog(@"loadColorLibrary finished\n");
}

- (void) saveColor: (FSGradient*) grad {
	NSString* path;
#ifdef WINDOWS
	return;
#endif
	path = [NSString stringWithFormat: @"%@/ColorLibrary", [[[NSBundle mainBundle] builtInPlugInsPath] stringByAppendingPathComponent: @"Colors/"]];
	[NSKeyedArchiver archiveRootObject: library toFile: path];
	[self loadColorLibrary: self];
}

- (void) outlineSelectedColor: (NSNotification*) note {
	if([outline selectedRow] >= 0) [editor setGradient: [outline itemAtRow: [outline selectedRow]]];
}

- (int) outlineView: (NSOutlineView*) outlineView numberOfChildrenOfItem: (id) item {
	return (item == nil)? [library count] : 0;
}

- (BOOL) outlineView: (NSOutlineView*) outlineView isItemExpandable: (id) item { return (item == nil)? YES : NO; }

- (id) outlineView: (NSOutlineView*) outlineView child: (int) p_index ofItem: (id) item { 
	if (item == nil) return [library objectAtIndex: p_index];
	return nil;
}

- (id) outlineView: (NSOutlineView*) outlineView objectValueForTableColumn: (NSTableColumn*) col byItem: (id) item {
	return [item name]; 
}

- (void) outlineView: (NSOutlineView*) outlineView setObjectValue: (id) val forTableColumn: (NSTableColumn*) col byItem: (id) item {
	[item setColorName: val];
	[outline reloadData];
}

@end