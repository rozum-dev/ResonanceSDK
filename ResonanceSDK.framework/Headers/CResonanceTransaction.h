//
//  CResonanceTransaction.h
//
//  Copyright (c) 2014 Certona. All rights reserved.
//

@import Foundation;

@interface CResonanceTransaction : NSObject <NSCoding, NSCopying>

@property (nonatomic, copy) NSString* transactionId;
@property (nonatomic, copy) NSNumber* total;

@end
