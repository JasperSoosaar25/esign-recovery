// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c956e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYUniPacket : BLYRequestPacket
// ivar _attributes encoding=@"BLYUniAttribute" offset=8
// property attributes attributes=T@"BLYUniAttribute",R,N,V_attributes
// IMP 0x10064363c | @16@0:8
- (id)init;
// IMP 0x1006436bc | @16@0:8
- (id)description;
// IMP 0x100643904 | @24@0:8@16
- (id)objectKeyWithName:(id)arg0;
// IMP 0x100643a08 | v24@0:8@16
- (void)__pack:(id)arg0;
// IMP 0x100643b2c | v24@0:8@16
- (void)__unpack:(id)arg0;
// IMP 0x100643cd0 | @32@0:8@16#24
- (id)getObjectAttr:(id)arg0 forClass:(Class)arg1;
// IMP 0x100643e1c | v32@0:8@16@24
- (void)putDataAttr:(id)arg0 value:(id)arg1;
// IMP 0x100643eb0 | v40@0:8@16@24@32
- (void)putObjectAttr:(id)arg0 type:(id)arg1 value:(id)arg2;
// IMP 0x100643f60 | v32@0:8@16@24
- (void)putObjectAttr:(id)arg0 value:(id)arg1;
// IMP 0x100644004 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100643ff4 | @16@0:8
- (id)attributes;
// IMP 0x100643614 | @16@0:8
+ (id)packet;
@end
