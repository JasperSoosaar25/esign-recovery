// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c0b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADZipImplodeHandle : XADFastLZSSHandle
// ivar literalcode encoding=@"XADPrefixCode" offset=120
// ivar lengthcode encoding=@"XADPrefixCode" offset=128
// ivar offsetcode encoding=@"XADPrefixCode" offset=136
// ivar offsetbits encoding=i offset=144
// ivar literals encoding=B offset=148
// IMP 0x100888f48 | @40@0:8@16q24B32B36
- (id)initWithHandle:(id)arg0 length:(long long)arg1 largeDictionary:(BOOL)arg2 hasLiterals:(BOOL)arg3;
// IMP 0x100888fe8 | v16@0:8
- (void)dealloc;
// IMP 0x100889058 | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x100889114 | @20@0:8i16
- (id)allocAndParseCodeOfSize:(int)arg0;
// IMP 0x100889368 | v24@0:8q16
- (void)expandFromPosition:(long long)arg0;
@end
