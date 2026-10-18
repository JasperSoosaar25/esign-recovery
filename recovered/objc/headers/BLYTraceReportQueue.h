// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94f60
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYTraceReportQueue : NSObject
// ivar _reportQueue encoding=@"NSOperationQueue" offset=8
// ivar _cacheTraces encoding=@"NSMutableArray" offset=16
// ivar _cacheFilePath encoding=@"NSString" offset=24
// property reportQueue attributes=T@"NSOperationQueue",&,V_reportQueue
// property cacheTraces attributes=T@"NSMutableArray",&,N,V_cacheTraces
// property cacheFilePath attributes=T@"NSString",&,N,V_cacheFilePath
// IMP 0x100634884 | @16@0:8
- (id)init;
// IMP 0x100634a14 | B28@0:8@16B24
- (BOOL)addLogTraceToQueue:(id)arg0 immediately:(BOOL)arg1;
// IMP 0x100634e44 | v16@0:8
- (void)checkAndReportCacheFiles;
// IMP 0x1006350ec | v32@0:8@16@24
- (void)batchReportTrace:(id)arg0 cacheFilePath:(id)arg1;
// IMP 0x10063580c | v32@0:8@16@?24
- (void)requetPOST2Atta:(id)arg0 result:(id /* block */)arg1;
// IMP 0x100635c18 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100635bdc | @16@0:8
- (id)reportQueue;
// IMP 0x100635be8 | v24@0:8@16
- (void)setReportQueue:(id)arg0;
// IMP 0x100635bf0 | @16@0:8
- (id)cacheTraces;
// IMP 0x100635bf8 | v24@0:8@16
- (void)setCacheTraces:(id)arg0;
// IMP 0x100635c04 | @16@0:8
- (id)cacheFilePath;
// IMP 0x100635c0c | v24@0:8@16
- (void)setCacheFilePath:(id)arg0;
// IMP 0x100634780 | B28@0:8@16B24
+ (BOOL)addLogTraceToQueue:(id)arg0 immediately:(BOOL)arg1;
// IMP 0x100634804 | @16@0:8
+ (id)sharedQueue;
// IMP 0x100635590 | @24@0:8@16
+ (id)encodeTraceInfo:(id)arg0;
@end
