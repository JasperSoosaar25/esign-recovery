// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99598
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDMachOFile : CDFile
// ivar _byteOrder encoding=Q offset=8
// ivar _loadCommands encoding=@"NSArray" offset=16
// ivar _dylibLoadCommands encoding=@"NSArray" offset=24
// ivar _segments encoding=@"NSArray" offset=32
// ivar _symbolTable encoding=@"CDLCSymbolTable" offset=40
// ivar _dynamicSymbolTable encoding=@"CDLCDynamicSymbolTable" offset=48
// ivar _dyldInfo encoding=@"CDLCDyldInfo" offset=56
// ivar _dylibIdentifier encoding=@"CDLCDylib" offset=64
// ivar _minVersionMacOSX encoding=@"CDLCVersionMinimum" offset=72
// ivar _minVersionIOS encoding=@"CDLCVersionMinimum" offset=80
// ivar _sourceVersion encoding=@"CDLCSourceVersion" offset=88
// ivar _buildVersion encoding=@"CDLCBuildVersion" offset=96
// ivar _runPaths encoding=@"NSArray" offset=104
// ivar _runPathCommands encoding=@"NSArray" offset=112
// ivar _dyldEnvironment encoding=@"NSArray" offset=120
// ivar _reExportedDylibs encoding=@"NSArray" offset=128
// ivar _magic encoding=I offset=136
// ivar _cputype encoding=i offset=140
// ivar _cpusubtype encoding=i offset=144
// ivar _filetype encoding=I offset=148
// ivar _ncmds encoding=I offset=152
// ivar _sizeofcmds encoding=I offset=156
// ivar _flags encoding=I offset=160
// ivar _reserved encoding=I offset=164
// ivar _uses64BitABI encoding=B offset=168
// property byteOrder attributes=TQ,R,V_byteOrder
// property magic attributes=TI,R,V_magic
// property cputype attributes=Ti,V_cputype
// property cpusubtype attributes=Ti,V_cpusubtype
// property filetype attributes=TI,R,V_filetype
// property flags attributes=TI,R,V_flags
// property maskedCPUType attributes=Ti,R,N
// property maskedCPUSubtype attributes=Ti,R,N
// property loadCommands attributes=T@"NSArray",R,V_loadCommands
// property dylibLoadCommands attributes=T@"NSArray",R,V_dylibLoadCommands
// property segments attributes=T@"NSArray",R,V_segments
// property runPaths attributes=T@"NSArray",R,V_runPaths
// property runPathCommands attributes=T@"NSArray",R,V_runPathCommands
// property dyldEnvironment attributes=T@"NSArray",R,V_dyldEnvironment
// property reExportedDylibs attributes=T@"NSArray",R,V_reExportedDylibs
// property symbolTable attributes=T@"CDLCSymbolTable",&,V_symbolTable
// property dynamicSymbolTable attributes=T@"CDLCDynamicSymbolTable",&,V_dynamicSymbolTable
// property dyldInfo attributes=T@"CDLCDyldInfo",&,V_dyldInfo
// property dylibIdentifier attributes=T@"CDLCDylib",&,V_dylibIdentifier
// property minVersionMacOSX attributes=T@"CDLCVersionMinimum",&,V_minVersionMacOSX
// property minVersionIOS attributes=T@"CDLCVersionMinimum",&,V_minVersionIOS
// property sourceVersion attributes=T@"CDLCSourceVersion",&,V_sourceVersion
// property buildVersion attributes=T@"CDLCBuildVersion",&,V_buildVersion
// property uses64BitABI attributes=TB,R,V_uses64BitABI
// property importBaseName attributes=T@"NSString",R,N
// property isEncrypted attributes=TB,R,N
// property hasProtectedSegments attributes=TB,R,N
// property canDecryptAllSegments attributes=TB,R,N
// property UUID attributes=T@"NSUUID",R,N
// property archName attributes=T@"NSString",R,N
// property hasObjectiveC1Data attributes=TB,R,N
// property hasObjectiveC2Data attributes=TB,R,N
// property processorClass attributes=T#,R,N
// IMP 0x100704238 | @16@0:8
- (id)init;
// IMP 0x10070427c | @40@0:8@16@24@32
- (id)initWithData:(id)arg0 filename:(id)arg1 searchPathState:(id)arg2;
// IMP 0x10070454c | v28@0:8@16I24
- (void)_readLoadCommands:(id)arg0 count:(unsigned int)arg1;
// IMP 0x100704a40 | @16@0:8
- (id)description;
// IMP 0x100704b80 | @24@0:8{?=ii}16
- (id)machOFileWithArch:(void * /* aggregate ? */)arg0;
// IMP 0x100704bd0 | i16@0:8
- (int)maskedCPUType;
// IMP 0x100704be8 | i16@0:8
- (int)maskedCPUSubtype;
// IMP 0x100704c00 | Q16@0:8
- (unsigned long long)ptrSize;
// IMP 0x100704c24 | B24@0:8^{?=ii}16
- (BOOL)bestMatchForArch:(void * /* aggregate ? */ *)arg0;
// IMP 0x100704c60 | @16@0:8
- (id)filetypeDescription;
// IMP 0x100704c94 | @16@0:8
- (id)flagDescription;
// IMP 0x100704f0c | @16@0:8
- (id)dataConstSegment;
// IMP 0x100704f58 | @24@0:8@16
- (id)segmentWithName:(id)arg0;
// IMP 0x1007050cc | @24@0:8Q16
- (id)segmentContainingAddress:(unsigned long long)arg0;
// IMP 0x10070520c | v24@0:8@16
- (void)showWarning:(id)arg0;
// IMP 0x100705210 | @24@0:8Q16
- (id)stringAtAddress:(unsigned long long)arg0;
// IMP 0x100705354 | Q24@0:8Q16
- (unsigned long long)dataOffsetForAddress:(unsigned long long)arg0;
// IMP 0x1007053b0 | r^v16@0:8
- (void *)bytes;
// IMP 0x1007053f0 | r^v24@0:8Q16
- (void *)bytesAtOffset:(unsigned long long)arg0;
// IMP 0x100705434 | @16@0:8
- (id)importBaseName;
// IMP 0x100705494 | B16@0:8
- (BOOL)isEncrypted;
// IMP 0x1007055c0 | B16@0:8
- (BOOL)hasProtectedSegments;
// IMP 0x1007056ec | B16@0:8
- (BOOL)canDecryptAllSegments;
// IMP 0x10070581c | @20@0:8B16
- (id)loadCommandString:(BOOL)arg0;
// IMP 0x100705900 | @20@0:8B16
- (id)headerString:(BOOL)arg0;
// IMP 0x100705b3c | @16@0:8
- (id)UUID;
// IMP 0x100705c6c | @16@0:8
- (id)archName;
// IMP 0x100705ca0 | v24@0:8Q16
- (void)logInfoForAddress:(unsigned long long)arg0;
// IMP 0x100705d18 | @24@0:8Q16
- (id)externalClassNameForAddress:(unsigned long long)arg0;
// IMP 0x100705e64 | B24@0:8Q16
- (BOOL)hasRelocationEntryForAddress:(unsigned long long)arg0;
// IMP 0x100705ef0 | B24@0:8Q16
- (BOOL)hasRelocationEntryForAddress2:(unsigned long long)arg0;
// IMP 0x100705f44 | @24@0:8Q16
- (id)externalClassNameForAddress2:(unsigned long long)arg0;
// IMP 0x100705fec | B16@0:8
- (BOOL)hasObjectiveC1Data;
// IMP 0x100706028 | B16@0:8
- (BOOL)hasObjectiveC2Data;
// IMP 0x10070607c | #16@0:8
- (Class)processorClass;
// IMP 0x1007060b8 | @24@0:8Q16
- (id)dylibLoadCommandForLibraryOrdinal:(unsigned long long)arg0;
// IMP 0x100706178 | @16@0:8
- (id)architectureNameDescription;
// IMP 0x10070617c | Q16@0:8
- (unsigned long long)byteOrder;
// IMP 0x10070618c | I16@0:8
- (unsigned int)magic;
// IMP 0x10070619c | i16@0:8
- (int)cputype;
// IMP 0x1007061ac | v20@0:8i16
- (void)setCputype:(int)arg0;
// IMP 0x1007061bc | i16@0:8
- (int)cpusubtype;
// IMP 0x1007061cc | v20@0:8i16
- (void)setCpusubtype:(int)arg0;
// IMP 0x1007061dc | I16@0:8
- (unsigned int)filetype;
// IMP 0x1007061ec | I16@0:8
- (unsigned int)flags;
// IMP 0x1007061fc | @16@0:8
- (id)loadCommands;
// IMP 0x10070620c | @16@0:8
- (id)dylibLoadCommands;
// IMP 0x10070621c | @16@0:8
- (id)segments;
// IMP 0x10070622c | @16@0:8
- (id)runPaths;
// IMP 0x10070623c | @16@0:8
- (id)runPathCommands;
// IMP 0x10070624c | @16@0:8
- (id)dyldEnvironment;
// IMP 0x10070625c | @16@0:8
- (id)reExportedDylibs;
// IMP 0x10070626c | @16@0:8
- (id)symbolTable;
// IMP 0x10070627c | v24@0:8@16
- (void)setSymbolTable:(id)arg0;
// IMP 0x100706288 | @16@0:8
- (id)dynamicSymbolTable;
// IMP 0x100706298 | v24@0:8@16
- (void)setDynamicSymbolTable:(id)arg0;
// IMP 0x1007062a4 | @16@0:8
- (id)dyldInfo;
// IMP 0x1007062b4 | v24@0:8@16
- (void)setDyldInfo:(id)arg0;
// IMP 0x1007062c0 | @16@0:8
- (id)dylibIdentifier;
// IMP 0x1007062d0 | v24@0:8@16
- (void)setDylibIdentifier:(id)arg0;
// IMP 0x1007062dc | @16@0:8
- (id)minVersionMacOSX;
// IMP 0x1007062ec | v24@0:8@16
- (void)setMinVersionMacOSX:(id)arg0;
// IMP 0x1007062f8 | @16@0:8
- (id)minVersionIOS;
// IMP 0x100706308 | v24@0:8@16
- (void)setMinVersionIOS:(id)arg0;
// IMP 0x100706314 | @16@0:8
- (id)sourceVersion;
// IMP 0x100706324 | v24@0:8@16
- (void)setSourceVersion:(id)arg0;
// IMP 0x100706330 | @16@0:8
- (id)buildVersion;
// IMP 0x100706340 | v24@0:8@16
- (void)setBuildVersion:(id)arg0;
// IMP 0x10070634c | B16@0:8
- (BOOL)uses64BitABI;
// IMP 0x100706360 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
