// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95a00
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYCrashReport : NSObject
// ivar _crashHandling encoding=B offset=8
// ivar _crashedDuringCrashHandling encoding=B offset=9
// ivar _key encoding=@"NSString" offset=16
// ivar _crashedTime encoding=d offset=24
// ivar _crashCategory encoding=@"NSString" offset=32
// ivar _crashType encoding=q offset=40
// ivar _moduleNameErrorType encoding=Q offset=48
// ivar _crashName encoding=@"NSString" offset=56
// ivar _crashReason encoding=@"NSString" offset=64
// ivar _faultAddress encoding=@"NSString" offset=72
// ivar _uncaughtException encoding=@"NSException" offset=80
// ivar _crashedThread encoding=@"BLYThreadInfo" offset=88
// ivar _threads encoding=@"NSArray" offset=96
// ivar _registers encoding=@"NSArray" offset=104
// ivar _images encoding=@"NSArray" offset=112
// ivar _identifier encoding=@"NSString" offset=120
// property identifier attributes=T@"NSString",C,N,V_identifier
// property key attributes=T@"NSString",C,N,V_key
// property threads attributes=T@"NSArray",C,N,V_threads
// property registers attributes=T@"NSArray",C,N,V_registers
// property images attributes=T@"NSArray",C,N,V_images
// property crashHandling attributes=TB,N,GisHandlingCrash,V_crashHandling
// property crashedDuringCrashHandling attributes=TB,N,GisCrashedDuringCrashHandling,V_crashedDuringCrashHandling
// property crashedTime attributes=Td,N,V_crashedTime
// property crashCategory attributes=T@"NSString",C,N,V_crashCategory
// property crashType attributes=Tq,N,V_crashType
// property moduleNameErrorType attributes=TQ,N,V_moduleNameErrorType
// property crashName attributes=T@"NSString",C,N,V_crashName
// property crashReason attributes=T@"NSString",C,N,V_crashReason
// property faultAddress attributes=T@"NSString",C,N,V_faultAddress
// property uncaughtException attributes=T@"NSException",&,N,V_uncaughtException
// property crashedThread attributes=T@"BLYThreadInfo",&,N,V_crashedThread
// IMP 0x1006468e0 | @16@0:8
- (id)init;
// IMP 0x100646914 | @16@0:8
- (id)identifier;
// IMP 0x100646968 | v24@0:8@16
- (void)setThreadList:(id)arg0;
// IMP 0x1006469dc | v24@0:8@16
- (void)setImageList:(id)arg0;
// IMP 0x100646a50 | v24@0:8@16
- (void)setRegisterList:(id)arg0;
// IMP 0x100646ac4 | @16@0:8
- (id)threadState;
// IMP 0x100646d6c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100646c4c | @16@0:8
- (id)key;
// IMP 0x100646c58 | v24@0:8@16
- (void)setKey:(id)arg0;
// IMP 0x100646c60 | B16@0:8
- (BOOL)isHandlingCrash;
// IMP 0x100646c68 | v20@0:8B16
- (void)setCrashHandling:(BOOL)arg0;
// IMP 0x100646c70 | B16@0:8
- (BOOL)isCrashedDuringCrashHandling;
// IMP 0x100646c78 | v20@0:8B16
- (void)setCrashedDuringCrashHandling:(BOOL)arg0;
// IMP 0x100646c80 | d16@0:8
- (double)crashedTime;
// IMP 0x100646c88 | v24@0:8d16
- (void)setCrashedTime:(double)arg0;
// IMP 0x100646c90 | @16@0:8
- (id)crashCategory;
// IMP 0x100646c9c | v24@0:8@16
- (void)setCrashCategory:(id)arg0;
// IMP 0x100646ca4 | q16@0:8
- (long long)crashType;
// IMP 0x100646cac | v24@0:8q16
- (void)setCrashType:(long long)arg0;
// IMP 0x100646cb4 | Q16@0:8
- (unsigned long long)moduleNameErrorType;
// IMP 0x100646cbc | v24@0:8Q16
- (void)setModuleNameErrorType:(unsigned long long)arg0;
// IMP 0x100646cc4 | @16@0:8
- (id)crashName;
// IMP 0x100646cd0 | v24@0:8@16
- (void)setCrashName:(id)arg0;
// IMP 0x100646cd8 | @16@0:8
- (id)crashReason;
// IMP 0x100646ce4 | v24@0:8@16
- (void)setCrashReason:(id)arg0;
// IMP 0x100646cec | @16@0:8
- (id)faultAddress;
// IMP 0x100646cf8 | v24@0:8@16
- (void)setFaultAddress:(id)arg0;
// IMP 0x100646d00 | @16@0:8
- (id)uncaughtException;
// IMP 0x100646d08 | v24@0:8@16
- (void)setUncaughtException:(id)arg0;
// IMP 0x100646d14 | @16@0:8
- (id)crashedThread;
// IMP 0x100646d1c | v24@0:8@16
- (void)setCrashedThread:(id)arg0;
// IMP 0x100646d28 | @16@0:8
- (id)threads;
// IMP 0x100646d34 | v24@0:8@16
- (void)setThreads:(id)arg0;
// IMP 0x100646d3c | @16@0:8
- (id)registers;
// IMP 0x100646d48 | v24@0:8@16
- (void)setRegisters:(id)arg0;
// IMP 0x100646d50 | @16@0:8
- (id)images;
// IMP 0x100646d5c | v24@0:8@16
- (void)setImages:(id)arg0;
// IMP 0x100646d64 | v24@0:8@16
- (void)setIdentifier:(id)arg0;
// IMP 0x100646860 | @16@0:8
+ (id)sharedReport;
@end
