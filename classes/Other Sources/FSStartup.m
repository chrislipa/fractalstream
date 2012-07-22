//
//  FSStartup.m
//  FractalStream
//
//  Created by Matthew Noonan on 2/3/09.
//  Copyright 2009 Cornell University. All rights reserved.
//

#import "FSStartup.h"
#import "FSLog.h"
#import "FSDocument.h"
#import "FSScriptLibrary.h"
@implementation FSStartup




- (void) awakeFromNib {
	ENTER
	[slsave setTarget: nil];
	[slsave setAction: @selector(saveToLibrary:)];
	[embedtool setTarget: nil];
	[embedtool setAction: @selector(embedTool:)];
    
    [self openLibrary:self];
    //[
	EXIT
}

- (IBAction) openLibrary: (id) sender {
	ENTER
	NSError* error = nil;
    FSScriptLibrary* x = [[NSDocumentController sharedDocumentController] openUntitledDocumentAndDisplay: YES error: &error];
    
	[x	openScriptLibrary];
	if (error) {
		LOG(@"Error: %@", error);
	}
	EXIT
}

@end
