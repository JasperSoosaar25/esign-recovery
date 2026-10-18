// Reviewed reconstruction of original ARM64 methods. See evidence/index for
// addresses, tests, initial-pointer assumptions, and remaining app limitations.
#import "ESignSignatureBlobs.h"

static uint32_t ReadBE32(uint32_t value) { return __builtin_bswap32(value); }
static uint32_t FourReadSwap(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    return (a >> 24) | ((b >> 8) & 0xff00) | ((c << 8) & 0xff0000) | (d << 24);
}

@implementation YYYBlob
@synthesize magic = _magic, data = _data, entitlements = _entitlements;

// +0x100771f6c. Factories use the original concrete class, not dynamic self.
+ (id)blobWithMagic:(uint32_t)magic data:(id)data {
    YYYBlob *result = [YYYBlob new];
    result.magic = magic;
    result.data = data;
    return result;
}
// +0x100772048. The original ignores the header's declared length and retains
// every byte after the eight-byte header. Preserve that behavior here.
+ (id)blobWithdata:(id)data {
    if (!data || [data length] < 8) return nil;
    YYYBlob *result = [YYYBlob new];
    ESignBlobHeader header;
    [data getBytes:&header range:NSMakeRange(0, 8)];
    result.magic = ReadBE32(header.magic);
    NSRange range = NSMakeRange(8, [data length] - 8);
    if (NSMaxRange(range) <= [data length]) {
        result.data = [data subdataWithRange:NSMakeRange(8, [data length] - 8)];
        if (result.magic == 0xfade7171) {
            result.entitlements = [NSPropertyListSerialization propertyListWithData:result.data
                options:0 format:NULL error:NULL];
        }
    }
    return result;
}
// -0x1007724e4. Four getter evaluations per word occur in the original macro.
- (ESignBlobHeader)blob {
    uint32_t a = self.magic, b = self.magic, c = self.magic, d = self.magic;
    uint32_t e = self.length, f = self.length, g = self.length, h = self.length;
    return (ESignBlobHeader){FourReadSwap(a,b,c,d), FourReadSwap(e,f,g,h)};
}
// -0x10077261c. Original arithmetic truncates to 32 bits.
- (uint32_t)length { return (uint32_t)(self.data.length + 8); }
// -0x1007726b8.
- (id)blobData {
    NSMutableData *result = [NSMutableData data];
    ESignBlobHeader header = self.blob;
    [result appendBytes:&header length:8];
    [result appendData:self.data];
    return result;
}
@end

@implementation YYYBlobIndex
@synthesize type = _type, offset = _offset, blob = _blob, data = _data;
// +0x100772938.
+ (id)blobIndexWithType:(uint32_t)type data:(id)data {
    YYYBlobIndex *result = [YYYBlobIndex new];
    result.type = type;
    result.data = data;
    return result;
}
// +0x1007729a8. Data is captured at creation, not recomputed from blob later.
+ (id)blobIndexWithType:(uint32_t)type blob:(id)blob {
    YYYBlobIndex *result = [YYYBlobIndex new];
    result.type = type;
    result.blob = blob;
    result.data = [blob blobData];
    return result;
}
// -0x100772a60.
- (ESignBlobIndexHeader)blobIndex {
    uint32_t a = self.type, b = self.type, c = self.type, d = self.type;
    uint32_t e = self.offset, f = self.offset, g = self.offset, h = self.offset;
    return (ESignBlobIndexHeader){FourReadSwap(a,b,c,d), FourReadSwap(e,f,g,h)};
}
@end

@implementation YYYSuperBlob
@synthesize magic = _magic, blobs = _blobs;
// -0x100772dd4.
- (id)init {
    self = [super init];
    if (self) {
        _magic = 0xfade0cc0;
        self.blobs = [NSMutableArray array];
    }
    return self;
}
// +0x100772f38.
+ (id)superBlobWithMagic:(uint32_t)magic {
    YYYSuperBlob *result = [YYYSuperBlob new];
    result.magic = magic;
    return result;
}
// +0x100772ff8. Declared total and child lengths are not parsing bounds in
// the original. Adjacent slot offsets and actual input length delimit children.
+ (id)superBlobWithSuperBlobData:(id)data {
    ESignSuperBlobHeader header;
    [data getBytes:&header length:12];
    YYYSuperBlob *result = [YYYSuperBlob new];
    if (result.magic != ReadBE32(header.magic)) return nil;
    uint32_t count = ReadBE32(header.count);
    int32_t position = 12;
    for (uint32_t i = 0; i < count; i++) {
        NSRange range = NSMakeRange((NSUInteger)(int64_t)position, 8);
        if (NSMaxRange(range) > [data length]) return nil;
        ESignBlobIndexHeader indexHeader;
        [data getBytes:&indexHeader range:range];
        YYYBlobIndex *index = [YYYBlobIndex new];
        index.type = ReadBE32(indexHeader.type);
        index.offset = ReadBE32(indexHeader.offset);
        [result.blobs addObject:index];
        position = (int32_t)((uint32_t)position + 8);
    }
    for (uint32_t i = 0; i < count; i++) {
        YYYBlobIndex *index = result.blobs[i];
        uint32_t start = index.offset;
        uint32_t end = i + 1 < count ? [result.blobs[i + 1] offset] : (uint32_t)[data length];
        NSRange range = NSMakeRange(start, (uint32_t)(end - start));
        if (NSMaxRange(range) <= [data length]) {
            index.data = [data subdataWithRange:range];
            index.blob = [YYYBlob blobWithdata:index.data];
        }
    }
    return result;
}
// -0x1007737d0.
- (void)setupBlobIndexsOffset {
    uint32_t offset = self.count * 8 + 12;
    for (YYYBlobIndex *index in self.blobs) {
        index.offset = offset;
        offset += (uint32_t)index.data.length;
    }
}
// -0x100773a6c.
- (void)addBlobIndex:(id)index {
    [self.blobs addObject:index];
    [self setupBlobIndexsOffset];
}
// -0x100773b58.
- (uint32_t)count { return (uint32_t)self.blobs.count; }
// -0x100773be8. The first count result is discarded by the original code.
- (uint32_t)length {
    (void)self.count;
    uint32_t total = self.count * 8 + 12;
    for (YYYBlobIndex *index in self.blobs) total += (uint32_t)index.data.length;
    return total;
}
// -0x100773ea0.
- (ESignSuperBlobHeader)superBlob {
    uint32_t a = self.magic, b = self.magic, c = self.magic, d = self.magic;
    uint32_t e = self.length, f = self.length, g = self.length, h = self.length;
    uint32_t i = self.count, j = self.count, k = self.count, l = self.count;
    ESignSuperBlobHeader header;
    header.magic = FourReadSwap(a,b,c,d);
    header.length = FourReadSwap(e,f,g,h);
    header.count = FourReadSwap(i,j,k,l);
    return header;
}
// -0x100774068.
- (id)superBlobData {
    [self setupBlobIndexsOffset];
    NSMutableData *result = [NSMutableData data];
    ESignSuperBlobHeader header = self.superBlob;
    [result appendBytes:&header length:12];
    for (YYYBlobIndex *index in self.blobs) {
        ESignBlobIndexHeader value = index.blobIndex;
        [result appendBytes:&value length:8];
    }
    for (YYYBlobIndex *index in self.blobs) [result appendData:index.data];
    return result;
}
@end
