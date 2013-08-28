
//#import "FSTool.h"

#import <Cocoa/Cocoa.h>
#include <math.h>
#import "FSViewerData.h"


#import "FSProtocols.h"

#ifndef FSTool_Type_Definitions
#define FSTool_Type_Definitions
#define FSTool_Parametric	1
#define FSTool_Dynamical	2
#define FSTool_Real			3
#define FSTool_Complex		4
#endif

typedef struct {
	double x, y;
} FSPoint;

typedef struct {
	int index[2];
	int parent;
	int active;
} SDQueue;

typedef struct {
	double z[2];
	void* subregion[2][2];
} SDRegion;

int _saddles_for_point(double* saddle, double* point);
int _test_saddles(int saddles, double* saddleX, double* saddleY, double radius2, double* r);

@interface SDTool : NSObject/* <FSTool> */{
	id<FractalStreamRenderer> owner;
	IBOutlet NSColorWell* colorWell;
	IBOutlet NSPanel* panel;
	IBOutlet NSTextField* saddleCountField;
	IBOutlet NSTabView* tabView;
	IBOutlet NSPopUpButton* colorButton;
	IBOutlet NSButton* repropButton;
	NSMutableArray* saddleArray;
	NSObject<FSCustomDataManagerProtocol>* dm;
	double* saddle;
	double par[2];
	
	BOOL foundSaddle;
	int saddles;
	BOOL configured;
	double currentPoint[2];
	int batch;

	SDQueue* queue;
	int queue_length;
}


- (IBAction) updateConfiguration: (id) sender;
- (IBAction) addSaddle: (id) sender;
- (IBAction) clearSaddles: (id) sender;
- (IBAction) propagate: (id) sender;
- (IBAction) updateColor: (id) sender;
- (IBAction) drawSaddles: (id) sender;
- (IBAction) toggleTrivialData: (id) sender;
- (IBAction) redraw: (id) sender;

- (void) propagateToParameterSpaceFrom: (double*) p0;
- (void) updateSaddleCount;
- (void) clickedOn: (NSEvent*) theEvent;
- (BOOL) performNewtonOn: (double*) p into: (double*) q;
- (BOOL) performNewtonWithParameter: (double*) cc on: (double*) p into: (double*) q;
- (void) followParentsFrom: (double*) p;

+ (BOOL) preload: (NSBundle*) theBundle;
+ (void) destroy;
- (void) configure;
- (void) unfreeze;
- (void) activate;
- (void) deactivate;
- (void) setOwnerTo: (id) theOwner;
- (BOOL) is: (int) type;
- (NSString*) name;
- (NSString*) menuName;
- (NSString*) keyEquivalent;
- (void) mouseEntered: (NSEvent*) theEvent;
- (void) mouseExited: (NSEvent*) theEvent;
- (void) mouseMoved: (NSEvent*) theEvent;
- (void) mouseDragged: (NSEvent*) theEvent;
- (void) mouseUp: (NSEvent*) theEvent;
- (void) mouseDown: (NSEvent*) theEvent;
- (void) rightMouseDown: (NSEvent*) theEvent;
- (void) scrollWheel: (NSEvent*) theEvent;

- (void) setDataManager: (NSObject<FSCustomDataManagerProtocol>*) Dm;
- (void*) dataNamed: (NSString*) name;

@end
