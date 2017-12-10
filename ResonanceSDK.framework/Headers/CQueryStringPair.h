//
//  CQueryStringPair.h
//
//  Copyright (c) 2015 Certona. All rights reserved.
//

@import Foundation;

@interface CQueryStringPair : NSObject <NSCoding, NSCopying>

+(NSArray *) queryStringPairsFromKey:(NSString *) key
							andValue:(id) value;

+(NSString *) queryStringFromParameters:(NSDictionary *) parameters
						   withEncoding:(NSStringEncoding) stringEncoding;

@property (nonatomic, strong) id field;
@property (nonatomic, strong) id value;

-(instancetype) initWithField:(id) field
						value:(id) value;

-(NSString *) URLEncodedStringValueWithEncoding:(NSStringEncoding) stringEncoding;

@end
