//
//  CResonanceRecommendationScheme.h
//
//  Copyright (c) 2014 Certona. All rights reserved.
//

@import Foundation;

@interface CResonanceRecommendationScheme : NSObject <NSCoding, NSCopying>

+(instancetype) schemeWithName:(NSString *) name;

+(instancetype) schemeWithName:(NSString *) name
						 count:(NSInteger) count;

@property (nonatomic, copy) NSString* name;
@property (nonatomic, assign) NSInteger count;

@end
