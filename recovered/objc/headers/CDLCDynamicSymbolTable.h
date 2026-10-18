// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c986b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCDynamicSymbolTable : CDLoadCommand
// ivar _dysymtab encoding={dysymtab_command="cmd"I"cmdsize"I"ilocalsym"I"nlocalsym"I"iextdefsym"I"nextdefsym"I"iundefsym"I"nundefsym"I"tocoff"I"ntoc"I"modtaboff"I"nmodtab"I"extrefsymoff"I"nextrefsyms"I"indirectsymoff"I"nindirectsyms"I"extreloff"I"nextrel"I"locreloff"I"nlocrel"I} offset=8
// ivar _externalRelocationEntries encoding=@"NSArray" offset=88
// IMP 0x1006edc1c | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006eddac | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006eddbc | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006eddd0 | v16@0:8
- (void)loadSymbols;
// IMP 0x1006edef4 | @24@0:8Q16
- (id)relocationEntryWithOffset:(unsigned long long)arg0;
// IMP 0x1006ee024 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
