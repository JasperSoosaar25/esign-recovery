#pragma once
#include "../asn1-object/ESignASN1Object.h"
typedef struct ESignASN1Stack {
    int32_t count; void **data; int32_t sorted,capacity; void *compare;
} ESignASN1Stack;
typedef struct ESignASN1DecodedObject {
    const char *short_name,*long_name; int32_t nid,length;
    unsigned char *data; int32_t flags;
} ESignASN1DecodedObject;
/* The original entry points are declared by the preceding components. */
