// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8d1d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIPropertyDescriptor : NSObject
// ivar _isAtomic encoding=B offset=8
// ivar _isNonatomic encoding=B offset=9
// ivar _isAssign encoding=B offset=10
// ivar _isWeak encoding=B offset=11
// ivar _isStrong encoding=B offset=12
// ivar _isCopy encoding=B offset=13
// ivar _isReadonly encoding=B offset=14
// ivar _isReadwrite encoding=B offset=15
// ivar _name encoding=@"NSString" offset=16
// ivar _getter encoding=: offset=24
// ivar _setter encoding=: offset=32
// ivar _type encoding=@"NSString" offset=40
// property name attributes=T@"NSString",&,N,V_name
// property getter attributes=T:,N,V_getter
// property setter attributes=T:,N,V_setter
// property isAtomic attributes=TB,N,V_isAtomic
// property isNonatomic attributes=TB,N,V_isNonatomic
// property isAssign attributes=TB,N,V_isAssign
// property isWeak attributes=TB,N,V_isWeak
// property isStrong attributes=TB,N,V_isStrong
// property isCopy attributes=TB,N,V_isCopy
// property isReadonly attributes=TB,N,V_isReadonly
// property isReadwrite attributes=TB,N,V_isReadwrite
// property type attributes=T@"NSString",C,N,V_type
// IMP 0x1004be22c | @16@0:8
- (id)description;
// IMP 0x1004be780 | @16@0:8
- (id)name;
// IMP 0x1004be788 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x1004be794 | :16@0:8
- (SEL)getter;
// IMP 0x1004be79c | v24@0:8:16
- (void)setGetter:(SEL)arg0;
// IMP 0x1004be7a4 | :16@0:8
- (SEL)setter;
// IMP 0x1004be7ac | v24@0:8:16
- (void)setSetter:(SEL)arg0;
// IMP 0x1004be7b4 | B16@0:8
- (BOOL)isAtomic;
// IMP 0x1004be7bc | v20@0:8B16
- (void)setIsAtomic:(BOOL)arg0;
// IMP 0x1004be7c4 | B16@0:8
- (BOOL)isNonatomic;
// IMP 0x1004be7cc | v20@0:8B16
- (void)setIsNonatomic:(BOOL)arg0;
// IMP 0x1004be7d4 | B16@0:8
- (BOOL)isAssign;
// IMP 0x1004be7dc | v20@0:8B16
- (void)setIsAssign:(BOOL)arg0;
// IMP 0x1004be7e4 | B16@0:8
- (BOOL)isWeak;
// IMP 0x1004be7ec | v20@0:8B16
- (void)setIsWeak:(BOOL)arg0;
// IMP 0x1004be7f4 | B16@0:8
- (BOOL)isStrong;
// IMP 0x1004be7fc | v20@0:8B16
- (void)setIsStrong:(BOOL)arg0;
// IMP 0x1004be804 | B16@0:8
- (BOOL)isCopy;
// IMP 0x1004be80c | v20@0:8B16
- (void)setIsCopy:(BOOL)arg0;
// IMP 0x1004be814 | B16@0:8
- (BOOL)isReadonly;
// IMP 0x1004be81c | v20@0:8B16
- (void)setIsReadonly:(BOOL)arg0;
// IMP 0x1004be824 | B16@0:8
- (BOOL)isReadwrite;
// IMP 0x1004be82c | v20@0:8B16
- (void)setIsReadwrite:(BOOL)arg0;
// IMP 0x1004be834 | @16@0:8
- (id)type;
// IMP 0x1004be83c | v24@0:8@16
- (void)setType:(id)arg0;
// IMP 0x1004be844 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004bdea0 | @24@0:8^{objc_property=}16
+ (id)descriptorWithProperty:(struct objc_property *)arg0;
// IMP 0x1004be518 | @24@0:8@16
+ (id)typeWithEncodeString:(id)arg0;
@end
