//
//  FSCustomDataManager.h
//  FractalStream
//
//  Created by Matthew Noonan on 3/15/09.
//  Copyright 2009 Cornell University. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "FSTool.h"

@interface FSCustomDataManager : NSObject {
	NSMutableDictionary* dataDictionary;
	NSMutableDictionary* queryDictionary;
}

- (void) addDataNamed: (NSString*) name usingObject: (NSObject<FSTool>*) ob;
- (void) addQueryNamed: (NSString*) name usingObject: (NSObject<FSTool>*) ob;
- (void*) getFunctionPointerForQuery: (NSString*) name;
- (void*) getFunctionPointerForData: (NSString*) name;
- (void*) getFunctionPointerForEval: (NSString*) name ;
- (NSDictionary*) dataDictionary;
- (NSDictionary*) queryDictionary;

- (void*) getFunctionPointerForMerge: (NSString*) name;

@end
