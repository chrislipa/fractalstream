//
//  MyDocument.m
//  FractalStream
//
//  Created by Matt Noonan on 3/15/06.
//  Copyright __MyCompanyName__ 2006 . All rights reserved.
//

#import "FSDocument.h"
#import "FSLog.h"
@implementation FSDocument

- (id) init
{
	ENTER
    self = [super init];
    if (self) {
    
        // Add your subclass-specific initialization here.
        // If an error occurs here, send a [self release] message and return nil.
		newSession = YES;
    }
	EXIT
    return self;
}

+ (BOOL) isNativeType: (NSString*) type { return YES; } // need this for GNUstep?  maybe a problem with Info-gnustep.plist?

- (void) awakeFromNib { 
	ENTER
	EXIT
}

- (void) windowDidBecomeMain: (NSNotification*) notification {
	ENTER
	[[NSNotificationCenter defaultCenter] postNotificationName: @"FSDocumentDidBecomeActive" object: self];
	EXIT
}

- (void) windowDidResignMain: (NSNotification*) notification {
	ENTER
	[[NSNotificationCenter defaultCenter] postNotificationName: @"FSDocumentDidResignActive" object: self];
	EXIT
}

- (void) windowWillClose: (NSNotification*) notification {
	ENTER
	EXIT
}

- (void) log: (NSString*) str {
	ENTER
	[logView insertText: str];
	LOG(@"LOG: %@", str);
	EXIT
}

- (IBAction) showLog: (id) sender {
	ENTER
	[[logView window] orderFront: sender];
	EXIT
}

- (IBAction) hideLog: (id) sender {
	ENTER
	[[logView window] orderOut: sender];
	EXIT
}



- (NSString *)windowNibName
{
	ENTER
	EXIT
    // Override returning the nib file name of the document
    // If you need to use a subclass of NSWindowController or if your document supports multiple NSWindowControllers, you should remove this method and override -makeWindowControllers instead.
    return @"FSDocument";
}

- (void) windowControllerDidLoadNib: (NSWindowController *) aController {
	ENTER
    [super windowControllerDidLoadNib:aController];
	[self doDocumentLoadWithLibrary: YES];
	[panelHelper associatePanelsToDocument: self];
    // Add any code here that needs to be executed once the windowController has loaded the document's window.
	EXIT
}

- (void) doDocumentLoadWithLibrary: (BOOL) lib {
	ENTER
	if(newSession == NO) { 
		[editor restoreFrom: [savedData editor]];
		if([savedData session] != nil) {
			[self log: @"Loading saved FractalStream document"];
			[colorizer getColorsFrom: [savedData colorizer]]; [self log: @"."];
			[session getSessionFrom: [savedData session]]; [self log: @"."];
			[session setFlags: [colorizer names]]; [self log: @"."];
			[browser setVariableNamesTo: [savedData variableNames]]; [self log: @"."];
			[browser setVariableValuesToReal: [savedData variableReal] imag: [savedData variableImag]]; [self log: @"."];
			[browser setProbeNamesTo: [savedData probeNames]]; [self log: @"."];
			[browser setAllowEditor: [savedData allowEditor]]; [self log: @"."];
			[browser reloadSession]; [self log: @"."];
			if([savedData hasTools]) [browser addTools: [savedData customTools]];
//			[browser loadTools];
			[self log: @"ok\n"];
			[mainTabView selectTabViewItemAtIndex: 2];
		}
		else {
			[self log: @"Loading uncompiled FractalStream script...\n"];
			[mainTabView selectTabViewItemAtIndex: 1];
			[self log: @"ok"];
		}
	}
	else {
		if(lib) [self log: @"Opening script library.\n"];
		else [self log: @"Opening blank FractalStream script.\n"];
		[mainTabView selectTabViewItemAtIndex: (lib == YES)? 0 : 1];
	}
	EXIT
}

- (void) openEditor {
	ENTER
	[editor restoreFrom: [savedData editor]];
	//[mainTabView selectTabViewItemAtIndex: 1];
	EXIT
}

- (void) openScriptLibrary {
	ENTER
	[self log: @"Opening script library.\n"];
	[mainTabView selectTabViewItemAtIndex: 0];
	EXIT
}

- (void) completeConfiguration 
{
	ENTER
	EXIT
}

- (NSString*) fileType { 
	return @"fs"; 
}

- (NSData *)dataRepresentationOfType:(NSString *)aType
{
	ENTER
	FSSave* save;
	
	save = [[FSSave alloc] init];
	if([mainTabView indexOfTabViewItem: [mainTabView selectedTabViewItem]] == 1) 
		[save setType: @"editor" session: nil colorizer: nil editor: editor browser: nil];
	else
		[save setType: @"full session [22oct]" session: session colorizer: colorizer editor: editor browser: browser];
	EXIT
    return [NSKeyedArchiver archivedDataWithRootObject: [save autorelease]];
}

- (BOOL)loadDataRepresentation:(NSData *)data ofType:(NSString *)aType
{
	ENTER
	[FSSave useMiniLoads: NO];
	savedData = [[NSKeyedUnarchiver unarchiveObjectWithData: data] retain];
	newSession = NO;
	EXIT
    return YES;
}

- (IBAction) saveToLibrary: (id) sender {
	ENTER
	NSSavePanel* panel;
	NSArray* editorState;
	//NSRange range;
	NSString* file;
	panel = [NSSavePanel savePanel];
	editorState = [editor state];
	[libraryTitleField setStringValue: [editorState objectAtIndex: 0]];
	[libraryDescriptionView setString: @""];
	[libraryDescriptionView replaceCharactersInRange: NSMakeRange(0,0) withRTFD: [editorState objectAtIndex: 2]];
	if([editorState count] > 3) {
		id ob;
		ob = [editorState objectAtIndex: 3];
		if(![ob isKindOfClass: [NSImage class]]) {
			ob = [[NSImage alloc] initWithData: ob];
			[libraryPreview setImage: ob];
			[ob release];
		}
		else [libraryPreview setImage: ob];
	}
	else [libraryPreview setImage: [NSImage imageNamed: @"NSRemoveTemplate"]];
	[librarySaveView retain]; // gets released by save panel
	[panel setTitle: @"Save to Library"];
	[panel setAccessoryView: librarySaveView];
	[panel setRequiredFileType: @"fs"];
	file = @"";
	/*** next section broken for COCOTRON ***/
#ifndef WINDOWS
	while([panel  runModalForDirectory: [[[NSBundle mainBundle] builtInPlugInsPath]
									stringByAppendingPathComponent: @"Scripts/"] file: file] == NSFileHandlingPanelOKButton) {
		// clicked the OK button
		[libraryDescriptionView selectAll: self];
		[editor setTitle: [libraryTitleField stringValue] description: [libraryDescriptionView RTFFromRange: [libraryDescriptionView selectedRange]]];
		[libraryDescriptionView setSelectedRange: NSMakeRange(0,0)];
		if([libraryTitleField stringValue] == @"") {
			file = [panel filename];
			NSRunAlertPanel(@"No Title", @"Please enter a title for the script.  This title will be displayed in the script library.", nil, nil, nil);
			continue;
		}
		NSError* error=nil;
		[[self dataOfType: @"FractalStream Script" error:&error] writeToFile: [panel filename] atomically: YES];
		break;
	}
#endif
	EXIT
}

- (IBAction) embedTool: (id) sender { [browser embedTool: sender]; }

- (void) iterations: (int*) it
{
	*it = [iterationBox intValue];
}

- (void) radius: (double*) rad
{
	*rad = [radiusBox doubleValue];
}


@end
