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


#ifndef MSGRAPHSERVICECONVERSATIONTHREADCOLLECTIONOPERATIONS_H
#define MSGRAPHSERVICECONVERSATIONTHREADCOLLECTIONOPERATIONS_H


#import "MSGraphServiceModels.h"
#import "api/api.h"
#import "core/core.h"
#import "MSGraphServiceEntityCollectionOperations.h"


/** MSGraphServiceConversationThreadCollectionOperations
 *
 */
__deprecated_msg("This SDK is deprecated. Please review the README for further information (https://github.com/OfficeDev/Microsoft-Graph-SDK-iOS).")
@interface MSGraphServiceConversationThreadCollectionOperations : MSGraphServiceEntityCollectionOperations


- (void)replyWithPost:(MSGraphServicePost *)post callback:(void (^)(int, MSOrcError*))callback ;
- (void)replyRawWithPost:(NSString *)post callback:(void (^)(NSString *, MSOrcError*))callback ;

@end

#endif
