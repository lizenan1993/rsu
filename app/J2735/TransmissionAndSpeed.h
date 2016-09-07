/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_WXW.ASN"
 */

#ifndef	_TransmissionAndSpeed_H_
#define	_TransmissionAndSpeed_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransmissionState.h"
#include "Velocity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TransmissionAndSpeed */
typedef struct TransmissionAndSpeed {
	TransmissionState_t	 transmisson;
	Velocity_t	 speed;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TransmissionAndSpeed_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransmissionAndSpeed;

#ifdef __cplusplus
}
#endif

#endif	/* _TransmissionAndSpeed_H_ */
#include <asn_internal.h>