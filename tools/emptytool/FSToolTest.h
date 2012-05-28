
#import <Cocoa/Cocoa.h>

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

@interface FSToolTest : NSObject {

	id owner;
	IBOutlet NSTextField* theDisplay;
	
}

+ (BOOL) preload: (NSBundle*) theBundle;
+ (void) destroy;
- (void) unfreeze;
- (void) activate;
- (void) deactivate;
- (void) setOwnerTo: (id) theOwner;
- (BOOL) is: (int) type;
- (NSString*) name;
- (void) mouseEntered: (NSEvent*) theEvent;
- (void) mouseExited: (NSEvent*) theEvent;
- (void) mouseMoved: (NSEvent*) theEvent;
- (void) mouseDragged: (NSEvent*) theEvent;
- (void) mouseUp: (NSEvent*) theEvent;
- (void) mouseDown: (NSEvent*) theEvent;
- (void) rightMouseDown: (NSEvent*) theEvent;
- (void) scrollWheel: (NSEvent*) theEvent;

@end
