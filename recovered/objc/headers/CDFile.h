// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c987f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDFile : NSObject
// ivar _filename encoding=@"NSString" offset=8
// ivar _data encoding=@"NSData" offset=16
// ivar _searchPathState encoding=@"CDSearchPathState" offset=24
// property filename attributes=T@"NSString",R,V_filename
// property data attributes=T@"NSData",R,V_data
// property searchPathState attributes=T@"CDSearchPathState",R,V_searchPathState
// property architectureNameDescription attributes=T@"NSString",R,N
// IMP 0x1006f18a4 | @40@0:8@16@24@32
- (id)initWithData:(id)arg0 filename:(id)arg1 searchPathState:(id)arg2;
// IMP 0x1006f19a0 | B24@0:8^{?=ii}16
- (BOOL)bestMatchForLocalArch:(void * /* aggregate ? */ *)arg0;
// IMP 0x1006f19f4 | B24@0:8^{?=ii}16
- (BOOL)bestMatchForArch:(void * /* aggregate ? */ *)arg0;
// IMP 0x1006f19fc | @24@0:8{?=ii}16
- (id)machOFileWithArch:(void * /* aggregate ? */)arg0;
// IMP 0x1006f1a04 | @16@0:8
- (id)architectureNameDescription;
// IMP 0x1006f1a0c | @16@0:8
- (id)filename;
// IMP 0x1006f1a18 | @16@0:8
- (id)data;
// IMP 0x1006f1a24 | @16@0:8
- (id)searchPathState;
// IMP 0x1006f1a30 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006f17d0 | @32@0:8@16@24
+ (id)fileWithContentsOfFile:(id)arg0 searchPathState:(id)arg1;
@end
