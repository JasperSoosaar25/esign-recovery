// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c969c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMInternalUtil : NSObject
// ivar _muttaparray encoding=@"NSMutableArray" offset=8
// ivar _testTapRecognizer encoding=@"UITapGestureRecognizer" offset=16
// property muttaparray attributes=T@"NSMutableArray",&,N,V_muttaparray
// property testTapRecognizer attributes=T@"UITapGestureRecognizer",&,N,V_testTapRecognizer
// IMP 0x10067c484 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x10067c488 | v16@0:8
- (void)appActivate;
// IMP 0x10067c574 | v16@0:8
- (void)handlenetworknotification;
// IMP 0x10067c578 | v16@0:8
- (void)networkchange;
// IMP 0x10067c57c | v16@0:8
- (void)connectGestureRecognized;
// IMP 0x10067d268 | B24@0:8@16
- (BOOL)isGAvailable:(id)arg0;
// IMP 0x10067d370 | v24@0:8@16
- (void)stopGyroUpdates:(id)arg0;
// IMP 0x10067d3a4 | v32@0:8@16d24
- (void)setObj:(id)arg0 updateInterval:(double)arg1;
// IMP 0x10067d4a4 | {UMCMRotationRate=ddd}24@0:8@16
- (struct UMCMRotationRate)getrotationRateWithObj:(id)arg0;
// IMP 0x10067d5a0 | @16@0:8
- (id)muttaparray;
// IMP 0x10067d5a8 | v24@0:8@16
- (void)setMuttaparray:(id)arg0;
// IMP 0x10067d5b4 | @16@0:8
- (id)testTapRecognizer;
// IMP 0x10067d5bc | v24@0:8@16
- (void)setTestTapRecognizer:(id)arg0;
// IMP 0x10067d5c8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10067c2c8 | @16@0:8
+ (id)sharedInstance;
// IMP 0x10067c45c | @24@0:8^{_NSZone=}16
+ (id)allocWithZone:(struct _NSZone *)arg0;
// IMP 0x10067c620 | @16@0:8
+ (id)Value1;
// IMP 0x10067c798 | Q16@0:8
+ (unsigned long long)getTotalDiskSize;
// IMP 0x10067c868 | Q16@0:8
+ (unsigned long long)getFreeDiskSize;
// IMP 0x10067c938 | @16@0:8
+ (id)Value2;
// IMP 0x10067cd70 | i16@0:8
+ (int)getSysFontSize;
// IMP 0x10067ce04 | @16@0:8
+ (id)Value7;
// IMP 0x10067cec8 | @16@0:8
+ (id)Value3;
// IMP 0x10067ced0 | @16@0:8
+ (id)getwinfo;
// IMP 0x10067ced8 | @16@0:8
+ (id)getwinfoValue;
// IMP 0x10067cee0 | @16@0:8
+ (id)getWifiBSSID;
// IMP 0x10067ceec | @16@0:8
+ (id)getWifiSSID;
// IMP 0x10067cef8 | @16@0:8
+ (id)getWifiInfo;
// IMP 0x10067cf00 | @32@0:8{in6_addr=(?=[16C][8S][4I])}16
+ (id)formatIPV6Address:(struct in6_addr)arg0;
// IMP 0x10067cf80 | @20@0:8{in_addr=I}16
+ (id)formatIPV4Address:(struct in_addr)arg0;
// IMP 0x10067d000 | @16@0:8
+ (id)Value4;
// IMP 0x10067d178 | Q16@0:8
+ (unsigned long long)getTotalMemeorySize;
// IMP 0x10067d1cc | Q16@0:8
+ (unsigned long long)getFreeMemeorySize;
// IMP 0x10067d228 | @16@0:8
+ (id)Value8;
@end
