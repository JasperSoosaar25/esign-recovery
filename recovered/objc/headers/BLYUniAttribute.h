// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96590
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYUniAttribute : BLYJceObjectV2
// ivar jcev2_p_0_r_uniAttributes__b0x9i_M09ONSStringM09ONSStringONSData encoding=@"NSMutableDictionary" offset=8
// property jcev2_p_0_r_uniAttributes__b0x9i_M09ONSStringM09ONSStringONSData attributes=T@"NSMutableDictionary",&,N,Gjce_uniAttributes,SsetJce_uniAttributes:,Vjcev2_p_0_r_uniAttributes__b0x9i_M09ONSStringM09ONSStringONSData
// IMP 0x100671668 | @16@0:8
- (id)init;
// IMP 0x1006716ec | v16@0:8
- (void)dealloc;
// IMP 0x1006718dc | @16@0:8
- (id)attributeData;
// IMP 0x100671980 | @32@0:8@16@24
- (id)attrValueWithName:(id)arg0 andType:(id)arg1;
// IMP 0x100671c18 | v40@0:8@16@24@32
- (void)setAttrValue:(id)arg0 withName:(id)arg1 andType:(id)arg2;
// IMP 0x100671de4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100671dc0 | @16@0:8
- (id)jce_uniAttributes;
// IMP 0x100671dd0 | v24@0:8@16
- (void)setJce_uniAttributes:(id)arg0;
// IMP 0x10067173c | @24@0:8@16
+ (id)fromAttributeData:(id)arg0;
@end
