// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98430
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDVisitor : NSObject
// ivar _classDump encoding=@"CDClassDump" offset=8
// ivar _shouldShowStructureSection encoding=B offset=16
// ivar _shouldShowProtocolSection encoding=B offset=17
// property classDump attributes=T@"CDClassDump",&,V_classDump
// property shouldShowStructureSection attributes=TB,V_shouldShowStructureSection
// property shouldShowProtocolSection attributes=TB,V_shouldShowProtocolSection
// IMP 0x1006e692c | @16@0:8
- (id)init;
// IMP 0x1006e696c | v16@0:8
- (void)willBeginVisiting;
// IMP 0x1006e6970 | v16@0:8
- (void)didEndVisiting;
// IMP 0x1006e6974 | v24@0:8@16
- (void)willVisitObjectiveCProcessor:(id)arg0;
// IMP 0x1006e6978 | v24@0:8@16
- (void)visitObjectiveCProcessor:(id)arg0;
// IMP 0x1006e697c | v24@0:8@16
- (void)willVisitPropertiesOfProtocol:(id)arg0;
// IMP 0x1006e6980 | v24@0:8@16
- (void)didVisitPropertiesOfProtocol:(id)arg0;
// IMP 0x1006e6984 | v16@0:8
- (void)willVisitOptionalMethods;
// IMP 0x1006e6988 | v16@0:8
- (void)didVisitOptionalMethods;
// IMP 0x1006e698c | v24@0:8@16
- (void)didVisitObjectiveCProcessor:(id)arg0;
// IMP 0x1006e6990 | v24@0:8@16
- (void)willVisitProtocol:(id)arg0;
// IMP 0x1006e6994 | v24@0:8@16
- (void)didVisitProtocol:(id)arg0;
// IMP 0x1006e6998 | v24@0:8@16
- (void)willVisitClass:(id)arg0;
// IMP 0x1006e699c | v24@0:8@16
- (void)didVisitClass:(id)arg0;
// IMP 0x1006e69a0 | v24@0:8@16
- (void)willVisitIvarsOfClass:(id)arg0;
// IMP 0x1006e69a4 | v24@0:8@16
- (void)didVisitIvarsOfClass:(id)arg0;
// IMP 0x1006e69a8 | v24@0:8@16
- (void)willVisitPropertiesOfClass:(id)arg0;
// IMP 0x1006e69ac | v24@0:8@16
- (void)didVisitPropertiesOfClass:(id)arg0;
// IMP 0x1006e69b0 | v24@0:8@16
- (void)willVisitCategory:(id)arg0;
// IMP 0x1006e69b4 | v24@0:8@16
- (void)didVisitCategory:(id)arg0;
// IMP 0x1006e69b8 | v24@0:8@16
- (void)willVisitPropertiesOfCategory:(id)arg0;
// IMP 0x1006e69bc | v24@0:8@16
- (void)didVisitPropertiesOfCategory:(id)arg0;
// IMP 0x1006e69c0 | v24@0:8@16
- (void)visitClassMethod:(id)arg0;
// IMP 0x1006e69c4 | v32@0:8@16@24
- (void)visitInstanceMethod:(id)arg0 propertyState:(id)arg1;
// IMP 0x1006e69c8 | v24@0:8@16
- (void)visitIvar:(id)arg0;
// IMP 0x1006e69cc | v24@0:8@16
- (void)visitProperty:(id)arg0;
// IMP 0x1006e69d0 | v24@0:8@16
- (void)visitRemainingProperties:(id)arg0;
// IMP 0x1006e69d4 | @16@0:8
- (id)classDump;
// IMP 0x1006e69e0 | v24@0:8@16
- (void)setClassDump:(id)arg0;
// IMP 0x1006e69e8 | B16@0:8
- (BOOL)shouldShowStructureSection;
// IMP 0x1006e69f4 | v20@0:8B16
- (void)setShouldShowStructureSection:(BOOL)arg0;
// IMP 0x1006e69fc | B16@0:8
- (BOOL)shouldShowProtocolSection;
// IMP 0x1006e6a08 | v20@0:8B16
- (void)setShouldShowProtocolSection:(BOOL)arg0;
// IMP 0x1006e6a10 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
