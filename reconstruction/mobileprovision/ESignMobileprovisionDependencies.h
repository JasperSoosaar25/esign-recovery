#pragma once
#import <Foundation/Foundation.h>
#include <stdint.h>
// Accessed original ASN1_STRING prefix, not a complete declaration.
typedef struct { int32_t length, type; unsigned char *data; } ESignProfileASN1String;
// Exact native dependencies. No fallback decoder or app backend is supplied.
void *ESignOriginal_1005ffa5c(void);
void *ESignOriginal_1005fedf0(const void *method);
int ESignOriginal_1005ff090(void *bio,const void *data,int length);
void *ESignOriginal_10062fb30(void *bio,void **output);
ESignProfileASN1String **ESignOriginal_10062edd8(void *cms);
// Restricted metadata-derived declaration of the unresolved original class.
// A future integrated target must use the recovered YYYP12 declaration once.
@interface YYYP12 : NSObject
- (id)initWithCertificateData:(id)data;
- (id)serialNumber;
@end
