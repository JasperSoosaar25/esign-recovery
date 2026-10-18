// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98d78
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCDyldInfo : CDLoadCommand
// ivar _dyldInfoCommand encoding={dyld_info_command="cmd"I"cmdsize"I"rebase_off"I"rebase_size"I"bind_off"I"bind_size"I"weak_bind_off"I"weak_bind_size"I"lazy_bind_off"I"lazy_bind_size"I"export_off"I"export_size"I} offset=8
// ivar _ptrSize encoding=Q offset=56
// ivar _symbolNamesByAddress encoding=@"NSMutableDictionary" offset=64
// IMP 0x1006f8800 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006f895c | v24@0:8@16
- (void)machOFileDidReadLoadCommands:(id)arg0;
// IMP 0x1006f8980 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006f8990 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006f89a4 | @24@0:8Q16
- (id)symbolNameForAddress:(unsigned long long)arg0;
// IMP 0x1006f8a04 | v16@0:8
- (void)logRebaseInfo;
// IMP 0x1006f8ca0 | v28@0:8Q16C24
- (void)rebaseAddress:(unsigned long long)arg0 type:(unsigned char)arg1;
// IMP 0x1006f8ca4 | v16@0:8
- (void)parseBindInfo;
// IMP 0x1006f8d30 | v16@0:8
- (void)parseWeakBindInfo;
// IMP 0x1006f8dbc | v16@0:8
- (void)logLazyBindInfo;
// IMP 0x1006f8e48 | v36@0:8r*16r*24B32
- (void)logBindOps:(char *)arg0 end:(char *)arg1 isLazy:(BOOL)arg2;
// IMP 0x1006f9178 | v56@0:8Q16C24r*28C36q40q48
- (void)bindAddress:(unsigned long long)arg0 type:(unsigned char)arg1 symbolName:(char *)arg2 flags:(unsigned char)arg3 addend:(long long)arg4 libraryOrdinal:(long long)arg5;
// IMP 0x1006f91f4 | v16@0:8
- (void)logExportedSymbols;
// IMP 0x1006f9288 | v48@0:8r*16r*24@32Q40
- (void)printSymbols:(char *)arg0 end:(char *)arg1 prefix:(id)arg2 offset:(unsigned long long)arg3;
// IMP 0x1006f93b0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
