/*
 *  SignFile.h
 *  CreateFile
 *
 *  Created by Кондакова Татьяна Андреевна on 10.12.10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */
#import <CPROCSP/CPROCSP.h>
#import "stdlib.h"
#import "stdio.h"
#define MY_ENCODING_TYPE  (PKCS_7_ASN_ENCODING | X509_ASN_ENCODING)
#define TYPE_DER  (PKCS_7_ASN_ENCODING | X509_ASN_ENCODING)

#ifdef __cplusplus
extern "C" {
#endif

DWORD get_reader_certs(PCCERT_CONTEXT** certs, size_t* count);
DWORD get_store_certs(PCCERT_CONTEXT** certs, size_t* count);
DWORD do_low_sign(const char* pin, const uint8_t* msg, size_t msg_size, const PCCERT_CONTEXT context, const char* tsp, char** signature);
DWORD do_low_verify(const char* signature, DWORD* verificationStatus);

#ifdef __cplusplus
}
#endif
