/*
 * Radius Networks, Inc.
 * http://www.radiusnetworks.com
 *
 * @author Scott Yoder
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */


#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "RNLBeacon.h"

@interface RNLBeaconScanner : NSObject <CBCentralManagerDelegate>

+ (instancetype) sharedBeaconScanner;

- (void) startScanning;
- (void) stopScanning;
- (NSNumber *) calibratedRSSIFor: (RNLBeacon *)beacon;
- (NSArray *) trackedBeacons;
- (NSArray *) extraDataFieldsForBeacon: (RNLBeacon *) beacon;
- (void) startRangingBeaconsWithBluetoothIdentifier: (NSString *) bluetoothIdentifier id1:  (NSString *) id1 id2: (NSString*) id2 id3: (NSString *) id3;
- (void) stopRangingBeacons;


@property Boolean debugEnabled;
@property NSMutableArray *simulatedBeacons;
@end
