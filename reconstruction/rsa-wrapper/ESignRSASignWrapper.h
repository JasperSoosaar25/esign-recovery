#pragma once
#include <stdint.h>
#include <stddef.h>

// Original 0x100778fa0. Navigation name assigned during reconstruction.
// The third argument is ignored by the original implementation.
unsigned char *ESignRecoveredRSASignWrapper(const unsigned char *input,
    uint64_t input_length, const void *ignored_key, size_t embedded_key_length,
    int64_t *output_length);

// Original address identity only. No embedded private-key bytes are supplied.
// This unresolved provider must not be replaced by a test key in an app build.
extern unsigned char ESignOriginalEmbeddedKey_100e34468[];
