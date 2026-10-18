// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97968
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMComReportPolicy : NSObject
// ivar _reportPolicyType encoding=Q offset=8
// ivar _delegate encoding=@"<UMComReportPolicyProtocol>" offset=16
// property reportPolicyType attributes=TQ,N,V_reportPolicyType
// property delegate attributes=T@"<UMComReportPolicyProtocol>",W,N,V_delegate
// IMP 0x1006c2978 | v32@0:8@?16@24
- (void)shouldCommitJobWithHandle:(id /* block */)arg0 withContext:(id)arg1;
// IMP 0x1006c2a24 | B24@0:8@16
- (BOOL)doShouldCommitJobwithContext:(id)arg0;
// IMP 0x1006c2a2c | v24@0:8@16
- (void)willShouldCommitJobForDelegateWithContext:(id)arg0;
// IMP 0x1006c2b20 | v24@0:8@16
- (void)didShouldCommitJobForDelegateWithContext:(id)arg0;
// IMP 0x1006c2c14 | B24@0:8@16
- (BOOL)addtionalConditionFromDelegateWithContext:(id)arg0;
// IMP 0x1006c2d1c | B24@0:8@16
- (BOOL)orConditionFromDelegateWithContext:(id)arg0;
// IMP 0x1006c2e24 | B28@0:8B16@20
- (BOOL)finalConditionWithReportPolicy:(BOOL)arg0 WithContext:(id)arg1;
// IMP 0x1006c2ea0 | Q16@0:8
- (unsigned long long)reportPolicyType;
// IMP 0x1006c2ea8 | v24@0:8Q16
- (void)setReportPolicyType:(unsigned long long)arg0;
// IMP 0x1006c2eb0 | @16@0:8
- (id)delegate;
// IMP 0x1006c2ec8 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1006c2ed4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
