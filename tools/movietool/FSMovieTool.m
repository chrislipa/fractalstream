//
//  FSToolTest.m
//  FSTool Test
//
//  Created by Matt Noonan on 11/13/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import "FSMovieTool.h"
#import "FSViewer.h"

static NSBundle* ourBundle = nil;

@implementation FSMovieTool



/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
	The following messages are used to initialize and instantiate your tool.
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* Put any code in here that should be run when the plugin is first loaded (loading a pref file, etc) */
+ (BOOL) preload: (NSBundle*) theBundle {
	if(ourBundle) return NO;
	ourBundle = [theBundle retain];
	
	/* * * * * * * * * * * YOUR CODE HERE * * * * * * * * * * */
	NSLog(@"preloaded FSMovieTool v1.0a\n");
	
	return YES;
}

+ (void) destroy {
	/* release any resources loaded by preload here */
	[ourBundle release]; ourBundle = nil;
}

/* Return your tool's name here */
- (NSString*) name { 
	return @"Dynamics Movie";
}

/* Return a possibly shortened name to appear in the tool menu */
- (NSString*) menuName {
	return @"Movie";
}

/* Returns a keyboard shortcut for the tool.  Return @"" (NOT nil!) if you don't want a shortcut. */
- (NSString*) keyEquivalent {
	return @"m";
}

/* This tells the controlling window what capabilities your tool has. */
- (BOOL) is: (int) type {
	switch(type) {
		case FSTool_Parametric:
			return YES;
		case FSTool_Dynamical:
			return NO;
		case FSTool_Real:
			return NO;
		case FSTool_Complex:
			return YES;
		default:
			return NO;
	}
}

/* When you receive this message, you should unpackage nib files or other freeze-dried data */
- (void) unfreeze {
	
}

- (void) unfreezeInternal {
	if([NSBundle loadNibNamed: @"FSMovieTool" owner: self] == NO) NSLog(@"FSMovieTool: nib did not load!!!\n");
	isFirstPoint = YES; currentPoint = 0; pathLength = 0.0;
	NSLog(@"unfreeze: toolWindow is %@, wheel window is %@\n", toolWindow, [wheel window]);
	[wheel setDisplayedWhenStopped: YES];
	hasMemorized = NO;
	madeMovie = NO;
	[movieTypeButton selectItemAtIndex: 0];
	[[wheel window] close]; // close the movie window

	compiler = [[[[NSBundle mainBundle] classNamed: @"FSECompiler"] alloc] init];
	kernel = [[[[NSBundle mainBundle] classNamed: @"FSKernel"] alloc] init];
}

- (void) setOwnerTo: (id) theOwner { owner = theOwner; }




/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
	The following messages are used to interact with your tool after it is loaded
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


/* The plugin gets this message when the user has switched to your tool. */
- (void) activate {
	[self unfreezeInternal];
	NSLog(@"FSMovieTool got an activate message, the panel is %@, wheel window is %@ :)\n", toolWindow, [wheel window]);
	/* Get data from the main view */
	[owner getViewerDataTo: &data];
	[owner getViewerDataTo: &savedData];
	data.pixelSize = 2.0 / 512.0;
	data.detailLevel = 2.0;
	data.program = 3;
	data.center[0] = 0.0;
	data.center[1] = 0.0;
	data.eventManager = nil;
	[[wheel window] orderFront: self];  //	make the preview window appear
}

/* This message is sent when the user switches away from your tool. */
- (void) deactivate {
	NSLog(@"FSMovieTool got a deactivate message :(\n");
	[[wheel window] close]; // close the period counter window
}

/* This message is sent when the user wants to adjust the options on our tool */
- (void) configure {
}

/* the rest of the code is for handling mouse events in the view which owns the tool */
- (void) mouseEntered: (NSEvent*) theEvent {
}

- (void) mouseExited: (NSEvent*) theEvent {
}

- (void) mouseMoved: (NSEvent*) theEvent {
}

- (void) mouseDragged: (NSEvent*) theEvent {
}

- (void) mouseUp: (NSEvent*) theEvent {
}

- (void) mouseDown: (NSEvent*) theEvent {
	double p[2];
	
	[wheel setIndeterminate: NO];
	[owner convertEvent: theEvent toPoint: p];
	[self addPathPointX: p[0] Y: p[1]];
	[owner setNeedsDisplay: YES];
}

- (void) rightMouseDown: (NSEvent*) theEvent {
}

- (void) scrollWheel: (NSEvent*) theEvent {
}

- (void) makeMovie: (NSString*) tmp {
	movie = [[QTMovie alloc] initWithFile: tmp error: nil];
}

- (void) nextFrame {
	NSImage* snap;
	NSAutoreleasePool* pool;
	NSEnumerator* frameEnum;
	NSImage* pic;
	NSString* tmp;
	NSDictionary* frameAttr/*, *movieAttr*/;
	QTTime frameLength;
	//QTDataReference* ref;
	double a,b;
	
	madeMovie = NO;
//	NSLog(@"-----> MAKING FRAME %i <------\n", frame);
	if(frame < frames) {
//		NSLog(@"make pool\n");
		pool = [[NSAutoreleasePool alloc] init];
//		NSLog(@"snapshot");

		snap = [owner snapshot];
		if([drawParameterButton state] == NSOnState) {
			NSShadow* shadow;
			shadow = [[NSShadow alloc] init];
			[shadow setShadowColor: [NSColor whiteColor]];
			[shadow setShadowBlurRadius: 3.0];
			[snap lockFocus];
			if(zoom) { a = data.center[0]; b = data.center[1]; }
			else { a = data.par[0]; b = data.par[1]; }
			[[NSString stringWithFormat: @"%.15f + i %.15f", a, b]
				drawInRect: NSMakeRect(0.0, 0.0, [snap size].width, [snap size].height)
				withAttributes:
					[NSDictionary dictionaryWithObjectsAndKeys:
						[NSFont boldSystemFontOfSize: 16.0],  NSFontAttributeName,
						[NSColor blackColor],	NSForegroundColorAttributeName,
						shadow, NSShadowAttributeName,
						nil
					]
			];
			[snap unlockFocus];
			[shadow release];
		}
//		NSLog(@"add object");
		[images addObject: snap];
//		NSLog(@"wheel");
		[wheel incrementBy: 1.0];
//		NSLog(@"viewer data\n");
		++frame;
		if(frame < frames) {
			double dist;
			dist = sqrt(
				(point[waypoint + 1][0]-point[waypoint][0])*(point[waypoint+1][0]-point[waypoint][0]) +
				(point[waypoint + 1][1]-point[waypoint][1])*(point[waypoint+1][1]-point[waypoint][1])
			);
			travelled += ds;
			while((travelled > dist) || (dist == 0.0)) {
				travelled -= dist;
				++waypoint;
				dx = point[waypoint + 1][0] - point[waypoint][0];
				dy = point[waypoint + 1][1] - point[waypoint][1];
				dist = sqrt(dx*dx + dy*dy);
				if(dist > 0.0) { dx /= dist; dy /= dist; }
			}
			ds *= dz;
			z *= dz;
			data.pixelSize = z;
			if(zoom) {
				data.center[0] = point[waypoint][0] + dx * travelled;
				data.center[1] = point[waypoint][1] + dy * travelled;
			}
			else {
				data.par[0] = point[waypoint][0] + dx * travelled;
				data.par[1] = point[waypoint][1] + dy * travelled;
			}
//			NSLog(@"frame is %i, zoom is %f, center is %f %f", frame, data.pixelSize, data.center[0], data.center[1]);
			[owner setViewerData: &data];
		}
		else {
			//NSInvocation* invoc;
			void* nilptr[1];
			nilptr[0] = nil;
			[owner setRenderCompletedMessage: @selector(nextFrame) forObject: nil];
			[owner setViewerData: &savedData];
			[wheel setIndeterminate: YES];
//			NSLog(@"-----> FRAMES FINISHED <-----\n");
			frameLength = QTMakeTime(6 * duration, 600);
//			NSLog(@"frame length is %i of 600\n", (int) (6.0 * duration));
			frameEnum = [images objectEnumerator];
			pic = [frameEnum nextObject];
			tmp = [NSString stringWithFormat: @"%@/FSMovieFrame%i.tiff", NSTemporaryDirectory(), random()];
			[[pic TIFFRepresentation] writeToFile: tmp atomically: YES];

//			NSLog(@"about to invoke [movie initWithFile: tmp error: nil] on main thread...\n");
			[self performSelectorOnMainThread: @selector(makeMovie:) withObject: tmp waitUntilDone: YES];			
//			NSLog(@"did it.");
			
			[movie setAttribute: [NSNumber numberWithBool: YES] forKey: QTMovieEditableAttribute];
			frameAttr = [NSDictionary dictionaryWithObjectsAndKeys:
				@"tiff", QTAddImageCodecType, 
				[NSNumber numberWithLong: codecLosslessQuality], QTAddImageCodecQuality,
			nil];
			while(pic = [frameEnum nextObject]) [movie addImage: pic forDuration: frameLength withAttributes: frameAttr];
			if(useCompression) {
/*
				tmp	= [NSString stringWithFormat: @"%@/FSMovie%i.mp4", NSTemporaryDirectory(), random()];
				NSLog(@"creating movie at %@\n", tmp);
				[movie writeToFile: tmp withAttributes:
					[NSDictionary dictionaryWithObjectsAndKeys:
						[NSNumber numberWithBool: YES], QTMovieExport,
						[NSNumber numberWithLong: kQTFileTypeMP4], QTMovieExportType,
					nil]
				];
*/			}
			else {
	/*
				tmp	= [NSString stringWithFormat: @"%@/FSMovie%i.mov", NSTemporaryDirectory(), random()];
				NSLog(@"creating movie at %@\n", tmp);
				[movie writeToFile: tmp withAttributes:
					[NSDictionary dictionaryWithObjectsAndKeys:
						[NSNumber numberWithBool: YES], QTMovieFlatten,
					nil]
				];
	*/
			}
/*
			[movie release];
			movie = [[QTMovie movieWithFile: tmp error: nil] retain];
			[movie setAttribute: [NSNumber numberWithBool: YES] forKey: QTMovieEditableAttribute];
*/
			
//			[movieView setMovie: movie];
			[images release];
			savedTmp = [tmp retain];
			madeMovie = YES;
//			NSLog(@"-----> MOVIE FINISHED <-----\n");
		}
//		NSLog(@"release pool");
		[pool release];
//		NSLog(@"done");
		if(madeMovie) [movieView setMovie: movie];
	}
}

- (IBAction) test: (id) sender {
	[movie release];
	movie = [[QTMovie movieWithFile: savedTmp error: nil] retain];
	[movie setAttribute: [NSNumber numberWithBool: YES] forKey: QTMovieEditableAttribute];
	[movieView setMovie: movie];
	[self setLooping: self];
}

- (IBAction) playMovie: (id) sender {
	[movieView performSelectorOnMainThread: @selector(play:) withObject: self waitUntilDone: NO];
}

- (void) saveSheetDidEnd: (NSWindow*) sheet returnCode: (int) returnCode contextInfo: (void*) contextInfo {
    if(returnCode == NSOKButton) {
    }
	else {
	}
    [sheet close];
}

- (IBAction) saveMovie: (id) sender {
	NSSavePanel* savePanel;
	NSString* filename;
	if(madeMovie == YES) {
		savePanel = [NSSavePanel savePanel];
		[savePanel setRequiredFileType: @"mov"];
		if([savePanel runModal] == NSFileHandlingPanelOKButton) {

			filename = [[savePanel URL] path];
			if(useCompression) {
//				NSLog(@"creating movie at %@\n", filename);
				[movie writeToFile: filename withAttributes:
					[NSDictionary dictionaryWithObjectsAndKeys:
						[NSNumber numberWithBool: YES], QTMovieExport,
						[NSNumber numberWithLong: kQTFileTypeMP4], QTMovieExportType,
					nil]
				];
			}
			else {
//				NSLog(@"creating movie at %@\n", filename);
				[movie writeToFile: filename withAttributes:
					[NSDictionary dictionaryWithObjectsAndKeys:
						[NSNumber numberWithBool: YES], QTMovieFlatten,
					nil]
				];
			}
		}
	}
}

- (IBAction) panelSave: (id) sender { [NSApp endSheet: saveSheet  returnCode: NSOKButton]; }

- (IBAction) panelCancel: (id) sender { [NSApp endSheet: saveSheet  returnCode: NSCancelButton]; }

- (IBAction) createMovie: (id) sender {
	double movieLength, r;
	switch([movieTypeButton indexOfSelectedItem]) {
		case 1:
			zoom = NO;
			break;
		case 2:
			zoom = YES;
			break;
		default:
			return;
	}
	[wheel setIndeterminate: NO];
	duration = [frameLengthField doubleValue];
	movieLength = [movieLengthField doubleValue];
	frames = (int)(0.5 + (100.0 * movieLength / duration));
	if(frames < 1) return;
	[wheel setDoubleValue: 0.0];
	[wheel setMinValue: 0.0]; [wheel setMaxValue: (double) frames]; 
//	NSLog(@"going to make a movie with %i frames\n", frames);
	frame = 0;
	images = [[NSMutableArray alloc] init];
	[owner setRenderCompletedMessage: @selector(nextFrame) forObject: self];
	if(hasMemorized) memcpy(&data, &memorizedData, sizeof(FSViewerData));
	ds = pathLength / (double) frames;
	data.eventManager = nil;
	if([[qualityButton titleOfSelectedItem] isEqualToString: @"High Detail"]) data.detailLevel = 2.0;
	else if([[qualityButton titleOfSelectedItem] isEqualToString: @"Regular Detail"]) data.detailLevel = 1.0;
	else data.detailLevel = 0.5;
	useCompression = [[qualityButton titleOfSelectedItem] isEqualToString: @"Compressed"]? YES: NO;
	[owner deleteObjectsInBatch: batchID]; isFirstPoint = YES; currentPoint = 0; pathLength = 0.0;
	if(zoom) {
		FSViewerData currentData;
		[owner getViewerDataTo: &currentData];
		point[0][0] = currentData.center[0]; point[0][1] = currentData.center[1];
		point[1][0] = data.center[0]; point[1][1] = data.center[1];
		point[2][0] = point[1][0]; point[2][1] = point[1][1];
		dz = exp(log(data.pixelSize / currentData.pixelSize) / (double) frames);
		pathLength = sqrt((point[0][0]-point[1][0])*(point[0][0]-point[1][0]) + (point[0][1]-point[1][1])*(point[0][1]-point[1][1]));
		ds = pathLength * (1.0 - dz) / (1.0 - pow(dz, (double) frames));
		data.center[0] = currentData.center[0];
		data.center[1] = currentData.center[1];
		z = data.pixelSize = currentData.pixelSize;
		++frames;
//		NSLog(@"starting zoom is %f, ending is %f, final center is %f %f", data.pixelSize, memorizedData.pixelSize, memorizedData.center[0], memorizedData.center[1]);
	}
	else {
		data.par[0] = point[0][0];
		data.par[1] = point[0][1];
		dz = 1.0;
		z = data.pixelSize;
	}
	x = point[0][0]; y = point[0][1];
	dx = point[1][0] - point[0][0];
	dy = point[1][1] - point[0][1];
	r = sqrt(dx*dx + dy*dy);
	dx /= r; dy /= r;
	travelled = 0.0;
	waypoint = 0;
	
	[owner setViewerData: &data];
}

- (IBAction) resetPath: (id) sender {
	if(isFirstPoint == NO) { [owner deleteObjectsInBatch: batchID]; [owner setNeedsDisplay: YES]; }
	isFirstPoint = YES;
	currentPoint = 0;
	pathLength = 0.0;
}

- (IBAction) memorize: (id) sender {
	[owner getViewerDataTo: &memorizedData];
	hasMemorized = YES;
}

- (IBAction) setLooping: (id) sender {
	[movie
		setAttribute: [NSNumber numberWithBool: ([loopButton state] == NSOnState)? YES : NO]
		forKey: QTMovieLoopsAttribute
	];
}

- (IBAction) stopMovie: (id) sender {
	[owner setRenderCompletedMessage: @selector(nextFrame) forObject: nil];
	[owner setViewerData: &savedData];
	[wheel setIndeterminate: NO];
	[wheel setDoubleValue: 0.0];
	[movieTypeButton selectItemAtIndex: -1];
	[images release];
}

- (void) addPathPointX: (double) px Y: (double) py {
	FSViewerItem item;
	item.color[0][0] = 1.0; item.color[0][1] = 1.0; item.color[0][2] = 1.0; item.color[0][3] = 0.0;
	item.color[1][0] = 1.0; item.color[1][1] = 1.0; item.color[1][2] = 1.0; item.color[1][3] = 1.0;
	item.visible = YES;
	if(isFirstPoint) batchID = [owner getBatchNumber];
	item.batch = batchID;
	item.point[0][0] = px;
	item.point[0][1] = py;
	if(isFirstPoint) {
		item.type = FSVO_Dot;
		lastPoint[0] = px;
		lastPoint[1] = py;
		[owner drawItem: item];
	}
	if(isFirstPoint == NO) {
		item.type = FSVO_Line;
		item.point[1][0] = lastPoint[0];
		item.point[1][1] = lastPoint[1];
		item.color[0][3] = 1.0;
		[owner drawItem: item];
	}
	pathLength += sqrt((px - lastPoint[0])*(px - lastPoint[0]) + (py - lastPoint[1])*(py - lastPoint[1]));
	lastPoint[0] = px; lastPoint[1] = py;
	point[currentPoint][0] = px;
	point[currentPoint][1] = py;
	++currentPoint;
	isFirstPoint = NO;
}

- (IBAction) drawParametric: (id) sender {
	double t0, t1, dt, t, dataIn[256], dataOut[256];
	int steps, i;
	NSString* errorMessage;
	
	t0 = [tInitialField doubleValue];
	t1 = [tFinalField doubleValue];
	steps = [tStepsField intValue];
	if(steps <= 0) steps = 1;
	dt = (t1 - t0) / (double) steps;
	[self resetPath: self];
	
	[compiler setOutputFilename: [NSString stringWithFormat: @"%@FSEtemp%i", NSTemporaryDirectory(), rand()]];
	[compiler setTitle: @"FSMovieTool Parametric Curve"
		source: [NSString stringWithFormat: @"default t to 0.\nset z to %@.", [parametricField stringValue]]
		andDescription: nil
	];
	[compiler compile: self];
	errorMessage = [compiler errorMessage];
	if(errorMessage != nil) {
		[errorField setHidden: NO];
		return;
	}
	[errorField setHidden: YES];
	[kernel buildKernelFromCompiler: compiler];
	
	dataIn[0] = dataIn[1] = 0.0;
	dataIn[2] = 1.0;
	dataIn[3] = dataIn[4] = 0.0;
	dataIn[5] = 0.0;
	dataIn[6] = dataIn[7] = 0.0;
	for(i = 0, t = t0; i < steps; i++, t += dt) {
		dataIn[6] = t;
		[kernel runKernelWithMode: 3
			input: dataIn
			ofLength: 1
			output: dataOut
			maxIter: 1
			maxNorm: 10000.0
			minNorm: 0.00001
		];
		[self addPathPointX: dataOut[0] Y: dataOut[1]];
	}
	[parametricPanel performClose: self];
	[owner setNeedsDisplay: YES];
	
}

@end
