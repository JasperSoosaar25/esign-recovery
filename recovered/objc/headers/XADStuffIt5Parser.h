// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d3e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffIt5Parser : XADStuffItParser
// IMP 0x1008aa048 | v16@0:8
- (void)parse;
// IMP 0x1008aa384 | v20@0:8i16
- (void)parseWithNumberOfTopLevelEntries:(int)arg0;
// IMP 0x1008ab21c | @16@0:8
- (id)formatName;
// IMP 0x1008ab228 | @24@0:8@16
- (id)keyForEntryWithDictionary:(id)arg0;
// IMP 0x1008ab3cc | @32@0:8@16@24
- (id)decryptHandleForEntryWithDictionary:(id)arg0 handle:(id)arg1;
// IMP 0x1008a9fa8 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008a9fb0 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
