// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c996d8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDTypeLexer : NSObject
// ivar _scanner encoding=@"NSScanner" offset=8
// ivar _state encoding=Q offset=16
// ivar _lexText encoding=@"NSString" offset=24
// ivar _shouldShowLexing encoding=B offset=32
// property scanner attributes=T@"NSScanner",R,V_scanner
// property state attributes=TQ,N,V_state
// property shouldShowLexing attributes=TB,V_shouldShowLexing
// property string attributes=T@"NSString",R,N
// property lexText attributes=T@"NSString",&,V_lexText
// property peekChar attributes=TS,R,N
// property remainingString attributes=T@"NSString",R,N
// property peekIdentifier attributes=T@"NSString",R,N
// IMP 0x100707228 | @24@0:8@16
- (id)initWithString:(id)arg0;
// IMP 0x1007072c0 | v24@0:8Q16
- (void)setState:(unsigned long long)arg0;
// IMP 0x1007072c8 | @16@0:8
- (id)string;
// IMP 0x1007072d0 | i16@0:8
- (int)scanNextToken;
// IMP 0x1007075ac | S16@0:8
- (unsigned short)peekChar;
// IMP 0x1007075b4 | @16@0:8
- (id)remainingString;
// IMP 0x100707610 | @16@0:8
- (id)peekIdentifier;
// IMP 0x1007076d4 | @16@0:8
- (id)scanner;
// IMP 0x1007076e0 | Q16@0:8
- (unsigned long long)state;
// IMP 0x1007076e8 | B16@0:8
- (BOOL)shouldShowLexing;
// IMP 0x1007076f4 | v20@0:8B16
- (void)setShouldShowLexing:(BOOL)arg0;
// IMP 0x1007076fc | @16@0:8
- (id)lexText;
// IMP 0x100707708 | v24@0:8@16
- (void)setLexText:(id)arg0;
// IMP 0x100707710 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
