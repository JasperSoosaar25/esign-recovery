// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c84398
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerResponse : NSObject
// ivar _opened encoding=B offset=8
// ivar _encoders encoding=@"NSMutableArray" offset=16
// ivar _reader encoding=@"<GCDWebServerBodyReader>" offset=24
// ivar _gzipContentEncodingEnabled encoding=B offset=32
// ivar _contentType encoding=@"NSString" offset=40
// ivar _contentLength encoding=Q offset=48
// ivar _statusCode encoding=q offset=56
// ivar _cacheControlMaxAge encoding=Q offset=64
// ivar _lastModifiedDate encoding=@"NSDate" offset=72
// ivar _eTag encoding=@"NSString" offset=80
// ivar _additionalHeaders encoding=@"NSDictionary" offset=88
// property additionalHeaders attributes=T@"NSDictionary",R,N,V_additionalHeaders
// property usesChunkedTransferEncoding attributes=TB,R,N
// property contentType attributes=T@"NSString",C,N,V_contentType
// property contentLength attributes=TQ,N,V_contentLength
// property statusCode attributes=Tq,N,V_statusCode
// property cacheControlMaxAge attributes=TQ,N,V_cacheControlMaxAge
// property lastModifiedDate attributes=T@"NSDate",&,N,V_lastModifiedDate
// property eTag attributes=T@"NSString",C,N,V_eTag
// property gzipContentEncodingEnabled attributes=TB,N,GisGZipContentEncodingEnabled,V_gzipContentEncodingEnabled
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100424a30 | @24@0:8q16
- (id)initWithStatusCode:(long long)arg0;
// IMP 0x100424a68 | @28@0:8@16B24
- (id)initWithRedirect:(id)arg0 permanent:(BOOL)arg1;
// IMP 0x10042446c | @16@0:8
- (id)init;
// IMP 0x100424510 | v32@0:8@16@24
- (void)setValue:(id)arg0 forAdditionalHeader:(id)arg1;
// IMP 0x100424518 | B16@0:8
- (BOOL)hasBody;
// IMP 0x100424528 | B16@0:8
- (BOOL)usesChunkedTransferEncoding;
// IMP 0x100424548 | B24@0:8^@16
- (BOOL)open:(id *)arg0;
// IMP 0x100424550 | @24@0:8^@16
- (id)readData:(id *)arg0;
// IMP 0x10042455c | v16@0:8
- (void)close;
// IMP 0x100424560 | v16@0:8
- (void)prepareForReading;
// IMP 0x1004245c4 | B24@0:8^@16
- (BOOL)performOpen:(id *)arg0;
// IMP 0x1004245e4 | v24@0:8@?16
- (void)performReadDataWithCompletion:(id /* block */)arg0;
// IMP 0x1004246a4 | v16@0:8
- (void)performClose;
// IMP 0x1004246ac | @16@0:8
- (id)description;
// IMP 0x1004248e0 | @16@0:8
- (id)contentType;
// IMP 0x1004248e8 | v24@0:8@16
- (void)setContentType:(id)arg0;
// IMP 0x1004248f0 | Q16@0:8
- (unsigned long long)contentLength;
// IMP 0x1004248f8 | v24@0:8Q16
- (void)setContentLength:(unsigned long long)arg0;
// IMP 0x100424900 | q16@0:8
- (long long)statusCode;
// IMP 0x100424908 | v24@0:8q16
- (void)setStatusCode:(long long)arg0;
// IMP 0x100424910 | Q16@0:8
- (unsigned long long)cacheControlMaxAge;
// IMP 0x100424918 | v24@0:8Q16
- (void)setCacheControlMaxAge:(unsigned long long)arg0;
// IMP 0x100424920 | @16@0:8
- (id)lastModifiedDate;
// IMP 0x100424928 | v24@0:8@16
- (void)setLastModifiedDate:(id)arg0;
// IMP 0x100424934 | @16@0:8
- (id)eTag;
// IMP 0x10042493c | v24@0:8@16
- (void)setETag:(id)arg0;
// IMP 0x100424944 | B16@0:8
- (BOOL)isGZipContentEncodingEnabled;
// IMP 0x10042494c | v20@0:8B16
- (void)setGzipContentEncodingEnabled:(BOOL)arg0;
// IMP 0x100424954 | @16@0:8
- (id)additionalHeaders;
// IMP 0x10042495c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004249b0 | @24@0:8q16
+ (id)responseWithStatusCode:(long long)arg0;
// IMP 0x1004249d8 | @28@0:8@16B24
+ (id)responseWithRedirect:(id)arg0 permanent:(BOOL)arg1;
// IMP 0x100424450 | @16@0:8
+ (id)response;
@end
