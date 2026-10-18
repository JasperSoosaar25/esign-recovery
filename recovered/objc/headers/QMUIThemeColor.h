// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8e450
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIThemeColor : UIColor
// ivar _name encoding=@"NSString" offset=8
// ivar _managerName encoding=@"NSObject<NSCopying>" offset=16
// ivar _themeProvider encoding=@? offset=24
// property name attributes=T@"NSString",C,N,V_name
// property managerName attributes=T@"NSObject<NSCopying>",C,N,V_managerName
// property themeProvider attributes=T@?,C,N,V_themeProvider
// property qmui_name attributes=T@"NSString",R,C,N
// property qmui_rawColor attributes=T@"UIColor",R,N
// property qmui_isDynamicColor attributes=TB,R,D,N
// property qmui_isQMUIDynamicColor attributes=TB,R,N
// property _isDynamic attributes=TB,R,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004e9e7c | v16@0:8
- (void)set;
// IMP 0x1004e9eac | v16@0:8
- (void)setFill;
// IMP 0x1004e9edc | v16@0:8
- (void)setStroke;
// IMP 0x1004e9f0c | B32@0:8^d16^d24
- (BOOL)getWhite:(double *)arg0 alpha:(double *)arg1;
// IMP 0x1004e9f60 | B48@0:8^d16^d24^d32^d40
- (BOOL)getHue:(double *)arg0 saturation:(double *)arg1 brightness:(double *)arg2 alpha:(double *)arg3;
// IMP 0x1004e9fcc | B48@0:8^d16^d24^d32^d40
- (BOOL)getRed:(double *)arg0 green:(double *)arg1 blue:(double *)arg2 alpha:(double *)arg3;
// IMP 0x1004ea038 | @24@0:8d16
- (id)colorWithAlphaComponent:(double)arg0;
// IMP 0x1004ea174 | d16@0:8
- (double)alphaComponent;
// IMP 0x1004ea1b8 | ^{CGColor=}16@0:8
- (struct CGColor *)CGColor;
// IMP 0x1004ea2b8 | @16@0:8
- (id)colorSpaceName;
// IMP 0x1004ea2fc | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x1004ea3b4 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x1004ea3c0 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x1004ea3f0 | @16@0:8
- (id)description;
// IMP 0x1004ea528 | @16@0:8
- (id)_highContrastDynamicColor;
// IMP 0x1004ea52c | @24@0:8@16
- (id)_resolvedColorWithTraitCollection:(id)arg0;
// IMP 0x1004ea530 | @16@0:8
- (id)qmui_name;
// IMP 0x1004ea534 | @16@0:8
- (id)qmui_rawColor;
// IMP 0x1004ea638 | B16@0:8
- (BOOL)qmui_isQMUIDynamicColor;
// IMP 0x1004ea640 | B16@0:8
- (BOOL)_isDynamic;
// IMP 0x1004ea674 | @16@0:8
- (id)name;
// IMP 0x1004ea684 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x1004ea690 | @16@0:8
- (id)managerName;
// IMP 0x1004ea6a0 | v24@0:8@16
- (void)setManagerName:(id)arg0;
// IMP 0x1004ea6ac | @?16@0:8
- (id /* block */)themeProvider;
// IMP 0x1004ea6bc | v24@0:8@?16
- (void)setThemeProvider:(id /* block */)arg0;
// IMP 0x1004ea6c8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004e9e50 | v16@0:8
+ (void)load;
@end
