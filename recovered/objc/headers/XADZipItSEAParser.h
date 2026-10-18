// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c268
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADZipItSEAParser : XADZipParser
// IMP 0x10088d6b8 | @16@0:8
- (id)formatName;
// IMP 0x10088d648 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x10088d650 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
