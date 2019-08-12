/*!
  @file
  lte_rlcdl_um.h

  @brief
  UM recieve chain processing

*/

/*==============================================================================

  Copyright (c) 2009 Qualcomm Technologies Incorporated. All Rights Reserved

  Qualcomm Proprietary

  Export of this technology or software is regulated by the U.S. Government.
  Diversion contrary to U.S. law prohibited.

  All ideas, data and information contained in or disclosed by
  this document are confidential and proprietary information of
  Qualcomm Technologies Incorporated and all rights therein are expressly reserved.
  By accepting this material the recipient agrees that this material
  and the information contained therein are held in confidence and in
  trust and will not be used, copied, reproduced in whole or in part,
  nor its contents revealed in any manner to others without the express
  written permission of Qualcomm Technologies Incorporated.

==============================================================================*/

/*==============================================================================

                        EDIT HISTORY FOR MODULE

This section contains comments describing changes made to the module.
Notice that changes are listed in reverse chronological order.

$Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/lte/L2/rlc/src/lte_rlcdl_um.h#1 $

when       who     what, where, why
--------   ---     -------------------------------------------------------------
02/03/09   ax      complete RLCDL packet logging
09/11/08   ax      initial version
==============================================================================*/

#ifndef LTE_RLCDL_UM_H
#define LTE_RLCDL_UM_H

/*==============================================================================

                           INCLUDE FILES

==============================================================================*/

#include <comdef.h>
#include <dsm_item.h>
#include "lte_rlcdli.h"

/*==============================================================================

                   EXTERNAL DEFINITIONS AND TYPES

==============================================================================*/


/*==============================================================================

                    EXTERNAL FUNCTION PROTOTYPES

==============================================================================*/

extern void lte_rlcdl_um_proc_pdu
(
  lte_rlcdli_ctrl_blk_ptr   ctrl_blk_ptr,
  dsm_item_type*            pdu_dsm_ptr,
  lte_sfn_s                 sfn
);

#endif /* LTE_RLCDL_UM_H */