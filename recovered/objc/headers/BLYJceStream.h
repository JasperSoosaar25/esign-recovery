// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95870
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYJceStream : NSObject
// ivar _streamBuffer encoding=* offset=8
// ivar _streamSize encoding=i offset=16
// ivar _cursor encoding=i offset=20
// property streamBuffer attributes=T*,N,V_streamBuffer
// property streamSize attributes=Ti,N,V_streamSize
// property cursor attributes=Ti,N,V_cursor
// IMP 0x100645584 | @16@0:8
- (id)init;
// IMP 0x1006455c0 | @16@0:8
- (id)data;
// IMP 0x1006455c8 | @16@0:8
- (id)description;
// IMP 0x1006457c0 | *16@0:8
- (char *)streamBuffer;
// IMP 0x1006457c8 | v24@0:8*16
- (void)setStreamBuffer:(char *)arg0;
// IMP 0x1006457d0 | i16@0:8
- (int)streamSize;
// IMP 0x1006457d8 | v20@0:8i16
- (void)setStreamSize:(int)arg0;
// IMP 0x1006457e0 | i16@0:8
- (int)cursor;
// IMP 0x1006457e8 | v20@0:8i16
- (void)setCursor:(int)arg0;
@end
