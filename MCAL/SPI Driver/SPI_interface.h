/*****************************************************************/
/*****************************************************************/
/*****************		Author: Mohamed Magdy	******************/
/*****************		Layer:  MCAL			******************/
/*****************		SWC:    SPI				******************/
/*****************************************************************/
/*****************************************************************/

#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_
/*********************************************** Includes **********************************************/
#include "../../LIB/Platform_Types.h"
#include "../../LIB/Utils.h"
#include "../../LIB/ATMEGA32_MemMap.h"
#include "../DIO Driver/DIO_interface.h"

/*=============================================================================================
 * 									Pre-Build Configuration
 *=============================================================================================*/
/*Options:
 *F_OSC_DIV_4
 *F_OSC_DIV_16
 *F_OSC_DIV_64
 *F_OSC_DIV_128
 *F_OSC_DIV_2
 *F_OSC_DIV_8
 *F_OSC_DIV_32
 * */
#define SCK_FREQUENCEY				F_OSC_DIV_16

/*=======================================================================================
 * 						APIs supported by "MCAL SPI Driver"
 *=======================================================================================*/
void MCAL_SPI_MasterInit(void);

void MCAL_SPI_SlaveInit(void);

uint8 MCAL_SPI_Transcieve(uint8 Data);

#endif	/* SPI_INTERFACE_H_ */
