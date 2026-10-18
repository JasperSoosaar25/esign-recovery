// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97490
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMComReportPolicyManager : NSObject
// ivar _curReportPolicyType encoding=Q offset=8
// ivar _delegate encoding=@"<UMComReportPolicyProtocol>" offset=16
// ivar _curReportPolicy encoding=@"UMComReportPolicy" offset=24
// ivar _logSendInterval encoding=d offset=32
// ivar _realTimeSendInterval encoding=d offset=40
// property curReportPolicyType attributes=TQ,N
// property logSendInterval attributes=Td,N,V_logSendInterval
// property realTimeSendInterval attributes=Td,N,V_realTimeSendInterval
// property delegate attributes=T@"<UMComReportPolicyProtocol>",W,N
// property curReportPolicy attributes=T@"UMComReportPolicy",&,V_curReportPolicy
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006b5fd0 | @16@0:8
- (id)init;
// IMP 0x1006b6108 | B16@0:8
- (BOOL)checkLocalDefcon;
// IMP 0x1006b616c | B16@0:8
- (BOOL)checkLocalIntegration;
// IMP 0x1006b6180 | Q16@0:8
- (unsigned long long)curReportPolicyType;
// IMP 0x1006b6340 | v24@0:8Q16
- (void)setCurReportPolicyType:(unsigned long long)arg0;
// IMP 0x1006b6378 | d16@0:8
- (double)calculateLogSendInterval;
// IMP 0x1006b6524 | d16@0:8
- (double)calculateRealTimeSendInterval;
// IMP 0x1006b66c4 | v24@0:8Q16
- (void)changeCurReportPolicy:(unsigned long long)arg0;
// IMP 0x1006b6848 | v16@0:8
- (void)registerImprintValues;
// IMP 0x1006b68b4 | v24@0:8@16
- (void)registerImprintValue:(id)arg0;
// IMP 0x1006b692c | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1006b699c | @16@0:8
- (id)delegate;
// IMP 0x1006b69a4 | v40@0:8@16@24@32
- (void)imprintObserveValueForImprintKey:(id)arg0 newImprintValue:(id)arg1 oldImprintValue:(id)arg2;
// IMP 0x1006b6d00 | v32@0:8@?16@24
- (void)doStartCommitJobWithHandler:(id /* block */)arg0 withContext:(id)arg1;
// IMP 0x1006b6d88 | v32@0:8@?16@24
- (void)startCommitJobWithHandler:(id /* block */)arg0 withContext:(id)arg1;
// IMP 0x1006b6f4c | B24@0:8Q16
- (BOOL)forceChangeReportPolicy:(unsigned long long)arg0;
// IMP 0x1006b6f6c | B24@0:8@16
- (BOOL)shoudleSetupReportDataWithContext:(id)arg0;
// IMP 0x1006b6fe4 | @16@0:8
- (id)curReportPolicy;
// IMP 0x1006b6ff0 | v24@0:8@16
- (void)setCurReportPolicy:(id)arg0;
// IMP 0x1006b7004 | d16@0:8
- (double)logSendInterval;
// IMP 0x1006b700c | v24@0:8d16
- (void)setLogSendInterval:(double)arg0;
// IMP 0x1006b7014 | d16@0:8
- (double)realTimeSendInterval;
// IMP 0x1006b701c | v24@0:8d16
- (void)setRealTimeSendInterval:(double)arg0;
// IMP 0x1006b7024 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006b606c | @16@0:8
+ (id)sharedInstance;
@end
