
#import "FSViewerData.h"






@protocol FSBrowserProtocol
- (IBAction) goForward: (id) sender;
- (IBAction) goBackward: (id) sender;
- (IBAction) refresh: (id) sender;
- (IBAction) goHome: (id) sender;
- (void) changeTo: (NSString*) newName X: (double) x Y: (double) y p1: (double) p1 p2: (double) p2 pixelSize: (double) pixelSize parametric: (BOOL) isPar;
- (void) sendDefaultsToViewer;
- (void) putCurrentDataIn: (FSViewerData*) p;
- (void) refreshAll;
- (void) setVariableNamesTo: (NSArray*) names;
- (void) setVariableValuesToReal: (NSArray*) rp imag: (NSArray*) ip;
- (void) resetDefaults;
- (NSArray*) namedProbes;
@end
