#ifndef RPMTYPES_H
#define RPMTYPES_H
/*===========================================================================

                      RPM Shared Type Definitions

DESCRIPTION
  This file contains declarations for use by both the master-side and firmware-
  side of the RPM drivers.

  $Header: //components/rel/tz.bf/2.5.c10/trustzone_images/core/api/power/RPMTypes.h#1 $

   Copyright (c) 2009-2010 by Qualcomm Technologies, Inc.  Confidential and Proprietary.
===========================================================================*/

#include "DALStdDef.h" /* for uint32 */

typedef struct DAL_rpm_InternalMessageType  DAL_rpm_InternalMessageType;
typedef DAL_rpm_InternalMessageType*        DAL_rpm_MessageType;

/* type definitions */
/* list of rpm resources */
typedef enum
{
  /* housekeeping */
  DAL_RPM_RESOURCE_NOTIFICATIONS = 0,
  DAL_RPM_RESOURCE_REQUEST_INVALIDATE,
  DAL_RPM_RESOURCE_TRIGGER_TIMED,
  DAL_RPM_RESOURCE_TRIGGER_SET,   // not supported
  DAL_RPM_RESOURCE_TRIGGER_CLEAR, // not supported

  /* clocks */
  DAL_RPM_RESOURCE_CXO_CLK,
  DAL_RPM_RESOURCE_PXO_CLK,
  DAL_RPM_RESOURCE_PLL_4,
  DAL_RPM_RESOURCE_APPS_FABRIC_CLK,
  DAL_RPM_RESOURCE_SYSTEM_FABRIC_CLK,
  DAL_RPM_RESOURCE_MM_FABRIC_CLK,
  DAL_RPM_RESOURCE_DAYTONA_FABRIC_CLK,
  DAL_RPM_RESOURCE_SFPB_CLK,
  DAL_RPM_RESOURCE_CFPB_CLK,
  DAL_RPM_RESOURCE_MMFPB_CLK,
  DAL_RPM_RESOURCE_SMI_CLK,
  DAL_RPM_RESOURCE_EBI1_CLK,

  /* apps l2 cache control */
  DAL_RPM_RESOURCE_APPS_L2_CACHE_CTL,

  /* apps fabric config & arbitration */
  DAL_RPM_RESOURCE_APPS_FABRIC_CFG_HALT,
  DAL_RPM_RESOURCE_APPS_FABRIC_CFG_CLKMOD,
  DAL_RPM_RESOURCE_APPS_FABRIC_CFG_IOCTL,
  DAL_RPM_RESOURCE_APPS_FABRIC_ARB,

  /* system fabric config & arbitration */
  DAL_RPM_RESOURCE_SYS_FABRIC_CFG_HALT,
  DAL_RPM_RESOURCE_SYS_FABRIC_CFG_CLKMOD,
  DAL_RPM_RESOURCE_SYS_FABRIC_CFG_IOCTL,
  DAL_RPM_RESOURCE_SYSTEM_FABRIC_ARB,

  /* multimedia fabric config & arbitration */
  DAL_RPM_RESOURCE_MMSS_FABRIC_CFG_HALT,
  DAL_RPM_RESOURCE_MMSS_FABRIC_CFG_CLKMOD,
  DAL_RPM_RESOURCE_MMSS_FABRIC_CFG_IOCTL,
  DAL_RPM_RESOURCE_MM_FABRIC_ARB,

  /* pmic 8901 */
  DAL_RPM_RESOURCE_SMPS0B,
  DAL_RPM_RESOURCE_SMPS1B,
  DAL_RPM_RESOURCE_SMPS2B,
  DAL_RPM_RESOURCE_SMPS3B,
  DAL_RPM_RESOURCE_SMPS4B,
  DAL_RPM_RESOURCE_LDO0B,
  DAL_RPM_RESOURCE_LDO1B,
  DAL_RPM_RESOURCE_LDO2B,
  DAL_RPM_RESOURCE_LDO3B,
  DAL_RPM_RESOURCE_LDO4B,
  DAL_RPM_RESOURCE_LDO5B,
  DAL_RPM_RESOURCE_LDO6B,
  DAL_RPM_RESOURCE_LVS0B,
  DAL_RPM_RESOURCE_LVS1B,
  DAL_RPM_RESOURCE_LVS2B,
  DAL_RPM_RESOURCE_LVS3B,
  DAL_RPM_RESOURCE_MVS,

  /* pmic 8058 */
  DAL_RPM_RESOURCE_SMPS0,
  DAL_RPM_RESOURCE_SMPS1,
  DAL_RPM_RESOURCE_SMPS2,
  DAL_RPM_RESOURCE_SMPS3,
  DAL_RPM_RESOURCE_SMPS4,
  DAL_RPM_RESOURCE_LDO0,
  DAL_RPM_RESOURCE_LDO1,
  DAL_RPM_RESOURCE_LDO2,
  DAL_RPM_RESOURCE_LDO3,
  DAL_RPM_RESOURCE_LDO4,
  DAL_RPM_RESOURCE_LDO5,
  DAL_RPM_RESOURCE_LDO6,
  DAL_RPM_RESOURCE_LDO7,
  DAL_RPM_RESOURCE_LDO8,
  DAL_RPM_RESOURCE_LDO9,
  DAL_RPM_RESOURCE_LDO10,
  DAL_RPM_RESOURCE_LDO11,
  DAL_RPM_RESOURCE_LDO12,
  DAL_RPM_RESOURCE_LDO13,
  DAL_RPM_RESOURCE_LDO14,
  DAL_RPM_RESOURCE_LDO15,
  DAL_RPM_RESOURCE_LDO16,
  DAL_RPM_RESOURCE_LDO17,
  DAL_RPM_RESOURCE_LDO18,
  DAL_RPM_RESOURCE_LDO19,
  DAL_RPM_RESOURCE_LDO20,
  DAL_RPM_RESOURCE_LDO21,
  DAL_RPM_RESOURCE_LDO22,
  DAL_RPM_RESOURCE_LDO23,
  DAL_RPM_RESOURCE_LDO24,
  DAL_RPM_RESOURCE_LDO25,
  DAL_RPM_RESOURCE_LVS0,
  DAL_RPM_RESOURCE_LVS1,
  DAL_RPM_RESOURCE_NCP,

  DAL_RPM_RESOURCE_CXO_BUFFERS,

  /* compilation stuff -- new entries should be placed just above these */
  DAL_RPM_RESOURCE_COUNT,
  DAL_RPM_RESOURCE_SIZE = 0x7FFFFFFF  /* force enum to 32-bits */
} DAL_rpm_ResourceType;

#define RPM_IS_VALID_RESOURCE(x) (((x) >= 0) && ((x) < DAL_RPM_RESOURCE_COUNT))

/* list of masters in the system */
typedef enum
{
  DAL_RPMFW_MASTER_0 = 0,  /* 8660: SCSS */
  DAL_RPMFW_MASTER_1,      /* 8660: MSS */
  DAL_RPMFW_MASTER_2,      /* 8660: LPASS */
  DAL_RPMFW_MASTER_COUNT,
  DAL_RPMFW_MASTER_SIZE = 0x7FFFFFFF
} DAL_rpmfw_MasterType;

#define RPM_IS_VALID_MASTER(x) (((x) >= 0) && ((x) < DAL_RPMFW_MASTER_COUNT))

/* list of config sets in the system */
typedef enum
{
  DAL_RPM_CONFIG_SET_ACTIVE_0 = 0,
  DAL_RPM_CONFIG_SET_PRIMARY = DAL_RPM_CONFIG_SET_ACTIVE_0,
  DAL_RPM_CONFIG_SET_SLEEP,
  DAL_RPM_CONFIG_SET_COUNT,
  DAL_RPM_CONFIG_SET_INVALID = DAL_RPM_CONFIG_SET_COUNT,
  DAL_RPM_CONFIG_SET_SIZE = 0x7FFFFFFF
} DAL_rpm_ConfigSetType;

#define RPM_IS_VALID_CONFIG_SET(x) (((x) >= 0) && ((x) < DAL_RPM_CONFIG_SET_COUNT))

/* structure passed to drivers in request callbacks */
typedef struct
{
  DAL_rpm_ResourceType  Resource;
  DAL_rpmfw_MasterType  Master;
  DAL_rpm_ConfigSetType ConfigSet;
  uint32                DataLen;
  void                 *Data;
  DALBOOL               Rejected;
} DAL_rpmfw_RequestType;

typedef enum
{
  DAL_RPM_INTERRUPT_INVALID = 0,
  DAL_RPM_INTERRUPT_SPM_SHUTDOWN_HANDSHAKE,
  DAL_RPM_INTERRUPT_SPM_WAKEUP_HANDSHAKE,
  DAL_RPM_INTERRUPT_COUNT,
  DAL_RPM_INTERRUPT_SIZE = 0x7FFFFFFF
} DAL_rpm_InterruptType;

#define RPM_IS_VALID_INTERRUPT(x) (((x) >= 0) && ((x) < DAL_RPM_INTERRUPT_COUNT))

#endif /* RPMTYPES_H */
