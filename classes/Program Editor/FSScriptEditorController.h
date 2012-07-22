/* FSScriptEditorController */

#import <Cocoa/Cocoa.h>
#import "FSECompiler.h"
#import "FSBrowser.h"
#import "FSScriptLibraryItem.h"

@interface FSScriptEditorController : NSViewController
{
    
    FSScriptLibraryItem* item;
    
    IBOutlet NSTextView* descriptionView;
    IBOutlet NSTextView* sourceView;
    IBOutlet NSTextField* titleField;
	IBOutlet NSTabView* enclosingView;
	IBOutlet NSPanel* panel;
	IBOutlet NSTextField* errorField;
	
	IBOutlet FSECompiler* compiler;
	IBOutlet FSBrowser* browser;
    
    IBOutlet NSWindow* window;
    
}
@property (readonly)  NSWindow* window;
-(id) initWithItem:(FSScriptLibraryItem*) item;

- (IBAction) compile: (id) sender;
- (IBAction) testProgram: (id) sender;
- (IBAction) insertPi: (id) sender;

- (NSArray*) state;
- (void) restoreFrom: (NSArray*) savedState;
- (void) setTitle: (NSString*) title description: (NSData*) description;

@end
