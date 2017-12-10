//
//  ResonanceBaseSettings.h
//  Resonance
//
//  Created by Nik on 11/29/17.
//  Copyright © 2017 Nik. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#import <CoreTelephony/CTCarrier.h>

@interface ResonanceBaseSettings : NSObject

+ (ResonanceBaseSettings*) shared;

@property (nonatomic, strong) NSString* productionUrl;
@property (nonatomic, strong) NSString* qaUrl;
@property (nonatomic, strong) NSString* appId;
@property (nonatomic, strong) NSString* carrier;
@property (nonatomic, strong) NSString* model;
@property (nonatomic, strong) NSString* systemVersion;
@property (nonatomic, strong) NSString* systemName;
@property (nonatomic, strong) NSString* screenSize;
@property (nonatomic, strong) NSString* country;



@property (nonatomic, assign) BOOL productionMode;
@property (nonatomic, assign) BOOL allowLocation;
@property (nonatomic, assign) BOOL allowCarrier;

- (void) configureResonanceSettings;

@end
