// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b758
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStringSource : NSObject
// ivar detector encoding=@"UniversalDetector" offset=8
// ivar fixedencodingname encoding=@"NSString" offset=16
// ivar mac encoding=B offset=24
// ivar hasanalyzeddata encoding=B offset=25
// ivar fixedencoding encoding=Q offset=32
// IMP 0x100880aa8 | @16@0:8
- (id)init;
// IMP 0x100880b0c | v16@0:8
- (void)dealloc;
// IMP 0x100880b5c | v24@0:8@16
- (void)analyzeData:(id)arg0;
// IMP 0x100880b74 | B16@0:8
- (BOOL)hasAnalyzedData;
// IMP 0x100880b7c | @16@0:8
- (id)encodingName;
// IMP 0x100880ccc | f16@0:8
- (float)confidence;
// IMP 0x100880d38 | @16@0:8
- (id)detector;
// IMP 0x100880d40 | v24@0:8@16
- (void)setFixedEncodingName:(id)arg0;
// IMP 0x100880d74 | B16@0:8
- (BOOL)hasFixedEncoding;
// IMP 0x100880d84 | v20@0:8B16
- (void)setPrefersMacEncodings:(BOOL)arg0;
// IMP 0x100880d8c | Q16@0:8
- (unsigned long long)encoding;
// IMP 0x100880dc8 | v24@0:8Q16
- (void)setFixedEncoding:(unsigned long long)arg0;
@end
