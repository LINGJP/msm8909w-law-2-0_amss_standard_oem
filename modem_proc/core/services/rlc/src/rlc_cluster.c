/**
@file rlc_learning.h
@brief
This module implements cluster funcitons in the RLC module. 
*/
/*=============================================================================
  Copyright (c) 2013 QUALCOMM Technologies Incorporated.
  All rights reserved.
  Qualcomm Confidential and Proprietary
=============================================================================*/
/*=============================================================================

                   R L C   S E R V I C E   S U B S Y S T E M

GENERAL DESCRIPTION
  Cluster functions for the RLC learning module.


=============================================================================*/


/*=============================================================================

                        EDIT HISTORY FOR MODULE

This section contains comments describing changes made to the module.
Notice that changes are listed in reverse chronological order.

$Header: 

when       who     what, where, why
--------   ---     ------------------------------------------------------------
07/03/13   as      Initial revision.

=============================================================================*/


/*=============================================================================

                           INCLUDE FILES

=============================================================================*/

#include "rlc_cluster.h"
#include "rlc_os.h"

#include <stdlib.h>


/*=============================================================================

                           DATA DEFINITIONS

=============================================================================*/



/*=============================================================================

								MACROS

=============================================================================*/

#define absdiff(a,b) (a)>(b)?((a)-(b)):((b)-(a))

/*=============================================================================

                           FUNCTION DEFINITIONS

=============================================================================*/

/**
Gets distance between two points

@param[in]	numDimensions	The number of dimensions of data values.
@param[in]  p1...			Array listing coordinate dimensions for first point
@param[in]	p2...			Array listing coordinate dimensions for second point

@return
Distance as integer.

@dependencies
1) Arguments must match double the number of dimensions.
*/

uint32 rlc_get_distance(uint32 numDimensions, uint32 *p1, uint32 *p2)
{
	uint32 num1=0;
	uint32 i=0;
	uint32 total=0;

	if( numDimensions == 1 )
	{
		return absdiff(p1[0],p2[0]);
	}

	for( i=0; i < numDimensions; i++ )
	{
		num1=absdiff(p1[i], p2[i]);
		num1=num1*num1;
		total+=num1;
	}

	return rlc_os_sqrt(total);
}