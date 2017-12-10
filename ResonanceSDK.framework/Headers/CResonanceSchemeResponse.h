//
//  CResonanceSchemeResponse.h
//
//  Copyright (c) 2014 Certona. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CResonanceSchemeResponse : NSObject

@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* explanation;
@property (nonatomic) BOOL isDisplay;
@property (nonatomic, strong) NSArray* items;

@end
