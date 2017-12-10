//
//  CResonance.h
//
//  Copyright (c) 2014 Certona. All rights reserved.
//

@import Foundation;
@import AdSupport;

#import "CResonanceItem.h"
#import "CResonanceRecommendationScheme.h"
#import "ServerManager.h"
#import "ResonanceBaseSettings.h"

/** Certona Resonance Client SDK for iOS
 */
@interface CResonance : NSObject <NSCoding, NSCopying>

+(instancetype) sharedInstance;

@property (nonatomic, copy) NSString* appId;
@property (nonatomic, copy) NSString* customerId;
@property (nonatomic, copy) NSString* sessionId;
@property (nonatomic, copy) NSString* trackingId;

@property (nonatomic, strong) ResonanceBaseSettings* settings;



@property (nonatomic, assign) BOOL status;


-(void) logEvent:(NSString *) event
		  params:(NSDictionary *) params
	  completion:(void (^)(NSError* error, NSDictionary* schemes)) completion;

-(void) logEvent:(NSString *) event
		   items:(NSArray *) items;

-(void) logSyncApiCallEvent:(NSString*) requestType
                      event:(NSString *) event
           items:(NSArray *) items
         completion:(void (^)(NSError* error, NSString* string)) completion;

-(void) logAsyncApiCallWithCallback:(NSString *) event
                      items:(NSArray *) items
                 completion:(void (^)(NSError* error, NSString* string)) completion;


-(void) logEventSendUrl: (NSString *) event
              urlString: (NSString *) url
                  links:(NSArray *) links
           items:(NSArray *) items;

-(void) logEvent:(NSString *) event
		   items:(NSArray *) items
		   links:(NSArray *) links
requestRecommendations:(NSArray *) recommendations
	  completion:(void (^)(NSError* error, NSDictionary* schemes)) completion;

-(void) logActionSyncApiCallEvent: (NSString* ) requestType
            event:(NSString *) event
           items:(NSArray *) items
           links:(NSArray *) links
requestRecommendations:(NSArray *) recommendations
      completion:(void (^)(NSError* error, NSString* string)) completion;


-(void) logActionAsyncApiCallWithCallback:(NSString *) event
                            items:(NSArray *) items
                            links:(NSArray *) links
           requestRecommendations:(NSArray *) recommendations
                               completion:(void (^)(NSError* error, NSString* string)) completion;

-(void) logTransactionEvent:(NSString *) event
			  transactionId:(NSString *) transactionId
					  items:(NSArray *) items;

-(void) logTransactionEvent:(NSString *) event
			  transactionId:(NSString *) transactionId
		   transactionTotal:(NSNumber *) transactionTotal
					  items:(NSArray *) items
                 completion:(void (^)(NSError* error, NSString* string)) completion;

-(void) logTransactionEvent:(NSString *) event
			  transactionId:(NSString *) transactionId
		   transactionTotal:(NSNumber *) transactionTotal
					  items:(NSArray *) items
					  links:(NSArray *) links
	 requestRecommendations:(NSArray *) recommendations
				 completion:(void (^)(NSError* error, NSDictionary* schemes)) completion;

-(void) getRecomendations: (void (^)(NSError *, NSString *)) completion;
-(void) setupSettings;
+(void) setup;
@end
