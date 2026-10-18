// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c957d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYJceObject : BLYJCEBaseObject
// IMP 0x100671f50 | v40@0:8@16@24@32
- (void)setInAttributes:(id)arg0 withName:(id)arg1 andType:(id)arg2;
// IMP 0x100644964 | @24@0:8@16
- (id)fromData:(id)arg0;
// IMP 0x100644b1c | @16@0:8
- (id)toData;
// IMP 0x100644c2c | @16@0:8
- (id)jceType;
// IMP 0x100644c50 | v24@0:8@16
- (void)__pack:(id)arg0;
// IMP 0x100644cf4 | v24@0:8@16
- (void)__unpack:(id)arg0;
// IMP 0x100644d98 | @16@0:8
- (id)description;
// IMP 0x1006450dc | #16@0:8
- (Class)classForKeyedArchiver;
// IMP 0x100645174 | #16@0:8
- (Class)classForCoder;
// IMP 0x10064520c | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x100645280 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x100671df8 | @40@0:8@16@24@32
+ (id)objectWithName:(id)arg0 andType:(id)arg1 inAttributes:(id)arg2;
// IMP 0x1006448a4 | @16@0:8
+ (id)object;
// IMP 0x1006448cc | @24@0:8@16
+ (id)fromData:(id)arg0;
// IMP 0x100644c24 | @16@0:8
+ (id)jceType;
// IMP 0x10064532c | B16@0:8
+ (BOOL)supportsSecureCoding;
@end
