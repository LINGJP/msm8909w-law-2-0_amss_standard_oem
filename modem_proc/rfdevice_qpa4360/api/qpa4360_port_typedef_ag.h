#ifndef QPA4360_TYPEDEF_AG_H
#define QPA4360_TYPEDEF_AG_H


#include "comdef.h"

/*----------------------------------------------------------------------------*/
/*!
  It defines the QPA4360 pa_port enum.
*/
typedef enum 
{
  QPA4360_CDMA_BAND0_PORT_RFOUT_B5_B26__BC0, 
  QPA4360_CDMA_BAND10_PORT_RFOUT_B5_B26__BC10, 
  QPA4360_CDMA_BAND1_PORT_RFOUT_B2_25__BC1, 
  QPA4360_CDMA_BAND6_PORT_RFOUT_B1__BC6, 
  QPA4360_CDMA_BAND15_PORT_RFOUT_B4__BC15, 
  QPA4360_WCDMA_BAND5_PORT_RFOUT_B5_B26__W, 
  QPA4360_WCDMA_BAND6_PORT_RFOUT_B5_B26__W, 
  QPA4360_WCDMA_BAND19_PORT_RFOUT_B5_B26__W, 
  QPA4360_WCDMA_BAND8_PORT_RFOUT_B8__W, 
  QPA4360_WCDMA_BAND3_PORT_RFOUT_B3__W, 
  QPA4360_WCDMA_BAND9_PORT_RFOUT_B3__W, 
  QPA4360_WCDMA_BAND4_PORT_RFOUT_B4__W, 
  QPA4360_WCDMA_BAND10_PORT_RFOUT_B4__W, 
  QPA4360_WCDMA_BAND2_PORT_RFOUT_B2_B25__W_B2, 
  QPA4360_WCDMA_BAND25_PORT_RFOUT_B2_B25__W_B25, 
  QPA4360_WCDMA_BAND1_PORT_RFOUT_B1__W, 
  QPA4360_LTE_BAND12_PORT_RFOUT_B12_17, 
  QPA4360_LTE_BAND17_PORT_RFOUT_B12_17, 
  QPA4360_LTE_BAND13_PORT_RFOUT_B28B_13, 
  QPA4360_LTE_BAND14_PORT_RFOUT_B28B_13, 
  QPA4360_LTE_BAND28_PORT_RFOUT_B28A, 
  QPA4360_LTE_BAND28_B_PORT_RFOUT_B28B_13, 
  QPA4360_LTE_BAND20_PORT_RFOUT_B20, 
  QPA4360_LTE_BAND27_PORT_RFOUT_B5_26__B27, 
  QPA4360_LTE_BAND5_PORT_RFOUT_B5_26, 
  QPA4360_LTE_BAND18_PORT_RFOUT_B5_26, 
  QPA4360_LTE_BAND19_PORT_RFOUT_B5_26, 
  QPA4360_LTE_BAND26_PORT_RFOUT_B5_26, 
  QPA4360_LTE_BAND8_PORT_RFOUT_B8, 
  QPA4360_LTE_BAND3_PORT_RFOUT_B3, 
  QPA4360_LTE_BAND9_PORT_RFOUT_B3, 
  QPA4360_LTE_BAND4_PORT_RFOUT_B4, 
  QPA4360_LTE_BAND2_PORT_RFOUT_B2_B25__B2, 
  QPA4360_LTE_BAND25_PORT_RFOUT_B2_B25__B25, 
  QPA4360_LTE_BAND1_PORT_RFOUT_B1, 
  QPA4360_LTE_BAND34_PORT_RFOUT_B34_B39__B34, 
  QPA4360_LTE_BAND39_PORT_RFOUT_B34_B39__B39, 
  QPA4360_LTE_BAND30_PORT_RFOUT_HB__B30, 
  QPA4360_LTE_BAND40_PORT_RFOUT_HB__B40, 
  QPA4360_LTE_BAND41_PORT_RFOUT_HB__B41, 
  QPA4360_LTE_BAND38_PORT_RFOUT_HB__B38, 
  QPA4360_LTE_BAND7_PORT_RFOUT_HB__B7, 
  QPA4360_TDSCDMA_BAND34_PORT_RFOUT_B34_B39__TDS_B34, 
  QPA4360_TDSCDMA_BAND39_PORT_RFOUT_B34_B39__TDS_B39, 
  QPA4360_PORT_NUM, 
  QPA4360_PORT_INVALID, 
} qpa4360_pa_port_data_type;

#include "qpa4360_gsm_port_typedef_ag.h"

#endif