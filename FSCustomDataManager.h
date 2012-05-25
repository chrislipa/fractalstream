/*
 Manages named data sources provided by external tools and acts as glue to make these
 data sources (C arrays) available to FSKernels.
 */

#import <Cocoa/Cocoa.h>

@protocol RespondsToQueryNamed <NSObject>
@optional
-(void*) queryNamed:(NSString*) name;
@end

@protocol RespondsToDataNamed <NSObject>
@optional
-(void*) dataNamed:(NSString*) name;
@end


@protocol RespondsToEvalNamed <NSObject>
@optional
-(void*) evalNamed:(NSString*) name;
@end




@interface FSCustomDataManager : NSObject {
	NSMutableDictionary* dataDictionary;
	NSMutableDictionary* queryDictionary;
}

- (void) addDataNamed: (NSString*) name usingObject: (id) ob;
- (void) addQueryNamed: (NSString*) name usingObject: (id) ob;
- (void*) getFunctionPointerForQuery: (NSString*) name;
- (void*) getFunctionPointerForData: (NSString*) name;
- (NSDictionary*) dataDictionary;
- (NSDictionary*) queryDictionary;

@end
