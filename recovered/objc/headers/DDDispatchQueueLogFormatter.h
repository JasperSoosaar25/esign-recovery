// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c826c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDDispatchQueueLogFormatter : NSObject
// ivar _dateFormatter encoding=@"NSDateFormatter" offset=8
// ivar _mutex encoding={_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} offset=16
// ivar _minQueueLength encoding=Q offset=80
// ivar _maxQueueLength encoding=Q offset=88
// ivar _replacements encoding=@"NSMutableDictionary" offset=96
// property minQueueLength attributes=TQ,V_minQueueLength
// property maxQueueLength attributes=TQ,V_maxQueueLength
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10040a8dc | @16@0:8
- (id)init;
// IMP 0x10040a988 | @24@0:8Q16
- (id)initWithMode:(unsigned long long)arg0;
// IMP 0x10040a98c | v16@0:8
- (void)dealloc;
// IMP 0x10040a9d4 | @24@0:8@16
- (id)replacementStringForQueueLabel:(id)arg0;
// IMP 0x10040aa3c | v32@0:8@16@24
- (void)setReplacementString:(id)arg0 forQueueLabel:(id)arg1;
// IMP 0x10040aabc | @16@0:8
- (id)createDateFormatter;
// IMP 0x10040aafc | v24@0:8@16
- (void)configureDateFormatter:(id)arg0;
// IMP 0x10040aba4 | @24@0:8@16
- (id)stringFromDate:(id)arg0;
// IMP 0x10040abac | @24@0:8@16
- (id)queueThreadLabelForLogMessage:(id)arg0;
// IMP 0x10040ae74 | @24@0:8@16
- (id)formatLogMessage:(id)arg0;
// IMP 0x10040af84 | Q16@0:8
- (unsigned long long)minQueueLength;
// IMP 0x10040af8c | v24@0:8Q16
- (void)setMinQueueLength:(unsigned long long)arg0;
// IMP 0x10040af94 | Q16@0:8
- (unsigned long long)maxQueueLength;
// IMP 0x10040af9c | v24@0:8Q16
- (void)setMaxQueueLength:(unsigned long long)arg0;
// IMP 0x10040afa4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
