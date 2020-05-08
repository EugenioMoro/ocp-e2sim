/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/home/rshacham/e2sm_kpm_approved.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PF_ContainerListItem_H_
#define	_PF_ContainerListItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NI-Type.h"
#include "CUUPMeasurement-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PF-ContainerListItem */
typedef struct PF_ContainerListItem {
	NI_Type_t	 interface_type;
	CUUPMeasurement_Container_t	 o_CU_UP_PM_Container;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PF_ContainerListItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PF_ContainerListItem;
extern asn_SEQUENCE_specifics_t asn_SPC_PF_ContainerListItem_specs_1;
extern asn_TYPE_member_t asn_MBR_PF_ContainerListItem_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PF_ContainerListItem_H_ */
#include <asn_internal.h>
