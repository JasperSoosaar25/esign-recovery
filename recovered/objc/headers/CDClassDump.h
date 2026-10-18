// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c990e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDClassDump : NSObject
// ivar _searchPathState encoding=@"CDSearchPathState" offset=8
// ivar _shouldProcessRecursively encoding=B offset=16
// ivar _shouldSortClasses encoding=B offset=17
// ivar _shouldSortClassesByInheritance encoding=B offset=18
// ivar _shouldSortMethods encoding=B offset=19
// ivar _shouldShowIvarOffsets encoding=B offset=20
// ivar _shouldShowMethodAddresses encoding=B offset=21
// ivar _shouldShowHeader encoding=B offset=22
// ivar _regularExpression encoding=@"NSRegularExpression" offset=24
// ivar _sdkRoot encoding=@"NSString" offset=32
// ivar _machOFiles encoding=@"NSMutableArray" offset=40
// ivar _machOFilesByName encoding=@"NSMutableDictionary" offset=48
// ivar _objcProcessors encoding=@"NSMutableArray" offset=56
// ivar _typeController encoding=@"CDTypeController" offset=64
// ivar _targetArch encoding={?="cputype"i"cpusubtype"i} offset=72
// property searchPathState attributes=T@"CDSearchPathState",R,V_searchPathState
// property shouldProcessRecursively attributes=TB,V_shouldProcessRecursively
// property shouldSortClasses attributes=TB,V_shouldSortClasses
// property shouldSortClassesByInheritance attributes=TB,V_shouldSortClassesByInheritance
// property shouldSortMethods attributes=TB,V_shouldSortMethods
// property shouldShowIvarOffsets attributes=TB,V_shouldShowIvarOffsets
// property shouldShowMethodAddresses attributes=TB,V_shouldShowMethodAddresses
// property shouldShowHeader attributes=TB,V_shouldShowHeader
// property regularExpression attributes=T@"NSRegularExpression",&,V_regularExpression
// property sdkRoot attributes=T@"NSString",&,V_sdkRoot
// property machOFiles attributes=T@"NSArray",R,V_machOFiles
// property objcProcessors attributes=T@"NSArray",R,V_objcProcessors
// property targetArch attributes=T{?=ii},V_targetArch
// property containsObjectiveCData attributes=TB,R,N
// property hasEncryptedFiles attributes=TB,R,N
// property hasObjectiveCRuntimeInfo attributes=TB,R,N
// property typeController attributes=T@"CDTypeController",R,V_typeController
// IMP 0x1006fe1ec | @16@0:8
- (id)init;
// IMP 0x1006fe2f0 | B24@0:8@16
- (BOOL)shouldShowName:(id)arg0;
// IMP 0x1006fe3a8 | B16@0:8
- (BOOL)containsObjectiveCData;
// IMP 0x1006fe4a8 | B16@0:8
- (BOOL)hasEncryptedFiles;
// IMP 0x1006fe5a8 | B16@0:8
- (BOOL)hasObjectiveCRuntimeInfo;
// IMP 0x1006fe5e0 | B32@0:8@16^@24
- (BOOL)loadFile:(id)arg0 error:(id *)arg1;
// IMP 0x1006feb40 | v16@0:8
- (void)processObjectiveCData;
// IMP 0x1006fec68 | v24@0:8@16
- (void)recursivelyVisit:(id)arg0;
// IMP 0x1006fed84 | @24@0:8@16
- (id)machOFileWithName:(id)arg0;
// IMP 0x1006ff098 | v24@0:8@16
- (void)appendHeaderToString:(id)arg0;
// IMP 0x1006ff1a8 | v16@0:8
- (void)registerTypes;
// IMP 0x1006ff310 | v16@0:8
- (void)showHeader;
// IMP 0x1006ff3b8 | v16@0:8
- (void)showLoadCommands;
// IMP 0x1006ff460 | @16@0:8
- (id)searchPathState;
// IMP 0x1006ff46c | B16@0:8
- (BOOL)shouldProcessRecursively;
// IMP 0x1006ff478 | v20@0:8B16
- (void)setShouldProcessRecursively:(BOOL)arg0;
// IMP 0x1006ff480 | B16@0:8
- (BOOL)shouldSortClasses;
// IMP 0x1006ff48c | v20@0:8B16
- (void)setShouldSortClasses:(BOOL)arg0;
// IMP 0x1006ff494 | B16@0:8
- (BOOL)shouldSortClassesByInheritance;
// IMP 0x1006ff4a0 | v20@0:8B16
- (void)setShouldSortClassesByInheritance:(BOOL)arg0;
// IMP 0x1006ff4a8 | B16@0:8
- (BOOL)shouldSortMethods;
// IMP 0x1006ff4b4 | v20@0:8B16
- (void)setShouldSortMethods:(BOOL)arg0;
// IMP 0x1006ff4bc | B16@0:8
- (BOOL)shouldShowIvarOffsets;
// IMP 0x1006ff4c8 | v20@0:8B16
- (void)setShouldShowIvarOffsets:(BOOL)arg0;
// IMP 0x1006ff4d0 | B16@0:8
- (BOOL)shouldShowMethodAddresses;
// IMP 0x1006ff4dc | v20@0:8B16
- (void)setShouldShowMethodAddresses:(BOOL)arg0;
// IMP 0x1006ff4e4 | B16@0:8
- (BOOL)shouldShowHeader;
// IMP 0x1006ff4f0 | v20@0:8B16
- (void)setShouldShowHeader:(BOOL)arg0;
// IMP 0x1006ff4f8 | @16@0:8
- (id)regularExpression;
// IMP 0x1006ff504 | v24@0:8@16
- (void)setRegularExpression:(id)arg0;
// IMP 0x1006ff50c | @16@0:8
- (id)sdkRoot;
// IMP 0x1006ff518 | v24@0:8@16
- (void)setSdkRoot:(id)arg0;
// IMP 0x1006ff520 | @16@0:8
- (id)machOFiles;
// IMP 0x1006ff52c | @16@0:8
- (id)objcProcessors;
// IMP 0x1006ff538 | {?=ii}16@0:8
- (void * /* aggregate ? */)targetArch;
// IMP 0x1006ff56c | v24@0:8{?=ii}16
- (void)setTargetArch:(void * /* aggregate ? */)arg0;
// IMP 0x1006ff5a0 | @16@0:8
- (id)typeController;
// IMP 0x1006ff5ac | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
