/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tSerialAsyncPortMain_templ.c => src/tSerialAsyncPortMain.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * receiveBufferSize uint_t           ATTR_receiveBufferSize
 * sendBufferSize   uint_t           ATTR_sendBufferSize
 * openFlag         bool_t           VAR_openFlag    
 * errorFlag        bool_t           VAR_errorFlag   
 * ioControl        uint_t           VAR_ioControl   
 * receiveBuffer    char*            VAR_receiveBuffer
 * receiveReadPointer uint_t           VAR_receiveReadPointer
 * receiveWritePointer uint_t           VAR_receiveWritePointer
 * receiveCount     uint_t           VAR_receiveCount
 * sendBuffer       char*            VAR_sendBuffer  
 * sendReadPointer  uint_t           VAR_sendReadPointer
 * sendWritePointer uint_t           VAR_sendWritePointer
 * sendCount        uint_t           VAR_sendCount   
 *
 * 呼び口関数 #_TCPF_#
 * call port: cSIOPort signature: sSIOAsyncPort context:task
 *   void           cSIOPort_open( );
 *   void           cSIOPort_close( );
 *   void           cSIOPort_putNotify( );
 *   void           cSIOPort_enableCBR( uint_t cbrtn );
 *   void           cSIOPort_disableCBR( uint_t cbrtn );
 * call port: cSendSemaphore signature: sSemaphore context:task
 *   ER             cSendSemaphore_signal( );
 *   ER             cSendSemaphore_wait( );
 *   ER             cSendSemaphore_waitPolling( );
 *   ER             cSendSemaphore_waitTimeout( TMO timeout );
 *   ER             cSendSemaphore_initialize( );
 *   ER             cSendSemaphore_refer( T_RSEM* pk_semaphoreStatus );
 * call port: cReceiveSemaphore signature: sSemaphore context:task
 *   ER             cReceiveSemaphore_signal( );
 *   ER             cReceiveSemaphore_wait( );
 *   ER             cReceiveSemaphore_waitPolling( );
 *   ER             cReceiveSemaphore_waitTimeout( TMO timeout );
 *   ER             cReceiveSemaphore_initialize( );
 *   ER             cReceiveSemaphore_refer( T_RSEM* pk_semaphoreStatus );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tSerialAsyncPortMain_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eSerialPort
 * entry port: eSerialPort
 * signature:  sSerialPort
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSerialPort_open
 * name:         eSerialPort_open
 * global_name:  tSerialAsyncPortMain_eSerialPort_open
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSerialPort_open(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSerialPort_close
 * name:         eSerialPort_close
 * global_name:  tSerialAsyncPortMain_eSerialPort_close
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSerialPort_close(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSerialPort_read
 * name:         eSerialPort_read
 * global_name:  tSerialAsyncPortMain_eSerialPort_read
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eSerialPort_read(CELLIDX idx, char* buffer, uint_t length)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSerialPort_write
 * name:         eSerialPort_write
 * global_name:  tSerialAsyncPortMain_eSerialPort_write
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eSerialPort_write(CELLIDX idx, const char* buffer, uint_t length)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSerialPort_control
 * name:         eSerialPort_control
 * global_name:  tSerialAsyncPortMain_eSerialPort_control
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSerialPort_control(CELLIDX idx, uint_t ioControl)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSerialPort_refer
 * name:         eSerialPort_refer
 * global_name:  tSerialAsyncPortMain_eSerialPort_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSerialPort_refer(CELLIDX idx, T_SERIAL_RPOR* pk_rpor)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# enSerialPortManage
 * entry port: enSerialPortManage
 * signature:  snSerialPortManage
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# enSerialPortManage_getChar
 * name:         enSerialPortManage_getChar
 * global_name:  tSerialAsyncPortMain_enSerialPortManage_getChar
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
enSerialPortManage_getChar(CELLIDX idx, char* p_char)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eSIOCBR
 * entry port: eSIOCBR
 * signature:  sSIOAsyncCBR
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSIOCBR_sizeSend
 * name:         eSIOCBR_sizeSend
 * global_name:  tSerialAsyncPortMain_eSIOCBR_sizeSend
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eSIOCBR_sizeSend(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSIOCBR_popSend
 * name:         eSIOCBR_popSend
 * global_name:  tSerialAsyncPortMain_eSIOCBR_popSend
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eSIOCBR_popSend(CELLIDX idx, char* dst)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSIOCBR_pushReceive
 * name:         eSIOCBR_pushReceive
 * global_name:  tSerialAsyncPortMain_eSIOCBR_pushReceive
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eSIOCBR_pushReceive(CELLIDX idx, char src)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
