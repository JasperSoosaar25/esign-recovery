#pragma once
#include <stdint.h>
#include <stddef.h>
// Original LP64 ASN1_OBJECT layout, including the original 32-bit fields.
typedef struct ESignOIDObject {
    const char *short_name, *long_name;
    int32_t nid, length;
    const unsigned char *data;
    int32_t flags;
} ESignOIDObject;
typedef struct ESignOIDAdded { int32_t type; ESignOIDObject *object; } ESignOIDAdded;
typedef struct ESignOIDHashNode {
    void *data; struct ESignOIDHashNode *next; uint64_t hash;
} ESignOIDHashNode;
// Accessed LHASH layout, not a declaration of an implemented hash-table factory.
typedef struct ESignOIDHash {
    ESignOIDHashNode **buckets;
    int (*compare)(const void *, const void *);
    uint64_t (*hash)(const void *);
    uint32_t num_nodes, num_alloc_nodes, p, pmax;
    uint64_t up_load, down_load, num_items, num_expands, num_expand_reallocs,
        num_contracts, num_contract_reallocs, num_hash_calls, num_compare_calls,
        num_insert, num_replace, num_delete, num_no_delete, num_retrieve,
        num_retrieve_miss, num_hash_compares;
    int32_t error;
} ESignOIDHash;
// Relocated original static objects at 0x100b0f140, and original zero-initialized
// added-object registry slot at 0x100e93430. Registry creation is not recovered.
extern ESignOIDObject ESignOriginalOIDObjects[958];
extern ESignOIDHash *ESignOriginalOIDAdded;
extern const uint32_t ESignOriginalOIDSearch[890];
ESignOIDObject *ESignOriginal_1005b2eac(int32_t nid);
const char *ESignOriginal_1005b2f80(int32_t nid);
const char *ESignOriginal_1005b305c(int32_t nid);
int ESignOriginal_1005b3138(const void *object);
void *ESignOriginal_100602d34(ESignOIDHash *table, const void *key);
// Original ERR dependency remains external; no invented error backend.
void ESignOriginal_100604c0c(int library,int function,int reason,const char *file,int line);
