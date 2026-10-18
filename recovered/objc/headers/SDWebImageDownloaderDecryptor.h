// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c91030
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageDownloaderDecryptor : NSObject
// ivar _block encoding=@? offset=8
// property block attributes=T@?,C,N,V_block
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10054da94 | @24@0:8@?16
- (id)initWithBlock:(id /* block */)arg0;
// IMP 0x10054db4c | @32@0:8@16@24
- (id)decryptedDataWithData:(id)arg0 response:(id)arg1;
// IMP 0x10054dbfc | @?16@0:8
- (id /* block */)block;
// IMP 0x10054dc04 | v24@0:8@?16
- (void)setBlock:(id /* block */)arg0;
// IMP 0x10054dc0c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10054dc18 | @16@0:8
+ (id)base64Decryptor;
// IMP 0x10054db00 | @24@0:8@?16
+ (id)decryptorWithBlock:(id /* block */)arg0;
@end
