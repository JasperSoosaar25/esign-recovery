// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0b38
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CCITTFaxT6Handle : CCITTFaxHandle
// ivar prevchanges encoding=^i offset=288
// ivar numprevchanges encoding=i offset=296
// ivar currchanges encoding=^i offset=304
// ivar numcurrchanges encoding=i offset=312
// ivar prevpos encoding=i offset=316
// ivar previndex encoding=i offset=320
// ivar currpos encoding=i offset=324
// ivar currcol encoding=i offset=328
// ivar nexthoriz encoding=i offset=332
// ivar maincode encoding=@"XADPrefixCode" offset=336
// ivar whitecode encoding=@"XADPrefixCode" offset=344
// ivar blackcode encoding=@"XADPrefixCode" offset=352
// IMP 0x10091e4b8 | @32@0:8@16i24i28
- (id)initWithHandle:(id)arg0 columns:(int)arg1 white:(int)arg2;
// IMP 0x10091e5b8 | v16@0:8
- (void)dealloc;
// IMP 0x10091e648 | v16@0:8
- (void)resetByteStream;
// IMP 0x10091e688 | v16@0:8
- (void)startNewLine;
// IMP 0x10091e6f8 | v16@0:8
- (void)findNextSpanLength;
@end
