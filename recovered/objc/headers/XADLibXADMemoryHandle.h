// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e838
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADLibXADMemoryHandle : XADMemoryHandle
// ivar success encoding=B offset=48
// IMP 0x1008d8d14 | @28@0:8@16B24
- (id)initWithData:(id)arg0 successfullyExtracted:(BOOL)arg1;
// IMP 0x1008d8d64 | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008d8d6c | B16@0:8
- (BOOL)isChecksumCorrect;
@end
