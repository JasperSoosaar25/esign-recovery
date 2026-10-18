// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83d00
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerFileResponse : GCDWebServerResponse
// ivar _path encoding=@"NSString" offset=8
// ivar _offset encoding=Q offset=16
// ivar _size encoding=Q offset=24
// ivar _file encoding=i offset=32
// property contentType attributes=T@"NSString",C,D,N
// property lastModifiedDate attributes=T@"NSDate",&,D,N
// property eTag attributes=T@"NSString",C,D,N
// IMP 0x10041fab8 | @24@0:8@16
- (id)initWithFile:(id)arg0;
// IMP 0x10041facc | @28@0:8@16B24
- (id)initWithFile:(id)arg0 isAttachment:(BOOL)arg1;
// IMP 0x10041fae0 | @40@0:8@16{_NSRange=QQ}24
- (id)initWithFile:(id)arg0 byteRange:(struct _NSRange)arg1;
// IMP 0x10041faec | @52@0:8@16{_NSRange=QQ}24B40@44
- (id)initWithFile:(id)arg0 byteRange:(struct _NSRange)arg1 isAttachment:(BOOL)arg2 mimeTypeOverrides:(id)arg3;
// IMP 0x10041fea4 | B24@0:8^@16
- (BOOL)open:(id *)arg0;
// IMP 0x1004200f4 | @24@0:8^@16
- (id)readData:(id *)arg0;
// IMP 0x1004202bc | v16@0:8
- (void)close;
// IMP 0x1004202cc | @16@0:8
- (id)description;
// IMP 0x10042036c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10041f934 | @24@0:8@16
+ (id)responseWithFile:(id)arg0;
// IMP 0x10041f980 | @28@0:8@16B24
+ (id)responseWithFile:(id)arg0 isAttachment:(BOOL)arg1;
// IMP 0x10041f9dc | @40@0:8@16{_NSRange=QQ}24
+ (id)responseWithFile:(id)arg0 byteRange:(struct _NSRange)arg1;
// IMP 0x10041fa40 | @44@0:8@16{_NSRange=QQ}24B40
+ (id)responseWithFile:(id)arg0 byteRange:(struct _NSRange)arg1 isAttachment:(BOOL)arg2;
@end
