// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98660
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDStructureTable : NSObject
// ivar _typeController encoding=@"CDTypeController" offset=8
// ivar _identifier encoding=@"NSString" offset=16
// ivar _anonymousBaseName encoding=@"NSString" offset=24
// ivar _phase0_structureInfo encoding=@"NSMutableDictionary" offset=32
// ivar _phase1_structureInfo encoding=@"NSMutableDictionary" offset=40
// ivar _phase1_maxDepth encoding=Q offset=48
// ivar _phase1_groupedByDepth encoding=@"NSMutableDictionary" offset=56
// ivar _phase2_namedStructureInfo encoding=@"NSMutableDictionary" offset=64
// ivar _phase2_anonStructureInfo encoding=@"NSMutableDictionary" offset=72
// ivar _phase2_nameExceptions encoding=@"NSMutableArray" offset=80
// ivar _phase2_anonExceptions encoding=@"NSMutableArray" offset=88
// ivar _phase3_namedStructureInfo encoding=@"NSMutableDictionary" offset=96
// ivar _phase3_anonStructureInfo encoding=@"NSMutableDictionary" offset=104
// ivar _phase3_nameExceptions encoding=@"NSMutableDictionary" offset=112
// ivar _phase3_anonExceptions encoding=@"NSMutableDictionary" offset=120
// ivar _phase3_exceptionalNames encoding=@"NSMutableSet" offset=128
// ivar _phase3_inMethodNameExceptions encoding=@"NSMutableSet" offset=136
// ivar _shouldDebug encoding=B offset=144
// ivar _debugNames encoding=@"NSMutableSet" offset=152
// ivar _debugAnon encoding=@"NSMutableSet" offset=160
// property identifier attributes=T@"NSString",&,V_identifier
// property anonymousBaseName attributes=T@"NSString",&,V_anonymousBaseName
// property shouldDebug attributes=TB,V_shouldDebug
// property typeController attributes=T@"CDTypeController",W,V_typeController
// property phase1_maxDepth attributes=TQ,R,N
// IMP 0x1006e9de4 | @16@0:8
- (id)init;
// IMP 0x1006ea004 | v28@0:8@16B24
- (void)phase0RegisterStructure:(id)arg0 usedInMethod:(BOOL)arg1;
// IMP 0x1006ea0d4 | v16@0:8
- (void)finishPhase0;
// IMP 0x1006ea414 | v16@0:8
- (void)runPhase1;
// IMP 0x1006ea550 | v24@0:8@16
- (void)phase1RegisterStructure:(id)arg0;
// IMP 0x1006ea5e8 | v16@0:8
- (void)finishPhase1;
// IMP 0x1006ea854 | Q16@0:8
- (unsigned long long)phase1_maxDepth;
// IMP 0x1006ea85c | v24@0:8Q16
- (void)runPhase2AtDepth:(unsigned long long)arg0;
// IMP 0x1006eb0f8 | @24@0:8@16
- (id)phase2ReplacementForType:(id)arg0;
// IMP 0x1006eb1e8 | v16@0:8
- (void)finishPhase2;
// IMP 0x1006eb474 | v16@0:8
- (void)phase2ReplacementOnPhase0;
// IMP 0x1006eb5b4 | v16@0:8
- (void)buildPhase3Exceptions;
// IMP 0x1006eb840 | v16@0:8
- (void)runPhase3;
// IMP 0x1006eb9ac | v36@0:8@16Q24B32
- (void)phase3RegisterStructure:(id)arg0 count:(unsigned long long)arg1 usedInMethod:(BOOL)arg2;
// IMP 0x1006ebd44 | v16@0:8
- (void)finishPhase3;
// IMP 0x1006ec12c | @24@0:8@16
- (id)phase3ReplacementForType:(id)arg0;
// IMP 0x1006ec21c | v16@0:8
- (void)generateTypedefNames;
// IMP 0x1006ec6b8 | v16@0:8
- (void)generateMemberNames;
// IMP 0x1006ec9e0 | v40@0:8@16@24@32
- (void)appendNamedStructuresToString:(id)arg0 formatter:(id)arg1 markName:(id)arg2;
// IMP 0x1006ece98 | v40@0:8@16@24@32
- (void)appendTypedefsToString:(id)arg0 formatter:(id)arg1 markName:(id)arg2;
// IMP 0x1006ed3ec | B24@0:8@16
- (BOOL)shouldExpandStructureInfo:(id)arg0;
// IMP 0x1006ed52c | B24@0:8@16
- (BOOL)shouldExpandType:(id)arg0;
// IMP 0x1006ed688 | @24@0:8@16
- (id)typedefNameForType:(id)arg0;
// IMP 0x1006ed7e8 | v24@0:8@16
- (void)debugName:(id)arg0;
// IMP 0x1006ed7f0 | v24@0:8@16
- (void)debugAnon:(id)arg0;
// IMP 0x1006ed7f8 | v16@0:8
- (void)logPhase0Info;
// IMP 0x1006ed8f4 | v16@0:8
- (void)logPhase2Info;
// IMP 0x1006ed9d4 | v16@0:8
- (void)logPhase3Info;
// IMP 0x1006edad0 | @16@0:8
- (id)identifier;
// IMP 0x1006edadc | v24@0:8@16
- (void)setIdentifier:(id)arg0;
// IMP 0x1006edae4 | @16@0:8
- (id)anonymousBaseName;
// IMP 0x1006edaf0 | v24@0:8@16
- (void)setAnonymousBaseName:(id)arg0;
// IMP 0x1006edaf8 | B16@0:8
- (BOOL)shouldDebug;
// IMP 0x1006edb04 | v20@0:8B16
- (void)setShouldDebug:(BOOL)arg0;
// IMP 0x1006edb0c | @16@0:8
- (id)typeController;
// IMP 0x1006edb24 | v24@0:8@16
- (void)setTypeController:(id)arg0;
// IMP 0x1006edb30 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
