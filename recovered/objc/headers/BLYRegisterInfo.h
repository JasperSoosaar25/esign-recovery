// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95910
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYRegisterInfo : NSObject
// ivar _category encoding=Q offset=8
// ivar _name encoding=@"NSString" offset=16
// ivar _content encoding=Q offset=24
// property category attributes=TQ,N,V_category
// property name attributes=T@"NSString",C,N,V_name
// property content attributes=TQ,N,V_content
// IMP 0x100645960 | @16@0:8
- (id)init;
// IMP 0x1006459a0 | @16@0:8
- (id)description;
// IMP 0x100645a30 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006459fc | Q16@0:8
- (unsigned long long)category;
// IMP 0x100645a04 | v24@0:8Q16
- (void)setCategory:(unsigned long long)arg0;
// IMP 0x100645a0c | @16@0:8
- (id)name;
// IMP 0x100645a18 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x100645a20 | Q16@0:8
- (unsigned long long)content;
// IMP 0x100645a28 | v24@0:8Q16
- (void)setContent:(unsigned long long)arg0;
@end
