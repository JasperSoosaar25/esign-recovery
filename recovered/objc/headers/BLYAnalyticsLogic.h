// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95aa0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYAnalyticsLogic : BLYCommonUploadLogic
// ivar _jceModel encoding=@"BLYJceObjectV2" offset=8
// ivar _summaryInfo encoding=@"BLYSummaryInfo" offset=16
// property summaryInfo attributes=T@"BLYSummaryInfo",&,N,V_summaryInfo
// IMP 0x100648714 | @24@0:8@16
- (id)initWithSummaryInfo:(id)arg0;
// IMP 0x1006487a8 | @16@0:8
- (id)jceModel;
// IMP 0x100648f18 | @16@0:8
- (id)userInfoPackage;
// IMP 0x10064942c | q16@0:8
- (long long)persistType;
// IMP 0x100649434 | @16@0:8
- (id)persistFileKey;
// IMP 0x100649444 | @16@0:8
- (id)jceCMDString;
// IMP 0x1006494cc | B16@0:8
- (BOOL)asynchronous;
// IMP 0x1006494d4 | B16@0:8
- (BOOL)isConcurrent;
// IMP 0x1006494dc | B16@0:8
- (BOOL)shouldPersist;
// IMP 0x1006494e4 | v20@0:8B16
- (void)persistentSuccessed:(BOOL)arg0;
// IMP 0x100649504 | v20@0:8B16
- (void)reportSuccessed:(BOOL)arg0;
// IMP 0x100649548 | B16@0:8
- (BOOL)shouldUpload;
// IMP 0x1006498b8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100649880 | v24@0:8@16
- (void)setJceModel:(id)arg0;
// IMP 0x100649894 | @16@0:8
- (id)summaryInfo;
// IMP 0x1006498a4 | v24@0:8@16
- (void)setSummaryInfo:(id)arg0;
@end
