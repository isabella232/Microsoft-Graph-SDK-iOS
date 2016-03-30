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


#ifndef MSGRAPHSERVICEUSERCOLLECTIONFETCHER_H
#define MSGRAPHSERVICEUSERCOLLECTIONFETCHER_H

@class MSGraphServiceUserFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSGraphServiceModels.h"

/** MSGraphServiceUserCollectionFetcher
 *
 */
__deprecated_msg("This SDK is deprecated. Please review the README for further information (https://github.com/OfficeDev/Microsoft-Graph-SDK-iOS).")
@interface MSGraphServiceUserCollectionFetcher : MSOrcCollectionFetcher


- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)readWithCallback:(void (^)(NSArray *, MSOrcError *))callback;

- (MSGraphServiceUserFetcher *)getById: (id) identifier;
- (void)add:(MSGraphServiceUser *)entity callback:(void (^)(MSGraphServiceUser *, MSOrcError *))callback;

- (MSGraphServiceUserCollectionFetcher *)select:(NSString *)params;
- (MSGraphServiceUserCollectionFetcher *)filter:(NSString *)params;
- (MSGraphServiceUserCollectionFetcher *)search:(NSString *)params;
- (MSGraphServiceUserCollectionFetcher *)top:(int)value;
- (MSGraphServiceUserCollectionFetcher *)skip:(int)value;
- (MSGraphServiceUserCollectionFetcher *)expand:(NSString *)value;
- (MSGraphServiceUserCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphServiceUserCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServiceUserCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif
