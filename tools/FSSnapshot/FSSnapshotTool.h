
#import <Cocoa/Cocoa.h>
#import "FSViewerData.h"
//#import "FSTool.h"
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

@interface FSSnapshotTool : NSObject /*<FSTool>*/ {
	id<FractalStreamRenderer> owner;
	IBOutlet NSPanel* panel;
	IBOutlet NSTextField* widthBox;
	IBOutlet NSTextField* heightBox;
	IBOutlet NSTextField* multiplierBox;
	IBOutlet NSPopUpButton* filetypeButton;
	
	int realPixelWidth;
	int realPixelHeight;
	double ux, uy, lx, ly;
	double z[2], w[2];
	float multiplier;
	
	int batch;
	FSViewerItem box;
	NSPoint lastClick;
	float c[3];
	BOOL wentDown;
	
	FSViewerData savedData, data;
	int xframes, yframes;
	double center[2];
	double dcenter[2];
	int x, y;
	int viewx, viewy;
	int imagex, imagey;
	double pix[2];
	NSString* filename;
	NSString* tempFilenamePrefix;
	
	BOOL configured;
}

- (IBAction) updateConfiguration: (id) sender;
- (IBAction) updateDimensions: (id) sender;
- (IBAction) takeSnapshot: (id) sender;

- (void) nextSnapshot;
- (void) assembleSnapshots;

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
