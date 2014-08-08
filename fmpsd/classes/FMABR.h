//
//  FMABR.h
//  fmpsd
//
//  Created by August Mueller on 8/8/14.
//  Copyright (c) 2014 Flying Meat Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FMABR : NSObject

@property (strong) NSMutableArray *brushes;

+ (id)brushesWithContetsOfURL:(NSURL*)fileURL error:(NSError**)err printDebugInfo:(BOOL)debugInfo;

@end
