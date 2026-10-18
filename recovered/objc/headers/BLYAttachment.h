// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95780
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYAttachment : BLYJceObjectV2
// ivar jcev2_p_0_r_type encoding=c offset=8
// ivar jcev2_p_1_r_fileName encoding=@"NSString" offset=16
// ivar jcev2_p_2_o_data encoding=@"NSData" offset=24
// property jcev2_p_0_r_type attributes=Tc,N,Gjce_type,SsetJce_type:,Vjcev2_p_0_r_type
// property jcev2_p_1_r_fileName attributes=T@"NSString",&,N,Gjce_fileName,SsetJce_fileName:,Vjcev2_p_1_r_fileName
// property jcev2_p_2_o_data attributes=T@"NSData",&,N,Gjce_data,SsetJce_data:,Vjcev2_p_2_o_data
// IMP 0x100644770 | @16@0:8
- (id)init;
// IMP 0x100644864 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006447fc | c16@0:8
- (signed char)jce_type;
// IMP 0x10064480c | v20@0:8c16
- (void)setJce_type:(signed char)arg0;
// IMP 0x10064481c | @16@0:8
- (id)jce_fileName;
// IMP 0x10064482c | v24@0:8@16
- (void)setJce_fileName:(id)arg0;
// IMP 0x100644840 | @16@0:8
- (id)jce_data;
// IMP 0x100644850 | v24@0:8@16
- (void)setJce_data:(id)arg0;
// IMP 0x100644714 | v16@0:8
+ (void)initialize;
// IMP 0x1006447d0 | @16@0:8
+ (id)jceType;
@end
