// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95ff0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYRqdSecurity : BLYJceObjectV2
// ivar jcev2_p_0_r_encKey encoding=@"NSString" offset=8
// ivar jcev2_p_1_r_encPubKey encoding=@"NSString" offset=16
// property jcev2_p_0_r_encKey attributes=T@"NSString",&,N,Gjce_encKey,SsetJce_encKey:,Vjcev2_p_0_r_encKey
// property jcev2_p_1_r_encPubKey attributes=T@"NSString",&,N,Gjce_encPubKey,SsetJce_encPubKey:,Vjcev2_p_1_r_encPubKey
// IMP 0x10065a214 | @16@0:8
- (id)init;
// IMP 0x10065a300 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10065a2b8 | @16@0:8
- (id)jce_encKey;
// IMP 0x10065a2c8 | v24@0:8@16
- (void)setJce_encKey:(id)arg0;
// IMP 0x10065a2dc | @16@0:8
- (id)jce_encPubKey;
// IMP 0x10065a2ec | v24@0:8@16
- (void)setJce_encPubKey:(id)arg0;
// IMP 0x10065a1b8 | v16@0:8
+ (void)initialize;
// IMP 0x10065a28c | @16@0:8
+ (id)jceType;
@end
