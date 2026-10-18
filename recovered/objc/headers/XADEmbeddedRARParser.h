// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c880
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADEmbeddedRARParser : XADRARParser
// IMP 0x10089833c | v16@0:8
- (void)parse;
// IMP 0x1008983cc | @16@0:8
- (id)formatName;
// IMP 0x100898084 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x10089808c | B48@0:8@16@24@32@40
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2 propertiesToAdd:(id)arg3;
// IMP 0x100898184 | @40@0:8@16@24@32
+ (id)volumesForHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
