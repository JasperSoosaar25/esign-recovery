// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95e60
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYMemoryMonitorManager : BLYAbstractModule
// ivar _monitorThreadCanceled encoding=B offset=8
// ivar timer encoding=@"NSObject<OS_dispatch_source>" offset=16
// ivar file encoding=@"BLYMMapFile" offset=24
// ivar _dumpMemoryInterval encoding=d offset=32
// property dumpMemoryInterval attributes=Td,N,V_dumpMemoryInterval
// IMP 0x100658838 | @16@0:8
- (id)init;
// IMP 0x100658880 | B16@0:8
- (BOOL)enableModule;
// IMP 0x100658954 | B16@0:8
- (BOOL)disableModule;
// IMP 0x1006589d0 | B16@0:8
- (BOOL)shouldEnable;
// IMP 0x1006589e4 | v16@0:8
- (void)start;
// IMP 0x100658ccc | v16@0:8
- (void)stop;
// IMP 0x100658cdc | v24@0:8@16
- (void)applicationDidCrashed:(id)arg0;
// IMP 0x100658d08 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100658ce8 | d16@0:8
- (double)dumpMemoryInterval;
// IMP 0x100658cf8 | v24@0:8d16
- (void)setDumpMemoryInterval:(double)arg0;
// IMP 0x1006587b8 | @16@0:8
+ (id)sharedManager;
// IMP 0x1006589d8 | @16@0:8
+ (id)constructSelector;
@end
