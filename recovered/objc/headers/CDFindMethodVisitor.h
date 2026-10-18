// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98af8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDFindMethodVisitor : CDVisitor
// ivar _searchString encoding=@"NSString" offset=8
// ivar _resultString encoding=@"NSMutableString" offset=16
// ivar _context encoding=@"CDOCProtocol" offset=24
// ivar _hasShownContext encoding=B offset=32
// property resultString attributes=T@"NSMutableString",R,V_resultString
// property context attributes=T@"CDOCProtocol",&,N,V_context
// property hasShownContext attributes=TB,V_hasShownContext
// property searchString attributes=T@"NSString",&,V_searchString
// IMP 0x1006f6adc | @16@0:8
- (id)init;
// IMP 0x1006f6b80 | v16@0:8
- (void)willBeginVisiting;
// IMP 0x1006f6c00 | v24@0:8@16
- (void)visitObjectiveCProcessor:(id)arg0;
// IMP 0x1006f6ccc | v16@0:8
- (void)didEndVisiting;
// IMP 0x1006f6cd0 | v16@0:8
- (void)writeResultToStandardOutput;
// IMP 0x1006f6d40 | v24@0:8@16
- (void)willVisitProtocol:(id)arg0;
// IMP 0x1006f6d44 | v24@0:8@16
- (void)didVisitProtocol:(id)arg0;
// IMP 0x1006f6d98 | v24@0:8@16
- (void)willVisitClass:(id)arg0;
// IMP 0x1006f6d9c | v24@0:8@16
- (void)didVisitClass:(id)arg0;
// IMP 0x1006f6df0 | v24@0:8@16
- (void)willVisitIvarsOfClass:(id)arg0;
// IMP 0x1006f6df4 | v24@0:8@16
- (void)didVisitIvarsOfClass:(id)arg0;
// IMP 0x1006f6df8 | v24@0:8@16
- (void)willVisitCategory:(id)arg0;
// IMP 0x1006f6dfc | v24@0:8@16
- (void)didVisitCategory:(id)arg0;
// IMP 0x1006f6e50 | v24@0:8@16
- (void)visitClassMethod:(id)arg0;
// IMP 0x1006f6f8c | v32@0:8@16@24
- (void)visitInstanceMethod:(id)arg0 propertyState:(id)arg1;
// IMP 0x1006f70c8 | v24@0:8@16
- (void)visitIvar:(id)arg0;
// IMP 0x1006f70cc | v24@0:8@16
- (void)setContext:(id)arg0;
// IMP 0x1006f7134 | v16@0:8
- (void)showContextIfNecessary;
// IMP 0x1006f71fc | @16@0:8
- (id)searchString;
// IMP 0x1006f720c | v24@0:8@16
- (void)setSearchString:(id)arg0;
// IMP 0x1006f7218 | @16@0:8
- (id)resultString;
// IMP 0x1006f7228 | @16@0:8
- (id)context;
// IMP 0x1006f7238 | B16@0:8
- (BOOL)hasShownContext;
// IMP 0x1006f724c | v20@0:8B16
- (void)setHasShownContext:(BOOL)arg0;
// IMP 0x1006f725c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
