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



#ifndef MSGRAPHSERVICEPERMISSIONFETCHER_H
#define MSGRAPHSERVICEPERMISSIONFETCHER_H

#import "MSGraphServiceModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSGraphServiceIdentitySetFetcher;
@class MSGraphServiceSharingInvitationFetcher;
@class MSGraphServiceItemReferenceFetcher;
@class MSGraphServiceSharingLinkFetcher;
@class MSGraphServicePermissionOperations;


/** MSGraphServicePermissionFetcher
 *
 */
__deprecated_msg("This SDK is deprecated. Please review the README for further information (https://github.com/OfficeDev/Microsoft-Graph-SDK-iOS).")
@interface MSGraphServicePermissionFetcher : MSOrcEntityFetcher


@property (copy, nonatomic, readonly) MSGraphServicePermissionOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphServicePermission *, MSOrcError *))callback;
- (void)update:(MSGraphServicePermission *)permission callback:(void (^)(MSGraphServicePermission *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphServicePermissionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServicePermissionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphServicePermissionFetcher *)select:(NSString *)params;
- (MSGraphServicePermissionFetcher *)expand:(NSString *)value;

@end

#endif
