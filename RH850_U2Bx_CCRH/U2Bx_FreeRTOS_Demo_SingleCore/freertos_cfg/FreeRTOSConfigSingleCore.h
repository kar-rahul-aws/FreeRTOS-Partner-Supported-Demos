/*
 * FreeRTOS Kernel V10.2.0
 * Copyright (C) 2019 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://www.FreeRTOS.org
 * http://aws.amazon.com/freertos
 *
 * 1 tab == 4 spaces!
 */


#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/*-----------------------------------------------------------
 * Application specific definitions.
 *
 * These definitions should be adjusted for your particular hardware and
 * application requirements.
 *
 * THESE PARAMETERS ARE DESCRIBED WITHIN THE 'CONFIGURATION' SECTION OF THE
 * FreeRTOS API DOCUMENTATION AVAILABLE ON THE FreeRTOS.org WEB SITE.
 *
 * See http://www.freertos.org/a00110.html
 *----------------------------------------------------------*/

/* Supported device */
#define U2Bx_DEVICES                                1
#define U2Ax_DEVICES                                2
#define configDEVICE_NAME                           U2Bx_DEVICES

/* Constants that describe the hardware and memory usage. */
#define configCPU_CLOCK_HZ                    (20000000UL)  //200000000U
#define configTICK_RATE_HZ                    ((TickType_t)1000)
#define configTOTAL_HEAP_SIZE                 ((size_t)(32*1024))
#define configMINIMAL_STACK_SIZE              ((uint16_t)256)
#define configSUPPORT_DYNAMIC_ALLOCATION      1
#define configSUPPORT_STATIC_ALLOCATION       0
#define configTIMER_INT_PRIORITY              portINT_PRIORITY_LEVEL14

/* Constants related to the behaviour or the scheduler. */
#define configMAX_PRIORITIES                  5
#define configUSE_PREEMPTION                  1
#define configUSE_TIME_SLICING                1
#define configIDLE_SHOULD_YIELD               1
#define configMAX_TASK_NAME_LEN               (10)
#define configTICK_TYPE_WIDTH_IN_BITS         TICK_TYPE_WIDTH_32_BITS

/* Software timer definitions. */
#define configUSE_TIMERS                      1
#define configTIMER_TASK_PRIORITY             2
#define configTIMER_QUEUE_LENGTH              5
#define configTIMER_TASK_STACK_DEPTH          (configMINIMAL_STACK_SIZE * 3)

/* Constants that build features in or out. */
#define configUSE_MUTEXES                     1
#define configUSE_RECURSIVE_MUTEXES           1
#define configUSE_COUNTING_SEMAPHORES         1
#define configUSE_QUEUE_SETS                  1
#define configUSE_TASK_NOTIFICATIONS          1
#define configUSE_TRACE_FACILITY              1
#define configUSE_TICKLESS_IDLE               0
#define configUSE_APPLICATION_TASK_TAG        0
#define configUSE_NEWLIB_REENTRANT            0
#define configUSE_CO_ROUTINES                 0
#define configUSE_EVENT_GROUPS                1
/* Constants provided for debugging and optimisation assistance. */
#define configCHECK_FOR_STACK_OVERFLOW        0
#define configQUEUE_REGISTRY_SIZE             0
#define configASSERT( x )                     if( ( x ) == 0 ) { taskDISABLE_INTERRUPTS(); for( ;; ); }

/* Constants that define which hook (callback) functions should be used. */
#define configUSE_IDLE_HOOK                   0
#define configUSE_TICK_HOOK                   0
#define configUSE_DAEMON_TASK_STARTUP_HOOK    0
#define configUSE_MALLOC_FAILED_HOOK          0

/* Port specific configuration. */
#define configENABLE_MPU                      0
#define configENABLE_FPU                      1
#define configENABLE_FXU                      1
#define configENABLE_TRUSTZONE                0
#define configMINIMAL_SECURE_STACK_SIZE       ((uint32_t)1024)
#define configRUN_FREERTOS_SECURE_ONLY        0
#define configNUMBER_OF_CORES                 1

#define configRUN_MULTIPLE_PRIORITIES         1
#define configUSE_CORE_AFFINITY               0
#define configTICK_CORE                       0
#define configUSE_TASK_PREEMPTION_DISABLE     0
#define portCRITICAL_NESTING_IN_TCB           1
#define configUSE_PASSIVE_IDLE_HOOK           0
#define configUSE_PORT_OPTIMISED_TASK_SELECTION 0
/* Set the following definitions to 1 to include the API function, or zero
 * to exclude the API function.  NOTE:  Setting an INCLUDE_ parameter to 0 is
 * only necessary if the linker does not automatically remove functions that are
 * not referenced anyway. */
#define INCLUDE_vTaskPrioritySet              1
#define INCLUDE_uxTaskPriorityGet             1
#define INCLUDE_vTaskDelete                   1
#define INCLUDE_vTaskSuspend                  1
#define INCLUDE_vTaskDelayUntil               1
#define INCLUDE_vTaskDelay                    1
#define INCLUDE_xTaskGetIdleTaskHandle        1
#define INCLUDE_xTaskAbortDelay               1
#define INCLUDE_xQueueGetMutexHolder          1
#define INCLUDE_xSemaphoreGetMutexHolder      1
#define INCLUDE_xTaskGetHandle                1
#define INCLUDE_uxTaskGetStackHighWaterMark   1
#define INCLUDE_uxTaskGetStackHighWaterMark2  1
#define INCLUDE_eTaskGetState                 1
#define INCLUDE_xTaskResumeFromISR            1
#define INCLUDE_xTimerPendFunctionCall        1
#define INCLUDE_xTaskGetSchedulerState        1
#define INCLUDE_xTaskGetCurrentTaskHandle     1

#endif /* FREERTOS_CONFIG_H */