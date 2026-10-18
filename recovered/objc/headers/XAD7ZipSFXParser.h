// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9cc90
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XAD7ZipSFXParser : XAD7ZipParser
// IMP 0x1008a0090 | v16@0:8
- (void)parse;
// IMP 0x1008a0120 | @16@0:8
- (id)formatName;
// IMP 0x10089ff9c | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x10089ffa4 | B48@0:8@16@24@32@40
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2 propertiesToAdd:(id)arg3;
@end
