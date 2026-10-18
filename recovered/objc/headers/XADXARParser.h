// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9dc08
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADXARParser : XADArchiveParser
// ivar heapoffset encoding=q offset=136
// ivar state encoding=i offset=144
// ivar filedefinitions encoding=@"NSDictionary" offset=152
// ivar datadefinitions encoding=@"NSDictionary" offset=160
// ivar eadefinitions encoding=@"NSDictionary" offset=168
// ivar currfile encoding=@"NSMutableDictionary" offset=176
// ivar currea encoding=@"NSMutableDictionary" offset=184
// ivar files encoding=@"NSMutableArray" offset=192
// ivar filestack encoding=@"NSMutableArray" offset=200
// ivar curreas encoding=@"NSMutableArray" offset=208
// ivar currstring encoding=@"NSMutableString" offset=216
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1008b81a8 | v16@0:8
- (void)parse;
// IMP 0x1008b8a64 | v32@0:8@16@24
- (void)finishFile:(id)arg0 parentPath:(id)arg1;
// IMP 0x1008b9218 | @28@0:8@16B24
- (id)compressionNameForEncodingStyle:(id)arg0 isXIP:(BOOL)arg1;
// IMP 0x1008b9334 | v56@0:8@16@24@32@40@48
- (void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4;
// IMP 0x1008b95bc | v48@0:8@16@24@32@40
- (void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3;
// IMP 0x1008b990c | v32@0:8@16@24
- (void)parser:(id)arg0 foundCharacters:(id)arg1;
// IMP 0x1008b9928 | v48@0:8@16@24@32@40
- (void)startSimpleElement:(id)arg0 attributes:(id)arg1 definitions:(id)arg2 destinationDictionary:(id)arg3;
// IMP 0x1008b9a70 | v40@0:8@16@24@32
- (void)endSimpleElement:(id)arg0 definitions:(id)arg1 destinationDictionary:(id)arg2;
// IMP 0x1008b9ad8 | v40@0:8@16@24@32
- (void)parseDefinition:(id)arg0 string:(id)arg1 destinationDictionary:(id)arg2;
// IMP 0x1008b9f98 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008ba160 | @64@0:8@16@24@32@40@48@56
- (id)handleForEncodingStyle:(id)arg0 offset:(id)arg1 length:(id)arg2 size:(id)arg3 checksum:(id)arg4 checksumStyle:(id)arg5;
// IMP 0x1008ba444 | @16@0:8
- (id)formatName;
// IMP 0x1008b8120 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008b8128 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
