// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99930
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface sub_100012c02 : NSObject
// ivar buffer encoding=* offset=8
// ivar offset encoding=i offset=16
// ivar length encoding=q offset=24
// ivar _data encoding=@"NSMutableData" offset=32
// property data attributes=T@"NSMutableData",&,N,V_data
// IMP 0x100709bf8 | v24@0:8q16
- (void)setCapacity:(long long)arg0;
// IMP 0x100709c8c | v24@0:8i16i20
- (void)writeBits:(int)arg0 bits:(int)arg1;
// IMP 0x100709de0 | i16@0:8
- (int)sub_100012c04;
// IMP 0x100709e2c | @16@0:8
- (id)toString;
// IMP 0x100709f2c | @16@0:8
- (id)toData;
// IMP 0x100709fc8 | @16@0:8
- (id)data;
// IMP 0x100709ff8 | v24@0:8@16
- (void)setData:(id)arg0;
// IMP 0x10070a088 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
