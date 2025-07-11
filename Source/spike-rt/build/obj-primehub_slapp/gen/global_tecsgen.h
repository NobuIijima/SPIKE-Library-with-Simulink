/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C により import されるヘッダ #_IMP_# */
#include "tecs_kernel.h"
#include "syssvc/serial.h"
#include "syssvc/syslog.h"
#include "primehub.h"
/**/

#ifndef TOPPERS_MACRO_ONLY

 extern void tTask_CB_initialize();
 extern void tSemaphore_CB_initialize();
 extern void tInterruptRequest_CB_initialize();
 extern void tISR_CB_initialize();
 extern void tInitializeRoutine_CB_initialize();
 extern void tTerminateRoutine_CB_initialize();
 extern void tSerialPortMain_CB_initialize();
 extern void tSerialAdapter_CB_initialize();
 extern void tSysLog_CB_initialize();
 extern void tSysLogAdapter_CB_initialize();
 extern void tLogTaskMain_CB_initialize();
 extern void tBannerMain_CB_initialize();
 extern void tPutLogTarget_CB_initialize();
 extern void tUsart_CB_initialize();
 extern void tSIOPortTargetMain_CB_initialize();
 extern void tSerialAsyncPortMain_CB_initialize();
 extern void tSIOAsyncPortPybricksUSB_CB_initialize();
 extern void tSIOAsyncPortPybricksBluetooth_CB_initialize();
 extern void tSIOAsyncPortTest_CB_initialize();

#define INITIALIZE_TECS() \
 	tTask_CB_initialize();\
 	tSemaphore_CB_initialize();\
 	tInterruptRequest_CB_initialize();\
 	tISR_CB_initialize();\
 	tInitializeRoutine_CB_initialize();\
 	tTerminateRoutine_CB_initialize();\
 	tSerialPortMain_CB_initialize();\
 	tSerialAdapter_CB_initialize();\
 	tSysLog_CB_initialize();\
 	tSysLogAdapter_CB_initialize();\
 	tLogTaskMain_CB_initialize();\
 	tBannerMain_CB_initialize();\
 	tPutLogTarget_CB_initialize();\
 	tUsart_CB_initialize();\
 	tSIOPortTargetMain_CB_initialize();\
 	tSerialAsyncPortMain_CB_initialize();\
 	tSIOAsyncPortPybricksUSB_CB_initialize();\
 	tSIOAsyncPortPybricksBluetooth_CB_initialize();\
 	tSIOAsyncPortTest_CB_initialize();\
/* INITIALIZE_TECS terminator */

#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define SIOSendReady   ((const uint_t)1)
#define SIOReceiveReady ((const uint_t)2)
#define DefaultTaskStackSize ((const size_t)4096)
#define LogTaskStackSize ((const size_t)4096)
#define BannerTargetName ((const char*)"Lego SPIKE Prime Hub(STM32F413VGT6:ARM Cortex-M4)")
#define BannerCopyrightNotice ((const char*)"")
#define SIOAsyncSendPop ((const uint_t)1)
#define SIOAsyncReceivePush ((const uint_t)2)

#endif /* GLOBAL_TECSGEN_H */
