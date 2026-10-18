// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83f80
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerRequest : NSObject
// ivar _opened encoding=B offset=8
// ivar _decoders encoding=@"NSMutableArray" offset=16
// ivar _writer encoding=@"<GCDWebServerBodyWriter>" offset=24
// ivar _attributes encoding=@"NSMutableDictionary" offset=32
// ivar _acceptsGzipContentEncoding encoding=B offset=40
// ivar _usesChunkedTransferEncoding encoding=B offset=41
// ivar _method encoding=@"NSString" offset=48
// ivar _URL encoding=@"NSURL" offset=56
// ivar _headers encoding=@"NSDictionary" offset=64
// ivar _path encoding=@"NSString" offset=72
// ivar _query encoding=@"NSDictionary" offset=80
// ivar _contentType encoding=@"NSString" offset=88
// ivar _contentLength encoding=Q offset=96
// ivar _ifModifiedSince encoding=@"NSDate" offset=104
// ivar _ifNoneMatch encoding=@"NSString" offset=112
// ivar _localAddressData encoding=@"NSData" offset=120
// ivar _remoteAddressData encoding=@"NSData" offset=128
// ivar _byteRange encoding={_NSRange="location"Q"length"Q} offset=136
// property usesChunkedTransferEncoding attributes=TB,R,N,V_usesChunkedTransferEncoding
// property localAddressData attributes=T@"NSData",&,N,V_localAddressData
// property remoteAddressData attributes=T@"NSData",&,N,V_remoteAddressData
// property method attributes=T@"NSString",R,N,V_method
// property URL attributes=T@"NSURL",R,N,V_URL
// property headers attributes=T@"NSDictionary",R,N,V_headers
// property path attributes=T@"NSString",R,N,V_path
// property query attributes=T@"NSDictionary",R,N,V_query
// property contentType attributes=T@"NSString",R,N,V_contentType
// property contentLength attributes=TQ,R,N,V_contentLength
// property ifModifiedSince attributes=T@"NSDate",R,N,V_ifModifiedSince
// property ifNoneMatch attributes=T@"NSString",R,N,V_ifNoneMatch
// property byteRange attributes=T{_NSRange=QQ},R,N,V_byteRange
// property acceptsGzipContentEncoding attributes=TB,R,N,V_acceptsGzipContentEncoding
// property localAddressString attributes=T@"NSString",R,N
// property remoteAddressString attributes=T@"NSString",R,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004234e8 | @56@0:8@16@24@32@40@48
- (id)initWithMethod:(id)arg0 url:(id)arg1 headers:(id)arg2 path:(id)arg3 query:(id)arg4;
// IMP 0x100423af0 | B16@0:8
- (BOOL)hasBody;
// IMP 0x100423b00 | B16@0:8
- (BOOL)hasByteRange;
// IMP 0x100423b1c | @24@0:8@16
- (id)attributeForKey:(id)arg0;
// IMP 0x100423b24 | B24@0:8^@16
- (BOOL)open:(id *)arg0;
// IMP 0x100423b2c | B32@0:8@16^@24
- (BOOL)writeData:(id)arg0 error:(id *)arg1;
// IMP 0x100423b34 | B24@0:8^@16
- (BOOL)close:(id *)arg0;
// IMP 0x100423b3c | v16@0:8
- (void)prepareForWriting;
// IMP 0x100423c14 | B24@0:8^@16
- (BOOL)performOpen:(id *)arg0;
// IMP 0x100423c34 | B32@0:8@16^@24
- (BOOL)performWriteData:(id)arg0 error:(id *)arg1;
// IMP 0x100423c3c | B24@0:8^@16
- (BOOL)performClose:(id *)arg0;
// IMP 0x100423c44 | v32@0:8@16@24
- (void)setAttribute:(id)arg0 forKey:(id)arg1;
// IMP 0x100423c4c | @16@0:8
- (id)localAddressString;
// IMP 0x100423c68 | @16@0:8
- (id)remoteAddressString;
// IMP 0x100423c84 | @16@0:8
- (id)description;
// IMP 0x100423f14 | @16@0:8
- (id)method;
// IMP 0x100423f1c | @16@0:8
- (id)URL;
// IMP 0x100423f24 | @16@0:8
- (id)headers;
// IMP 0x100423f2c | @16@0:8
- (id)path;
// IMP 0x100423f34 | @16@0:8
- (id)query;
// IMP 0x100423f3c | @16@0:8
- (id)contentType;
// IMP 0x100423f44 | Q16@0:8
- (unsigned long long)contentLength;
// IMP 0x100423f4c | @16@0:8
- (id)ifModifiedSince;
// IMP 0x100423f54 | @16@0:8
- (id)ifNoneMatch;
// IMP 0x100423f5c | {_NSRange=QQ}16@0:8
- (struct _NSRange)byteRange;
// IMP 0x100423f68 | B16@0:8
- (BOOL)acceptsGzipContentEncoding;
// IMP 0x100423f70 | @16@0:8
- (id)localAddressData;
// IMP 0x100423f78 | v24@0:8@16
- (void)setLocalAddressData:(id)arg0;
// IMP 0x100423f84 | @16@0:8
- (id)remoteAddressData;
// IMP 0x100423f8c | v24@0:8@16
- (void)setRemoteAddressData:(id)arg0;
// IMP 0x100423f98 | B16@0:8
- (BOOL)usesChunkedTransferEncoding;
// IMP 0x100423fa0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
