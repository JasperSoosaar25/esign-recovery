// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92000
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CharacterData : Node
// ivar data encoding=@"NSString" offset=8
// ivar length encoding=Q offset=16
// property data attributes=T@"NSString",R,N,Vdata
// property length attributes=TQ,R,N,Vlength
// IMP 0x100569a80 | @32@0:8Q16Q24
- (id)substringData:(unsigned long long)arg0 count:(unsigned long long)arg1;
// IMP 0x100569a88 | v24@0:8@16
- (void)appendData:(id)arg0;
// IMP 0x100569a8c | v32@0:8Q16@24
- (void)insertData:(unsigned long long)arg0 arg:(id)arg1;
// IMP 0x100569a90 | v32@0:8Q16Q24
- (void)deleteData:(unsigned long long)arg0 count:(unsigned long long)arg1;
// IMP 0x100569a94 | v40@0:8Q16Q24@32
- (void)replaceData:(unsigned long long)arg0 count:(unsigned long long)arg1 arg:(id)arg2;
// IMP 0x100569a98 | @16@0:8
- (id)data;
// IMP 0x100569aa8 | Q16@0:8
- (unsigned long long)length;
// IMP 0x100569ab8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
