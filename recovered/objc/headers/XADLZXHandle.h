// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9dcf8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADLZXHandle : XADLZSSHandle
// ivar maincode encoding=@"XADPrefixCode" offset=304
// ivar offsetcode encoding=@"XADPrefixCode" offset=312
// ivar blocktype encoding=i offset=320
// ivar lastoffs encoding=i offset=324
// ivar blockend encoding=q offset=328
// ivar mainlengths encoding=[768i] offset=336
// IMP 0x1008bb224 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008bb2bc | v16@0:8
- (void)dealloc;
// IMP 0x1008bb31c | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x1008bb35c | i40@0:8^i16^i24q32
- (int)nextLiteralOrOffset:(int *)arg0 andLength:(int *)arg1 atPosition:(long long)arg2;
// IMP 0x1008bb4ac | v24@0:8q16
- (void)readBlockHeaderAtPosition:(long long)arg0;
// IMP 0x1008bb6bc | v32@0:8^i16i24B28
- (void)readDeltaLengths:(int *)arg0 count:(int)arg1 alternateMode:(BOOL)arg2;
@end
