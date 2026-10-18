// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c218
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADWinZipSFXParser : XADZipParser
// IMP 0x10088d63c | @16@0:8
- (id)formatName;
// IMP 0x10088d528 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x10088d530 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
