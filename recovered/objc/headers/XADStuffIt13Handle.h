// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d370
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffIt13Handle : XADLZSSHandle
// ivar firstcode encoding=@"XADPrefixCode" offset=304
// ivar secondcode encoding=@"XADPrefixCode" offset=312
// ivar offsetcode encoding=@"XADPrefixCode" offset=320
// ivar currcode encoding=@"XADPrefixCode" offset=328
// IMP 0x1008a998c | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008a99ec | v16@0:8
- (void)dealloc;
// IMP 0x1008a9a5c | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x1008a9cf8 | @28@0:8i16@20
- (id)allocAndParseCodeOfSize:(int)arg0 metaCode:(id)arg1;
// IMP 0x1008a9e98 | i40@0:8^i16^i24q32
- (int)nextLiteralOrOffset:(int *)arg0 andLength:(int *)arg1 atPosition:(long long)arg2;
@end
