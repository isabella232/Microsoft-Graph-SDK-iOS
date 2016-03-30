/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/


#ifndef MSGRAPHSERVICEPERMISSIONCOLLECTIONFETCHER_H
#define MSGRAPHSERVICEPERMISSIONCOLLECTIONFETCHER_H

@class MSGraphServicePermissionFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSGraphServiceModels.h"

/** MSGraphServicePermissionCollectionFetcher
 *
 */
__deprecated_msg("This SDK is deprecated. Please review the README for further information (https://github.com/OfficeDev/Microsoft-Graph-SDK-iOS).")
@interface MSGraphServicePermissionCollectionFetcher : MSOrcCollectionFetcher


- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)readWithCallback:(void (^)(NSArray *, MSOrcError *))callback;

- (MSGraphServicePermissionFetcher *)getById: (id) identifier;
- (void)add:(MSGraphServicePermission *)entity callback:(void (^)(MSGraphServicePermission *, MSOrcError *))callback;

- (MSGraphServicePermissionCollectionFetcher *)select:(NSString *)params;
- (MSGraphServicePermissionCollectionFetcher *)filter:(NSString *)params;
- (MSGraphServicePermissionCollectionFetcher *)search:(NSString *)params;
- (MSGraphServicePermissionCollectionFetcher *)top:(int)value;
- (MSGraphServicePermissionCollectionFetcher *)skip:(int)value;
- (MSGraphServicePermissionCollectionFetcher *)expand:(NSString *)value;
- (MSGraphServicePermissionCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphServicePermissionCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServicePermissionCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif
