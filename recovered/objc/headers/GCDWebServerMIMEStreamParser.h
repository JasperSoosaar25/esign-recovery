// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83e40
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerMIMEStreamParser : NSObject
// ivar _boundary encoding=@"NSData" offset=8
// ivar _defaultcontrolName encoding=@"NSString" offset=16
// ivar _state encoding=i offset=24
// ivar _data encoding=@"NSMutableData" offset=32
// ivar _arguments encoding=@"NSMutableArray" offset=40
// ivar _files encoding=@"NSMutableArray" offset=48
// ivar _controlName encoding=@"NSString" offset=56
// ivar _fileName encoding=@"NSString" offset=64
// ivar _contentType encoding=@"NSString" offset=72
// ivar _tmpPath encoding=@"NSString" offset=80
// ivar _tmpFile encoding=i offset=88
// ivar _subParser encoding=@"GCDWebServerMIMEStreamParser" offset=96
// IMP 0x100421b6c | @48@0:8@16@24@32@40
- (id)initWithBoundary:(id)arg0 defaultControlName:(id)arg1 arguments:(id)arg2 files:(id)arg3;
// IMP 0x100421d0c | v16@0:8
- (void)dealloc;
// IMP 0x100421d68 | B16@0:8
- (BOOL)_parseData;
// IMP 0x1004225c8 | B32@0:8r^v16Q24
- (BOOL)appendBytes:(void *)arg0 length:(unsigned long long)arg1;
// IMP 0x1004225f0 | B16@0:8
- (BOOL)isAtEnd;
// IMP 0x100422600 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100421aa4 | v16@0:8
+ (void)initialize;
@end
