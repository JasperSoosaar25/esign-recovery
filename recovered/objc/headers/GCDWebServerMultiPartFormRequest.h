// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83e90
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerMultiPartFormRequest : GCDWebServerRequest
// ivar _parser encoding=@"GCDWebServerMIMEStreamParser" offset=8
// ivar _arguments encoding=@"NSMutableArray" offset=16
// ivar _files encoding=@"NSMutableArray" offset=24
// property arguments attributes=T@"NSMutableArray",&,N,V_arguments
// property files attributes=T@"NSMutableArray",&,N,V_files
// IMP 0x10042269c | @56@0:8@16@24@32@40@48
- (id)initWithMethod:(id)arg0 url:(id)arg1 headers:(id)arg2 path:(id)arg3 query:(id)arg4;
// IMP 0x100422730 | B24@0:8^@16
- (BOOL)open:(id *)arg0;
// IMP 0x1004228a4 | B32@0:8@16^@24
- (BOOL)writeData:(id)arg0 error:(id *)arg1;
// IMP 0x1004229d4 | B24@0:8^@16
- (BOOL)close:(id *)arg0;
// IMP 0x100422ad0 | @24@0:8@16
- (id)firstArgumentForControlName:(id)arg0;
// IMP 0x100422c28 | @24@0:8@16
- (id)firstFileForControlName:(id)arg0;
// IMP 0x100422d80 | @16@0:8
- (id)description;
// IMP 0x1004230e4 | @16@0:8
- (id)arguments;
// IMP 0x1004230f4 | v24@0:8@16
- (void)setArguments:(id)arg0;
// IMP 0x100423108 | @16@0:8
- (id)files;
// IMP 0x100423118 | v24@0:8@16
- (void)setFiles:(id)arg0;
// IMP 0x10042312c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100422690 | @16@0:8
+ (id)mimeType;
@end
