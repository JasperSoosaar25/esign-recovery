/* Original instruction translations; legacy OpenSSL notices in OPENSSL-LICENSE.txt. */
#include "ESignOIDLookup.h"
#include <string.h>
_Static_assert(sizeof(ESignOIDObject)==40,"Original ASN1_OBJECT ABI");
_Static_assert(offsetof(ESignOIDObject,nid)==16 && offsetof(ESignOIDObject,data)==24 && offsetof(ESignOIDObject,flags)==32,"Original object fields");
_Static_assert(sizeof(ESignOIDAdded)==16 && offsetof(ESignOIDAdded,object)==8,"Original ADDED_OBJ ABI");
_Static_assert(offsetof(ESignOIDHash,num_hash_calls)==96 && offsetof(ESignOIDHash,num_retrieve)==144 && offsetof(ESignOIDHash,error)==168,"Original LHASH ABI");
ESignOIDHash *ESignOriginalOIDAdded;

void *ESignOriginal_100602d34(ESignOIDHash *table,const void *key) {
    table->error=0;
    uint64_t hash=table->hash(key);
    table->num_hash_calls++;
    // AArch64 UDIV returns zero for a zero divisor. Preserve its remainder.
    uint64_t bucket=table->pmax ? hash % table->pmax : hash;
    if(bucket<table->p) bucket=table->num_alloc_nodes ? hash % table->num_alloc_nodes : hash;
    ESignOIDHashNode **slot=table->buckets+(int32_t)(uint32_t)bucket;
    ESignOIDHashNode *node=*slot;
    if(node) {
        int (*compare)(const void *,const void *)=table->compare;
        for(;;) {
            table->num_hash_compares++;
            if(node->hash==hash) {
                table->num_compare_calls++;
                if(compare(node->data,key)==0) break;
            }
            slot=&node->next;
            node=*slot;
            if(!node) break;
        }
    }
    // The original reloads the link after the comparator, which may mutate it.
    if(*slot) { void *result=(*slot)->data; table->num_retrieve++; return result; }
    table->num_retrieve_miss++;
    return NULL;
}

static ESignOIDObject *ByNID(int32_t nid,int function,int static_line,int added_line) {
    if((uint32_t)nid<=957) {
        if(nid && !ESignOriginalOIDObjects[nid].nid) {
            ESignOriginal_100604c0c(8,function,101,"obj_dat.c",static_line);
            return NULL;
        }
        return &ESignOriginalOIDObjects[nid];
    }
    if(!ESignOriginalOIDAdded) return NULL;
    ESignOIDObject object; object.nid=nid;
    ESignOIDAdded key={3,&object};
    ESignOIDAdded *result=ESignOriginal_100602d34(ESignOriginalOIDAdded,&key);
    if(result) return result->object;
    ESignOriginal_100604c0c(8,function,101,"obj_dat.c",added_line);
    return NULL;
}
ESignOIDObject *ESignOriginal_1005b2eac(int32_t nid) { return ByNID(nid,103,319,333); }
const char *ESignOriginal_1005b2f80(int32_t nid) { ESignOIDObject *o=ByNID(nid,104,346,360);return o?o->short_name:NULL; }
const char *ESignOriginal_1005b305c(int32_t nid) { ESignOIDObject *o=ByNID(nid,102,373,387);return o?o->long_name:NULL; }

int ESignOriginal_1005b3138(const void *pointer) {
    const ESignOIDObject *object=pointer;
    if(!object) return 0;
    if(object->nid) return object->nid;
    int32_t length=object->length;
    if(!length) return 0;
    if(ESignOriginalOIDAdded) {
        ESignOIDAdded key={0,(ESignOIDObject *)object};
        ESignOIDAdded *result=ESignOriginal_100602d34(ESignOriginalOIDAdded,&key);
        if(result) return result->object->nid;
        length=object->length;
    }
    int32_t low=0,high=890;
    while(low<high) {
        int32_t mid=(low+high)/2;
        const ESignOIDObject *candidate=&ESignOriginalOIDObjects[ESignOriginalOIDSearch[mid]];
        // SUBS W truncation precedes the signed comparison in the original.
        int32_t comparison=(int32_t)((uint32_t)length-(uint32_t)candidate->length);
        if(!comparison && length) comparison=memcmp(object->data,candidate->data,(size_t)(int64_t)length);
        if(comparison<0) high=mid;
        else if(comparison>0) low=mid+1;
        else return candidate->nid;
    }
    return 0;
}
