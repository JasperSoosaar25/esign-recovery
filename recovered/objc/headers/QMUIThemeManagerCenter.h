// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8df08
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIThemeManagerCenter : NSObject
// ivar _allManagers encoding=@"NSMutableArray" offset=8
// property allManagers attributes=T@"NSMutableArray",&,N,V_allManagers
// IMP 0x1004cffa8 | @16@0:8
- (id)allManagers;
// IMP 0x1004cffb0 | v24@0:8@16
- (void)setAllManagers:(id)arg0;
// IMP 0x1004cffbc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004cfc74 | @16@0:8
+ (id)sharedInstance;
// IMP 0x1004cfd68 | @24@0:8^{_NSZone=}16
+ (id)allocWithZone:(struct _NSZone *)arg0;
// IMP 0x1004cfd84 | @24@0:8@16
+ (id)themeManagerWithName:(id)arg0;
// IMP 0x1004cff30 | @16@0:8
+ (id)defaultThemeManager;
// IMP 0x1004cff44 | @16@0:8
+ (id)themeManagers;
@end
