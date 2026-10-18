// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95960
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYStackFrame : NSObject
// ivar _index encoding=C offset=8
// ivar _module encoding=@"NSString" offset=16
// ivar _loadAddress encoding=Q offset=24
// ivar _baseAddress encoding=Q offset=32
// ivar _offset encoding=Q offset=40
// ivar _symbol encoding=@"NSString" offset=48
// property index attributes=TC,N,V_index
// property module attributes=T@"NSString",C,N,V_module
// property loadAddress attributes=TQ,N,V_loadAddress
// property baseAddress attributes=TQ,N,V_baseAddress
// property offset attributes=TQ,N,V_offset
// property symbol attributes=T@"NSString",C,N,V_symbol
// IMP 0x100645a3c | @16@0:8
- (id)init;
// IMP 0x100645a70 | @16@0:8
- (id)frameSymbol;
// IMP 0x100645bdc | @16@0:8
- (id)frame;
// IMP 0x100645d30 | @16@0:8
- (id)debugDescription;
// IMP 0x100645de8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100645d80 | C16@0:8
- (unsigned char)index;
// IMP 0x100645d88 | v20@0:8C16
- (void)setIndex:(unsigned char)arg0;
// IMP 0x100645d90 | @16@0:8
- (id)module;
// IMP 0x100645d9c | v24@0:8@16
- (void)setModule:(id)arg0;
// IMP 0x100645da4 | Q16@0:8
- (unsigned long long)loadAddress;
// IMP 0x100645dac | v24@0:8Q16
- (void)setLoadAddress:(unsigned long long)arg0;
// IMP 0x100645db4 | Q16@0:8
- (unsigned long long)baseAddress;
// IMP 0x100645dbc | v24@0:8Q16
- (void)setBaseAddress:(unsigned long long)arg0;
// IMP 0x100645dc4 | Q16@0:8
- (unsigned long long)offset;
// IMP 0x100645dcc | v24@0:8Q16
- (void)setOffset:(unsigned long long)arg0;
// IMP 0x100645dd4 | @16@0:8
- (id)symbol;
// IMP 0x100645de0 | v24@0:8@16
- (void)setSymbol:(id)arg0;
@end
