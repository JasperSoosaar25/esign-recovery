// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99408
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLoadCommand : NSObject
// ivar _machOFile encoding=@"CDMachOFile" offset=8
// ivar _commandOffset encoding=Q offset=16
// property machOFile attributes=T@"CDMachOFile",R,W,V_machOFile
// property commandOffset attributes=TQ,R,V_commandOffset
// property cmd attributes=TI,R,N
// property cmdsize attributes=TI,R,N
// property mustUnderstandToExecute attributes=TB,R,N
// property commandName attributes=T@"NSString",R,N
// IMP 0x1007032f4 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x100703390 | @16@0:8
- (id)description;
// IMP 0x10070346c | @16@0:8
- (id)extraDescription;
// IMP 0x100703478 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1007034ac | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1007034e0 | B16@0:8
- (BOOL)mustUnderstandToExecute;
// IMP 0x1007034f8 | @16@0:8
- (id)commandName;
// IMP 0x1007037c0 | v28@0:8@16B24
- (void)appendToString:(id)arg0 verbose:(BOOL)arg1;
// IMP 0x100703874 | v24@0:8@16
- (void)machOFileDidReadLoadCommands:(id)arg0;
// IMP 0x100703878 | @16@0:8
- (id)machOFile;
// IMP 0x100703890 | Q16@0:8
- (unsigned long long)commandOffset;
// IMP 0x100703898 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100703114 | @24@0:8@16
+ (id)loadCommandWithDataCursor:(id)arg0;
@end
