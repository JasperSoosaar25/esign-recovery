// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82e90
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDMultiFormatter : NSObject
// ivar _queue encoding=@"NSObject<OS_dispatch_queue>" offset=8
// ivar _formatters encoding=@"NSMutableArray" offset=16
// property formatters attributes=T@"NSArray",R,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004134cc | @16@0:8
- (id)init;
// IMP 0x100413554 | @24@0:8@16
- (id)formatLogMessage:(id)arg0;
// IMP 0x100413838 | @32@0:8@16@24
- (id)logMessageForLine:(id)arg0 originalMessage:(id)arg1;
// IMP 0x100413888 | @16@0:8
- (id)formatters;
// IMP 0x100413978 | v24@0:8@16
- (void)addFormatter:(id)arg0;
// IMP 0x100413a08 | v24@0:8@16
- (void)removeFormatter:(id)arg0;
// IMP 0x100413a98 | v16@0:8
- (void)removeAllFormatters;
// IMP 0x100413afc | B24@0:8@16
- (BOOL)isFormattingWithFormatter:(id)arg0;
// IMP 0x100413be4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
