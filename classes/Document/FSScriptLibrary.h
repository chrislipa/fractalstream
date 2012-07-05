//
//  FSScriptLibrary.h
//  FractalStream
//
//  Created by Christopher Lipa on 7/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Cocoa/Cocoa.h>
#import "FSSession.h"
#import "FSTools.h"
#import "FSBrowser.h"
#import "FSSave.h"
#import "FSPanel.h"

@interface FSScriptLibrary : NSDocument {
	IBOutlet FSSession *session;  /* session history */
	IBOutlet FSBrowser *browser;
	
	void (*kernel)(int, double*, int, double*, int, double); /* program kernel */
	//	IBOutlet FSProgramList* kernelLoader;
	//	IBOutlet FSConfigurationSheet* configSheet;
	BOOL configured;
	BOOL newSession;
	FSSave* savedData;
	
	IBOutlet FSEController* editor;
	IBOutlet FSColorWidget* colorizer;
	IBOutlet FSTools* toolkit;
	
	IBOutlet NSTextField* iterationBox;
	IBOutlet NSTextField* radiusBox;
	IBOutlet NSTabView* mainTabView;
	
	IBOutlet NSView* librarySaveView;
	IBOutlet NSTextField* libraryTitleField;
	IBOutlet NSTextView* libraryDescriptionView;
	IBOutlet NSImageView* libraryPreview;
	
	IBOutlet FSPanelHelper* panelHelper;
	IBOutlet NSTextView* logView;
}

- (void) doDocumentLoadWithLibrary: (BOOL) lib;
- (void) openEditor;

@end
