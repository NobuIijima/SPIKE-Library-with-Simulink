/*
 * This file was automatically generated by tecsgen.
 * Move and rename like below before editing,
 *   gen/tSIOAsyncPortPybricksBluetooth_templ.c => src/tSIOAsyncPortPybricksBluetooth.c
 * to avoid to be overwritten by tecsgen.
 */
/* #[<PREAMBLE>]#
 * Don't edit the comments between #[<...>]# and #[</...>]#
 * These comment are used by tecsmerege when merging.
 *
 * call port function #_TCPF_#
 * call port: cSIOCBR signature: sSIOAsyncCBR context:task
 *   ER_UINT        cSIOCBR_sizeSend( );
 *   ER_UINT        cSIOCBR_popSend( char* dst );
 *   ER_UINT        cSIOCBR_pushReceive( char src );
 *
 * #[</PREAMBLE>]# */

/* Put prototype declaration and/or variale definition here #_PAC_# */
#include "tSIOAsyncPortPybricksBluetooth_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* entry port function #_TEPF_# */
/* #[<ENTRY_PORT>]# eSIOPort
 * entry port: eSIOPort
 * signature:  sSIOAsyncPort
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSIOPort_open
 * name:         eSIOPort_open
 * global_name:  tSIOAsyncPortPybricksBluetooth_eSIOPort_open
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_open()
{
}

/* #[<ENTRY_FUNC>]# eSIOPort_close
 * name:         eSIOPort_close
 * global_name:  tSIOAsyncPortPybricksBluetooth_eSIOPort_close
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_close()
{
}

/* #[<ENTRY_FUNC>]# eSIOPort_putNotify
 * name:         eSIOPort_putNotify
 * global_name:  tSIOAsyncPortPybricksBluetooth_eSIOPort_putNotify
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_putNotify()
{
}

/* #[<ENTRY_FUNC>]# eSIOPort_enableCBR
 * name:         eSIOPort_enableCBR
 * global_name:  tSIOAsyncPortPybricksBluetooth_eSIOPort_enableCBR
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_enableCBR(uint_t cbrtn)
{
}

/* #[<ENTRY_FUNC>]# eSIOPort_disableCBR
 * name:         eSIOPort_disableCBR
 * global_name:  tSIOAsyncPortPybricksBluetooth_eSIOPort_disableCBR
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_disableCBR(uint_t cbrtn)
{
}

/* #[<ENTRY_PORT>]# eSIOCBR
 * entry port: eSIOCBR
 * signature:  sSIOAsyncCBR
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSIOCBR_sizeSend
 * name:         eSIOCBR_sizeSend
 * global_name:  tSIOAsyncPortPybricksBluetooth_eSIOCBR_sizeSend
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eSIOCBR_sizeSend()
{
}

/* #[<ENTRY_FUNC>]# eSIOCBR_popSend
 * name:         eSIOCBR_popSend
 * global_name:  tSIOAsyncPortPybricksBluetooth_eSIOCBR_popSend
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eSIOCBR_popSend(char* dst)
{
}

/* #[<ENTRY_FUNC>]# eSIOCBR_pushReceive
 * name:         eSIOCBR_pushReceive
 * global_name:  tSIOAsyncPortPybricksBluetooth_eSIOCBR_pushReceive
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eSIOCBR_pushReceive(char src)
{
}

/* #[<POSTAMBLE>]#
 *   Put non-entry functions below.
 * #[</POSTAMBLE>]#*/
