// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c812b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYCacheSizeViewController : QMUICommonTableViewController
// ivar _cacheSize encoding=@"NSMutableArray" offset=16
// ivar _helper encoding=@"YYYTableViewHelper" offset=24
// ivar _freespace encoding=Q offset=32
// ivar _totalDiskSize encoding=Q offset=40
// ivar _esignDiskSize encoding=Q offset=48
// property cacheSize attributes=T@"NSMutableArray",&,N,V_cacheSize
// property helper attributes=T@"YYYTableViewHelper",&,N,V_helper
// property freespace attributes=TQ,N,V_freespace
// property totalDiskSize attributes=TQ,N,V_totalDiskSize
// property esignDiskSize attributes=TQ,N,V_esignDiskSize
// IMP 0x10035d7b4 | v16@0:8
- (void)viewDidLoad;
// IMP 0x10035dda8 | v16@0:8
- (void)calculateSize;
// IMP 0x10035e63c | v16@0:8
- (void)popViewController;
// IMP 0x10035e6b4 | v16@0:8
- (void)setupDataSource;
// IMP 0x100362560 | v24@0:8@16
- (void)clearCacheWithInfo:(id)arg0;
// IMP 0x100362e04 | @16@0:8
- (id)cacheSize;
// IMP 0x100362e2c | v24@0:8@16
- (void)setCacheSize:(id)arg0;
// IMP 0x100362ec4 | @16@0:8
- (id)helper;
// IMP 0x100362eec | v24@0:8@16
- (void)setHelper:(id)arg0;
// IMP 0x100362f18 | Q16@0:8
- (unsigned long long)freespace;
// IMP 0x100362f34 | v24@0:8Q16
- (void)setFreespace:(unsigned long long)arg0;
// IMP 0x100362f44 | Q16@0:8
- (unsigned long long)totalDiskSize;
// IMP 0x100362f54 | v24@0:8Q16
- (void)setTotalDiskSize:(unsigned long long)arg0;
// IMP 0x100362f98 | Q16@0:8
- (unsigned long long)esignDiskSize;
// IMP 0x100362fc0 | v24@0:8Q16
- (void)setEsignDiskSize:(unsigned long long)arg0;
// IMP 0x100363010 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
