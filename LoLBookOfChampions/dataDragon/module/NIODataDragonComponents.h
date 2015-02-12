//
// Created by Jeff Roberts on 1/23/15.
// Copyright (c) 2015 nimbleNoggin.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Typhoon/TyphoonAssembly.h>

@class NIOLoLApiRequestOperationManager;
@class GetRealmTask;
@class NIODataDragonSyncService;
@protocol NIOContentProvider;
@class NIOCoreComponents;

@interface NIODataDragonComponents : TyphoonAssembly
@property (nonatomic, strong, readonly) NIOCoreComponents *coreComponents;

-(GetRealmTask *)getRealmTask;
-(NIODataDragonSyncService *)dataDragonSyncService;
-(NIOLoLApiRequestOperationManager *)lolStaticDataApiRequestOperationManager;
@end