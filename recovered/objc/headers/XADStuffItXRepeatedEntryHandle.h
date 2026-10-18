// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d7f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItXRepeatedEntryHandle : XADMemoryHandle
// ivar haschecksum encoding=B offset=48
// ivar ischecksumcorrect encoding=B offset=49
// IMP 0x1008b3100 | @32@0:8@16B24B28
- (id)initWithData:(id)arg0 hasChecksum:(BOOL)arg1 isChecksumCorrect:(BOOL)arg2;
// IMP 0x1008b3160 | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008b3170 | B16@0:8
- (BOOL)isChecksumCorrect;
@end
