#pragma once
#include <stdint.h>
#include <stddef.h>
// Accessed original ASN1_STRING prefix. No complete declaration is claimed.
typedef struct ESignCMSASN1String { int32_t length,type; unsigned char *data; } ESignCMSASN1String;
// Original CMS_get0_content at 0x10062edd8. Returns a live field address.
ESignCMSASN1String **ESignOriginal_10062edd8(void *cms);
// Unreconstructed original OID lookup and ERR dependencies.
int ESignOriginal_1005b3138(const void *object);
void ESignOriginal_100604c0c(int library,int function,int reason,const char *file,int line);
