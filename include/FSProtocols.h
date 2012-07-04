//
//  Protocols.h
//  FractalStream
//
//  Created by Christopher Lipa on 7/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#import <Cocoa/Cocoa.h>
#import <Foundation/Foundation.h>
#import "FSViewerData.h"


#ifndef FractalStream_Protocols_h
#define FractalStream_Protocols_h


@protocol FSColorWidgetProtocol <NSObject>



@end



@protocol FractalStreamRenderer <NSObject>
-(void) setRenderCompletedMessage: (SEL) selector  forObject: (id) object;
-(int) getBatchNumber;
- (void) reload: (NSNotification*) note;
- (void) convertEvent: (NSEvent*) theEvent toPoint: (double*) point;
- (NSRect)  bounds;
- (void) deleteObjectsInBatch: (int) batch;
- (void) drawItem: (FSViewerItem) newItem;
- (void)setNeedsDisplay:(BOOL)flag;
- (void) getViewerDataTo: (FSViewerData*) savedData ;
- (void) runAt: (double*) p withParameter: (double*) q into: (double*) result probe: (int) pr steps: (int) ns;
- (NSImage*) snapshot;
- (void) changeBatch: (int) batch to: (int) newBatch;
- (void) setColorPicker: (id<FSColorWidgetProtocol>) newColorPicker;
- (void) setViewerData: (FSViewerData*) newData;
- (void) runAt: (double*) p into: (double*) result probe: (int) pr steps: (int) ns;
- (void) drawBoxFrom: (NSPoint) start to: (NSPoint) end withColor: (float*) rgb;


@end




#endif
