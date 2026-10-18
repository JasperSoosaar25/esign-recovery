// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93758
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGKSource : NSObject
// ivar svgLanguageVersion encoding=@"NSString" offset=8
// ivar stream encoding=@"NSInputStream" offset=16
// ivar _approximateLengthInBytesOr0 encoding=Q offset=24
// ivar _keyForAppleDictionaries encoding=@"NSString" offset=32
// property svgLanguageVersion attributes=T@"NSString",&,N,VsvgLanguageVersion
// property stream attributes=T@"NSInputStream",&,N,Vstream
// property approximateLengthInBytesOr0 attributes=TQ,N,V_approximateLengthInBytesOr0
// property keyForAppleDictionaries attributes=T@"NSString",&,N,V_keyForAppleDictionaries
// IMP 0x100582c9c | @24@0:8@16
- (id)initWithInputSteam:(id)arg0;
// IMP 0x100582d18 | @16@0:8
- (id)initForCopying;
// IMP 0x100582d70 | @24@0:8@16
- (id)sourceFromRelativePath:(id)arg0;
// IMP 0x100582d78 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x100582dc8 | @16@0:8
- (id)keyForAppleDictionaries;
// IMP 0x100582dd0 | @16@0:8
- (id)svgLanguageVersion;
// IMP 0x100582dd8 | v24@0:8@16
- (void)setSvgLanguageVersion:(id)arg0;
// IMP 0x100582de4 | @16@0:8
- (id)stream;
// IMP 0x100582dec | v24@0:8@16
- (void)setStream:(id)arg0;
// IMP 0x100582df8 | Q16@0:8
- (unsigned long long)approximateLengthInBytesOr0;
// IMP 0x100582e00 | v24@0:8Q16
- (void)setApproximateLengthInBytesOr0:(unsigned long long)arg0;
// IMP 0x100582e08 | v24@0:8@16
- (void)setKeyForAppleDictionaries:(id)arg0;
// IMP 0x100582e14 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
