// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c983b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDObjectiveC2Processor : CDObjectiveCProcessor
// IMP 0x1006e45e0 | v16@0:8
- (void)loadProtocols;
// IMP 0x1006e46a0 | v16@0:8
- (void)loadClasses;
// IMP 0x1006e478c | v16@0:8
- (void)loadCategories;
// IMP 0x1006e4864 | @24@0:8Q16
- (id)protocolAtAddress:(unsigned long long)arg0;
// IMP 0x1006e4e6c | @24@0:8Q16
- (id)loadCategoryAtAddress:(unsigned long long)arg0;
// IMP 0x1006e5448 | @24@0:8Q16
- (id)loadClassAtAddress:(unsigned long long)arg0;
// IMP 0x1006e5b68 | @24@0:8Q16
- (id)loadPropertiesAtAddress:(unsigned long long)arg0;
// IMP 0x1006e5ce0 | @24@0:8Q16
- (id)loadMethodsOfMetaClassAtAddress:(unsigned long long)arg0;
// IMP 0x1006e5e4c | @24@0:8Q16
- (id)loadMethodsAtAddress:(unsigned long long)arg0;
// IMP 0x1006e5e54 | @32@0:8Q16@24
- (id)loadMethodsAtAddress:(unsigned long long)arg0 extendedMethodTypesCursor:(id)arg1;
// IMP 0x1006e60a0 | @24@0:8Q16
- (id)loadIvarsAtAddress:(unsigned long long)arg0;
// IMP 0x1006e6298 | @24@0:8Q16
- (id)protocolAddressListAtAddress:(unsigned long long)arg0;
// IMP 0x1006e6394 | @16@0:8
- (id)objcImageInfoSection;
@end
