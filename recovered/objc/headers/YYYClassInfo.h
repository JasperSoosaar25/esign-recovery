// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7b8f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYClassInfo : NSObject
// ivar _needUpdate encoding=B offset=8
// ivar _isMeta encoding=B offset=9
// ivar _cls encoding=# offset=16
// ivar _superCls encoding=# offset=24
// ivar _metaCls encoding=# offset=32
// ivar _name encoding=@"NSString" offset=40
// ivar _ivarInfos encoding=@"NSDictionary" offset=48
// ivar _methodInfos encoding=@"NSDictionary" offset=56
// ivar _classMethodInfos encoding=@"NSDictionary" offset=64
// ivar _propertyInfos encoding=@"NSDictionary" offset=72
// ivar _superClassInfo encoding=@"YYYClassInfo" offset=80
// ivar _metaClassInfo encoding=@"YYYClassInfo" offset=88
// property superClassInfo attributes=T@"YYYClassInfo",&,N,V_superClassInfo
// property metaClassInfo attributes=T@"YYYClassInfo",&,N,V_metaClassInfo
// property cls attributes=T#,R,N,V_cls
// property superCls attributes=T#,R,N,V_superCls
// property metaCls attributes=T#,R,N,V_metaCls
// property isMeta attributes=TB,R,N,V_isMeta
// property name attributes=T@"NSString",R,N,V_name
// property ivarInfos attributes=T@"NSDictionary",R,N,V_ivarInfos
// property methodInfos attributes=T@"NSDictionary",R,N,V_methodInfos
// property classMethodInfos attributes=T@"NSDictionary",R,N,V_classMethodInfos
// property propertyInfos attributes=T@"NSDictionary",R,N,V_propertyInfos
// IMP 0x10003f1d0 | @24@0:8#16
- (id)initWithClass:(Class)arg0;
// IMP 0x10003f454 | v16@0:8
- (void)_update;
// IMP 0x1000402b8 | v16@0:8
- (void)setNeedUpdate;
// IMP 0x1000402e8 | B16@0:8
- (BOOL)needUpdate;
// IMP 0x100040308 | @16@0:8
- (id)superClassInfo;
// IMP 0x100040494 | @16@0:8
- (id)metaClassInfo;
// IMP 0x100040704 | q24@0:8@16
- (long long)compare:(id)arg0;
// IMP 0x100040830 | @16@0:8
- (id)description;
// IMP 0x100041d18 | #16@0:8
- (Class)cls;
// IMP 0x100041d38 | #16@0:8
- (Class)superCls;
// IMP 0x100041d64 | #16@0:8
- (Class)metaCls;
// IMP 0x100041d84 | B16@0:8
- (BOOL)isMeta;
// IMP 0x100041db8 | @16@0:8
- (id)name;
// IMP 0x100041dd8 | @16@0:8
- (id)ivarInfos;
// IMP 0x100041dec | @16@0:8
- (id)methodInfos;
// IMP 0x100041e0c | @16@0:8
- (id)classMethodInfos;
// IMP 0x100041e2c | @16@0:8
- (id)propertyInfos;
// IMP 0x100041e40 | v24@0:8@16
- (void)setSuperClassInfo:(id)arg0;
// IMP 0x100041e64 | v24@0:8@16
- (void)setMetaClassInfo:(id)arg0;
// IMP 0x100041ecc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100040544 | @24@0:8#16
+ (id)classInfoWithClass:(Class)arg0;
// IMP 0x100040650 | @24@0:8@16
+ (id)classInfoWithClassName:(id)arg0;
@end
