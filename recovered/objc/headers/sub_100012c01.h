// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c998b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface sub_100012c01 : NSObject
// ivar bytes encoding=* offset=8
// ivar offset encoding=i offset=16
// ivar length encoding=i offset=20
// ivar _data encoding=@"NSData" offset=24
// property data attributes=T@"NSData",&,N,V_data
// IMP 0x1007098d0 | i20@0:8i16
- (int)readBits:(int)arg0;
// IMP 0x1007099f0 | v20@0:8i16
- (void)seekBit:(int)arg0;
// IMP 0x100709a60 | B16@0:8
- (BOOL)hasMore;
// IMP 0x100709ab0 | v24@0:8@16
- (void)setData:(id)arg0;
// IMP 0x100709b80 | @16@0:8
- (id)data;
// IMP 0x100709bac | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100709810 | @24@0:8@16
+ (id)streamWithData:(id)arg0;
@end
