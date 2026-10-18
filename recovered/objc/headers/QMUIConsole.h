// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88a40
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIConsole : NSObject
// ivar _canShow encoding=B offset=8
// ivar _showConsoleAutomatically encoding=B offset=9
// ivar _backgroundColor encoding=@"UIColor" offset=16
// ivar _textAttributes encoding=@"NSDictionary" offset=24
// ivar _timeAttributes encoding=@"NSDictionary" offset=32
// ivar _searchResultHighlightedBackgroundColor encoding=@"UIColor" offset=40
// ivar _consoleWindow encoding=@"QMUIConsoleWindow" offset=48
// ivar _consoleViewController encoding=@"QMUIConsoleViewController" offset=56
// property consoleWindow attributes=T@"QMUIConsoleWindow",&,N,V_consoleWindow
// property consoleViewController attributes=T@"QMUIConsoleViewController",&,N,V_consoleViewController
// property canShow attributes=TB,N,V_canShow
// property showConsoleAutomatically attributes=TB,N,V_showConsoleAutomatically
// property backgroundColor attributes=T@"UIColor",&,N,V_backgroundColor
// property textAttributes attributes=T@"NSDictionary",&,N,V_textAttributes
// property timeAttributes attributes=T@"NSDictionary",&,N,V_timeAttributes
// property searchResultHighlightedBackgroundColor attributes=T@"UIColor",&,N,V_searchResultHighlightedBackgroundColor
// IMP 0x10046a3a4 | v16@0:8
- (void)initConsoleWindowIfNeeded;
// IMP 0x10046a470 | v24@0:8@16
- (void)setBackgroundColor:(id)arg0;
// IMP 0x10046a4d0 | B16@0:8
- (BOOL)canShow;
// IMP 0x10046a4d8 | v20@0:8B16
- (void)setCanShow:(BOOL)arg0;
// IMP 0x10046a4e0 | B16@0:8
- (BOOL)showConsoleAutomatically;
// IMP 0x10046a4e8 | v20@0:8B16
- (void)setShowConsoleAutomatically:(BOOL)arg0;
// IMP 0x10046a4f0 | @16@0:8
- (id)backgroundColor;
// IMP 0x10046a4f8 | @16@0:8
- (id)textAttributes;
// IMP 0x10046a500 | v24@0:8@16
- (void)setTextAttributes:(id)arg0;
// IMP 0x10046a50c | @16@0:8
- (id)timeAttributes;
// IMP 0x10046a514 | v24@0:8@16
- (void)setTimeAttributes:(id)arg0;
// IMP 0x10046a520 | @16@0:8
- (id)searchResultHighlightedBackgroundColor;
// IMP 0x10046a528 | v24@0:8@16
- (void)setSearchResultHighlightedBackgroundColor:(id)arg0;
// IMP 0x10046a534 | @16@0:8
- (id)consoleWindow;
// IMP 0x10046a53c | v24@0:8@16
- (void)setConsoleWindow:(id)arg0;
// IMP 0x10046a548 | @16@0:8
- (id)consoleViewController;
// IMP 0x10046a550 | v24@0:8@16
- (void)setConsoleViewController:(id)arg0;
// IMP 0x10046a55c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100469c60 | @16@0:8
+ (id)sharedInstance;
// IMP 0x10046a004 | @16@0:8
+ (id)appearance;
// IMP 0x10046a008 | @24@0:8^{_NSZone=}16
+ (id)allocWithZone:(struct _NSZone *)arg0;
// IMP 0x10046a024 | v40@0:8@16@24@32
+ (void)logWithLevel:(id)arg0 name:(id)arg1 logString:(id)arg2;
// IMP 0x10046a124 | v24@0:8@16
+ (void)log:(id)arg0;
// IMP 0x10046a134 | v16@0:8
+ (void)clear;
// IMP 0x10046a184 | v16@0:8
+ (void)show;
// IMP 0x10046a350 | v16@0:8
+ (void)hide;
@end
