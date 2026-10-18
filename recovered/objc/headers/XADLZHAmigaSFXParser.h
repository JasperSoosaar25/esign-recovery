// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e310
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADLZHAmigaSFXParser : XADLZHParser
// ivar lha150r encoding=B offset=192
// IMP 0x1008c5b70 | v16@0:8
- (void)parse;
// IMP 0x1008c5c1c | @24@0:8@16
- (id)handleAtDataOffsetForDictionary:(id)arg0;
// IMP 0x1008c5cc4 | @16@0:8
- (id)formatName;
// IMP 0x1008c5b00 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008c5b08 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
