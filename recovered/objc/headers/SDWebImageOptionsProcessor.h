// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c91590
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageOptionsProcessor : NSObject
// ivar _block encoding=@? offset=8
// property block attributes=T@?,C,N,V_block
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100556524 | @24@0:8@?16
- (id)initWithBlock:(id /* block */)arg0;
// IMP 0x1005565dc | @40@0:8@16Q24@32
- (id)processedResultForURL:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2;
// IMP 0x10055669c | @?16@0:8
- (id /* block */)block;
// IMP 0x1005566a4 | v24@0:8@?16
- (void)setBlock:(id /* block */)arg0;
// IMP 0x1005566ac | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100556590 | @24@0:8@?16
+ (id)optionsProcessorWithBlock:(id /* block */)arg0;
@end
