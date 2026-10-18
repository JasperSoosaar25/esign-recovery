// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c984d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDSearchPathState : NSObject
// ivar _executablePath encoding=@"NSString" offset=8
// ivar _searchPathStack encoding=@"NSMutableArray" offset=16
// property searchPathStack attributes=T@"NSMutableArray",R,V_searchPathStack
// property executablePath attributes=T@"NSString",&,N,V_executablePath
// IMP 0x1006e6e20 | @16@0:8
- (id)init;
// IMP 0x1006e6e94 | v24@0:8@16
- (void)pushSearchPaths:(id)arg0;
// IMP 0x1006e6ee4 | v16@0:8
- (void)popSearchPaths;
// IMP 0x1006e6f58 | @16@0:8
- (id)searchPaths;
// IMP 0x1006e7084 | @16@0:8
- (id)executablePath;
// IMP 0x1006e708c | v24@0:8@16
- (void)setExecutablePath:(id)arg0;
// IMP 0x1006e7098 | @16@0:8
- (id)searchPathStack;
// IMP 0x1006e70a4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
