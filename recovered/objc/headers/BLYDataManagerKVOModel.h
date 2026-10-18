// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c960e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYDataManagerKVOModel : NSObject
// ivar _subscribers encoding=@"NSSet" offset=8
// ivar _key encoding=@"NSString" offset=16
// property subscribers attributes=T@"NSSet",C,N,V_subscribers
// property key attributes=T@"NSString",C,N,V_key
// IMP 0x10065b488 | @32@0:8@16@24
- (id)initWithSubscriber:(id)arg0 key:(id)arg1;
// IMP 0x10065b568 | @16@0:8
- (id)description;
// IMP 0x10065b5d0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10065b5a8 | @16@0:8
- (id)subscribers;
// IMP 0x10065b5b4 | v24@0:8@16
- (void)setSubscribers:(id)arg0;
// IMP 0x10065b5bc | @16@0:8
- (id)key;
// IMP 0x10065b5c8 | v24@0:8@16
- (void)setKey:(id)arg0;
@end
