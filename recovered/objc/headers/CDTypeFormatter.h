// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98e68
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDTypeFormatter : NSObject
// ivar _typeController encoding=@"CDTypeController" offset=8
// ivar _baseLevel encoding=Q offset=16
// ivar _shouldExpand encoding=B offset=24
// ivar _shouldAutoExpand encoding=B offset=25
// ivar _shouldShowLexing encoding=B offset=26
// property typeController attributes=T@"CDTypeController",W,V_typeController
// property baseLevel attributes=TQ,V_baseLevel
// property shouldExpand attributes=TB,V_shouldExpand
// property shouldAutoExpand attributes=TB,V_shouldAutoExpand
// property shouldShowLexing attributes=TB,V_shouldShowLexing
// IMP 0x1006f95e8 | @16@0:8
- (id)init;
// IMP 0x1006f9644 | @16@0:8
- (id)description;
// IMP 0x1006f972c | @32@0:8@16@24
- (id)_specialCaseVariable:(id)arg0 type:(id)arg1;
// IMP 0x1006f97b8 | @32@0:8@16@24
- (id)_specialCaseVariable:(id)arg0 parsedType:(id)arg1;
// IMP 0x1006f9840 | @32@0:8@16@24
- (id)formatVariable:(id)arg0 type:(id)arg1;
// IMP 0x1006f9978 | @32@0:8@16@24
- (id)formattedTypesForMethodName:(id)arg0 type:(id)arg1;
// IMP 0x1006f9dd4 | @32@0:8@16@24
- (id)formatMethodName:(id)arg0 typeString:(id)arg1;
// IMP 0x1006fa230 | @24@0:8@16
- (id)replacementForType:(id)arg0;
// IMP 0x1006fa2a0 | @32@0:8@16Q24
- (id)typedefNameForStructure:(id)arg0 level:(unsigned long long)arg1;
// IMP 0x1006fa318 | v24@0:8@16
- (void)formattingDidReferenceClassName:(id)arg0;
// IMP 0x1006fa374 | v24@0:8@16
- (void)formattingDidReferenceProtocolNames:(id)arg0;
// IMP 0x1006fa3d0 | @16@0:8
- (id)typeController;
// IMP 0x1006fa3e8 | v24@0:8@16
- (void)setTypeController:(id)arg0;
// IMP 0x1006fa3f4 | Q16@0:8
- (unsigned long long)baseLevel;
// IMP 0x1006fa3fc | v24@0:8Q16
- (void)setBaseLevel:(unsigned long long)arg0;
// IMP 0x1006fa404 | B16@0:8
- (BOOL)shouldExpand;
// IMP 0x1006fa410 | v20@0:8B16
- (void)setShouldExpand:(BOOL)arg0;
// IMP 0x1006fa418 | B16@0:8
- (BOOL)shouldAutoExpand;
// IMP 0x1006fa424 | v20@0:8B16
- (void)setShouldAutoExpand:(BOOL)arg0;
// IMP 0x1006fa42c | B16@0:8
- (BOOL)shouldShowLexing;
// IMP 0x1006fa438 | v20@0:8B16
- (void)setShouldShowLexing:(BOOL)arg0;
// IMP 0x1006fa440 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
