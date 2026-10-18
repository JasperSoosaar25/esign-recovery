// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c937f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGKSourceNSData : SVGKSource
// ivar _rawData encoding=@"NSData" offset=8
// ivar _effectiveURL encoding=@"NSURL" offset=16
// property rawData attributes=T@"NSData",&,N,V_rawData
// property effectiveURL attributes=T@"NSURL",&,N,V_effectiveURL
// IMP 0x1005835b4 | @16@0:8
- (id)keyForAppleDictionaries;
// IMP 0x1005836b8 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x100583794 | @24@0:8@16
- (id)sourceFromRelativePath:(id)arg0;
// IMP 0x1005838a0 | @16@0:8
- (id)rawData;
// IMP 0x1005838b0 | v24@0:8@16
- (void)setRawData:(id)arg0;
// IMP 0x1005838c4 | @16@0:8
- (id)effectiveURL;
// IMP 0x1005838d4 | v24@0:8@16
- (void)setEffectiveURL:(id)arg0;
// IMP 0x1005838e8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100583614 | @32@0:8@16@24
+ (id)sourceFromData:(id)arg0 URLForRelativeLinks:(id)arg1;
@end
