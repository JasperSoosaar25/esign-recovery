// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c941f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface _YYLinkedMap : NSObject
// ivar _dic encoding=^{__CFDictionary=} offset=8
// ivar _totalCost encoding=Q offset=16
// ivar _totalCount encoding=Q offset=24
// ivar _head encoding=@"_YYLinkedMapNode" offset=32
// ivar _tail encoding=@"_YYLinkedMapNode" offset=40
// ivar _releaseOnMainThread encoding=B offset=48
// ivar _releaseAsynchronously encoding=B offset=49
// IMP 0x1005914c0 | @16@0:8
- (id)init;
// IMP 0x10059152c | v16@0:8
- (void)dealloc;
// IMP 0x100591574 | v24@0:8@16
- (void)insertNodeAtHead:(id)arg0;
// IMP 0x1005915f8 | v24@0:8@16
- (void)bringNodeToHead:(id)arg0;
// IMP 0x1005916a4 | v24@0:8@16
- (void)removeNode:(id)arg0;
// IMP 0x100591758 | @16@0:8
- (id)removeTailNode;
// IMP 0x1005917f4 | v16@0:8
- (void)removeAll;
// IMP 0x100591970 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
