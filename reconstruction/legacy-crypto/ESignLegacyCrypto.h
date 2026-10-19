#pragma once
// Original-instruction translations. New navigation symbols; no complete
// OpenSSL release identity or working signing backend is claimed here.
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
typedef struct ESignLegacyBN ESignLegacyBN;
typedef struct ESignLegacyRSA ESignLegacyRSA;
typedef struct ESignLegacyPKey ESignLegacyPKey;
typedef int (*ESignLegacyPrivateEncrypt)(int,const unsigned char *,unsigned char *,ESignLegacyRSA *,int);
typedef struct {
    void *name, *pub_enc, *pub_dec;
    ESignLegacyPrivateEncrypt private_encrypt;
    void *priv_dec, *mod_exp, *bn_mod_exp, *init;
    int (*finish)(ESignLegacyRSA *);
} ESignLegacyRSAMethodPrefix;
struct ESignLegacyBN {
    uint32_t *limbs;
    int32_t top, capacity, negative, flags;
};
struct ESignLegacyRSA {
    uint8_t opaque_prefix[16];
    ESignLegacyRSAMethodPrefix *method;
    void *engine;
    ESignLegacyBN *n, *e, *d, *p, *q, *dmp1, *dmq1, *iqmp;
    uint8_t ex_data[16];
    int32_t references, flags;
    void *mont_n, *mont_p, *mont_q, *bignum_data, *blinding, *mt_blinding;
};
typedef struct {
    uint8_t opaque_prefix[160];
    void (*pkey_free)(ESignLegacyPKey *);
} ESignLegacyASN1MethodPrefix;
struct ESignLegacyPKey {
    int32_t type, saved_type, references;
    ESignLegacyASN1MethodPrefix *method;
    void *engine;
    union { void *pointer; ESignLegacyRSA *rsa; } key;
    int32_t save_parameters;
    void *attributes;
};
// These are accessed prefixes, not claims to complete original declarations.
int ESignRecoveredBNBits(const ESignLegacyBN *number);
int ESignRecoveredRSASize(const ESignLegacyRSA *rsa);
int ESignRecoveredRSAUpRef(ESignLegacyRSA *rsa);
ESignLegacyRSA *ESignRecoveredGet1RSA(ESignLegacyPKey *key);
int ESignRecoveredRSAPrivateEncrypt(int length,const unsigned char *input,unsigned char *output,ESignLegacyRSA *rsa,int padding);
void ESignRecoveredRSAFree(ESignLegacyRSA *rsa);
void ESignRecoveredPKeyFree(ESignLegacyPKey *key);
ESignLegacyPKey *ESignRecoveredReadPrivateKey(FILE *stream,ESignLegacyPKey **output,void *password_callback,void *password_data);
