// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c999a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYEntitlementValue : NSObject
// ivar _type encoding=C offset=8
// ivar _length encoding=C offset=9
// ivar _origValue encoding=@ offset=16
// ivar _value encoding=@"NSData" offset=24
// property type attributes=TC,N,V_type
// property origValue attributes=T@,&,N,V_origValue
// property value attributes=T@"NSData",&,N,V_value
// property length attributes=TC,N,V_length
// IMP 0x10070be6c | C16@0:8
- (unsigned char)totalLength;
// IMP 0x10070bea0 | @16@0:8
- (id)data;
// IMP 0x10070bf70 | C16@0:8
- (unsigned char)type;
// IMP 0x10070bf9c | v20@0:8C16
- (void)setType:(unsigned char)arg0;
// IMP 0x10070bfc8 | @16@0:8
- (id)origValue;
// IMP 0x10070bff4 | v24@0:8@16
- (void)setOrigValue:(id)arg0;
// IMP 0x10070c000 | @16@0:8
- (id)value;
// IMP 0x10070c014 | v24@0:8@16
- (void)setValue:(id)arg0;
// IMP 0x10070c0a8 | C16@0:8
- (unsigned char)length;
// IMP 0x10070c0d4 | v20@0:8C16
- (void)setLength:(unsigned char)arg0;
// IMP 0x10070c0f4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10070bb98 | @24@0:8@16
+ (id)entitlementValueWithValue:(id)arg0;
@end
