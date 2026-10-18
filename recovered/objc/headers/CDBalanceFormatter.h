// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98be8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDBalanceFormatter : NSObject
// ivar _scanner encoding=@"NSScanner" offset=8
// ivar _openCloseSet encoding=@"NSCharacterSet" offset=16
// ivar _result encoding=@"NSMutableString" offset=24
// IMP 0x1006f7850 | @24@0:8@16
- (id)initWithString:(id)arg0;
// IMP 0x1006f7920 | v40@0:8@16Q24Q32
- (void)parse:(id)arg0 index:(unsigned long long)arg1 level:(unsigned long long)arg2;
// IMP 0x1006f7b50 | @16@0:8
- (id)format;
// IMP 0x1006f7b88 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
