// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93b68
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGPreserveAspectRatio : NSObject
// ivar _align encoding=i offset=8
// ivar _meetOrSlice encoding=i offset=12
// property align attributes=Ti,N,V_align
// property meetOrSlice attributes=Ti,N,V_meetOrSlice
// IMP 0x100586184 | @16@0:8
- (id)init;
// IMP 0x1005861e4 | i16@0:8
- (int)align;
// IMP 0x1005861ec | v20@0:8i16
- (void)setAlign:(int)arg0;
// IMP 0x1005861f4 | i16@0:8
- (int)meetOrSlice;
// IMP 0x1005861fc | v20@0:8i16
- (void)setMeetOrSlice:(int)arg0;
@end
