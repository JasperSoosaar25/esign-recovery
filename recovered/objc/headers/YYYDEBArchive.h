// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e7b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYDEBArchive : NSObject
// ivar _filePath encoding=@"NSString" offset=8
// ivar _destinationPath encoding=@"NSString" offset=16
// ivar _XADarchiver encoding=@"XADSimpleUnarchiver" offset=24
// property XADarchiver attributes=T@"XADSimpleUnarchiver",&,N,V_XADarchiver
// property filePath attributes=T@"NSString",C,N,V_filePath
// property destinationPath attributes=T@"NSString",C,N,V_destinationPath
// IMP 0x1001e7484 | @32@0:8@16@24
- (id)initWithFilePath:(id)arg0 toDestination:(id)arg1;
// IMP 0x1001e776c | B16@0:8
- (BOOL)decompress;
// IMP 0x1001e8510 | B40@0:8@16@24@32
- (BOOL)simpleUnarchiver:(id)arg0 shouldExtractEntryWithDictionary:(id)arg1 to:(id)arg2;
// IMP 0x1001e8a70 | @16@0:8
- (id)filePath;
// IMP 0x1001e8a9c | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x1001e8b14 | @16@0:8
- (id)destinationPath;
// IMP 0x1001e8b40 | v24@0:8@16
- (void)setDestinationPath:(id)arg0;
// IMP 0x1001e8b54 | @16@0:8
- (id)XADarchiver;
// IMP 0x1001e8b80 | v24@0:8@16
- (void)setXADarchiver:(id)arg0;
// IMP 0x1001e8bdc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
