// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0228
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADARCSFXParser : XADARCParser
// IMP 0x1008fea54 | v16@0:8
- (void)parse;
// IMP 0x1008feae8 | @16@0:8
- (id)formatName;
// IMP 0x1008fe8ec | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008fe8f4 | B48@0:8@16@24@32@40
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2 propertiesToAdd:(id)arg3;
@end
