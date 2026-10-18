// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90208
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageCacheToken : NSObject
// ivar _cancelled encoding=B offset=8
// ivar _key encoding=@"NSString" offset=16
// ivar _doneBlock encoding=@? offset=24
// property key attributes=T@"NSString",&,N,V_key
// property cancelled attributes=TB,N,GisCancelled,V_cancelled
// property doneBlock attributes=T@?,C,N,V_doneBlock
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10053bcd0 | @24@0:8@?16
- (id)initWithDoneBlock:(id /* block */)arg0;
// IMP 0x10053bd3c | v16@0:8
- (void)cancel;
// IMP 0x10053bf50 | @16@0:8
- (id)key;
// IMP 0x10053bf58 | v24@0:8@16
- (void)setKey:(id)arg0;
// IMP 0x10053bf64 | B16@0:8
- (BOOL)isCancelled;
// IMP 0x10053bf6c | v20@0:8B16
- (void)setCancelled:(BOOL)arg0;
// IMP 0x10053bf74 | @?16@0:8
- (id /* block */)doneBlock;
// IMP 0x10053bf7c | v24@0:8@?16
- (void)setDoneBlock:(id /* block */)arg0;
// IMP 0x10053bf84 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
