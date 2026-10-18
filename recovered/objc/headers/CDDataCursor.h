// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98610
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDDataCursor : NSObject
// ivar _data encoding=@"NSData" offset=8
// ivar _offset encoding=Q offset=16
// property data attributes=T@"NSData",R,V_data
// property offset attributes=TQ,N,V_offset
// IMP 0x1006e9514 | @24@0:8@16
- (id)initWithData:(id)arg0;
// IMP 0x1006e9590 | r^v16@0:8
- (void *)bytes;
// IMP 0x1006e9598 | v24@0:8Q16
- (void)setOffset:(unsigned long long)arg0;
// IMP 0x1006e95f4 | v24@0:8Q16
- (void)advanceByLength:(unsigned long long)arg0;
// IMP 0x1006e9668 | Q16@0:8
- (unsigned long long)remaining;
// IMP 0x1006e9694 | C16@0:8
- (unsigned char)readByte;
// IMP 0x1006e9720 | S16@0:8
- (unsigned short)readLittleInt16;
// IMP 0x1006e97a8 | I16@0:8
- (unsigned int)readLittleInt32;
// IMP 0x1006e9830 | Q16@0:8
- (unsigned long long)readLittleInt64;
// IMP 0x1006e98b8 | S16@0:8
- (unsigned short)readBigInt16;
// IMP 0x1006e9948 | I16@0:8
- (unsigned int)readBigInt32;
// IMP 0x1006e99d4 | Q16@0:8
- (unsigned long long)readBigInt64;
// IMP 0x1006e9a60 | f16@0:8
- (float)readLittleFloat32;
// IMP 0x1006e9a78 | f16@0:8
- (float)readBigFloat32;
// IMP 0x1006e9a90 | d16@0:8
- (double)readLittleFloat64;
// IMP 0x1006e9ac8 | v32@0:8Q16@24
- (void)appendBytesOfLength:(unsigned long long)arg0 intoData:(id)arg1;
// IMP 0x1006e9b78 | v32@0:8Q16^v24
- (void)readBytesOfLength:(unsigned long long)arg0 intoBuffer:(void *)arg1;
// IMP 0x1006e9c1c | B16@0:8
- (BOOL)isAtEnd;
// IMP 0x1006e9c44 | @16@0:8
- (id)readCString;
// IMP 0x1006e9c80 | @32@0:8Q16Q24
- (id)readStringOfLength:(unsigned long long)arg0 encoding:(unsigned long long)arg1;
// IMP 0x1006e9dc4 | @16@0:8
- (id)data;
// IMP 0x1006e9dd0 | Q16@0:8
- (unsigned long long)offset;
// IMP 0x1006e9dd8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
