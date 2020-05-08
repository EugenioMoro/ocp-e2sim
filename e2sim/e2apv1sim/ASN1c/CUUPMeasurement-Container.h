/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/home/rshacham/e2sm_kpm_approved.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_CUUPMeasurement_Container_H_
#define	_CUUPMeasurement_Container_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PlmnID_List;

/* CUUPMeasurement-Container */
typedef struct CUUPMeasurement_Container {
	struct CUUPMeasurement_Container__plmnList {
		A_SEQUENCE_OF(struct PlmnID_List) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} plmnList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CUUPMeasurement_Container_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CUUPMeasurement_Container;
extern asn_SEQUENCE_specifics_t asn_SPC_CUUPMeasurement_Container_specs_1;
extern asn_TYPE_member_t asn_MBR_CUUPMeasurement_Container_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PlmnID-List.h"

#endif	/* _CUUPMeasurement_Container_H_ */
#include <asn_internal.h>
