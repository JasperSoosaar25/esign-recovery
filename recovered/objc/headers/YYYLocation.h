// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c815d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYLocation : NSObject
// ivar _name encoding=@"NSString" offset=8
// ivar _latitude encoding=d offset=16
// ivar _longitude encoding=d offset=24
// property name attributes=T@"NSString",C,N,V_name
// property latitude attributes=Td,N,V_latitude
// property longitude attributes=Td,N,V_longitude
// IMP 0x10038ae54 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10038af0c | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x10038af88 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x10038b0c8 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x10038b284 | @16@0:8
- (id)name;
// IMP 0x10038b298 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x10038b31c | d16@0:8
- (double)latitude;
// IMP 0x10038b33c | v24@0:8d16
- (void)setLatitude:(double)arg0;
// IMP 0x10038b368 | d16@0:8
- (double)longitude;
// IMP 0x10038b388 | v24@0:8d16
- (void)setLongitude:(double)arg0;
// IMP 0x10038b3b4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
