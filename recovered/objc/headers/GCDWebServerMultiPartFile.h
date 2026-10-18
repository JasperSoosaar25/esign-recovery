// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83df0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerMultiPartFile : GCDWebServerMultiPart
// ivar _fileName encoding=@"NSString" offset=32
// ivar _temporaryPath encoding=@"NSString" offset=40
// property fileName attributes=T@"NSString",R,N,V_fileName
// property temporaryPath attributes=T@"NSString",R,N,V_temporaryPath
// IMP 0x10042188c | @48@0:8@16@24@32@40
- (id)initWithControlName:(id)arg0 contentType:(id)arg1 fileName:(id)arg2 temporaryPath:(id)arg3;
// IMP 0x100421964 | v16@0:8
- (void)dealloc;
// IMP 0x1004219b8 | @16@0:8
- (id)description;
// IMP 0x100421a44 | @16@0:8
- (id)fileName;
// IMP 0x100421a54 | @16@0:8
- (id)temporaryPath;
// IMP 0x100421a64 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
