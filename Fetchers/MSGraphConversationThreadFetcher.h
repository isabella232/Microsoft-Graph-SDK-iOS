/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSGRAPHCONVERSATIONTHREADFETCHER_H
#define MSGRAPHCONVERSATIONTHREADFETCHER_H

#import "MSGraphModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSGraphRecipientCollectionFetcher;
@class MSGraphPostCollectionFetcher;
@class MSGraphPostCollectionFetcher;
@class MSGraphPostFetcher;
@class MSGraphConversationThreadOperations;


/** MSGraphConversationThreadFetcher
 *
 */
@interface MSGraphConversationThreadFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSGraphConversationThreadOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphConversationThread *, MSOrcError *))callback;
- (void)update:(MSGraphConversationThread *)conversationThread callback:(void (^)(MSGraphConversationThread *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphConversationThreadFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphConversationThreadFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphConversationThreadFetcher *)select:(NSString *)params;
- (MSGraphConversationThreadFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=posts) MSGraphPostCollectionFetcher *posts;

- (MSGraphPostFetcher *)postsById:(id)identifier;


@end

#endif