// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9edc0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRegex : NSObject
// ivar patternstring encoding=@"NSString" offset=8
// ivar preg encoding={?="re_magic"i"re_nsub"Q"re_endp"*"re_g"^{re_guts}} offset=16
// ivar matches encoding=^{?=qq} offset=48
// ivar matchrange encoding={_NSRange="location"Q"length"Q} offset=56
// ivar currdata encoding=@"NSData" offset=72
// IMP 0x1008e1a00 | @28@0:8@16i24
- (id)initWithPattern:(id)arg0 options:(int)arg1;
// IMP 0x1008e1b64 | v16@0:8
- (void)dealloc;
// IMP 0x1008e1bc4 | v24@0:8@16
- (void)beginMatchingString:(id)arg0;
// IMP 0x1008e1c04 | v24@0:8@16
- (void)beginMatchingData:(id)arg0;
// IMP 0x1008e1c4c | v40@0:8@16{_NSRange=QQ}24
- (void)beginMatchingData:(id)arg0 range:(struct _NSRange)arg1;
// IMP 0x1008e1c8c | v16@0:8
- (void)finishMatching;
// IMP 0x1008e1cb4 | B16@0:8
- (BOOL)matchNext;
// IMP 0x1008e1d50 | @20@0:8i16
- (id)stringForMatch:(int)arg0;
// IMP 0x1008e1e48 | @16@0:8
- (id)allMatches;
// IMP 0x1008e1f10 | B24@0:8@16
- (BOOL)matchesString:(id)arg0;
// IMP 0x1008e1f60 | @24@0:8@16
- (id)matchedSubstringOfString:(id)arg0;
// IMP 0x1008e1fd0 | @24@0:8@16
- (id)capturedSubstringsOfString:(id)arg0;
// IMP 0x1008e203c | @24@0:8@16
- (id)allMatchedSubstringsOfString:(id)arg0;
// IMP 0x1008e2108 | @24@0:8@16
- (id)allCapturedSubstringsOfString:(id)arg0;
// IMP 0x1008e21d0 | @24@0:8@16
- (id)componentsOfSeparatedString:(id)arg0;
// IMP 0x1008e233c | @16@0:8
- (id)pattern;
// IMP 0x1008e2344 | @16@0:8
- (id)description;
// IMP 0x1008e1614 | @28@0:8@16i24
+ (id)regexWithPattern:(id)arg0 options:(int)arg1;
// IMP 0x1008e1654 | @24@0:8@16
+ (id)regexWithPattern:(id)arg0;
// IMP 0x1008e1690 | @16@0:8
+ (id)null;
// IMP 0x1008e16d8 | @24@0:8@16
+ (id)patternForLiteralString:(id)arg0;
// IMP 0x1008e1810 | @24@0:8@16
+ (id)patternForGlob:(id)arg0;
@end
