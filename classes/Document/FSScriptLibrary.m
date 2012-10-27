//
//  FSScriptLibrary.m
//  FractalStream
//
//  Created by Christopher Lipa on 7/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "FSScriptLibrary.h"
#import "FSLog.h"
@implementation FSScriptLibrary

- (id)init
{
    self = [super init];
    if (self) {
        // Add your subclass-specific initialization here.
    }
    return self;
}

- (NSString *)windowNibName
{
    // Override returning the nib file name of the document
    // If you need to use a subclass of NSWindowController or if your document supports multiple NSWindowControllers, you should remove this method and override -makeWindowControllers instead.
    return @"FSScriptLibrary";
}




- (NSData *)dataOfType:(NSString *)typeName error:(NSError **)outError
{
    // Insert code here to write your document to data of the specified type. If outError != NULL, ensure that you create and set an appropriate error when returning nil.
    // You can also choose to override -fileWrapperOfType:error:, -writeToURL:ofType:error:, or -writeToURL:ofType:forSaveOperation:originalContentsURL:error: instead.
    if (outError) {
        *outError = [NSError errorWithDomain:NSOSStatusErrorDomain code:unimpErr userInfo:NULL];
    }
    return nil;
}

- (BOOL)readFromData:(NSData *)data ofType:(NSString *)typeName error:(NSError **)outError
{
    // Insert code here to read your document from the given data of the specified type. If outError != NULL, ensure that you create and set an appropriate error when returning NO.
    // You can also choose to override -readFromFileWrapper:ofType:error: or -readFromURL:ofType:error: instead.
    // If you override either of these, you should also override -isEntireFileLoaded to return NO if the contents are lazily loaded.
    if (outError) {
        *outError = [NSError errorWithDomain:NSOSStatusErrorDomain code:unimpErr userInfo:NULL];
    }
    return YES;
}

+ (BOOL)autosavesInPlace
{
    return YES;
}




- (void) windowControllerDidLoadNib: (NSWindowController *) aController {
	ENTER
    [super windowControllerDidLoadNib:aController];
	[self doDocumentLoadWithLibrary: YES];
	//[panelHelper associatePanelsToDocument: self];
    // Add any code here that needs to be executed once the windowController has loaded the document's window.
	EXIT
}

- (void) doDocumentLoadWithLibrary: (BOOL) lib {
	
	ENTER
   
	if(newSession == NO) {
		[editor restoreFrom: [savedData editor]];
		if([savedData session] != nil) {
			LOG(@"Loading saved FractalStream document");
			[colorizer getColorsFrom: [savedData colorizer]]; LOG(@".");
			[session getSessionFrom: [savedData session]];  LOG(@".");
			[session setFlags: [colorizer names]];  LOG(@".");
			[browser setVariableNamesTo: [savedData variableNames]]; LOG(@".");
			[browser setVariableValuesToReal: [savedData variableReal] imag: [savedData variableImag]];  LOG(@".");
			[browser setProbeNamesTo: [savedData probeNames]]; LOG(@".");
			[browser setAllowEditor: [savedData allowEditor]]; LOG(@".");
			[browser reloadSession];  LOG(@".");
			if([savedData hasTools]) {
                [browser addTools: [savedData customTools]];
            }
            //![browser loadTools];
            LOG(@"OK");
			[mainTabView selectTabViewItemAtIndex: 2];
		}
		else {
			LOG(@"Loading uncompiled FractalStream script...\n");
			[mainTabView selectTabViewItemAtIndex: 1];
			LOG(@"ok");
		}
	} else {
	 
		if(lib) {
			LOG(@"Opening script library.\n");
        } else {
            LOG(@"Opening blank FractalStream script.\n");
        }
		[mainTabView selectTabViewItemAtIndex: (lib == YES)? 0 : 1];
	}
	EXIT
}

- (void) openEditor {
	ENTER
	[editor restoreFrom: [savedData editor]];
	
	EXIT
}

- (void) openScriptLibrary {
	ENTER
	
	EXIT
}


@end
