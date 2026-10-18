// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8de90
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIThemeManager : NSObject
// ivar _respondsSystemStyleAutomatically encoding=B offset=8
// ivar _name encoding=@"NSObject<NSCopying>" offset=16
// ivar _identifierForTrait encoding=@? offset=24
// ivar _currentThemeIdentifier encoding=@"NSObject<NSCopying>" offset=32
// ivar _currentTheme encoding=@"NSObject" offset=40
// ivar _themeGenerator encoding=@? offset=48
// ivar _themeIdentifierGenerator encoding=@? offset=56
// ivar __themeIdentifiers encoding=@"NSMutableArray" offset=64
// ivar __themes encoding=@"NSMutableArray" offset=72
// property _themeIdentifiers attributes=T@"NSMutableArray",&,N,V__themeIdentifiers
// property _themes attributes=T@"NSMutableArray",&,N,V__themes
// property name attributes=T@"NSObject<NSCopying>",R,C,N,V_name
// property respondsSystemStyleAutomatically attributes=TB,N,V_respondsSystemStyleAutomatically
// property identifierForTrait attributes=T@?,C,N,V_identifierForTrait
// property themeIdentifiers attributes=T@"NSArray",R,C,N
// property themes attributes=T@"NSArray",R,C,N
// property currentThemeIdentifier attributes=T@"NSObject<NSCopying>",C,N,V_currentThemeIdentifier
// property currentTheme attributes=T@"NSObject",&,N,V_currentTheme
// property themeGenerator attributes=T@?,C,N,V_themeGenerator
// property themeIdentifierGenerator attributes=T@?,C,N,V_themeIdentifierGenerator
// IMP 0x1004ceb10 | v16@0:8
- (void)dealloc;
// IMP 0x1004ceb78 | @16@0:8
- (id)description;
// IMP 0x1004cec3c | @24@0:8@16
- (id)initWithName:(id)arg0;
// IMP 0x1004ced28 | v24@0:8@16
- (void)handleUserInterfaceStyleWillChangeEvent:(id)arg0;
// IMP 0x1004cede4 | v20@0:8B16
- (void)setRespondsSystemStyleAutomatically:(BOOL)arg0;
// IMP 0x1004ceec0 | v24@0:8@16
- (void)setCurrentThemeIdentifier:(id)arg0;
// IMP 0x1004cf140 | v24@0:8@16
- (void)setCurrentTheme:(id)arg0;
// IMP 0x1004cf3c0 | @16@0:8
- (id)themeIdentifiers;
// IMP 0x1004cf434 | @16@0:8
- (id)themes;
// IMP 0x1004cf4a8 | @24@0:8@16
- (id)themeForIdentifier:(id)arg0;
// IMP 0x1004cf550 | @24@0:8@16
- (id)identifierForTheme:(id)arg0;
// IMP 0x1004cf5f8 | v32@0:8@16@24
- (void)addThemeIdentifier:(id)arg0 theme:(id)arg1;
// IMP 0x1004cf8e0 | v24@0:8@16
- (void)removeThemeIdentifier:(id)arg0;
// IMP 0x1004cf930 | v24@0:8@16
- (void)removeTheme:(id)arg0;
// IMP 0x1004cf980 | v16@0:8
- (void)notifyThemeChanged;
// IMP 0x1004cfb84 | @16@0:8
- (id)name;
// IMP 0x1004cfb8c | B16@0:8
- (BOOL)respondsSystemStyleAutomatically;
// IMP 0x1004cfb94 | @?16@0:8
- (id /* block */)identifierForTrait;
// IMP 0x1004cfb9c | v24@0:8@?16
- (void)setIdentifierForTrait:(id /* block */)arg0;
// IMP 0x1004cfba4 | @16@0:8
- (id)currentThemeIdentifier;
// IMP 0x1004cfbac | @16@0:8
- (id)currentTheme;
// IMP 0x1004cfbb4 | @?16@0:8
- (id /* block */)themeGenerator;
// IMP 0x1004cfbbc | v24@0:8@?16
- (void)setThemeGenerator:(id /* block */)arg0;
// IMP 0x1004cfbc4 | @?16@0:8
- (id /* block */)themeIdentifierGenerator;
// IMP 0x1004cfbcc | v24@0:8@?16
- (void)setThemeIdentifierGenerator:(id /* block */)arg0;
// IMP 0x1004cfbd4 | @16@0:8
- (id)_themeIdentifiers;
// IMP 0x1004cfbdc | v24@0:8@16
- (void)set_themeIdentifiers:(id)arg0;
// IMP 0x1004cfbe8 | @16@0:8
- (id)_themes;
// IMP 0x1004cfbf0 | v24@0:8@16
- (void)set_themes:(id)arg0;
// IMP 0x1004cfbfc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
