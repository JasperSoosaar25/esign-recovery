// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c958c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYBinaryImage : NSObject
// ivar _baseAddress encoding=Q offset=8
// ivar _endAddress encoding=Q offset=16
// ivar _name encoding=@"NSString" offset=24
// ivar _arch encoding=@"NSString" offset=32
// ivar _uuid encoding=@"NSString" offset=40
// ivar _path encoding=@"NSString" offset=48
// property baseAddress attributes=TQ,N,V_baseAddress
// property endAddress attributes=TQ,N,V_endAddress
// property name attributes=T@"NSString",C,N,V_name
// property arch attributes=T@"NSString",C,N,V_arch
// property uuid attributes=T@"NSString",C,N,V_uuid
// property path attributes=T@"NSString",C,N,V_path
// IMP 0x1006457f0 | @16@0:8
- (id)init;
// IMP 0x100645824 | @16@0:8
- (id)debugDescription;
// IMP 0x100645918 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006458a8 | Q16@0:8
- (unsigned long long)baseAddress;
// IMP 0x1006458b0 | v24@0:8Q16
- (void)setBaseAddress:(unsigned long long)arg0;
// IMP 0x1006458b8 | Q16@0:8
- (unsigned long long)endAddress;
// IMP 0x1006458c0 | v24@0:8Q16
- (void)setEndAddress:(unsigned long long)arg0;
// IMP 0x1006458c8 | @16@0:8
- (id)name;
// IMP 0x1006458d4 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x1006458dc | @16@0:8
- (id)arch;
// IMP 0x1006458e8 | v24@0:8@16
- (void)setArch:(id)arg0;
// IMP 0x1006458f0 | @16@0:8
- (id)uuid;
// IMP 0x1006458fc | v24@0:8@16
- (void)setUuid:(id)arg0;
// IMP 0x100645904 | @16@0:8
- (id)path;
// IMP 0x100645910 | v24@0:8@16
- (void)setPath:(id)arg0;
// IMP 0x100645870 | @24@0:8Q16
+ (id)formatAddress:(unsigned long long)arg0;
@end
