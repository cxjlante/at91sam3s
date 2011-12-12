/* ----------------------------------------------------------------------------
 *         ATMEL Microcontroller Software Support
 * ----------------------------------------------------------------------------
 * Copyright (c) 2009, Atmel Corporation
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */

#ifndef _SAMGUI_WIDGET_CORE_TIMER_
#define _SAMGUI_WIDGET_CORE_TIMER_

#include <stdint.h>

/**
 * \addtogroup SAMGUI
 * @{
 *   \addtogroup SAMGUI_WGT
 *   @{
 *     \addtogroup SAMGUI_WGT_CORE
 *     @{
 *       \addtogroup SAMGUI_WGT_CORE_TIMERS WGT Core Timers
 *       @{
 */

// Max available timers
#define WGT_TIMER_MAX             4

typedef enum _eWGTTimer_State
{
    WGT_TIMER_DISABLED, // 0
    WGT_TIMER_ENABLED
} eWGTTimer_State ;

typedef struct _SWGTTimer
{
    uint32_t dwState ;
    uint32_t dwID ;
    uint32_t dwDelay ;
    uint32_t dwTimestamp ;
} SWGTTimer ;

// ------------------------------------------------------------------------------------------------
// Timer functions

extern uint32_t WGT_Timer_Create( SWGTTimer* pTimer, uint32_t dwID, uint32_t dwDelay ) ;
extern uint32_t WGT_Timer_Start( SWGTTimer* pTimer ) ;
extern uint32_t WGT_Timer_Stop( SWGTTimer* pTimer ) ;

extern uint32_t WGT_Timer_Initialize( void ) ;
extern uint32_t WGT_Timer_Process( void ) ;

/** @}
 * @}
 * @}
 * @} */

#endif // _SAMGUI_WIDGET_CORE_TIMER_
