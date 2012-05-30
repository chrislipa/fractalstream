
#import <Cocoa/Cocoa.h>
#import "FSViewer.h"
#import "FSTool.h"

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

@interface FSTraceTool : NSObject <FSTool> {
	id owner;
	IBOutlet NSTextField* iteratesField;
	IBOutlet NSColorWell* colorWell;
	IBOutlet NSButton* boxesCheckbox;
	IBOutlet NSButton* linesCheckbox;
	IBOutlet NSButton* animateCheckbox;
	IBOutlet NSTextField* delayField;
	IBOutlet NSButton* followCheckbox;
	IBOutlet NSPanel* panel;

	BOOL configured;
	float color[3];
	int batch[64];
	BOOL inLiveDrawing;
	int liveBatch;
	int currentBatch;
	int iterates;
	BOOL follow;
	BOOL drawBoxes;
	BOOL drawLines;
	BOOL animate;
	
	int animationBatch;
	int animationStep;
	int animationDelay;
}

- (IBAction) updateConfiguration: (id) sender;
- (IBAction) saveOrbit: (id) sender;
- (IBAction) resetOrbits: (id) sender;

- (void) traceFrom: (NSEvent*) theEvent;

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

@end
