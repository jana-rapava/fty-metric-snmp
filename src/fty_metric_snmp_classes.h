/*  =========================================================================
    fty_metric_snmp_classes - private header file

    Copyright (C) 2016 - 2017 Tomas Halman                                 
                                                                           
    This program is free software; you can redistribute it and/or modify   
    it under the terms of the GNU General Public License as published by   
    the Free Software Foundation; either version 2 of the License, or      
    (at your option) any later version.                                    
                                                                           
    This program is distributed in the hope that it will be useful,        
    but WITHOUT ANY WARRANTY; without even the implied warranty of         
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          
    GNU General Public License for more details.                           
                                                                           
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.            
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_METRIC_SNMP_CLASSES_H_INCLUDED
#define FTY_METRIC_SNMP_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/fty_metric_snmp.h"

//  Extra headers

//  Opaque class structures to allow forward references
#ifndef LUASNMP_T_DEFINED
typedef struct _luasnmp_t luasnmp_t;
#define LUASNMP_T_DEFINED
#endif
#ifndef RULE_T_DEFINED
typedef struct _rule_t rule_t;
#define RULE_T_DEFINED
#endif
#ifndef VSJSON_T_DEFINED
typedef struct _vsjson_t vsjson_t;
#define VSJSON_T_DEFINED
#endif
#ifndef HOST_ACTOR_T_DEFINED
typedef struct _host_actor_t host_actor_t;
#define HOST_ACTOR_T_DEFINED
#endif
#ifndef FTYSNMP_T_DEFINED
typedef struct _ftysnmp_t ftysnmp_t;
#define FTYSNMP_T_DEFINED
#endif
#ifndef CREDENTIALS_T_DEFINED
typedef struct _credentials_t credentials_t;
#define CREDENTIALS_T_DEFINED
#endif

//  Internal API
#include "luasnmp.h"
#include "rule.h"
#include "vsjson.h"
#include "host_actor.h"
#include "ftysnmp.h"
#include "credentials.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef FTY_METRIC_SNMP_BUILD_DRAFT_API

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_SNMP_PRIVATE void
    luasnmp_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_SNMP_PRIVATE void
    rule_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_SNMP_PRIVATE void
    vsjson_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_SNMP_PRIVATE void
    host_actor_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_SNMP_PRIVATE void
    ftysnmp_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_SNMP_PRIVATE void
    credentials_test (bool verbose);

//  Self test for private classes
FTY_METRIC_SNMP_PRIVATE void
    fty_metric_snmp_private_selftest (bool verbose);

#endif // FTY_METRIC_SNMP_BUILD_DRAFT_API

#endif
