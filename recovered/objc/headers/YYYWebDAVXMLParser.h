// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7bee8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYWebDAVXMLParser : NSObject
// ivar _xmlChars encoding=@"NSMutableString" offset=8
// ivar _xmlBucket encoding=@"NSMutableDictionary" offset=16
// ivar _data encoding=@"NSData" offset=24
// ivar _uriLength encoding=Q offset=32
// ivar _parser encoding=@"NSXMLParser" offset=40
// ivar _directoryBucket encoding=@"NSMutableArray" offset=48
// property parser attributes=T@"NSXMLParser",&,N,V_parser
// property directoryBucket attributes=T@"NSMutableArray",&,N,V_directoryBucket
// property data attributes=T@"NSData",&,N,V_data
// property uriLength attributes=TQ,N,V_uriLength
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100057f60 | @16@0:8
- (id)parse;
// IMP 0x100058360 | v24@0:8@16
- (void)parserDidStartDocument:(id)arg0;
// IMP 0x100058364 | v24@0:8@16
- (void)parserDidEndDocument:(id)arg0;
// IMP 0x1000583e0 | v32@0:8@16@24
- (void)parser:(id)arg0 validationErrorOccurred:(id)arg1;
// IMP 0x10005845c | v56@0:8@16@24@32@40@48
- (void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4;
// IMP 0x10005883c | v48@0:8@16@24@32@40
- (void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3;
// IMP 0x10005934c | v32@0:8@16@24
- (void)parser:(id)arg0 foundCharacters:(id)arg1;
// IMP 0x100059374 | @16@0:8
- (id)data;
// IMP 0x1000593a0 | v24@0:8@16
- (void)setData:(id)arg0;
// IMP 0x100059400 | Q16@0:8
- (unsigned long long)uriLength;
// IMP 0x100059420 | v24@0:8Q16
- (void)setUriLength:(unsigned long long)arg0;
// IMP 0x100059440 | @16@0:8
- (id)parser;
// IMP 0x100059454 | v24@0:8@16
- (void)setParser:(id)arg0;
// IMP 0x100059488 | @16@0:8
- (id)directoryBucket;
// IMP 0x1000594a8 | v24@0:8@16
- (void)setDirectoryBucket:(id)arg0;
// IMP 0x100059530 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100057eb0 | @24@0:8@16
+ (id)parserWithData:(id)arg0;
@end
