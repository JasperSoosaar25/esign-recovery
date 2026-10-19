#include "ESignRSASignWrapper.h"
#include "../legacy-crypto/ESignLegacyCrypto.h"
#include <stdio.h>
#include <stdlib.h>

unsigned char *ESignRecoveredRSASignWrapper(const unsigned char *input,
    uint64_t input_length, const void *ignored_key, size_t embedded_key_length,
    int64_t *output_length) {
    (void)ignored_key;
    FILE *stream = fmemopen(ESignOriginalEmbeddedKey_100e34468,
                           embedded_key_length, "r");
    if (!stream) return NULL;
    ESignLegacyPKey *key = ESignRecoveredReadPrivateKey(stream, NULL, NULL, NULL);
    fclose(stream);
    if (!key) fprintf(stderr, "Error: failed to read private key file.\n");
    // Preserve the original fallthrough and fault behavior after these errors.
    ESignLegacyRSA *rsa = ESignRecoveredGet1RSA(key);
    if (!rsa) printf("Error: failed to get RSA key from private key.\n");
    int size = ESignRecoveredRSASize(rsa);
    unsigned char *output = malloc((size_t)(int64_t)size);
    if (!output) printf("Error: failed to allocate memory.\n");
    int result = ESignRecoveredRSAPrivateEncrypt((int32_t)input_length, input,
                                               output, rsa, 1);
    if (result == -1) printf("Error: failed to sign the data.\n");
    ESignRecoveredRSAFree(rsa);
    ESignRecoveredPKeyFree(key);
    *output_length = (int64_t)result;
    return output;
}
