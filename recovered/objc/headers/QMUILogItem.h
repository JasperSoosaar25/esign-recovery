// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8a580
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUILogItem : NSObject
// ivar _enabled encoding=B offset=8
// ivar _level encoding=Q offset=16
// ivar _name encoding=@"NSString" offset=24
// ivar _logString encoding=@"NSString" offset=32
// property level attributes=TQ,N,V_level
// property levelDisplayString attributes=T@"NSString",R,C,N
// property name attributes=T@"NSString",C,N,V_name
// property logString attributes=T@"NSString",C,N,V_logString
// property enabled attributes=TB,N,V_enabled
// IMP 0x10049b40c | @16@0:8
- (id)init;
// IMP 0x10049b460 | @16@0:8
- (id)levelDisplayString;
// IMP 0x10049b49c | @16@0:8
- (id)description;
// IMP 0x10049b588 | Q16@0:8
- (unsigned long long)level;
// IMP 0x10049b590 | v24@0:8Q16
- (void)setLevel:(unsigned long long)arg0;
// IMP 0x10049b598 | @16@0:8
- (id)name;
// IMP 0x10049b5a0 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x10049b5a8 | @16@0:8
- (id)logString;
// IMP 0x10049b5b0 | v24@0:8@16
- (void)setLogString:(id)arg0;
// IMP 0x10049b5b8 | B16@0:8
- (BOOL)enabled;
// IMP 0x10049b5c0 | v20@0:8B16
- (void)setEnabled:(BOOL)arg0;
// IMP 0x10049b5c8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10049b2cc | @40@0:8Q16@24@32
+ (id)logItemWithLevel:(unsigned long long)arg0 name:(id)arg1 logString:(id)arg2;
@end
