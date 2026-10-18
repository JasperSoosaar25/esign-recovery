// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c972b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMTIdJournal : NSObject
// ivar __domain encoding=@"NSString" offset=8
// ivar __old_id encoding=@"NSString" offset=16
// ivar __new_id encoding=@"NSString" offset=24
// ivar __ts encoding=q offset=32
// ivar __domain_isset encoding=B offset=40
// ivar __old_id_isset encoding=B offset=41
// ivar __new_id_isset encoding=B offset=42
// ivar __ts_isset encoding=B offset=43
// property domain attributes=T@"NSString",&,N,Gdomain,SsetDomain:
// property old_id attributes=T@"NSString",&,N,Gold_id,SsetOld_id:
// property new_id attributes=T@"NSString",&,N,Gnew_id,SsetNew_id:
// property ts attributes=Tq,N,Gts,SsetTs:
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006b1b4c | @16@0:8
- (id)init;
// IMP 0x1006b1b80 | @48@0:8@16@24@32q40
- (id)initWithDomain:(id)arg0 old_id:(id)arg1 new_id:(id)arg2 ts:(long long)arg3;
// IMP 0x1006b1cb4 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1006b1ea4 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1006b1f60 | v16@0:8
- (void)dealloc;
// IMP 0x1006b2018 | @16@0:8
- (id)domain;
// IMP 0x1006b2070 | v24@0:8@16
- (void)setDomain:(id)arg0;
// IMP 0x1006b20e8 | B16@0:8
- (BOOL)domainIsSet;
// IMP 0x1006b20f0 | v16@0:8
- (void)unsetDomain;
// IMP 0x1006b2138 | @16@0:8
- (id)old_id;
// IMP 0x1006b2190 | v24@0:8@16
- (void)setOld_id:(id)arg0;
// IMP 0x1006b2208 | B16@0:8
- (BOOL)old_idIsSet;
// IMP 0x1006b2210 | v16@0:8
- (void)unsetOld_id;
// IMP 0x1006b2258 | @16@0:8
- (id)new_id;
// IMP 0x1006b22b0 | v24@0:8@16
- (void)setNew_id:(id)arg0;
// IMP 0x1006b2328 | B16@0:8
- (BOOL)new_idIsSet;
// IMP 0x1006b2330 | v16@0:8
- (void)unsetNew_id;
// IMP 0x1006b2378 | q16@0:8
- (long long)ts;
// IMP 0x1006b2380 | v24@0:8q16
- (void)setTs:(long long)arg0;
// IMP 0x1006b2390 | B16@0:8
- (BOOL)tsIsSet;
// IMP 0x1006b2398 | v16@0:8
- (void)unsetTs;
// IMP 0x1006b23a0 | v24@0:8@16
- (void)read:(id)arg0;
// IMP 0x1006b25f8 | v24@0:8@16
- (void)write:(id)arg0;
// IMP 0x1006b2790 | v16@0:8
- (void)validate;
// IMP 0x1006b2844 | @16@0:8
- (id)description;
// IMP 0x1006b29ac | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
