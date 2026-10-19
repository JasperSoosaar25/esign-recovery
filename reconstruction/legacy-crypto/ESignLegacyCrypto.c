// Selected native bodies recovered from ESign 5.0.2. OpenSSL 1.0.2 reference
// provenance and original ownership boundaries are documented in README.md.
#include "ESignLegacyCryptoDependencies.h"
#include <string.h>
_Static_assert(sizeof(void *)==8,"Original LP64 pointer layout required");
_Static_assert(offsetof(ESignLegacyBN,flags)==20,"BN flags offset");
_Static_assert(offsetof(ESignLegacyRSA,method)==16,"RSA method offset");
_Static_assert(offsetof(ESignLegacyRSA,n)==32,"RSA modulus offset");
_Static_assert(offsetof(ESignLegacyRSA,ex_data)==96,"RSA ex-data offset");
_Static_assert(offsetof(ESignLegacyRSA,references)==112,"RSA reference offset");
_Static_assert(offsetof(ESignLegacyRSA,bignum_data)==144,"RSA bignum-data offset");
_Static_assert(offsetof(ESignLegacyRSA,mt_blinding)==160,"RSA blinding offset");
_Static_assert(offsetof(ESignLegacyRSAMethodPrefix,private_encrypt)==24,"RSA callback offset");
_Static_assert(offsetof(ESignLegacyRSAMethodPrefix,finish)==64,"RSA finish offset");
_Static_assert(offsetof(ESignLegacyPKey,references)==8,"PKey reference offset");
_Static_assert(offsetof(ESignLegacyPKey,method)==16,"PKey method offset");
_Static_assert(offsetof(ESignLegacyPKey,key)==32,"PKey payload offset");
_Static_assert(offsetof(ESignLegacyPKey,attributes)==48,"PKey attributes offset");
_Static_assert(offsetof(ESignLegacyASN1MethodPrefix,pkey_free)==160,"PKey free callback offset");

static int32_t signed32(uint32_t value){int32_t result;memcpy(&result,&value,4);return result;}
static unsigned wordBits(uint32_t value){
    unsigned bits=value!=0;
    for(unsigned shift=16;shift>=2;shift>>=1){
        uint32_t upper=value>>shift,mask=0u-((0u-upper)>>31);
        bits|=shift&mask;
        value=(value&~mask)|(upper&mask);
    }
    return bits+((0u-(value>>1))>>31);
}
// Original 0x1005d16a0. The allocation-capacity path reads ALL capacity limbs.
// Branchless source arithmetic is retained; compiled timing is not established.
int ESignRecoveredBNBits(const ESignLegacyBN *number){
    uint32_t top=(uint32_t)number->top,index=top-1;
    if((uint32_t)number->flags&4){
        uint32_t past=0,result=0;
        for(int64_t j=0;j<number->capacity;j++){
            uint32_t mask=0u-((((index^(uint32_t)j)-1)&(top+0x7fffffffu))>>31);
            past|=mask;
            result+=32u&~past;
            result+=wordBits(number->limbs[j])&mask;
        }
        uint32_t zeroMask=0u-(((0x80000000u-top)&~top)>>31);
        return signed32(result&~zeroMask);
    }
    if(!top)return 0;
    return signed32((index<<5)+wordBits(number->limbs[signed32(index)]));
}
// Original 0x1005f50f8; preserve 32-bit addition and signed division truncation.
int ESignRecoveredRSASize(const ESignLegacyRSA *rsa){
    uint32_t bits=(uint32_t)ESignRecoveredBNBits(rsa->n);
    return signed32(bits+7)/8;
}
// Original 0x1005efa0c.
int ESignRecoveredRSAUpRef(ESignLegacyRSA *rsa){
    return ESignOriginal_1005b1044(&rsa->references,1,9,"rsa_lib.c",265)>1;
}
// Original 0x10060c848. A null key is not a guarded original input.
ESignLegacyRSA *ESignRecoveredGet1RSA(ESignLegacyPKey *key){
    if(key->type!=6){
        ESignOriginal_100604c0c(6,121,127,"p_lib.c",287);
        return NULL;
    }
    ESignRecoveredRSAUpRef(key->key.rsa);
    return key->key.rsa;
}
// Original 0x1005f512c: tail dispatch through the original method pointer.
int ESignRecoveredRSAPrivateEncrypt(int length,const unsigned char *input,unsigned char *output,ESignLegacyRSA *rsa,int padding){
    return rsa->method->private_encrypt(length,input,output,rsa,padding);
}
// Original 0x1005ef908, including cleanup order and the negative-refcount path.
void ESignRecoveredRSAFree(ESignLegacyRSA *rsa){
    if(!rsa)return;
    if(ESignOriginal_1005b1044(&rsa->references,-1,9,"rsa_lib.c",216)>0)return;
    if(rsa->method->finish)rsa->method->finish(rsa);
    if(rsa->engine)ESignOriginal_1005fe060(rsa->engine);
    ESignOriginal_1005b1c68(6,rsa,rsa->ex_data);
    if(rsa->n)ESignOriginal_1005d1864(rsa->n);
    if(rsa->e)ESignOriginal_1005d1864(rsa->e);
    if(rsa->d)ESignOriginal_1005d1864(rsa->d);
    if(rsa->p)ESignOriginal_1005d1864(rsa->p);
    if(rsa->q)ESignOriginal_1005d1864(rsa->q);
    if(rsa->dmp1)ESignOriginal_1005d1864(rsa->dmp1);
    if(rsa->dmq1)ESignOriginal_1005d1864(rsa->dmq1);
    if(rsa->iqmp)ESignOriginal_1005d1864(rsa->iqmp);
    if(rsa->blinding)ESignOriginal_1005d60e4(rsa->blinding);
    if(rsa->mt_blinding)ESignOriginal_1005d60e4(rsa->mt_blinding);
    if(rsa->bignum_data)ESignOriginal_1005b1170(rsa->bignum_data);
    ESignOriginal_1005b1658(rsa);
}
// Original 0x10060c954. Callback-driven payload cleanup remains a dependency.
void ESignRecoveredPKeyFree(ESignLegacyPKey *key){
    if(!key)return;
    if(ESignOriginal_1005b1044(&key->references,-1,10,"p_lib.c",391)>0)return;
    if(key->method&&key->method->pkey_free){
        key->method->pkey_free(key);
        key->key.pointer=NULL;
    }
    if(key->engine){ESignOriginal_1005fe060(key->engine);key->engine=NULL;}
    if(key->attributes)ESignOriginal_10060258c(key->attributes,ESignOriginal_100615740);
    ESignOriginal_1005b1658(key);
}
// Original 0x10061f094. BIO and PEM parser bodies are not supplied here.
ESignLegacyPKey *ESignRecoveredReadPrivateKey(FILE *stream,ESignLegacyPKey **output,void *password_callback,void *password_data){
    void *bio=ESignOriginal_1005fedf0(ESignOriginal_1006000d8());
    if(!bio){ESignOriginal_100604c0c(9,124,7,"pem_pkey.c",222);return NULL;}
    ESignOriginal_1005ff4e0(bio,106,0,stream);
    ESignLegacyPKey *key=ESignOriginal_10061ee4c(bio,output,password_callback,password_data);
    ESignOriginal_1005feebc(bio);
    return key;
}
