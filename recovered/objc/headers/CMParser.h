// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ada8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CMParser : NSObject
// ivar _delegateFlags encoding={?="didStartDocument"b1"didEndDocument"b1"didAbort"b1"foundText"b1"foundHRule"b1"didStartHeader"b1"didEndHeader"b1"didStartParagraph"b1"didEndParagraph"b1"didStartEmphasis"b1"didEndEmphasis"b1"didStartStrong"b1"didEndStrong"b1"didStartLink"b1"didEndLink"b1"didStartImage"b1"didEndImage"b1"foundHTML"b1"foundInlineHTML"b1"foundCodeBlock"b1"foundInlineCode"b1"foundSoftBreak"b1"foundLineBreak"b1"didStartBlockQuote"b1"didEndBlockQuote"b1"didStartUnorderedList"b1"didEndUnorderedList"b1"didStartOrderedList"b1"didEndOrderedList"b1"didStartListItem"b1"didEndListItem"b1} offset=8
// ivar _parsing encoding=i offset=12
// ivar _document encoding=@"CMDocument" offset=16
// ivar _delegate encoding=@"<CMParserDelegate>" offset=24
// ivar _currentNode encoding=@"CMNode" offset=32
// property currentNode attributes=T@"CMNode",&,V_currentNode
// property delegate attributes=T@"<CMParserDelegate>",W,N,V_delegate
// property document attributes=T@"CMDocument",R,N,V_document
// IMP 0x1008484dc | @32@0:8@16@24
- (id)initWithDocument:(id)arg0 delegate:(id)arg1;
// IMP 0x1008486e4 | v16@0:8
- (void)parse;
// IMP 0x100848898 | v16@0:8
- (void)abortParsing;
// IMP 0x100848914 | v32@0:8@16q24
- (void)handleNode:(id)arg0 event:(long long)arg1;
// IMP 0x1008496b0 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x10084a074 | @16@0:8
- (id)document;
// IMP 0x10084a090 | @16@0:8
- (id)delegate;
// IMP 0x10084a0bc | @16@0:8
- (id)currentNode;
// IMP 0x10084a0e4 | v24@0:8@16
- (void)setCurrentNode:(id)arg0;
// IMP 0x10084a11c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
