// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e358
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface VIContentInfo : NSObject
// ivar _byteRangeAccessSupported encoding=B offset=8
// ivar _contentType encoding=@"NSString" offset=16
// ivar _contentLength encoding=Q offset=24
// ivar _downloadedContentLength encoding=Q offset=32
// property contentType attributes=T@"NSString",C,N,V_contentType
// property byteRangeAccessSupported attributes=TB,N,V_byteRangeAccessSupported
// property contentLength attributes=TQ,N,V_contentLength
// property downloadedContentLength attributes=TQ,N,V_downloadedContentLength
// IMP 0x1001e0394 | @16@0:8
- (id)debugDescription;
// IMP 0x1001e0cf4 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1001e14cc | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1001e1d3c | @16@0:8
- (id)contentType;
// IMP 0x1001e1d5c | v24@0:8@16
- (void)setContentType:(id)arg0;
// IMP 0x1001e1d8c | B16@0:8
- (BOOL)byteRangeAccessSupported;
// IMP 0x1001e1da0 | v20@0:8B16
- (void)setByteRangeAccessSupported:(BOOL)arg0;
// IMP 0x1001e1db4 | Q16@0:8
- (unsigned long long)contentLength;
// IMP 0x1001e1dd4 | v24@0:8Q16
- (void)setContentLength:(unsigned long long)arg0;
// IMP 0x1001e1df4 | Q16@0:8
- (unsigned long long)downloadedContentLength;
// IMP 0x1001e1e08 | v24@0:8Q16
- (void)setDownloadedContentLength:(unsigned long long)arg0;
// IMP 0x1001e1e28 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
