// Reviewed reconstruction of all 17 original YYYOffsetNode/YYYMachHeader methods.
// Entry addresses and ABI encodings are recorded in metadata.json/evidence.json.gz.
#import "ESignMachHeader.h"
#include <stdint.h>

@implementation YYYOffsetNode
@synthesize offset = _offset, shouldSwap = _shouldSwap;
- (id)init {
    self = [super init];
    if (self) { _offset = 0; _shouldSwap = NO; }
    return self;
}
@end

@implementation YYYMachHeader
@synthesize machHeader = _machHeader, machHeader64 = _machHeader64;
@dynamic ncmds, sizeofcmds;
- (unsigned int)magic {
    if (self.machHeader) return self.machHeader->magic;
    return self.machHeader64->magic;
}
- (unsigned int)filetype {
    if (self.machHeader) return self.machHeader->filetype;
    return self.machHeader64->filetype;
}
- (unsigned int)ncmds {
    if (self.machHeader) return self.machHeader->ncmds;
    return self.machHeader64->ncmds;
}
- (void)setNcmds:(unsigned int)value {
    if (self.machHeader) self.machHeader->ncmds = value;
    else self.machHeader64->ncmds = value;
}
- (unsigned int)sizeofcmds {
    if (self.machHeader) return self.machHeader->sizeofcmds;
    return self.machHeader64->sizeofcmds;
}
- (void)setSizeofcmds:(unsigned int)value {
    if (self.machHeader) self.machHeader->sizeofcmds = value;
    else self.machHeader64->sizeofcmds = value;
}
- (long long)load_commands_offset {
    // Original ARM64 ADD wraps at 64 bits, including signed boundary offsets.
    return (long long)((uint64_t)self.offset + self.header_size);
}
- (unsigned int)header_size {
    return self.machHeader ? 28 : 32;
}
@end
