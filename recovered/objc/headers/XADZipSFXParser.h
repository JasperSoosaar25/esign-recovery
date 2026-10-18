// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c1c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADZipSFXParser : XADZipParser
// IMP 0x10088d51c | @16@0:8
- (id)formatName;
// IMP 0x10088d3e0 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x10088d3e8 | B48@0:8@16@24@32@40
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2 propertiesToAdd:(id)arg3;
@end
