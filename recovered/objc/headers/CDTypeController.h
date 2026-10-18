// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99048
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDTypeController : NSObject
// ivar _classDump encoding=@"CDClassDump" offset=8
// ivar _delegate encoding=@"<CDTypeControllerDelegate>" offset=16
// ivar _ivarTypeFormatter encoding=@"CDTypeFormatter" offset=24
// ivar _methodTypeFormatter encoding=@"CDTypeFormatter" offset=32
// ivar _propertyTypeFormatter encoding=@"CDTypeFormatter" offset=40
// ivar _structDeclarationTypeFormatter encoding=@"CDTypeFormatter" offset=48
// ivar _structureTable encoding=@"CDStructureTable" offset=56
// ivar _unionTable encoding=@"CDStructureTable" offset=64
// ivar _hasUnknownFunctionPointers encoding=B offset=72
// ivar _hasUnknownBlocks encoding=B offset=73
// property classDump attributes=T@"CDClassDump",R,W,V_classDump
// property structureTable attributes=T@"CDStructureTable",R,V_structureTable
// property unionTable attributes=T@"CDStructureTable",R,V_unionTable
// property delegate attributes=T@"<CDTypeControllerDelegate>",W,V_delegate
// property ivarTypeFormatter attributes=T@"CDTypeFormatter",R,V_ivarTypeFormatter
// property methodTypeFormatter attributes=T@"CDTypeFormatter",R,V_methodTypeFormatter
// property propertyTypeFormatter attributes=T@"CDTypeFormatter",R,V_propertyTypeFormatter
// property structDeclarationTypeFormatter attributes=T@"CDTypeFormatter",R,V_structDeclarationTypeFormatter
// property shouldShowIvarOffsets attributes=TB,R,N
// property shouldShowMethodAddresses attributes=TB,R,N
// property targetArchUses64BitABI attributes=TB,R,N
// property hasUnknownFunctionPointers attributes=TB,N,V_hasUnknownFunctionPointers
// property hasUnknownBlocks attributes=TB,N,V_hasUnknownBlocks
// IMP 0x1006fcf28 | @24@0:8@16
- (id)initWithClassDump:(id)arg0;
// IMP 0x1006fd164 | B16@0:8
- (BOOL)shouldShowIvarOffsets;
// IMP 0x1006fd1a0 | B16@0:8
- (BOOL)shouldShowMethodAddresses;
// IMP 0x1006fd1dc | B16@0:8
- (BOOL)targetArchUses64BitABI;
// IMP 0x1006fd21c | @32@0:8@16@24
- (id)typeFormatter:(id)arg0 replacementForType:(id)arg1;
// IMP 0x1006fd224 | @40@0:8@16@24Q32
- (id)typeFormatter:(id)arg0 typedefNameForStructure:(id)arg1 level:(unsigned long long)arg2;
// IMP 0x1006fd2d0 | v32@0:8@16@24
- (void)typeFormatter:(id)arg0 didReferenceClassName:(id)arg1;
// IMP 0x1006fd35c | v32@0:8@16@24
- (void)typeFormatter:(id)arg0 didReferenceProtocolNames:(id)arg1;
// IMP 0x1006fd3e8 | v24@0:8@16
- (void)appendStructuresToString:(id)arg0;
// IMP 0x1006fd5ec | v16@0:8
- (void)generateTypedefNames;
// IMP 0x1006fd640 | v16@0:8
- (void)generateMemberNames;
// IMP 0x1006fd694 | v16@0:8
- (void)workSomeMagic;
// IMP 0x1006fd6d0 | v28@0:8@16B24
- (void)phase0RegisterStructure:(id)arg0 usedInMethod:(BOOL)arg1;
// IMP 0x1006fd760 | v24@0:8Q16
- (void)endPhase:(unsigned long long)arg0;
// IMP 0x1006fd7bc | v16@0:8
- (void)startPhase1;
// IMP 0x1006fd850 | v24@0:8@16
- (void)phase1RegisterStructure:(id)arg0;
// IMP 0x1006fd8d0 | v16@0:8
- (void)startPhase2;
// IMP 0x1006fd9fc | v16@0:8
- (void)startPhase3;
// IMP 0x1006fdb10 | @24@0:8@16
- (id)phase2ReplacementForType:(id)arg0;
// IMP 0x1006fdbb4 | v24@0:8@16
- (void)phase3RegisterStructure:(id)arg0;
// IMP 0x1006fdc5c | @24@0:8@16
- (id)phase3ReplacementForType:(id)arg0;
// IMP 0x1006fdd00 | B24@0:8@16
- (BOOL)shouldShowName:(id)arg0;
// IMP 0x1006fdd64 | B24@0:8@16
- (BOOL)shouldExpandType:(id)arg0;
// IMP 0x1006fde00 | @24@0:8@16
- (id)typedefNameForType:(id)arg0;
// IMP 0x1006fdea4 | @16@0:8
- (id)delegate;
// IMP 0x1006fdebc | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1006fdec8 | @16@0:8
- (id)ivarTypeFormatter;
// IMP 0x1006fded4 | @16@0:8
- (id)methodTypeFormatter;
// IMP 0x1006fdee0 | @16@0:8
- (id)propertyTypeFormatter;
// IMP 0x1006fdeec | @16@0:8
- (id)structDeclarationTypeFormatter;
// IMP 0x1006fdef8 | B16@0:8
- (BOOL)hasUnknownFunctionPointers;
// IMP 0x1006fdf00 | v20@0:8B16
- (void)setHasUnknownFunctionPointers:(BOOL)arg0;
// IMP 0x1006fdf08 | B16@0:8
- (BOOL)hasUnknownBlocks;
// IMP 0x1006fdf10 | v20@0:8B16
- (void)setHasUnknownBlocks:(BOOL)arg0;
// IMP 0x1006fdf18 | @16@0:8
- (id)classDump;
// IMP 0x1006fdf30 | @16@0:8
- (id)structureTable;
// IMP 0x1006fdf3c | @16@0:8
- (id)unionTable;
// IMP 0x1006fdf48 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
