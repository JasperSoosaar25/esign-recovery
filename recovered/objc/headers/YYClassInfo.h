// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94460
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYClassInfo : NSObject
// ivar _needUpdate encoding=B offset=8
// ivar _isMeta encoding=B offset=9
// ivar _cls encoding=# offset=16
// ivar _superCls encoding=# offset=24
// ivar _metaCls encoding=# offset=32
// ivar _name encoding=@"NSString" offset=40
// ivar _superClassInfo encoding=@"YYClassInfo" offset=48
// ivar _ivarInfos encoding=@"NSDictionary" offset=56
// ivar _methodInfos encoding=@"NSDictionary" offset=64
// ivar _propertyInfos encoding=@"NSDictionary" offset=72
// property cls attributes=T#,R,N,V_cls
// property superCls attributes=T#,R,N,V_superCls
// property metaCls attributes=T#,R,N,V_metaCls
// property isMeta attributes=TB,R,N,V_isMeta
// property name attributes=T@"NSString",R,N,V_name
// property superClassInfo attributes=T@"YYClassInfo",R,N,V_superClassInfo
// property ivarInfos attributes=T@"NSDictionary",R,N,V_ivarInfos
// property methodInfos attributes=T@"NSDictionary",R,N,V_methodInfos
// property propertyInfos attributes=T@"NSDictionary",R,N,V_propertyInfos
// IMP 0x10059a488 | @24@0:8#16
- (id)initWithClass:(Class)arg0;
// IMP 0x10059a56c | v16@0:8
- (void)_update;
// IMP 0x10059a8ac | v16@0:8
- (void)setNeedUpdate;
// IMP 0x10059a8b8 | B16@0:8
- (BOOL)needUpdate;
// IMP 0x10059aa80 | #16@0:8
- (Class)cls;
// IMP 0x10059aa88 | #16@0:8
- (Class)superCls;
// IMP 0x10059aa90 | #16@0:8
- (Class)metaCls;
// IMP 0x10059aa98 | B16@0:8
- (BOOL)isMeta;
// IMP 0x10059aaa0 | @16@0:8
- (id)name;
// IMP 0x10059aaa8 | @16@0:8
- (id)superClassInfo;
// IMP 0x10059aab0 | @16@0:8
- (id)ivarInfos;
// IMP 0x10059aab8 | @16@0:8
- (id)methodInfos;
// IMP 0x10059aac0 | @16@0:8
- (id)propertyInfos;
// IMP 0x10059aac8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10059a8c0 | @24@0:8#16
+ (id)classInfoWithClass:(Class)arg0;
// IMP 0x10059aa54 | @24@0:8@16
+ (id)classInfoWithClassName:(id)arg0;
@end
