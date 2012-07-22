//
//  FSScriptLibraryController.h
//  FractalStream
//
//  Created by Matthew Noonan on 1/27/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "FSSave.h"
#import "FSDocument.h"
#import	"FSScriptLibrary.h"




@interface FSScriptLibraryController : NSObject {
	NSMutableArray* library;
	IBOutlet NSTextView* description;
	IBOutlet NSImageView* previewer;
	IBOutlet NSOutlineView* outline;
	IBOutlet FSScriptLibrary* theDoc;
	IBOutlet NSButton* openButton;
	IBOutlet NSButton* openEditorButton;
	BOOL useOutlineView;
    IBOutlet NSWindow* window;
}

@property (readonly) NSWindow* window;


- (IBAction) newScript: (id) sender;
- (IBAction) openScript: (id) sender;
- (IBAction) editScript: (id) sender;
- (IBAction) switchScriptView: (id) sender;

- (void) newSelection: (NSNotification*) note;
- (void) reload;
- (int) outlineView: (NSOutlineView*) outlineView numberOfChildrenOfItem: (FSScriptLibraryItem*) item;
- (BOOL) outlineView: (NSOutlineView*) outlineView isItemExpandable: (FSScriptLibraryItem*) item;
- (id) outlineView: (NSOutlineView*) outlineView child: (int) index ofItem: (FSScriptLibraryItem*) item;
- (id) outlineView: (NSOutlineView*) outlineView objectValueForTableColumn: (NSTableColumn*) col byItem: (FSScriptLibraryItem*) item;


@end
