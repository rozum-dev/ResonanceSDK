//
//  ServerManager.h
//  KPITest
//
//  Created by Nik on 09.12.15.
//  Copyright © 2015 Nik. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ServerManager : NSObject


@property (strong,nonatomic) NSURLComponents* urlComponents;


+ (ServerManager*) sharedManager;

- (void) logEvent:(NSDictionary*) params;
- (void) logSyncApiCallInsideAsyncStackEvent:(NSDictionary*) params;
- (void) logAsyncApiCallWithCallbackEvent:(NSDictionary*) params completion: (void (^)(NSError *, NSString *)) completion;
- (void) logAsyncApiCallWithoutCallbackEvent:(NSDictionary*) params;



@end
