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

@implementation FSStartup

- (void) awakeFromNib {
	ENTER
	[slsave setTarget: nil];
	[slsave setAction: @selector(saveToLibrary:)];
	[embedtool setTarget: nil];
	[embedtool setAction: @selector(embedTool:)];
	EXIT
}

- (IBAction) openLibrary: (id) sender {
	ENTER
	NSError* error = nil;
	[[[NSDocumentController sharedDocumentController] openUntitledDocumentAndDisplay: YES error: &error]
		openScriptLibrary];
	if (error) {
		LOG(@"Error: %@", error);
	}
	EXIT
}

@end
