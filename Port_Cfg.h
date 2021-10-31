 /******************************************************************************
 *
 * Module: PORT
 *
 * File Name: Port_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Assem Khaled
 ******************************************************************************/

#ifndef PORT_CFG_H
#define PORT_CFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT               (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API               (STD_ON)

/* Pre-compile option for presence of Port_SetPinDirection API */
#define PORT_SET_PIN_DIRECTION_API			(STD_ON)

/* Pre-compile option for presence of Port_SetPinMode API */
#define PORT_SET_PIN_MODE_API				(STD_ON)

/* Number of PINS */
#define PORT_CONFIGURED_PINS				(43U)

/* Tiva-c Ports */
#define PORT_PortA					(0U)
#define PORT_PortB					(1U)
#define PORT_PortC					(2U)
#define PORT_PortD					(3U)
#define PORT_PortE					(4U)
#define PORT_PortF					(5U)

/* Tiva-c Pins */
#define PORT_Pin0                	(0U)
#define PORT_Pin1                	(1U)
#define PORT_Pin2                	(2U)
#define PORT_Pin3                	(3U)
#define PORT_Pin4                	(4U)
#define PORT_Pin5                	(5U)
#define PORT_Pin6                	(6U)
#define PORT_Pin7                	(7U)

#endif /* PORT_CFG_H */
