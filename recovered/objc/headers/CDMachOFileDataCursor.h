// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98480
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDMachOFileDataCursor : CDDataCursor
// ivar _machOFile encoding=@"CDMachOFile" offset=8
// ivar _ptrSize encoding=Q offset=16
// ivar _byteOrder encoding=Q offset=24
// property machOFile attributes=T@"CDMachOFile",R,W,N,V_machOFile
// IMP 0x1006e6a1c | @24@0:8@16
- (id)initWithFile:(id)arg0;
// IMP 0x1006e6a24 | @32@0:8@16Q24
- (id)initWithFile:(id)arg0 offset:(unsigned long long)arg1;
// IMP 0x1006e6ac4 | @32@0:8@16Q24
- (id)initWithFile:(id)arg0 address:(unsigned long long)arg1;
// IMP 0x1006e6b64 | @24@0:8@16
- (id)initWithSection:(id)arg0;
// IMP 0x1006e6c28 | v24@0:8@16
- (void)setMachOFile:(id)arg0;
// IMP 0x1006e6ca4 | v24@0:8Q16
- (void)setAddress:(unsigned long long)arg0;
// IMP 0x1006e6cfc | S16@0:8
- (unsigned short)readInt16;
// IMP 0x1006e6d14 | I16@0:8
- (unsigned int)readInt32;
// IMP 0x1006e6d2c | Q16@0:8
- (unsigned long long)readInt64;
// IMP 0x1006e6d44 | I16@0:8
- (unsigned int)peekInt32;
// IMP 0x1006e6d8c | Q16@0:8
- (unsigned long long)readPtr;
// IMP 0x1006e6df0 | @16@0:8
- (id)machOFile;
// IMP 0x1006e6e10 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
