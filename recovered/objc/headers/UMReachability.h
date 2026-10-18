// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96a90
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMReachability : NSObject
// ivar _reachabilityRef encoding=^{__SCNetworkReachability=} offset=8
// IMP 0x100680fb4 | B16@0:8
- (BOOL)startNotifier;
// IMP 0x1006810a0 | v16@0:8
- (void)stopNotifier;
// IMP 0x1006810e4 | v16@0:8
- (void)dealloc;
// IMP 0x10068113c | q20@0:8I16
- (long long)networkStatusForFlags:(unsigned int)arg0;
// IMP 0x100681248 | B16@0:8
- (BOOL)connectionRequired;
// IMP 0x100681280 | q16@0:8
- (long long)currentReachabilityStatus;
// IMP 0x100680e68 | @24@0:8@16
+ (id)reachabilityWithHostName:(id)arg0;
// IMP 0x100680ee0 | @24@0:8r^{sockaddr=CC[14c]}16
+ (id)reachabilityWithAddress:(struct sockaddr *)arg0;
// IMP 0x100680f4c | @16@0:8
+ (id)reachabilityForInternetConnection;
@end
