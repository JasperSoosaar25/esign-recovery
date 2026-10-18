// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c983e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDFatArch : NSObject
// ivar _fatFile encoding=@"CDFatFile" offset=8
// ivar _cputype encoding=i offset=16
// ivar _cpusubtype encoding=i offset=20
// ivar _offset encoding=I offset=24
// ivar _size encoding=I offset=28
// ivar _align encoding=I offset=32
// ivar _machOFile encoding=@"CDMachOFile" offset=40
// property cputype attributes=Ti,V_cputype
// property cpusubtype attributes=Ti,V_cpusubtype
// property offset attributes=TI,V_offset
// property size attributes=TI,V_size
// property align attributes=TI,V_align
// property maskedCPUType attributes=Ti,R,N
// property maskedCPUSubtype attributes=Ti,R,N
// property uses64BitABI attributes=TB,R,N
// property uses64BitLibraries attributes=TB,R,N
// property fatFile attributes=T@"CDFatFile",W,V_fatFile
// property arch attributes=T{?=ii},R,N
// property archName attributes=T@"NSString",R,N
// property machOFile attributes=T@"CDMachOFile",R,N
// IMP 0x1006e6400 | @24@0:8@16
- (id)initWithMachOFile:(id)arg0;
// IMP 0x1006e64bc | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006e6558 | @16@0:8
- (id)description;
// IMP 0x1006e6668 | i16@0:8
- (int)maskedCPUType;
// IMP 0x1006e6680 | i16@0:8
- (int)maskedCPUSubtype;
// IMP 0x1006e6698 | B16@0:8
- (BOOL)uses64BitABI;
// IMP 0x1006e66ac | B16@0:8
- (BOOL)uses64BitLibraries;
// IMP 0x1006e66c0 | {?=ii}16@0:8
- (void * /* aggregate ? */)arch;
// IMP 0x1006e66f8 | @16@0:8
- (id)archName;
// IMP 0x1006e672c | @16@0:8
- (id)machOFile;
// IMP 0x1006e688c | i16@0:8
- (int)cputype;
// IMP 0x1006e6894 | v20@0:8i16
- (void)setCputype:(int)arg0;
// IMP 0x1006e689c | i16@0:8
- (int)cpusubtype;
// IMP 0x1006e68a4 | v20@0:8i16
- (void)setCpusubtype:(int)arg0;
// IMP 0x1006e68ac | I16@0:8
- (unsigned int)offset;
// IMP 0x1006e68b4 | v20@0:8I16
- (void)setOffset:(unsigned int)arg0;
// IMP 0x1006e68bc | I16@0:8
- (unsigned int)size;
// IMP 0x1006e68c4 | v20@0:8I16
- (void)setSize:(unsigned int)arg0;
// IMP 0x1006e68cc | I16@0:8
- (unsigned int)align;
// IMP 0x1006e68d4 | v20@0:8I16
- (void)setAlign:(unsigned int)arg0;
// IMP 0x1006e68dc | @16@0:8
- (id)fatFile;
// IMP 0x1006e68f4 | v24@0:8@16
- (void)setFatFile:(id)arg0;
// IMP 0x1006e6900 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
