// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0ae8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CCITTFaxT41DHandle : CCITTFaxHandle
// ivar whitecode encoding=@"XADPrefixCode" offset=288
// ivar blackcode encoding=@"XADPrefixCode" offset=296
// IMP 0x10091e184 | @32@0:8@16i24i28
- (id)initWithHandle:(id)arg0 columns:(int)arg1 white:(int)arg2;
// IMP 0x10091e228 | v16@0:8
- (void)dealloc;
// IMP 0x10091e288 | v16@0:8
- (void)startNewLine;
// IMP 0x10091e29c | v16@0:8
- (void)findNextSpanLength;
@end
