// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96680
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYSafeMutableArray : NSMutableArray
// ivar _array encoding=^{__CFArray=} offset=8
// ivar _safeLock encoding=@"NSRecursiveLock" offset=16
// IMP 0x100673cb8 | @16@0:8
- (id)init;
// IMP 0x100673d60 | @24@0:8Q16
- (id)initWithCapacity:(unsigned long long)arg0;
// IMP 0x100673e14 | v16@0:8
- (void)dealloc;
// IMP 0x100673e6c | Q16@0:8
- (unsigned long long)count;
// IMP 0x100673ed0 | @24@0:8Q16
- (id)objectAtIndex:(unsigned long long)arg0;
// IMP 0x100673f58 | v24@0:8@16
- (void)addObject:(id)arg0;
// IMP 0x100673fe0 | v32@0:8@16Q24
- (void)insertObject:(id)arg0 atIndex:(unsigned long long)arg1;
// IMP 0x10067407c | v16@0:8
- (void)removeLastObject;
// IMP 0x1006740e8 | v24@0:8Q16
- (void)removeObjectAtIndex:(unsigned long long)arg0;
// IMP 0x100674158 | v32@0:8Q16@24
- (void)replaceObjectAtIndex:(unsigned long long)arg0 withObject:(id)arg1;
// IMP 0x1006741ec | @16@0:8
- (id)firstObject;
// IMP 0x1006741fc | @16@0:8
- (id)lastObject;
// IMP 0x100674278 | v16@0:8
- (void)removeAllObjects;
// IMP 0x1006742c8 | v32@0:8{_NSRange=QQ}16
- (void)removeObjectsInRange:(struct _NSRange)arg0;
// IMP 0x100674368 | Q24@0:8@16
- (unsigned long long)indexOfObject:(id)arg0;
// IMP 0x100674410 | v16@0:8
- (void)removeFirstObject;
// IMP 0x100674478 | v16@0:8
- (void)lock;
// IMP 0x100674490 | v16@0:8
- (void)unlock;
// IMP 0x1006744a8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
