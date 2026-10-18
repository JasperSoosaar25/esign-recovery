// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8ecb8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIThemeVisualEffect : NSObject
// ivar _name encoding=@"NSString" offset=8
// ivar _managerName encoding=@"NSObject<NSCopying>" offset=16
// ivar _themeProvider encoding=@? offset=24
// property name attributes=T@"NSString",C,N,V_name
// property managerName attributes=T@"NSObject<NSCopying>",C,N,V_managerName
// property themeProvider attributes=T@?,C,N,V_themeProvider
// property qmui_name attributes=T@"NSString",R,C,N
// property qmui_rawEffect attributes=T@"UIVisualEffect",R,N
// property qmui_isDynamicEffect attributes=TB,R,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100531bd0 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x100531c84 | @16@0:8
- (id)description;
// IMP 0x100531dbc | @24@0:8:16
- (id)methodSignatureForSelector:(SEL)arg0;
// IMP 0x100531eb0 | v24@0:8@16
- (void)forwardInvocation:(id)arg0;
// IMP 0x100531f40 | B24@0:8:16
- (BOOL)respondsToSelector:(SEL)arg0;
// IMP 0x100531fbc | B24@0:8#16
- (BOOL)isKindOfClass:(Class)arg0;
// IMP 0x100532024 | B24@0:8#16
- (BOOL)isMemberOfClass:(Class)arg0;
// IMP 0x10053208c | B24@0:8@16
- (BOOL)conformsToProtocol:(id)arg0;
// IMP 0x1005320f0 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x100532120 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x100532128 | @16@0:8
- (id)qmui_name;
// IMP 0x10053212c | @16@0:8
- (id)qmui_rawEffect;
// IMP 0x10053222c | B16@0:8
- (BOOL)qmui_isDynamicEffect;
// IMP 0x100532234 | @16@0:8
- (id)name;
// IMP 0x10053223c | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x100532244 | @16@0:8
- (id)managerName;
// IMP 0x10053224c | v24@0:8@16
- (void)setManagerName:(id)arg0;
// IMP 0x100532254 | @?16@0:8
- (id /* block */)themeProvider;
// IMP 0x10053225c | v24@0:8@?16
- (void)setThemeProvider:(id /* block */)arg0;
// IMP 0x100532264 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
