//
//  SDTool.m
//  SaddleDrop tool
//


#import "SDTool.h"

static NSBundle* ourBundle = nil;

double* _shared_saddle_array;
int* _shared_saddle_iters;
double _shared_array_base[2];
double _shared_array_step[2];
int _shared_array_dim[2];
int _shared_saddle_total = 0;
int _send_trivial_data = 1;
int _shared_color_method = 0;
int _toggle = 0;
int _the_count = 0;

int _eval_for_point(double* saddle, int* flag) {
	int bestCount, bestIndex, i;
	if(_send_trivial_data) return 0;
	else if(_shared_saddle_total) {
		switch(_shared_color_method) {
			case 0: /* fastest escape */
				bestIndex = 0; bestCount = 0;
				for(i = 0; i < _shared_saddle_total; i++) 
					if(flag[2*i + 1] > bestCount) { bestCount = flag[2*i + 1]; bestIndex = i; }
				break;
			case 1: /* slowest escape */
				for(i = 0; i < _shared_saddle_total; i++) {
					bestIndex = 0; bestCount = 100000000;
					for(i = 0; i < _shared_saddle_total; i++) 
						if(flag[2*i + 1] < bestCount) { bestCount = flag[2*i + 1]; bestIndex = i; }
				}
				break;
		}
		saddle[0] = saddle[2*bestIndex];
		saddle[1] = saddle[2*bestIndex+1];
		flag[0] = flag[2*bestIndex];
		flag[1] = flag[2*bestIndex+1];
	}
	return 0;
}

int _saddles_for_point(double* point, double* saddle) {
	int i, x, y;
	
	if(_send_trivial_data) { return 0; }
	x = (int) (((point[0] - _shared_array_base[0])/_shared_array_step[0]) + 0.5);
	y = (int) (((point[1] - _shared_array_base[1])/_shared_array_step[1]) + 0.5);
	if((x < 0) || (y < 0) || (x >= _shared_array_dim[0]) || (y >= _shared_array_dim[1])) return 0;
	if(_shared_saddle_total) for(i = 0; i < _shared_saddle_total; i++) {
		saddle[2*i + 0] = _shared_saddle_array[2*_shared_saddle_total*(y*_shared_array_dim[0] + x) + 2*i + 0];
		saddle[2*i + 1] = _shared_saddle_array[2*_shared_saddle_total*(y*_shared_array_dim[0] + x) + 2*i + 1];
	}
	else return 0;
	return _shared_saddle_total;
}



@implementation SDTool

- (IBAction) toggleTrivialData: (id) sender {
	if(_send_trivial_data) _send_trivial_data = 0; else _send_trivial_data = 1;
}

/*** methods which communicate data to the kernel ***/

- (void) setDataManager: (FSCustomDataManager*) Dm {
	dm = Dm; 
	[dm addDataNamed: @"saddles" usingObject: self];
}

- (void*) dataNamed: (NSString*) name {
	return (void*)_saddles_for_point;
}

- (void*) evalNamed: (NSString*) name {
	return (void*)_eval_for_point;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
	The following messages are used to initialize and instantiate your tool.
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* Put any code in here that should be run when the plugin is first loaded (loading a pref file, etc) */
+ (BOOL) preload: (NSBundle*) theBundle {
	if(ourBundle) return NO;
	ourBundle = [theBundle retain];
	
	/* * * * * * * * * * * YOUR CODE HERE * * * * * * * * * * */
	
	return YES;
}

+ (void) destroy {
	/* release any resources loaded by preload here */
	[ourBundle release]; ourBundle = nil;
}

/* Return your tool's user-friendly name here */
- (NSString*) name { 
	return @"SaddleDrop";
}

/* Return a possibly shortened name to appear in the tool menu */
- (NSString*) menuName {
	return @"SaddleDrop";
}

/* Returns a keyboard shortcut for the tool.  Return @"" (NOT nil!) if you don't want a shortcut. */
- (NSString*) keyEquivalent {
	return @"h";
}

/* This tells the controlling window what capabilities your tool has. */
- (BOOL) is: (int) type {
	switch(type) {
		case FSTool_Parametric:
			return YES;
		case FSTool_Dynamical:
			return YES;
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
	configured = NO;
	_shared_saddle_array = malloc(16 * sizeof(double));
	_shared_saddle_iters = malloc(16 * sizeof(int));
	queue = malloc(16 * sizeof(SDQueue));
	[NSBundle loadNibNamed: @"SDTool" owner: self];
	saddleArray = [[NSMutableArray alloc] init];
}

- (void) setOwnerTo: (id) theOwner { owner = theOwner; }


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
	The following messages are used to interact with your tool after it is loaded
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* This message is sent when the user wants to adjust the options on our tool */
- (void) configure {
	[panel orderFront: self];
}

/* The plugin gets this message when the user has switched to your tool. */
- (void) activate {
	[panel orderFront: self];
	if(configured == NO) [self updateConfiguration: self];
}

/* This message is sent when the user switches away from your tool. */
- (void) deactivate {	
	[owner deleteObjectsInBatch: batch];
	[panel orderOut: self];
	[owner setNeedsDisplay: YES];
	foundSaddle = NO;
}

- (IBAction) updateConfiguration: (id) sender {
	FSViewerData viewerData;
	void* hooks[2];
	if(configured == NO) {
		batch = [owner getBatchNumber];
		saddles = 0;
		configured = YES;
		[owner getViewerDataTo: &viewerData];
	}
}

- (IBAction) updateColor: (id) sender {
	_shared_color_method = [colorButton indexOfSelectedItem];
}

- (IBAction) drawSaddles: (id) sender {
	int i, x, y;
	FSViewerData viewerData;
	FSViewerItem item;
	item.type = FSVO_Dot;
	item.batch = batch;
	item.visible = YES;
	item.color[0][0] = 1.0;
	item.color[0][1] = 1.0;
	item.color[0][2] = 1.0;
	item.color[0][3] = 1.0;
	item.color[1][0] = 1.0;
	item.color[1][1] = 1.0;
	item.color[1][2] = 1.0;
	item.color[1][3] = 0.5;
	[owner getViewerDataTo: &viewerData];
	if(saddles && (_send_trivial_data == 0)) {
		for(i = 0; i < _shared_saddle_total; i++) {
			x = (int) (((viewerData.par[0] - _shared_array_base[0])/_shared_array_step[0]) + 0.5);
			y = (int) (((viewerData.par[1] - _shared_array_base[1])/_shared_array_step[1]) + 0.5);
			if((x >= 0) && (y >= 0) && (x < _shared_array_dim[0]) && (y < _shared_array_dim[1])) {
				item.point[0][0] = _shared_saddle_array[2*_shared_saddle_total*(y*_shared_array_dim[0] + x) + 2*i + 0];
				item.point[0][1] = _shared_saddle_array[2*_shared_saddle_total*(y*_shared_array_dim[0] + x) + 2*i + 1];
				[owner drawItem: item];
			}
		}
	}
	[owner setNeedsDisplay: YES];
}

- (BOOL) performNewtonWithParameter: (double*) cc on: (double*) p into: (double*) q {
	double result[16];
	int k, flag;
	[owner runAt: p withParameter: cc into: result probe: 1 steps: 100];
	k = result[2];
	flag = k & 0xff;  flag &= 0x0f;
	k >>= 8;
	if(k == 100) {
		q[0] = p[0];
		q[1] = p[1];
		return NO;
	}
	q[0] = p[0] - result[0]; q[1] = p[1] - result[1];
	return YES;
}

- (BOOL) performNewtonOn: (double*) p into: (double*) q {
	/*** Run Newton's Method via probe in the program.  Return YES on success, NO on failure. ***/
	double result[16];
	int k, flag;
	[owner runAt: p into: result probe: 1 steps: 100];
	k = result[2];
	flag = k & 0xff;  flag &= 0x0f;
	k >>= 8;
	if(k == 100) {
		q[0] = p[0];
		q[1] = p[1];
		return NO;
	}
	q[0] = p[0] - result[0]; q[1] = p[1] - result[1];
	return YES;
}

- (void) propagateToParameterSpaceFrom: (double*) p0  {
	NSEnumerator* en;
	id ob;
	int width, height, i, x, y;
	double z[16], p[16], q[16], step[16], cc[16];
	double unused;
	FSViewerData viewerData;
	int j, k, s;
	
	/* Stub for fill. p0 contains the parameter space coordinates to start from. */
	[owner getViewerDataTo: &viewerData];
	width = (int) [owner bounds].size.width;
	height = (int) [owner bounds].size.height;
	NSLog(@"we have %i saddles, width x height = %i, saddleArray = %@\n", saddles, width*height, saddleArray);
	
	_send_trivial_data = 1;
	if(saddles) {
		_shared_saddle_total = saddles;

		/*** allocate _shared_saddle_array ***/
		/*** ***/
		/*** ***/
		free(_shared_saddle_array);
		free(_shared_saddle_iters);
		free(queue);
		unused = -12345.0;
		NSLog(@"allocating %iK for saddles\n", (2*sizeof(double) * width * height * saddles)>>10);
		_shared_saddle_array = (double*) malloc(2*sizeof(double) * width * height * saddles);
		_shared_saddle_iters = (int*) malloc(sizeof(int) * width * height * saddles);
		queue = (SDQueue*) malloc(sizeof(SDQueue) * 4 * (width * height + 1));
		_shared_array_base[0] = viewerData.center[0] - (viewerData.pixelSize * viewerData.aspectRatio * (double) width)/2.0;
		_shared_array_base[1] = viewerData.center[1] - (viewerData.pixelSize * (double) height)/2.0;
		_shared_array_step[0] = viewerData.pixelSize * viewerData.aspectRatio;
		_shared_array_step[1] = viewerData.pixelSize;
		_shared_array_dim[0] = width;
		_shared_array_dim[1] = height;
		i = 0;
		en = [saddleArray objectEnumerator];
		while(ob = [en nextObject]) {
			z[0] = [ob doubleValue]; z[1] = [[en nextObject] doubleValue];
			NSLog(@"z is %f + %fi, saddles is %i\n", z[0], z[1], saddles);
			/** propagate saddle z[0], z[1] at p0[0], p0[1].  propagated saddles should
				end up in _shared_saddle_array.  i is index of saddle. ***/
			/*** ***/
			for(x = 0; x < width; x++) for(y = 0; y < height; y++) {
				_shared_saddle_array[2*saddles*(y*width + x) + 2*i + 0] = unused;
			}
			for(x = 0; x < width*height*4; x++) queue[x].active = 0;
			queue[0].index[0] = (int) (((p0[0] - _shared_array_base[0])/_shared_array_step[0]) + 0.5);
			queue[0].index[1] = (int) (((p0[1] - _shared_array_base[1])/_shared_array_step[1]) + 0.5);
			queue[0].parent = -1;
			queue[0].active = 1;
			j = 0;
			k = 0;
			while(queue[j].active) {
				//if(j && ((j & 0xffff) == 0)) { _send_trivial_data = 0; [owner render: self]; }
				queue[j].active = 0;
				if(_shared_saddle_array[2*saddles*(queue[j].index[1]*width + queue[j].index[0]) + 2*i + 0] != unused) {
					++j;
					continue;
				}
				_shared_saddle_array[2*saddles*(queue[j].index[1]*width + queue[j].index[0]) + 2*i + 0] = unused + 1.0;
				if(queue[j].parent == -1) {
					_shared_saddle_array[2*saddles*(queue[j].index[1]*width + queue[j].index[0]) + 2*i + 0] = z[0];
					_shared_saddle_array[2*saddles*(queue[j].index[1]*width + queue[j].index[0]) + 2*i + 1] = z[1];
				}
				else {
					/*** use Newton's method to propagate saddle from parent ***/
					//NSLog(@"Newton on queue[%i] at (%i, %i)\n", j, queue[j].index[0], queue[j].index[1]);
					BOOL newtonOK;
					int newton, try, multiplier;
					for(try = 0; try < 3; try++) {
						switch(try) {
							case 0: multiplier = 1; break;
							case 1: multiplier = 4; break;
							case 2: multiplier = 10; break;
						}
						cc[0] = _shared_array_base[0] + _shared_array_step[0]*queue[queue[j].parent].index[0];
						cc[1] = _shared_array_base[1] + _shared_array_step[1]*queue[queue[j].parent].index[1];
						step[0] = _shared_array_base[0] + _shared_array_step[0]*queue[j].index[0] - cc[0];
						step[1] = _shared_array_base[1] + _shared_array_step[1]*queue[j].index[1] - cc[1];
						step[0] /= (double) multiplier; step[1] /= (double) multiplier;
						p[0] = _shared_saddle_array[2*saddles*(queue[queue[j].parent].index[1]*width + queue[queue[j].parent].index[0]) + 2*i + 0];
						p[1] = _shared_saddle_array[2*saddles*(queue[queue[j].parent].index[1]*width + queue[queue[j].parent].index[0]) + 2*i + 1];
						for(s = 0; s < multiplier; s++) {
							cc[0] += step[0]; cc[1] += step[1];
							newtonOK = YES;
							for(newton = 0; newton < 5; newton++) {
								if([self performNewtonWithParameter: cc on: p into: q] == NO) { newtonOK = NO; break; }
								if((p[0] - q[0])*(p[0] - q[0]) + (p[1] - q[1])*(p[1] - q[1]) < 0.00000000000000000001) break;
								p[0] = q[0]; p[1] = q[1];
							}
							if((newtonOK == NO) || (newton == 5)) { newtonOK = NO; break; }
						}
						if(newtonOK) break;
					}
//					if(newtonOK == NO) { 
//						_shared_saddle_array[2*saddles*(queue[j].index[1]*width + queue[j].index[0]) + 2*i + 0] = unused;
						// - (newton == 5)? 2.1 : 1.2;
//						++j;
//						continue;
//					}
					_shared_saddle_array[2*saddles*(queue[j].index[1]*width + queue[j].index[0]) + 2*i + 0] = q[0];
					_shared_saddle_array[2*saddles*(queue[j].index[1]*width + queue[j].index[0]) + 2*i + 1] = q[1];
					if(newtonOK == NO) { ++j; continue; }
				}
				if(queue[j].index[0] > 0) {
					if(_shared_saddle_array[2*saddles*(queue[j].index[1]*width + queue[j].index[0] - 1) + 2*i + 0] == unused) {
						++k; 
						queue[k].parent = j;
						queue[k].index[0] = queue[j].index[0] - 1;
						queue[k].index[1] = queue[j].index[1];
						queue[k].active = 1;
						//NSLog(@"queue[%i] := { parent = %i, active = %i, index = (%i, %i) }\n", k, queue[k].parent, queue[k].active, queue[k].index[0], queue[k].index[1]);
					}
				}
				if(queue[j].index[0] < (width - 1)) {
					if(_shared_saddle_array[2*saddles*(queue[j].index[1]*width + queue[j].index[0] + 1) + 2*i + 0] == unused) {
						++k; 
						queue[k].parent = j;
						queue[k].index[0] = queue[j].index[0] + 1;
						queue[k].index[1] = queue[j].index[1];
						queue[k].active = 1;
						//NSLog(@"queue[%i] := { parent = %i, active = %i, index = (%i, %i) }\n", k, queue[k].parent, queue[k].active, queue[k].index[0], queue[k].index[1]);
					}
				}
				if(queue[j].index[1] > 0) {
					if(_shared_saddle_array[2*saddles*((queue[j].index[1] - 1)*width + queue[j].index[0]) + 2*i + 0] == unused) {
						++k;
						queue[k].parent = j;
						queue[k].index[0] = queue[j].index[0];
						queue[k].index[1] = queue[j].index[1] - 1;
						queue[k].active = 1;
						//NSLog(@"queue[%i] := { parent = %i, active = %i, index = (%i, %i) }\n", k, queue[k].parent, queue[k].active, queue[k].index[0], queue[k].index[1]);
					}
				}
				if(queue[j].index[1] < (height - 1)) {
					if(_shared_saddle_array[2*saddles*((queue[j].index[1] + 1)*width + queue[j].index[0]) + 2*i + 0] == unused) {
						++k;
						queue[k].parent = j;
						queue[k].index[0] = queue[j].index[0];
						queue[k].index[1] = queue[j].index[1] + 1;
						queue[k].active = 1;
						//NSLog(@"queue[%i] := { parent = %i, active = %i, index = (%i, %i) }\n", k, queue[k].parent, queue[k].active, queue[k].index[0], queue[k].index[1]);
					}
				}
				++j;
			}
			++i;
		}
		queue_length = j;
		NSLog(@"dealt with %i points, _shared_saddle_total is %i\n", j, _shared_saddle_total);
		_send_trivial_data = 0;
		[owner setViewerData: &viewerData];
	}
}

- (IBAction) propagate: (id) sender {
	if(saddles) [self propagateToParameterSpaceFrom: par];
}

- (IBAction) redraw: (id) sender { [owner reload: nil]; }

- (void) searchForSaddleFrom: (double*) p0 {
	double p[16], q[16];
	FSViewerItem item;
	int i;
	
	p[0] = p0[0]; p[1] = p0[1];
	item.type = FSVO_Dot;
	item.batch = batch;
	item.visible = YES;
	item.point[0][0] = p[0];
	item.point[0][1] = p[1];
	item.color[0][0] = 1.0;
	item.color[0][1] = 1.0;
	item.color[0][2] = 1.0;
	item.color[0][3] = 1.0;
	item.color[1][0] = 1.0;
	item.color[1][1] = 1.0;
	item.color[1][2] = 1.0;
	item.color[1][3] = 0.5;
	[owner deleteObjectsInBatch: batch];
	for(i = 0; i < 64; i++) {						
		[owner drawItem: item];
		if([self performNewtonOn: p into: q] == NO) break;
		item.point[1][0] = q[0];
		item.point[1][1] = q[1];
		item.type = FSVO_Line;
		[owner drawItem: item];
		item.point[0][0] = q[0];
		item.point[0][1] = q[1];
		item.type = FSVO_Dot;
		[owner drawItem: item];
		if((p[0] == q[0]) && (p[1] == q[1])) break;
		p[0] = q[0]; p[1] = q[1];
	}
	[owner setNeedsDisplay: YES];
	currentPoint[0] = p[0]; currentPoint[1] = p[1];
	foundSaddle = YES;
}

- (void) clickedOn: (NSEvent*) theEvent {
	double p[16];
	FSViewerData viewerData;
	
	[owner getViewerDataTo: &viewerData];
	[owner convertEvent: theEvent toPoint: p];
	if(viewerData.program == 1) {
		/* User clicked on the parameter space */
		if([repropButton state] == NSOnState) {
			int x, y, i;
			x = (int) (((p[0] - _shared_array_base[0])/_shared_array_step[0]) + 0.5);
			y = (int) (((p[1] - _shared_array_base[1])/_shared_array_step[1]) + 0.5);
			p[0] = _shared_array_base[0] + _shared_array_step[0] * (double) x;
			p[1] = _shared_array_base[1] + _shared_array_step[1] * (double) y;
			if(saddles) {
				_send_trivial_data = 1;
				[saddleArray removeAllObjects];
				for(i = 0; i < saddles; i++) {
					[saddleArray addObject: [NSNumber numberWithDouble: _shared_saddle_array[2*saddles*((y*_shared_array_dim[0]) + x) + 2*i + 0]]];
					[saddleArray addObject: [NSNumber numberWithDouble: _shared_saddle_array[2*saddles*((y*_shared_array_dim[0]) + x) + 2*i + 1]]];
				}
				par[0] = p[0]; par[1] = p[1];
				[self propagate: self];
				[repropButton setState: NSOffState];
			}
			
		}
		else [self followParentsFrom: p];
	}
	else if(viewerData.program == 3) {
		/* User clicked on the dynamics plane */
		par[0] = viewerData.par[0];
		par[1] = viewerData.par[1];
		[self searchForSaddleFrom: p];
	}
}

- (void) followParentsFrom: (double*) p0 {
	int i, x, y;
	double p[2], q[2];
	FSViewerItem item;
	p[0] = p0[0]; p[1] = p0[1];
	x = (int) (((p[0] - _shared_array_base[0])/_shared_array_step[0]) + 0.5);
	y = (int) (((p[1] - _shared_array_base[1])/_shared_array_step[1]) + 0.5);
	[owner deleteObjectsInBatch: batch];
	item.type = FSVO_Dot;
	item.batch = batch;
	item.visible = YES;
	item.point[0][0] = p[0];
	item.point[0][1] = p[1];
	item.color[0][0] = 1.0;
	item.color[0][1] = 0.0;
	item.color[0][2] = 0.0;
	item.color[0][3] = 1.0;
	item.color[1][0] = 1.0;
	item.color[1][1] = 0.0;
	item.color[1][2] = 0.0;
	item.color[1][3] = 0.5;
	[owner drawItem: item];
	if((x >= 0) && (y >= 0) && (x < _shared_array_dim[0]) && (y < _shared_array_dim[1])) {
		for(i = 0; i < queue_length; i++) if((x == queue[i].index[0]) && (y == queue[i].index[1])) break;
		if(i < queue_length) {
			while(queue[i].parent != -1) {
				q[0] = _shared_array_base[0] + _shared_array_step[0]*(double) queue[queue[i].parent].index[0];
				q[1] = _shared_array_base[1] + _shared_array_step[1]*(double) queue[queue[i].parent].index[1];
				item.point[0][0] = p[0]; item.point[0][1] = p[1];
				item.point[1][0] = q[0]; item.point[1][1] = q[1];
				item.type = FSVO_Line;
				[owner drawItem: item];
				p[0] = q[0]; p[1] = q[1];
				i = queue[i].parent;
			}
		}
		item.point[0][0] = p[0]; item.point[0][1] = p[1]; item.type = FSVO_Dot;
	}
	[owner drawItem: item];
	[owner setNeedsDisplay: YES];
}

- (IBAction) addSaddle: (id) sender {
	NSAutoreleasePool* pool;
	pool = [[NSAutoreleasePool alloc] init];
	if(foundSaddle) {
		[saddleArray addObject: [NSNumber numberWithDouble: currentPoint[0]]];
		[saddleArray addObject: [NSNumber numberWithDouble: currentPoint[1]]];
		++saddles;
		[self updateSaddleCount];
		foundSaddle = NO;
	}
	[pool release];
}

- (IBAction) clearSaddles: (id) sender {
	saddles = 0;
	_send_trivial_data = 1;
	[saddleArray removeAllObjects];
	[self updateSaddleCount];
}

- (void) updateSaddleCount {
	NSAutoreleasePool* pool;
	pool = [[NSAutoreleasePool alloc] init];
	[saddleCountField setStringValue: [NSString stringWithFormat: @"Following %i saddles.", saddles]];
	[pool release];
}

/* the rest of the code is for handling mouse events in the view which owns the tool */
- (void) mouseEntered: (NSEvent*) theEvent {
}

- (void) mouseExited: (NSEvent*) theEvent {
}

- (void) mouseMoved: (NSEvent*) theEvent {
	[self clickedOn: theEvent];
}

- (void) mouseDragged: (NSEvent*) theEvent {
	[self clickedOn: theEvent];
}

- (void) mouseUp: (NSEvent*) theEvent {
}

- (void) mouseDown: (NSEvent*) theEvent {
	[self clickedOn: theEvent];
}

- (void) rightMouseDown: (NSEvent*) theEvent {
}

- (void) scrollWheel: (NSEvent*) theEvent {
}


@end
