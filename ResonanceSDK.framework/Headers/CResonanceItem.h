//
//  CResonanceItem.h
//
//  Copyright (c) 2014 Certona. All rights reserved.
//

@import Foundation;

@interface CResonanceItem : NSObject <NSCoding, NSCopying>

+(instancetype) itemWithItemId:(NSString *) itemId;
+(instancetype) itemWithItemId:(NSString *) itemId
					  quantity:(NSUInteger) quantity;
+(instancetype) itemWithItemId:(NSString *) itemId
					  quantity:(NSUInteger) quantity
						 price:(double) price;

@property (nonatomic, copy) NSString* itemId;
@property (nonatomic, copy) NSNumber* quantity;
@property (nonatomic, copy) NSNumber* price;

@end
