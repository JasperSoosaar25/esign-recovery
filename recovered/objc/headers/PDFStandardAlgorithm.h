// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0dc8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface PDFStandardAlgorithm : PDFEncryptionAlgorithm
// ivar keylength encoding=i offset=8
// ivar parent encoding=@"PDFEncryptionHandler" offset=16
// IMP 0x10091ff94 | @28@0:8i16@20
- (id)initWithLength:(int)arg0 handler:(id)arg1;
// IMP 0x10091fff4 | @28@0:8@16B24
- (id)keyForReference:(id)arg0 AES:(BOOL)arg1;
@end
