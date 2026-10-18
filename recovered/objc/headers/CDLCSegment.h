// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98250
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCSegment : CDLoadCommand
// ivar _segmentCommand encoding={segment_command_64="cmd"I"cmdsize"I"segname"[16c]"vmaddr"Q"vmsize"Q"fileoff"Q"filesize"Q"maxprot"i"initprot"i"nsects"I"flags"I} offset=8
// ivar _name encoding=@"NSString" offset=80
// ivar _sections encoding=@"NSArray" offset=88
// ivar _decryptedData encoding=@"NSMutableData" offset=96
// property name attributes=T@"NSString",&,V_name
// property sections attributes=T@"NSArray",&,V_sections
// property vmaddr attributes=TQ,R,N
// property fileoff attributes=TQ,R,N
// property filesize attributes=TQ,R,N
// property initprot attributes=Ti,R,N
// property flags attributes=TI,R,N
// property isProtected attributes=TB,R,N
// property encryptionType attributes=TQ,R,N
// property canDecrypt attributes=TB,R,N
// IMP 0x1006e2a34 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006e2c20 | @16@0:8
- (id)extraDescription;
// IMP 0x1006e2d90 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006e2da0 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006e2db4 | Q16@0:8
- (unsigned long long)vmaddr;
// IMP 0x1006e2dc8 | Q16@0:8
- (unsigned long long)fileoff;
// IMP 0x1006e2ddc | Q16@0:8
- (unsigned long long)filesize;
// IMP 0x1006e2df0 | i16@0:8
- (int)initprot;
// IMP 0x1006e2e04 | I16@0:8
- (unsigned int)flags;
// IMP 0x1006e2e18 | B16@0:8
- (BOOL)isProtected;
// IMP 0x1006e2e30 | Q16@0:8
- (unsigned long long)encryptionType;
// IMP 0x1006e2f1c | B16@0:8
- (BOOL)canDecrypt;
// IMP 0x1006e2f38 | @16@0:8
- (id)flagDescription;
// IMP 0x1006e3018 | B24@0:8Q16
- (BOOL)containsAddress:(unsigned long long)arg0;
// IMP 0x1006e304c | @24@0:8Q16
- (id)sectionContainingAddress:(unsigned long long)arg0;
// IMP 0x1006e316c | @24@0:8@16
- (id)sectionWithName:(id)arg0;
// IMP 0x1006e32c4 | Q24@0:8Q16
- (unsigned long long)fileOffsetForAddress:(unsigned long long)arg0;
// IMP 0x1006e3308 | Q24@0:8Q16
- (unsigned long long)segmentOffsetForAddress:(unsigned long long)arg0;
// IMP 0x1006e3338 | v28@0:8@16B24
- (void)appendToString:(id)arg0 verbose:(BOOL)arg1;
// IMP 0x1006e336c | v16@0:8
- (void)writeSectionData;
// IMP 0x1006e345c | @16@0:8
- (id)decryptedData;
// IMP 0x1006e381c | @16@0:8
- (id)name;
// IMP 0x1006e382c | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x1006e3838 | @16@0:8
- (id)sections;
// IMP 0x1006e3848 | v24@0:8@16
- (void)setSections:(id)arg0;
// IMP 0x1006e3854 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
