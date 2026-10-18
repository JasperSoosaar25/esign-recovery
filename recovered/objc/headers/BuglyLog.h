// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c955a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BuglyLog : NSObject
// IMP 0x100640f64 | Q24@0:8Q16
+ (unsigned long long)convert:(unsigned long long)arg0;
// IMP 0x100640f84 | v28@0:8Q16B24
+ (void)initLogger:(unsigned long long)arg0 consolePrint:(BOOL)arg1;
// IMP 0x100640fc8 | v24@0:8@16
+ (void)log:(id)arg0;
// IMP 0x10064109c | v32@0:8Q16@24
+ (void)level:(unsigned long long)arg0 logs:(id)arg1;
// IMP 0x100641148 | v32@0:8Q16@24
+ (void)level:(unsigned long long)arg0 log:(id)arg1;
// IMP 0x10064123c | v40@0:8Q16@24@32
+ (void)level:(unsigned long long)arg0 tag:(id)arg1 log:(id)arg2;
@end
