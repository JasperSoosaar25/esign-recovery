// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99228
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDFatFile : CDFile
// ivar _arches encoding=@"NSMutableArray" offset=8
// property arches attributes=T@"NSMutableArray",R,V_arches
// property archNames attributes=T@"NSArray",R,N
// IMP 0x1007002d0 | @16@0:8
- (id)init;
// IMP 0x100700340 | @40@0:8@16@24@32
- (id)initWithData:(id)arg0 filename:(id)arg1 searchPathState:(id)arg2;
// IMP 0x100700498 | @16@0:8
- (id)description;
// IMP 0x100700530 | B24@0:8^{?=ii}16
- (BOOL)bestMatchForArch:(void * /* aggregate ? */ *)arg0;
// IMP 0x1007008d4 | @24@0:8{?=ii}16
- (id)fatArchWithArch:(void * /* aggregate ? */)arg0;
// IMP 0x100700a08 | @24@0:8{?=ii}16
- (id)machOFileWithArch:(void * /* aggregate ? */)arg0;
// IMP 0x100700a4c | @16@0:8
- (id)archNames;
// IMP 0x100700b88 | @16@0:8
- (id)architectureNameDescription;
// IMP 0x100700bd4 | v24@0:8@16
- (void)addArchitecture:(id)arg0;
// IMP 0x100700c2c | B24@0:8{?=ii}16
- (BOOL)containsArchitecture:(void * /* aggregate ? */)arg0;
// IMP 0x100700c60 | @16@0:8
- (id)arches;
// IMP 0x100700c70 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
