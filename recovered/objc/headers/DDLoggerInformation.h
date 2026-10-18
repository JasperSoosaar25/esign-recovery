// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82d78
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDLoggerInformation : NSObject
// ivar _logger encoding=@"<DDLogger>" offset=8
// ivar _level encoding=Q offset=16
// property logger attributes=T@"<DDLogger>",R,N,V_logger
// property level attributes=TQ,R,N,V_level
// IMP 0x1004133d8 | @32@0:8@16Q24
- (id)initWithLogger:(id)arg0 andLevel:(unsigned long long)arg1;
// IMP 0x1004134b0 | @16@0:8
- (id)logger;
// IMP 0x1004134b8 | Q16@0:8
- (unsigned long long)level;
// IMP 0x1004134c0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100413458 | @32@0:8@16Q24
+ (id)informationWithLogger:(id)arg0 andLevel:(unsigned long long)arg1;
@end
