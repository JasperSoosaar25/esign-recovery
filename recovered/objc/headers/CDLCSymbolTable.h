// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98a20
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCSymbolTable : CDLoadCommand
// ivar _symtabCommand encoding={symtab_command="cmd"I"cmdsize"I"symoff"I"nsyms"I"stroff"I"strsize"I} offset=8
// ivar _symbols encoding=@"NSArray" offset=32
// ivar _baseAddress encoding=Q offset=40
// ivar _classSymbols encoding=@"NSDictionary" offset=48
// ivar _externalClassSymbols encoding=@"NSDictionary" offset=56
// ivar _flags encoding={?="didFindBaseAddress"b1"didWarnAboutUnfoundBaseAddress"b1"_unused"b30} offset=64
// property symoff attributes=TI,R,N
// property nsyms attributes=TI,R,N
// property stroff attributes=TI,R,N
// property strsize attributes=TI,R,N
// property baseAddress attributes=TQ,R,N
// property symbols attributes=T@"NSArray",R,N,V_symbols
// IMP 0x1006f5f08 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006f6010 | @16@0:8
- (id)extraDescription;
// IMP 0x1006f6064 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006f6074 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006f6088 | v16@0:8
- (void)loadSymbols;
// IMP 0x1006f672c | I16@0:8
- (unsigned int)symoff;
// IMP 0x1006f6740 | I16@0:8
- (unsigned int)nsyms;
// IMP 0x1006f6754 | I16@0:8
- (unsigned int)stroff;
// IMP 0x1006f6768 | I16@0:8
- (unsigned int)strsize;
// IMP 0x1006f677c | Q16@0:8
- (unsigned long long)baseAddress;
// IMP 0x1006f67e4 | @24@0:8@16
- (id)symbolForClassName:(id)arg0;
// IMP 0x1006f67f4 | @24@0:8@16
- (id)symbolForExternalClassName:(id)arg0;
// IMP 0x1006f6804 | @16@0:8
- (id)symbols;
// IMP 0x1006f6814 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
