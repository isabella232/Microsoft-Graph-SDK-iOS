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



#ifndef MSGRAPHSERVICEFILESYSTEMINFO_H
#define MSGRAPHSERVICEFILESYSTEMINFO_H

#import <Foundation/Foundation.h>
#import "core/MSOrcChangesTrackingArray.h"

#import "core/MSOrcBaseEntity.h"
#import "api/MSOrcInteroperableWithDictionary.h"

/** Interface MSGraphServiceFileSystemInfo
 *
 */
__deprecated_msg("This SDK is deprecated. Please review the README for further information (https://github.com/OfficeDev/Microsoft-Graph-SDK-iOS).")
@interface MSGraphServiceFileSystemInfo : MSOrcBaseEntity <MSOrcInteroperableWithDictionary>


/** Property createdDateTime
 *
 */
@property (nonatomic,  copy, setter=setCreatedDateTime:, getter=createdDateTime) NSDate * createdDateTime;

/** Property lastModifiedDateTime
 *
 */
@property (nonatomic,  copy, setter=setLastModifiedDateTime:, getter=lastModifiedDateTime) NSDate * lastModifiedDateTime;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif
