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

@property (nonatomic, copy) NSString* appId;
@property (nonatomic, copy) NSString* customerId;
@property (nonatomic, copy) NSString* sessionId;
@property (nonatomic, copy) NSString* trackingId;

@property (nonatomic, strong) ResonanceBaseSettings* settings;


/**
 This property shows the current working status of Resonance SDK. Set "NO" to switch off Resonance SDK.
 */
@property (nonatomic, assign) BOOL status;

/**
 Configure Resonance SDK
 */
+(void) setup;


/**
 Returns Resonance SDK shared instance
 
 @return shared instance
 */
+(instancetype) sharedInstance;

/**
 Method for sending log event actions
 
 @param event log event name
 @param items array of log objects
 */
-(void) logEvent:(NSString *) event
           items:(NSArray *) items;

-(void) logEvent:(NSString *) event
          params:(NSDictionary *) params
      completion:(void (^)(NSError* error, NSDictionary* schemes)) completion;


/**
  Method for sending log event actions with additinal parameters

 @param event log event name
 @param url log urls
 @param links array of log links
 @param items array of log objects
 */
-(void) logEventSendUrl: (NSString *) event
              urlString: (NSString *) url
                  links:(NSArray *) links
                  items:(NSArray *) items;

-(void) logEvent:(NSString *) event
           items:(NSArray *) items
           links:(NSArray *) links
requestRecommendations:(NSArray *) recommendations
      completion:(void (^)(NSError* error, NSDictionary* schemes)) completion;


/**
 Method for sending log event actions with additinal parameters


 @param requestType type of request
 @param event log event name
 @param items array of log objects
 @param links array of log links
 @param completion handler of event status
 */
-(void) logActionApiCallEvent: (NSString* ) requestType
                            event:(NSString *) event
                            items:(NSArray *) items
                            links:(NSArray *) links
                       completion:(void (^)(NSError* error, NSString* string)) completion;

-(void) logAsyncApiCallWithCallback:(NSString *) event
                              items:(NSArray *) items
                         completion:(void (^)(NSError* error, NSString* string)) completion;


-(void) logActionAsyncApiCallWithCallback:(NSString *) event
                                    items:(NSArray *) items
                                    links:(NSArray *) links
                   requestRecommendations:(NSArray *) recommendations
                               completion:(void (^)(NSError* error, NSString* string)) completion;

-(void) logTransactionEvent:(NSString *) event
              transactionId:(NSString *) transactionId
                      items:(NSArray *) items;


/**
   Method for sending log event for transaction actions 

 @param event log event name
 @param transactionId log transaction ID
 @param transactionTotal Transaction total sum
 @param items array of log objects
 @param completion handler of event status
 */
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
@end
