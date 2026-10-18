// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c985c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDTypeParser : NSObject
// ivar _lexer encoding=@"CDTypeLexer" offset=8
// ivar _lookahead encoding=i offset=16
// property lexer attributes=T@"CDTypeLexer",R,V_lexer
// IMP 0x1006e7c64 | @24@0:8@16
- (id)initWithString:(id)arg0;
// IMP 0x1006e7d34 | @24@0:8^@16
- (id)parseMethodType:(id *)arg0;
// IMP 0x1006e806c | @24@0:8^@16
- (id)parseType:(id *)arg0;
// IMP 0x1006e83a4 | v20@0:8i16
- (void)match:(int)arg0;
// IMP 0x1006e83f4 | v28@0:8i16Q20
- (void)match:(int)arg0 enterState:(unsigned long long)arg1;
// IMP 0x1006e8524 | v24@0:8@16
- (void)error:(id)arg0;
// IMP 0x1006e8560 | @16@0:8
- (id)_parseMethodType;
// IMP 0x1006e8620 | @16@0:8
- (id)_parseType;
// IMP 0x1006e8628 | @20@0:8B16
- (id)_parseTypeInStruct:(BOOL)arg0;
// IMP 0x1006e8d7c | @16@0:8
- (id)parseUnionTypes;
// IMP 0x1006e8e04 | @16@0:8
- (id)parseOptionalMembers;
// IMP 0x1006e8e4c | @16@0:8
- (id)parseMemberList;
// IMP 0x1006e8ed0 | @16@0:8
- (id)parseMember;
// IMP 0x1006e9014 | @16@0:8
- (id)parseTypeName;
// IMP 0x1006e91b0 | @16@0:8
- (id)parseIdentifier;
// IMP 0x1006e9220 | @16@0:8
- (id)parseNumber;
// IMP 0x1006e9290 | B20@0:8i16
- (BOOL)isTokenInModifierSet:(int)arg0;
// IMP 0x1006e92f0 | B20@0:8i16
- (BOOL)isTokenInSimpleTypeSet:(int)arg0;
// IMP 0x1006e9444 | B20@0:8i16
- (BOOL)isTokenInTypeSet:(int)arg0;
// IMP 0x1006e94bc | B20@0:8i16
- (BOOL)isTokenInTypeStartSet:(int)arg0;
// IMP 0x1006e94fc | @16@0:8
- (id)lexer;
// IMP 0x1006e9508 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
