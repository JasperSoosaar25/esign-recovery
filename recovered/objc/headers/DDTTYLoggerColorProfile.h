// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82f58
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDTTYLoggerColorProfile : NSObject
// ivar mask encoding=Q offset=8
// ivar context encoding=q offset=16
// ivar fg encoding={?="r"C"g"C"b"C} offset=24
// ivar bg encoding={?="r"C"g"C"b"C} offset=27
// ivar fgCodeIndex encoding=Q offset=32
// ivar fgCodeRaw encoding=@"NSString" offset=40
// ivar bgCodeIndex encoding=Q offset=48
// ivar bgCodeRaw encoding=@"NSString" offset=56
// ivar fgCode encoding=[24c] offset=64
// ivar fgCodeLen encoding=Q offset=88
// ivar bgCode encoding=[24c] offset=96
// ivar bgCodeLen encoding=Q offset=120
// ivar resetCode encoding=[8c] offset=128
// ivar resetCodeLen encoding=Q offset=136
// IMP 0x100416484 | @48@0:8@16@24Q32q40
- (id)initWithForegroundColor:(id)arg0 backgroundColor:(id)arg1 flag:(unsigned long long)arg2 context:(long long)arg3;
// IMP 0x100416864 | @16@0:8
- (id)description;
// IMP 0x1004168d0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
