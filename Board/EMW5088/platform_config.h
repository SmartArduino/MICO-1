/**
******************************************************************************
* @file    platform_config.h
* @author  William Xu
* @version V1.0.0
* @date    05-May-2014
* @brief   This file provides common configuration for current platform.
******************************************************************************
*
*  The MIT License
*  Copyright (c) 2014 MXCHIP Inc.
*
*  Permission is hereby granted, free of charge, to any person obtaining a copy 
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights 
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is furnished
*  to do so, subject to the following conditions:
*
*  The above copyright notice and this permission notice shall be included in
*  all copies or substantial portions of the Software.
*
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR 
*  IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
******************************************************************************
*/ 
#ifndef __PLATFORM_COMMON_CONFIG_H__
#define __PLATFORM_COMMON_CONFIG_H__
#pragma once

/******************************************************
*                      Macros
******************************************************/

/******************************************************
*                    Constants
******************************************************/
  
#define HARDWARE_REVISION   "EMW5088_1"
#define DEFAULT_NAME        "EMW5088"
#define MODEL               "EMW5088"

/* MICO RTOS tick rate in Hz */
#define MICO_DEFAULT_TICK_RATE_HZ                   (1000) 
/************************************************************************
 * Uncomment to disable watchdog. For debugging only */
//#define MICO_DISABLE_WATCHDOG

/************************************************************************
 * Uncomment to disable standard IO, i.e. printf(), etc. */
//#define MICO_DISABLE_STDIO

/************************************************************************
 * Uncomment to disable MCU powersave API functions */
#define MICO_DISABLE_MCU_POWERSAVE

/************************************************************************
 * Uncomment to enable MCU real time clock */
//#define MICO_ENABLE_MCU_RTC

/************************************************************************
 * Restore default and start easylink after press down EasyLink button for 3 seconds. */
#define RestoreDefault_TimeOut                      (3000)

/************************************************************************
 * Uncomment to enable go to bootloader mode when stdio received many continuous spaces. */
#define MICO_ENABLE_STDIO_TO_BOOT

/************************************************************************
 * Restore default and start easylink after press down EasyLink button for 3 seconds. */
#define MCU_CLOCK_HZ            (96000000)

/************************************************************************
 * How many bits are used in NVIC priority configuration */
#define CORTEX_NVIC_PRIO_BITS   (3)

/******************************************************
 *  EMW1088 Options
 ******************************************************/
/*  Wi-Fi chip module */
#define EMW1088

/*  Wi-Fi power pin is present */
#define MICO_USE_WIFI_POWER_PIN

/*  USE SDIO 1bit mode */
#define SDIO_1_BIT

/* Wi-Fi power pin is active high */
#define MICO_USE_WIFI_POWER_PIN_ACTIVE_HIGH

#define MICO_USE_BUILTIN_RF_DRIVER


/******************************************************
*                   Enumerations
******************************************************/

/******************************************************
*                 Type Definitions
******************************************************/

/******************************************************
*                    Structures
******************************************************/

/******************************************************
*                 Global Variables
******************************************************/

/******************************************************
*               Function Declarations
******************************************************/
#endif

