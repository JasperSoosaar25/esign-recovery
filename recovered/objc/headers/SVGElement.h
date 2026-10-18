// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92938
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGElement : Element
// ivar _identifier encoding=@"NSString" offset=8
// ivar xmlbase encoding=@"NSString" offset=16
// ivar _rootOfCurrentDocumentFragment encoding=@"SVGSVGElement" offset=24
// ivar _viewportElement encoding=@"SVGElement" offset=32
// ivar _stringValue encoding=@"NSString" offset=40
// ivar className encoding=@"NSString" offset=48
// ivar style encoding=@"CSSStyleDeclaration" offset=56
// property stringValue attributes=T@"NSString",C,N,V_stringValue
// property identifier attributes=T@"NSString",&,N,V_identifier
// property xmlbase attributes=T@"NSString",&,N,Vxmlbase
// property rootOfCurrentDocumentFragment attributes=T@"SVGSVGElement",W,N,V_rootOfCurrentDocumentFragment
// property viewportElement attributes=T@"SVGElement",W,N,V_viewportElement
// property className attributes=T@"NSString",&,N,VclassName
// property style attributes=T@"CSSStyleDeclaration",&,N,Vstyle
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100570840 | @24@0:8@16
- (id)getPresentationAttribute:(id)arg0;
// IMP 0x100570850 | v24@0:8@16
- (void)reCalculateAndSetViewportElementReferenceUsingFirstSVGAncestor:(id)arg0;
// IMP 0x1005709cc | v24@0:8@16
- (void)setParentNode:(id)arg0;
// IMP 0x100570c3c | v24@0:8@16
- (void)setRootOfCurrentDocumentFragment:(id)arg0;
// IMP 0x100570d88 | v24@0:8@16
- (void)setViewportElement:(id)arg0;
// IMP 0x100570ed4 | v16@0:8
- (void)loadDefaults;
// IMP 0x100570ed8 | @24@0:8@16
- (id)getAttributeAsSVGLength:(id)arg0;
// IMP 0x100570f28 | v24@0:8@16
- (void)postProcessAttributesAddingErrorsTo:(id)arg0;
// IMP 0x100571c24 | @16@0:8
- (id)description;
// IMP 0x100571d34 | @32@0:8@16@24
- (id)initWithLocalName:(id)arg0 attributes:(id)arg1;
// IMP 0x100571dbc | @40@0:8@16@24@32
- (id)initWithQualifiedName:(id)arg0 inNameSpaceURI:(id)arg1 attributes:(id)arg2;
// IMP 0x100571e44 | {_NSRange=QQ}40@0:8@16{_NSRange=QQ}24
- (struct _NSRange)nextSelectorGroupFromText:(id)arg0 startFrom:(struct _NSRange)arg1;
// IMP 0x100571f68 | {_NSRange=QQ}40@0:8@16{_NSRange=QQ}24
- (struct _NSRange)nextSelectorRangeFromText:(id)arg0 startFrom:(struct _NSRange)arg1;
// IMP 0x1005720bc | B40@0:8@16@24^q32
- (BOOL)selector:(id)arg0 appliesTo:(id)arg1 specificity:(long long *)arg2;
// IMP 0x1005723d4 | B40@0:8@16@24^q32
- (BOOL)styleRule:(id)arg0 appliesTo:(id)arg1 specificity:(long long *)arg2;
// IMP 0x1005725c8 | @24@0:8@16
- (id)cascadedValueForStylableProperty:(id)arg0;
// IMP 0x1005725d0 | @28@0:8@16B24
- (id)cascadedValueForStylableProperty:(id)arg0 inherit:(BOOL)arg1;
// IMP 0x100572a8c | @16@0:8
- (id)identifier;
// IMP 0x100572a9c | v24@0:8@16
- (void)setIdentifier:(id)arg0;
// IMP 0x100572ab0 | @16@0:8
- (id)xmlbase;
// IMP 0x100572ac0 | v24@0:8@16
- (void)setXmlbase:(id)arg0;
// IMP 0x100572ad4 | @16@0:8
- (id)rootOfCurrentDocumentFragment;
// IMP 0x100572af4 | @16@0:8
- (id)viewportElement;
// IMP 0x100572b14 | @16@0:8
- (id)stringValue;
// IMP 0x100572b24 | v24@0:8@16
- (void)setStringValue:(id)arg0;
// IMP 0x100572b30 | @16@0:8
- (id)className;
// IMP 0x100572b40 | v24@0:8@16
- (void)setClassName:(id)arg0;
// IMP 0x100572b54 | @16@0:8
- (id)style;
// IMP 0x100572b64 | v24@0:8@16
- (void)setStyle:(id)arg0;
// IMP 0x100572b78 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100570848 | B16@0:8
+ (BOOL)shouldStoreContent;
@end
