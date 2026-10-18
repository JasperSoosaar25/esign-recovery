// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d988
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADCpioParser : XADMacArchiveParser
// IMP 0x1008b3c60 | v16@0:8
- (void)parseWithSeparateMacForks;
// IMP 0x1008b4720 | @28@0:8@16B24
- (id)rawHandleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008b4808 | @16@0:8
- (id)formatName;
// IMP 0x1008b3b2c | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008b3b34 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
