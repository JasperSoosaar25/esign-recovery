// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ae98
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CMNode : NSObject
// ivar _freeWhenDone encoding=B offset=8
// ivar _node encoding=^{cmark_node=} offset=16
// property node attributes=T^{cmark_node=},R,V_node
// property next attributes=T@"CMNode",R
// property previous attributes=T@"CMNode",R
// property parent attributes=T@"CMNode",R
// property firstChild attributes=T@"CMNode",R
// property lastChild attributes=T@"CMNode",R
// property type attributes=Tq,R
// property humanReadableType attributes=T@"NSString",R
// property stringValue attributes=T@"NSString",R
// property headerLevel attributes=Tq,R
// property fencedCodeInfo attributes=T@"NSString",R
// property listType attributes=Tq,R
// property listDelimeterType attributes=Tq,R
// property listStartingNumber attributes=Tq,R
// property listTight attributes=TB,R
// property URLString attributes=T@"NSString",R
// property URL attributes=T@"NSURL",R
// property title attributes=T@"NSString",R
// property startLine attributes=Tq,R
// property startColumn attributes=Tq,R
// property endLine attributes=Tq,R
// property endColumn attributes=Tq,R
// IMP 0x10084ae08 | @16@0:8
- (id)init;
// IMP 0x10084ae98 | @28@0:8^{cmark_node=}16B24
- (id)initWithNode:(struct cmark_node *)arg0 freeWhenDone:(BOOL)arg1;
// IMP 0x10084afe0 | v16@0:8
- (void)dealloc;
// IMP 0x10084b044 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x10084b13c | Q16@0:8
- (unsigned long long)hash;
// IMP 0x10084b158 | @16@0:8
- (id)description;
// IMP 0x10084b464 | @16@0:8
- (id)iterator;
// IMP 0x10084b4a0 | @16@0:8
- (id)next;
// IMP 0x10084b530 | @16@0:8
- (id)previous;
// IMP 0x10084b560 | @16@0:8
- (id)parent;
// IMP 0x10084b590 | @16@0:8
- (id)firstChild;
// IMP 0x10084b5c0 | @16@0:8
- (id)lastChild;
// IMP 0x10084b5f0 | q16@0:8
- (long long)type;
// IMP 0x10084b624 | @16@0:8
- (id)humanReadableType;
// IMP 0x10084b6b0 | @16@0:8
- (id)stringValue;
// IMP 0x10084b6e0 | q16@0:8
- (long long)headerLevel;
// IMP 0x10084b714 | @16@0:8
- (id)fencedCodeInfo;
// IMP 0x10084b744 | q16@0:8
- (long long)listType;
// IMP 0x10084b778 | q16@0:8
- (long long)listDelimeterType;
// IMP 0x10084b7ac | q16@0:8
- (long long)listStartingNumber;
// IMP 0x10084b7e0 | B16@0:8
- (BOOL)listTight;
// IMP 0x10084b820 | @16@0:8
- (id)URLString;
// IMP 0x10084b850 | @16@0:8
- (id)URL;
// IMP 0x10084b8e8 | @16@0:8
- (id)title;
// IMP 0x10084b918 | q16@0:8
- (long long)startLine;
// IMP 0x10084b94c | q16@0:8
- (long long)startColumn;
// IMP 0x10084b980 | q16@0:8
- (long long)endLine;
// IMP 0x10084b9b4 | q16@0:8
- (long long)endColumn;
// IMP 0x10084b9e8 | ^{cmark_node=}16@0:8
- (struct cmark_node *)node;
@end
