// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93438
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGKParser : NSObject
// ivar _storedChars encoding=@"NSMutableString" offset=8
// ivar _stackOfParserExtensions encoding=@"NSMutableArray" offset=16
// ivar _parentOfCurrentNode encoding=@"Node" offset=24
// ivar _hasCancelBeenRequested encoding=B offset=32
// ivar source encoding=@"SVGKSource" offset=40
// ivar externalStylesheets encoding=@"NSMutableArray" offset=48
// ivar currentParseRun encoding=@"SVGKParseResult" offset=56
// ivar defaultXMLNamespaceForThisParseRun encoding=@"NSString" offset=64
// ivar parserExtensions encoding=@"NSMutableArray" offset=72
// ivar parserKnownNamespaces encoding=@"NSMutableDictionary" offset=80
// property source attributes=T@"SVGKSource",&,N,Vsource
// property externalStylesheets attributes=T@"NSMutableArray",&,N,VexternalStylesheets
// property currentParseRun attributes=T@"SVGKParseResult",&,N,VcurrentParseRun
// property defaultXMLNamespaceForThisParseRun attributes=T@"NSString",&,N,VdefaultXMLNamespaceForThisParseRun
// property hasCancelBeenRequested attributes=TB,N,V_hasCancelBeenRequested
// property parserExtensions attributes=T@"NSMutableArray",&,N,VparserExtensions
// property parserKnownNamespaces attributes=T@"NSMutableDictionary",&,N,VparserKnownNamespaces
// IMP 0x10057c840 | @24@0:8@16
- (id)initWithSource:(id)arg0;
// IMP 0x10057c920 | v16@0:8
- (void)addDefaultSVGParserExtensions;
// IMP 0x10057ca40 | v24@0:8@16
- (void)addParserExtension:(id)arg0;
// IMP 0x10057ccc0 | @16@0:8
- (id)parseSynchronously;
// IMP 0x10057d418 | @24@0:8@16
- (id)loadCSSFrom:(id)arg0;
// IMP 0x10057d5e8 | @24@0:8@16
- (id)stringFromSource:(id)arg0;
// IMP 0x10057d6a4 | v32@0:8@16@24
- (void)handleProcessingInstruction:(id)arg0 withData:(id)arg1;
// IMP 0x10057d908 | v16@0:8
- (void)addExternalStylesheetsToRootElement;
// IMP 0x10057d9f4 | v48@0:8@16@24@32@40
- (void)handleStartElement:(id)arg0 namePrefix:(id)arg1 namespaceURI:(id)arg2 attributeObjects:(id)arg3;
// IMP 0x10057de94 | v24@0:8@16
- (void)handleEndElement:(id)arg0;
// IMP 0x10057dfa0 | v28@0:8r*16i24
- (void)handleFoundCharacters:(char *)arg0 length:(int)arg1;
// IMP 0x10057e32c | @16@0:8
- (id)source;
// IMP 0x10057e334 | v24@0:8@16
- (void)setSource:(id)arg0;
// IMP 0x10057e340 | @16@0:8
- (id)externalStylesheets;
// IMP 0x10057e348 | v24@0:8@16
- (void)setExternalStylesheets:(id)arg0;
// IMP 0x10057e354 | @16@0:8
- (id)currentParseRun;
// IMP 0x10057e35c | v24@0:8@16
- (void)setCurrentParseRun:(id)arg0;
// IMP 0x10057e368 | @16@0:8
- (id)defaultXMLNamespaceForThisParseRun;
// IMP 0x10057e370 | v24@0:8@16
- (void)setDefaultXMLNamespaceForThisParseRun:(id)arg0;
// IMP 0x10057e37c | @16@0:8
- (id)parserExtensions;
// IMP 0x10057e384 | v24@0:8@16
- (void)setParserExtensions:(id)arg0;
// IMP 0x10057e390 | @16@0:8
- (id)parserKnownNamespaces;
// IMP 0x10057e398 | v24@0:8@16
- (void)setParserKnownNamespaces:(id)arg0;
// IMP 0x10057e3a4 | B16@0:8
- (BOOL)hasCancelBeenRequested;
// IMP 0x10057e3ac | v20@0:8B16
- (void)setHasCancelBeenRequested:(BOOL)arg0;
// IMP 0x10057e3b4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10057c7a4 | v24@0:8@16
+ (void)cancelParser:(id)arg0;
// IMP 0x10057c7b0 | @24@0:8@16
+ (id)newParserWithDefaultSVGKParserExtensions:(id)arg0;
// IMP 0x10057c804 | @24@0:8@16
+ (id)parseSourceUsingDefaultSVGKParser:(id)arg0;
// IMP 0x10057dffc | @24@0:8@16
+ (id)NSDictionaryFromCSSAttributes:(id)arg0;
@end
