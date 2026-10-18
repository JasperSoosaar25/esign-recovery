// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98ff8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDObjectiveC1Processor : CDObjectiveCProcessor
// ivar _modules encoding=@"NSMutableArray" offset=8
// IMP 0x1006fb838 | @24@0:8@16
- (id)initWithMachOFile:(id)arg0;
// IMP 0x1006fb8a8 | v16@0:8
- (void)process;
// IMP 0x1006fb958 | v16@0:8
- (void)processModules;
// IMP 0x1006fbbc8 | @20@0:8I16
- (id)processSymtabAtAddress:(unsigned int)arg0;
// IMP 0x1006fbd9c | @20@0:8I16
- (id)processClassDefinitionAtAddress:(unsigned int)arg0;
// IMP 0x1006fc36c | @24@0:8Q16
- (id)protocolAddressListAtAddress:(unsigned long long)arg0;
// IMP 0x1006fc470 | @20@0:8I16
- (id)processMethodsAtAddress:(unsigned int)arg0;
// IMP 0x1006fc478 | @24@0:8I16B20
- (id)processMethodsAtAddress:(unsigned int)arg0 isFromProtocolDefinition:(BOOL)arg1;
// IMP 0x1006fc664 | @20@0:8I16
- (id)processCategoryDefinitionAtAddress:(unsigned int)arg0;
// IMP 0x1006fca58 | @20@0:8I16
- (id)protocolAtAddress:(unsigned int)arg0;
// IMP 0x1006fcdb4 | v16@0:8
- (void)loadProtocols;
// IMP 0x1006fce78 | @16@0:8
- (id)objcImageInfoSection;
// IMP 0x1006fceec | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
