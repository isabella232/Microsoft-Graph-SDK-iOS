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



#ifndef MSGRAPHSERVICEPASSWORDPROFILE_H
#define MSGRAPHSERVICEPASSWORDPROFILE_H

#import <Foundation/Foundation.h>
#import "core/MSOrcChangesTrackingArray.h"

#import "core/MSOrcBaseEntity.h"
#import "api/MSOrcInteroperableWithDictionary.h"

/** Interface MSGraphServicePasswordProfile
 *
 */
__deprecated_msg("This SDK is deprecated. Please review the README for further information (https://github.com/OfficeDev/Microsoft-Graph-SDK-iOS).")
@interface MSGraphServicePasswordProfile : MSOrcBaseEntity <MSOrcInteroperableWithDictionary>


/** Property password
 *
 */
@property (nonatomic,  copy, setter=setPassword:, getter=password) NSString * password;

/** Property forceChangePasswordNextSignIn
 *
 */
@property (nonatomic,  setter=setForceChangePasswordNextSignIn:, getter=forceChangePasswordNextSignIn) bool forceChangePasswordNextSignIn;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif
