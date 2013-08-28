
#import <Cocoa/Cocoa.h>
#import <QTKit/QTKit.h>
#import <QTKit/QTMovieView.h>
#import <stdlib.h>
#import <math.h>

//#import "FSECompiler.h"
#import "FSKernel.h"
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

@interface FSMovieTool : NSObject {

	id<FractalStreamRenderer> owner;

	IBOutlet NSProgressIndicator* wheel;
	IBOutlet NSTextField* movieLengthField;
	IBOutlet NSTextField* frameLengthField;
	IBOutlet NSWindow* toolWindow;
	IBOutlet QTMovieView* movieView;
	IBOutlet NSPopUpButton* qualityButton;
	IBOutlet NSButton* loopButton;
	IBOutlet NSPanel* saveSheet;
	IBOutlet NSTextField* filenameBox;
	IBOutlet NSTextField* parametricField;
	IBOutlet NSTextField* tInitialField;
	IBOutlet NSTextField* tFinalField;
	IBOutlet NSTextField* tStepsField;
	IBOutlet NSTextField* errorField;
	IBOutlet NSPanel* parametricPanel;
	IBOutlet NSButton* drawParameterButton;
	IBOutlet NSPopUpButton* movieTypeButton;
	
	QTMovie* movie;
	NSString* savedTmp;
	
	FSViewerData data, savedData, memorizedData;
	double lastPoint[2];
	BOOL isFirstPoint;
	BOOL useCompression;
	BOOL hasMemorized;
	double pathLength;
	int currentPoint;
	int frame, frames;
	double dx, dy, ds, dz, travelled, x, y, z, ds0;
	BOOL zoom;
	int waypoint;
	double duration;
	double point[4096][2];
	NSMutableArray* images;
	
	FSECompiler* compiler;
	FSKernel* kernel;
	
	BOOL madeMovie;
	int batchID;
}

- (IBAction) createMovie: (id) sender;
- (IBAction) resetPath: (id) sender;
- (IBAction) test: (id) sender;
- (IBAction) setLooping: (id) sender;
- (IBAction) memorize: (id) sender;
- (IBAction) playMovie: (id) sender;
- (IBAction) saveMovie: (id) sender;
- (IBAction) panelSave: (id) sender;
- (IBAction) panelCancel: (id) sender;
- (IBAction) drawParametric: (id) sender;
- (IBAction) stopMovie: (id) sender;

+ (BOOL) preload: (NSBundle*) theBundle;
+ (void) destroy;
- (void) unfreeze;
- (void) activate;
- (void) deactivate;
- (void) setOwnerTo: (id<FractalStreamRenderer>) theOwner;
- (void) makeMovie: (NSString*) tmp;
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
- (void) addPathPointX: (double) px Y: (double) py;

@end
