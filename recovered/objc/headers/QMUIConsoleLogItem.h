// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88ae0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIConsoleLogItem : NSObject
// ivar _level encoding=@"NSString" offset=8
// ivar _name encoding=@"NSString" offset=16
// ivar _timeString encoding=@"NSAttributedString" offset=24
// ivar _logString encoding=@"NSAttributedString" offset=32
// ivar _displayString encoding=@"NSAttributedString" offset=40
// ivar _searchingString encoding=@"NSString" offset=48
// ivar _searchResults encoding=@"NSArray" offset=56
// property level attributes=T@"NSString",C,N,V_level
// property name attributes=T@"NSString",C,N,V_name
// property timeString attributes=T@"NSAttributedString",C,N,V_timeString
// property logString attributes=T@"NSAttributedString",C,N,V_logString
// property displayString attributes=T@"NSAttributedString",C,N,V_displayString
// property searchingString attributes=T@"NSString",C,N,V_searchingString
// property searchResults attributes=T@"NSArray",C,N,V_searchResults
// IMP 0x10046bf80 | v24@0:8@16
- (void)updateDisplayStringWithSearchResults:(id)arg0;
// IMP 0x10046c198 | v24@0:8q16
- (void)focusSearchResultAtIndex:(long long)arg0;
// IMP 0x10046c300 | @16@0:8
- (id)level;
// IMP 0x10046c308 | v24@0:8@16
- (void)setLevel:(id)arg0;
// IMP 0x10046c310 | @16@0:8
- (id)name;
// IMP 0x10046c318 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x10046c320 | @16@0:8
- (id)timeString;
// IMP 0x10046c328 | v24@0:8@16
- (void)setTimeString:(id)arg0;
// IMP 0x10046c330 | @16@0:8
- (id)logString;
// IMP 0x10046c338 | v24@0:8@16
- (void)setLogString:(id)arg0;
// IMP 0x10046c340 | @16@0:8
- (id)displayString;
// IMP 0x10046c348 | v24@0:8@16
- (void)setDisplayString:(id)arg0;
// IMP 0x10046c350 | @16@0:8
- (id)searchingString;
// IMP 0x10046c358 | v24@0:8@16
- (void)setSearchingString:(id)arg0;
// IMP 0x10046c360 | @16@0:8
- (id)searchResults;
// IMP 0x10046c368 | v24@0:8@16
- (void)setSearchResults:(id)arg0;
// IMP 0x10046c370 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10046bca8 | @48@0:8@16@24@32@40
+ (id)logItemWithLevel:(id)arg0 name:(id)arg1 timeString:(id)arg2 logString:(id)arg3;
@end
