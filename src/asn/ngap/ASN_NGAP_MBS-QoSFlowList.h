/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_MBS_QoSFlowList_H_
#define	_ASN_NGAP_MBS_QoSFlowList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_QosFlowIdentifier.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ASN_NGAP_MBS-QoSFlowList */
typedef struct ASN_NGAP_MBS_QoSFlowList {
	A_SEQUENCE_OF(ASN_NGAP_QosFlowIdentifier_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_MBS_QoSFlowList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_MBS_QoSFlowList;
extern asn_SET_OF_specifics_t asn_SPC_ASN_NGAP_MBS_QoSFlowList_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_MBS_QoSFlowList_1[1];
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_MBS_QoSFlowList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_MBS_QoSFlowList_H_ */
#include <asn_internal.h>
