//
//  FSPanel.m
//  FractalStream
//
//  Created by Matthew Noonan on 3/19/09.
//  Copyright 2009 Cornell University. All rights reserved.
//

#import "FSPanel.h"
#import "FSLog.h"
@implementation FSPanelHelper

- (void) addPanel: (id) sender {
	ENTER
	if(panels == nil) panels = [[NSMutableArray alloc] init];
	[panels addObject: sender];
	EXIT
}

- (void) associatePanelsToDocument: (id) sender {
	ENTER
	NSEnumerator* en;
	id panel;
	if(panels) {
		en = [panels objectEnumerator];
		while(panel = [en nextObject]) 
			if([panel respondsToSelector: @selector(registerForNotifications:)])
				[panel registerForNotifications: sender];
	}
	EXIT
}

@end


@implementation FSPanel

- (void) awakeFromNib {
	ENTER
	isVisible = [super isVisible];
	//if(helper) [helper addPanel: self];
	EXIT
}

- (void) registerForNotifications: (id) owningDocument {
	ENTER
	[[NSNotificationCenter defaultCenter] addObserver: self
		selector: @selector(activate:)
		name: @"FSDocumentDidBecomeActive"
		object: owningDocument
	];
	[[NSNotificationCenter defaultCenter] addObserver: self
		selector: @selector(deactivate:)
		name: @"FSDocumentDidResignActive"
		object: owningDocument
	];
	EXIT
}

- (void) dealloc {
	ENTER
	[[NSNotificationCenter defaultCenter] removeObserver: self];
	[super dealloc];
	EXIT
}


- (void) activate: (NSNotification*) note {
	ENTER
	if(isVisible) [self orderFront: self];
	EXIT
}

- (void) deactivate: (NSNotification*) note {
	ENTER
	isVisible = [super isVisible];
	[self orderOut: self];
	EXIT
}

@end
