// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c91540
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageOptionsResult : NSObject
// ivar _options encoding=Q offset=8
// ivar _context encoding=@"NSDictionary" offset=16
// property options attributes=TQ,N,V_options
// property context attributes=T@"NSDictionary",C,N,V_context
// IMP 0x100556474 | @32@0:8Q16@24
- (id)initWithOptions:(unsigned long long)arg0 context:(id)arg1;
// IMP 0x1005564f8 | Q16@0:8
- (unsigned long long)options;
// IMP 0x100556500 | v24@0:8Q16
- (void)setOptions:(unsigned long long)arg0;
// IMP 0x100556508 | @16@0:8
- (id)context;
// IMP 0x100556510 | v24@0:8@16
- (void)setContext:(id)arg0;
// IMP 0x100556518 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
