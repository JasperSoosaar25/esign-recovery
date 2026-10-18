// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b300
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CMAttributedStringRenderer : NSObject
// ivar _document encoding=@"CMDocument" offset=8
// ivar _attributes encoding=@"CMTextAttributes" offset=16
// ivar _attributeStack encoding=@"CMCascadingAttributeStack" offset=24
// ivar _HTMLStack encoding=@"CMStack" offset=32
// ivar _defaultImageTextAttachementSize encoding={CGSize="width"d"height"d} offset=40
// ivar _tagNameToTransformerMapping encoding=@"NSMutableDictionary" offset=56
// ivar _buffer encoding=@"NSMutableAttributedString" offset=64
// ivar _attributedString encoding=@"NSAttributedString" offset=72
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10085efdc | @32@0:8@16@24
- (id)initWithDocument:(id)arg0 attributes:(id)arg1;
// IMP 0x10085f104 | v24@0:8@16
- (void)registerHTMLElementTransformer:(id)arg0;
// IMP 0x10085f22c | @16@0:8
- (id)render;
// IMP 0x10085f398 | v24@0:8@16
- (void)parserDidStartDocument:(id)arg0;
// IMP 0x10085f444 | v24@0:8@16
- (void)parserDidEndDocument:(id)arg0;
// IMP 0x10085f4bc | v32@0:8@16@24
- (void)parser:(id)arg0 foundText:(id)arg1;
// IMP 0x10085f600 | v32@0:8@16q24
- (void)parser:(id)arg0 didStartHeaderWithLevel:(long long)arg1;
// IMP 0x10085f6bc | v32@0:8@16q24
- (void)parser:(id)arg0 didEndHeaderWithLevel:(long long)arg1;
// IMP 0x10085f748 | v24@0:8@16
- (void)parserDidStartParagraph:(id)arg0;
// IMP 0x10085f840 | v24@0:8@16
- (void)parserDidEndParagraph:(id)arg0;
// IMP 0x10085f90c | v24@0:8@16
- (void)parserDidStartEmphasis:(id)arg0;
// IMP 0x10085fa30 | v24@0:8@16
- (void)parserDidEndEmphasis:(id)arg0;
// IMP 0x10085fa98 | v24@0:8@16
- (void)parserDidStartStrong:(id)arg0;
// IMP 0x10085fbc0 | v24@0:8@16
- (void)parserDidEndStrong:(id)arg0;
// IMP 0x10085fc28 | v40@0:8@16@24@32
- (void)parser:(id)arg0 didStartLinkWithURL:(id)arg1 title:(id)arg2;
// IMP 0x10085fd8c | v40@0:8@16@24@32
- (void)parser:(id)arg0 didEndLinkWithURL:(id)arg1 title:(id)arg2;
// IMP 0x10085fe3c | v40@0:8@16@24@32
- (void)parser:(id)arg0 didStartImageWithURL:(id)arg1 title:(id)arg2;
// IMP 0x100860430 | v32@0:8@16@24
- (void)parser:(id)arg0 foundHTML:(id)arg1;
// IMP 0x10086051c | v32@0:8@16@24
- (void)parser:(id)arg0 foundInlineHTML:(id)arg1;
// IMP 0x1008607dc | v40@0:8@16@24@32
- (void)parser:(id)arg0 foundCodeBlock:(id)arg1 info:(id)arg2;
// IMP 0x100860944 | v32@0:8@16@24
- (void)parser:(id)arg0 foundInlineCode:(id)arg1;
// IMP 0x100860a44 | v24@0:8@16
- (void)parserFoundSoftBreak:(id)arg0;
// IMP 0x100860aa8 | v24@0:8@16
- (void)parserFoundLineBreak:(id)arg0;
// IMP 0x100860b0c | v24@0:8@16
- (void)parserDidStartBlockQuote:(id)arg0;
// IMP 0x100860bb8 | v24@0:8@16
- (void)parserDidEndBlockQuote:(id)arg0;
// IMP 0x100860c20 | v28@0:8@16B24
- (void)parser:(id)arg0 didStartUnorderedListWithTightness:(BOOL)arg1;
// IMP 0x100860d20 | v28@0:8@16B24
- (void)parser:(id)arg0 didEndUnorderedListWithTightness:(BOOL)arg1;
// IMP 0x100860d98 | v36@0:8@16q24B32
- (void)parser:(id)arg0 didStartOrderedListWithStartingNumber:(long long)arg1 tight:(BOOL)arg2;
// IMP 0x100860ea8 | v36@0:8@16q24B32
- (void)parser:(id)arg0 didEndOrderedListWithStartingNumber:(long long)arg1 tight:(BOOL)arg2;
// IMP 0x100860f2c | v24@0:8@16
- (void)parserDidStartListItem:(id)arg0;
// IMP 0x100861210 | v24@0:8@16
- (void)parserDidEndListItem:(id)arg0;
// IMP 0x100861374 | @24@0:8@16
- (id)listAttributesForNode:(id)arg0;
// IMP 0x100861854 | Q24@0:8@16
- (unsigned long long)sublistLevel:(id)arg0;
// IMP 0x100861954 | @32@0:8@16@24
- (id)newHTMLElementForTagName:(id)arg0 HTML:(id)arg1;
// IMP 0x100861b10 | v32@0:8{CGSize=dd}16
- (void)setImageTextAttachementSize:(struct CGSize)arg0;
// IMP 0x100861b38 | B24@0:8@16
- (BOOL)isImageDescriptionNode:(id)arg0;
// IMP 0x100861bcc | B24@0:8@16
- (BOOL)nodeIsInTightMode:(id)arg0;
// IMP 0x100861c90 | v24@0:8@16
- (void)appendString:(id)arg0;
// IMP 0x100861d68 | v24@0:8@16
- (void)appendHTMLElement:(id)arg0;
// IMP 0x100862070 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
