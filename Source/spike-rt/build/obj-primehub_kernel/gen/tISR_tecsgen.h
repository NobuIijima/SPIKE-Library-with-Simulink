/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#ifndef tISR_TECSGEN_H
#define tISR_TECSGEN_H

/*
 * celltype          :  tISR
 * global name       :  tISR
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  yes
 */

/* global header #_IGH_# */
#include "global_tecsgen.h"

/* signature header #_ISH_# */
#include "siHandlerBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* cell INIB type definition #_CIP_# */
typedef const struct tag_tISR_INIB {
    /* call port #_TCP_# */
    /* attribute(RO) #_ATO_# */ 
    ID             id;
}  tISR_INIB;

/* CB not exist. CB corresponding to INIB #_DCI_# */
#define tISR_CB_tab           tISR_INIB_tab
#define tISR_CB               tISR_INIB
#define tag_tISR_CB           tag_tISR_INIB

/* singleton cell CB prototype declaration #_MCPB_# */
extern tISR_INIB  tISR_INIB_tab[];

/* celltype IDX type #_CTIX_# */
typedef const struct tag_tISR_INIB *tISR_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* to get the definition of CB type of referenced celltype for optimization #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tISR_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tUsart_tecsgen.h"
#ifdef  tISR_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tISR_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tISR_ID_BASE                (1)  /* ID Base  #_NIDB_# */
#define tISR_N_CELL                 (1)  /*  number of cells  #_NCEL_# */

/* IDX validation macro #_CVI_# */
#define tISR_VALID_IDX(IDX) (1)


/* celll CB macro #_GCB_# */
#define tISR_GET_CELLCB(idx) (idx)

/* attr access  #_AAM_# */
#define tISR_ATTR_id( p_that )	((p_that)->id)

#define tISR_GET_id(p_that) 	((p_that)->id)



#ifndef TECSFLOW
 /* call port function macro #_CPM_# */
#define tISR_ciISRBody_main( p_that ) \
	  tUsart_eiISR_main( \
	   &tUsart_INIB_tab[0] )

#else  /* TECSFLOW */
#define tISR_ciISRBody_main( p_that ) \
	  (p_that)->ciISRBody.main__T( \
 )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX validation macro (abbrev.) #_CVIA_# */
#define VALID_IDX(IDX)  tISR_VALID_IDX(IDX)


/* cell CB macro (abbrev) #_GCBA_# */
#define GET_CELLCB(idx)  tISR_GET_CELLCB(idx)

/* CELLCB type (abbrev) #_CCT_# */
#define CELLCB	tISR_CB

/* celltype IDX type (abbrev) #_CTIXA_# */
#define CELLIDX	tISR_IDX


/* attr access macro (abbrev) #_AAMA_# */
#define ATTR_id              tISR_ATTR_id( p_cellcb )


/* call port function macro (abbrev) #_CPMA_# */
#define ciISRBody_main( ) \
          ((void)p_cellcb, tISR_ciISRBody_main( p_cellcb ))



/* iteration code (FOREACH_CELL) #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tISR_N_CELL; (i)++ ){ \
       (p_cb) = &tISR_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB initialize macro #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tISR_TECSGENH */
