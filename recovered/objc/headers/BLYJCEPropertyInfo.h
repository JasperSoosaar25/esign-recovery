// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95578
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYJCEPropertyInfo : NSObject
// ivar _dynamic encoding=B offset=8
// ivar _weak encoding=B offset=9
// ivar _required encoding=B offset=10
// ivar _isJCE encoding=B offset=11
// ivar _tag encoding=q offset=16
// ivar _getter encoding=: offset=24
// ivar _setter encoding=: offset=32
// ivar _name encoding=@"NSString" offset=40
// ivar _type encoding=@"NSString" offset=48
// ivar _ext encoding=@"BLYJCEPair" offset=56
// ivar _memoryManagementPolicy encoding=q offset=64
// property tag attributes=Tq,N,V_tag
// property dynamic attributes=TB,N,V_dynamic
// property weak attributes=TB,N,V_weak
// property getter attributes=T:,N,V_getter
// property setter attributes=T:,N,V_setter
// property required attributes=TB,N,V_required
// property name attributes=T@"NSString",&,N,V_name
// property type attributes=T@"NSString",&,N,V_type
// property ext attributes=T@"BLYJCEPair",&,N,V_ext
// property isJCE attributes=TB,N,V_isJCE
// property memoryManagementPolicy attributes=Tq,N,V_memoryManagementPolicy
// IMP 0x100640f28 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100640e6c | q16@0:8
- (long long)tag;
// IMP 0x100640e74 | v24@0:8q16
- (void)setTag:(long long)arg0;
// IMP 0x100640e7c | B16@0:8
- (BOOL)dynamic;
// IMP 0x100640e84 | v20@0:8B16
- (void)setDynamic:(BOOL)arg0;
// IMP 0x100640e8c | B16@0:8
- (BOOL)weak;
// IMP 0x100640e94 | v20@0:8B16
- (void)setWeak:(BOOL)arg0;
// IMP 0x100640e9c | :16@0:8
- (SEL)getter;
// IMP 0x100640ea4 | v24@0:8:16
- (void)setGetter:(SEL)arg0;
// IMP 0x100640eac | :16@0:8
- (SEL)setter;
// IMP 0x100640eb4 | v24@0:8:16
- (void)setSetter:(SEL)arg0;
// IMP 0x100640ebc | B16@0:8
- (BOOL)required;
// IMP 0x100640ec4 | v20@0:8B16
- (void)setRequired:(BOOL)arg0;
// IMP 0x100640ecc | @16@0:8
- (id)name;
// IMP 0x100640ed4 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x100640ee0 | @16@0:8
- (id)type;
// IMP 0x100640ee8 | v24@0:8@16
- (void)setType:(id)arg0;
// IMP 0x100640ef4 | @16@0:8
- (id)ext;
// IMP 0x100640efc | v24@0:8@16
- (void)setExt:(id)arg0;
// IMP 0x100640f08 | B16@0:8
- (BOOL)isJCE;
// IMP 0x100640f10 | v20@0:8B16
- (void)setIsJCE:(BOOL)arg0;
// IMP 0x100640f18 | q16@0:8
- (long long)memoryManagementPolicy;
// IMP 0x100640f20 | v24@0:8q16
- (void)setMemoryManagementPolicy:(long long)arg0;
@end
