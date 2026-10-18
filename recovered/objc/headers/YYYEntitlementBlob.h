// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c999f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYEntitlementBlob : NSObject
// ivar _padding encoding=C offset=8
// ivar _length encoding=C offset=9
// ivar _isArray encoding=B offset=10
// ivar _key encoding=@"YYYEntitlementValue" offset=16
// ivar _values encoding=@"NSArray" offset=24
// property padding attributes=TC,N,V_padding
// property length attributes=TC,N,V_length
// property key attributes=T@"YYYEntitlementValue",&,N,V_key
// property values attributes=T@"NSArray",&,N,V_values
// property isArray attributes=TB,N,V_isArray
// IMP 0x10070c838 | C16@0:8
- (unsigned char)totalLenght;
// IMP 0x10070c8f4 | @16@0:8
- (id)data;
// IMP 0x10070cf0c | C16@0:8
- (unsigned char)padding;
// IMP 0x10070cf2c | v20@0:8C16
- (void)setPadding:(unsigned char)arg0;
// IMP 0x10070cf4c | C16@0:8
- (unsigned char)length;
// IMP 0x10070cf6c | v20@0:8C16
- (void)setLength:(unsigned char)arg0;
// IMP 0x10070cf74 | @16@0:8
- (id)key;
// IMP 0x10070cfa0 | v24@0:8@16
- (void)setKey:(id)arg0;
// IMP 0x10070d000 | @16@0:8
- (id)values;
// IMP 0x10070d014 | v24@0:8@16
- (void)setValues:(id)arg0;
// IMP 0x10070d050 | B16@0:8
- (BOOL)isArray;
// IMP 0x10070d078 | v20@0:8B16
- (void)setIsArray:(BOOL)arg0;
// IMP 0x10070d0c0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10070c184 | @32@0:8@16@24
+ (id)blobWithKey:(id)arg0 value:(id)arg1;
@end
