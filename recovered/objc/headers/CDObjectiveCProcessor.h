// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99818
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDObjectiveCProcessor : NSObject
// ivar _machOFile encoding=@"CDMachOFile" offset=8
// ivar _classes encoding=@"NSMutableArray" offset=16
// ivar _classesByAddress encoding=@"NSMutableDictionary" offset=24
// ivar _categories encoding=@"NSMutableArray" offset=32
// ivar _protocolUniquer encoding=@"CDProtocolUniquer" offset=40
// property machOFile attributes=T@"CDMachOFile",R,V_machOFile
// property hasObjectiveCData attributes=TB,R,N
// property objcImageInfoSection attributes=T@"CDSection",R,N
// property garbageCollectionStatus attributes=T@"NSString",R,N
// property protocolUniquer attributes=T@"CDProtocolUniquer",R,V_protocolUniquer
// IMP 0x1007084e4 | @24@0:8@16
- (id)initWithMachOFile:(id)arg0;
// IMP 0x1007085d8 | @16@0:8
- (id)description;
// IMP 0x10070868c | B16@0:8
- (BOOL)hasObjectiveCData;
// IMP 0x100708700 | @16@0:8
- (id)objcImageInfoSection;
// IMP 0x100708708 | @16@0:8
- (id)garbageCollectionStatus;
// IMP 0x100708840 | v32@0:8@16Q24
- (void)addClass:(id)arg0 withAddress:(unsigned long long)arg1;
// IMP 0x1007088c0 | @24@0:8Q16
- (id)classWithAddress:(unsigned long long)arg0;
// IMP 0x100708918 | v24@0:8@16
- (void)addClassesFromArray:(id)arg0;
// IMP 0x100708928 | v24@0:8@16
- (void)addCategoriesFromArray:(id)arg0;
// IMP 0x100708938 | v24@0:8@16
- (void)addCategory:(id)arg0;
// IMP 0x100708948 | v16@0:8
- (void)process;
// IMP 0x100708a7c | v16@0:8
- (void)loadProtocols;
// IMP 0x100708a80 | v16@0:8
- (void)loadClasses;
// IMP 0x100708a84 | v16@0:8
- (void)loadCategories;
// IMP 0x100708a88 | v32@0:8@16Q24
- (void)registerTypesWithObject:(id)arg0 phase:(unsigned long long)arg1;
// IMP 0x100708cf4 | v24@0:8@16
- (void)recursivelyVisit:(id)arg0;
// IMP 0x1007090a8 | @24@0:8Q16
- (id)protocolAddressListAtAddress:(unsigned long long)arg0;
// IMP 0x1007090b0 | @16@0:8
- (id)machOFile;
// IMP 0x1007090bc | @16@0:8
- (id)protocolUniquer;
// IMP 0x1007090c8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
