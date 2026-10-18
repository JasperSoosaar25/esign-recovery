// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99368
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDTextClassDumpVisitor : CDVisitor
// ivar _resultString encoding=@"NSMutableString" offset=8
// property resultString attributes=T@"NSMutableString",R,V_resultString
// IMP 0x100701500 | @16@0:8
- (id)init;
// IMP 0x100701570 | v24@0:8@16
- (void)willVisitClass:(id)arg0;
// IMP 0x100701730 | v24@0:8@16
- (void)didVisitClass:(id)arg0;
// IMP 0x1007017a4 | v24@0:8@16
- (void)willVisitIvarsOfClass:(id)arg0;
// IMP 0x1007017dc | v24@0:8@16
- (void)didVisitIvarsOfClass:(id)arg0;
// IMP 0x100701814 | v24@0:8@16
- (void)willVisitCategory:(id)arg0;
// IMP 0x100701958 | v24@0:8@16
- (void)didVisitCategory:(id)arg0;
// IMP 0x100701990 | v24@0:8@16
- (void)willVisitProtocol:(id)arg0;
// IMP 0x100701ab8 | v16@0:8
- (void)willVisitOptionalMethods;
// IMP 0x100701af0 | v24@0:8@16
- (void)didVisitProtocol:(id)arg0;
// IMP 0x100701b28 | v24@0:8@16
- (void)visitClassMethod:(id)arg0;
// IMP 0x100701c14 | v32@0:8@16@24
- (void)visitInstanceMethod:(id)arg0 propertyState:(id)arg1;
// IMP 0x100701d8c | v24@0:8@16
- (void)visitIvar:(id)arg0;
// IMP 0x100701e50 | v24@0:8@16
- (void)visitProperty:(id)arg0;
// IMP 0x100701fb4 | v24@0:8@16
- (void)didVisitPropertiesOfClass:(id)arg0;
// IMP 0x100702034 | v24@0:8@16
- (void)willVisitPropertiesOfCategory:(id)arg0;
// IMP 0x1007020b4 | v24@0:8@16
- (void)didVisitPropertiesOfCategory:(id)arg0;
// IMP 0x100702134 | v24@0:8@16
- (void)willVisitPropertiesOfProtocol:(id)arg0;
// IMP 0x1007021b4 | v24@0:8@16
- (void)didVisitPropertiesOfProtocol:(id)arg0;
// IMP 0x100702234 | v24@0:8@16
- (void)visitRemainingProperties:(id)arg0;
// IMP 0x1007023a4 | v16@0:8
- (void)writeResultToStandardOutput;
// IMP 0x100702414 | v40@0:8@16@24@32
- (void)_visitProperty:(id)arg0 parsedType:(id)arg1 attributes:(id)arg2;
// IMP 0x100702b54 | @16@0:8
- (id)resultString;
// IMP 0x100702b64 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
