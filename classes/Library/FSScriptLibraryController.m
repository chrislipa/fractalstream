//
//  FSScriptLibraryController.m
//  FractalStream
//
//  Created by Matthew Noonan on 1/27/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "FSScriptLibraryController.h"
#import "FSLog.h"
#import "FSScriptEditorController.h"
#import "FSScriptEditor.h"
#import "FSScriptLibraryItem.h"

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
	FSScriptLibraryItem* item;
	item = [outline itemAtRow: [outline selectedRow]];
	if(item == nil) { NSLog(@"item was nil?\n"); return; }
	if([item path] == nil) return;
	if([item isGroup]) return;
	//NSError* error = nil;
	//bool retVal = [theDoc readFromData:[NSData dataWithContentsOfFile: [item path]] ofType:@"FractalStream Script" error:&error];
	
	//if(retVal)
	//	[theDoc openEditor];
    
    [self openItemInEditor:item];
	EXIT
}

-(void) openItemInEditor:(FSScriptLibraryItem*) item {
    
    FSScriptEditorController *vc= [[FSScriptEditorController alloc] initWithItem:item];
    //NSNib* n = [[NSNib alloc] initWithNibNamed:@"FSScriptEditor" bundle:nil];
    //[n instantiateNibWithOwner:nil topLevelObjects:nil];
    
    //[vc awakeFromNib];
    [NSBundle loadNibNamed:@"FSScriptEditor" owner:vc];
    
    
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
