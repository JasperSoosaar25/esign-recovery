// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0c88
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface PDFEncryptionHandler : NSObject
// ivar version encoding=i offset=8
// ivar revision encoding=i offset=12
// ivar encrypt encoding=@"NSDictionary" offset=16
// ivar permanentid encoding=@"NSData" offset=24
// ivar password encoding=@"NSString" offset=32
// ivar needspassword encoding=B offset=40
// ivar keys encoding=@"NSMutableDictionary" offset=48
// ivar algorithms encoding=@"NSMutableDictionary" offset=56
// ivar streamalgorithm encoding=@"PDFEncryptionAlgorithm" offset=64
// ivar stringalgorithm encoding=@"PDFEncryptionAlgorithm" offset=72
// IMP 0x10091f284 | @32@0:8@16@24
- (id)initWithEncryptDictionary:(id)arg0 permanentID:(id)arg1;
// IMP 0x10091f6d0 | v16@0:8
- (void)dealloc;
// IMP 0x10091f738 | B16@0:8
- (BOOL)needsPassword;
// IMP 0x10091f740 | B24@0:8@16
- (BOOL)setPassword:(id)arg0;
// IMP 0x10091fa70 | @20@0:8i16
- (id)documentKeyOfLength:(int)arg0;
// IMP 0x10091fcbc | @32@0:8i16@20B28
- (id)keyOfLength:(int)arg0 forReference:(id)arg1 AES:(BOOL)arg2;
// IMP 0x10091fde8 | @24@0:8@16
- (id)decryptString:(id)arg0;
// IMP 0x10091fe48 | @24@0:8@16
- (id)decryptStream:(id)arg0;
// IMP 0x10091f254 | B24@0:8@16
+ (BOOL)isEncryptedForTrailerDictionary:(id)arg0;
@end
