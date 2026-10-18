// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96450
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYDevice : NSObject
// ivar _developmentDevice encoding=B offset=8
// ivar _freeDiskSpace encoding=f offset=12
// ivar _totalDiskSpace encoding=f offset=16
// ivar _freeMemeory encoding=f offset=20
// ivar _totalMemeory encoding=f offset=24
// ivar _qIMEI encoding=@"NSString" offset=32
// ivar _deviceIdentifier encoding=@"NSString" offset=40
// ivar _deviceName encoding=@"NSString" offset=48
// ivar _systemVersion encoding=@"NSString" offset=56
// ivar _systemVersionCode encoding=@"NSString" offset=64
// ivar _hardwareModel encoding=@"NSString" offset=72
// ivar _cpuArch encoding=@"NSString" offset=80
// ivar _jailbrokenStatus encoding=Q offset=88
// property deviceIdentifier attributes=T@"NSString",C,N,V_deviceIdentifier
// property deviceName attributes=T@"NSString",C,N,V_deviceName
// property systemVersion attributes=T@"NSString",C,N,V_systemVersion
// property systemVersionCode attributes=T@"NSString",C,N,V_systemVersionCode
// property hardwareModel attributes=T@"NSString",C,N,V_hardwareModel
// property cpuArch attributes=T@"NSString",C,N,V_cpuArch
// property freeDiskSpace attributes=Tf,N,V_freeDiskSpace
// property totalDiskSpace attributes=Tf,N,V_totalDiskSpace
// property freeMemeory attributes=Tf,N,V_freeMemeory
// property totalMemeory attributes=Tf,N,V_totalMemeory
// property jailbrokenStatus attributes=TQ,N,V_jailbrokenStatus
// property qIMEI attributes=T@"NSString",C,N,V_qIMEI
// property developmentDevice attributes=TB,N,GisDevelopmentDevice,V_developmentDevice
// IMP 0x10066bf94 | @16@0:8
- (id)deviceIdentifier;
// IMP 0x10066c2b8 | @16@0:8
- (id)qIMEI;
// IMP 0x10066c384 | v24@0:8@16
- (void)setQIMEI:(id)arg0;
// IMP 0x10066c5bc | @16@0:8
- (id)systemVersionCode;
// IMP 0x10066c68c | @16@0:8
- (id)hardwareModel;
// IMP 0x10066c768 | @16@0:8
- (id)fullSystemVersion;
// IMP 0x10066c818 | @16@0:8
- (id)cpuArch;
// IMP 0x10066cdf8 | @16@0:8
- (id)getProcessMemoryUsage;
// IMP 0x10066ce90 | @16@0:8
- (id)getHostMemoryUsage;
// IMP 0x10066d20c | B24@0:8^{?=QdQQiiiii}16
- (BOOL)getProcessMemoryInfo:(void * /* aggregate ? */ *)arg0;
// IMP 0x10066d2e8 | @72@0:8{?=QdQQiiiii}16
- (id)getProcessMemoryInfoStr:(void * /* aggregate ? */)arg0;
// IMP 0x10066d48c | @16@0:8
- (id)getThreadInfo;
// IMP 0x10066d824 | B16@0:8
- (BOOL)isJailbroken;
// IMP 0x10066dd48 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10066dca0 | B16@0:8
- (BOOL)isDevelopmentDevice;
// IMP 0x10066dca8 | v20@0:8B16
- (void)setDevelopmentDevice:(BOOL)arg0;
// IMP 0x10066dcb0 | v24@0:8@16
- (void)setDeviceIdentifier:(id)arg0;
// IMP 0x10066dcb8 | @16@0:8
- (id)deviceName;
// IMP 0x10066dcc4 | v24@0:8@16
- (void)setDeviceName:(id)arg0;
// IMP 0x10066dccc | @16@0:8
- (id)systemVersion;
// IMP 0x10066dcd8 | v24@0:8@16
- (void)setSystemVersion:(id)arg0;
// IMP 0x10066dce0 | v24@0:8@16
- (void)setSystemVersionCode:(id)arg0;
// IMP 0x10066dce8 | v24@0:8@16
- (void)setHardwareModel:(id)arg0;
// IMP 0x10066dcf0 | v24@0:8@16
- (void)setCpuArch:(id)arg0;
// IMP 0x10066dcf8 | f16@0:8
- (float)freeDiskSpace;
// IMP 0x10066dd00 | v20@0:8f16
- (void)setFreeDiskSpace:(float)arg0;
// IMP 0x10066dd08 | f16@0:8
- (float)totalDiskSpace;
// IMP 0x10066dd10 | v20@0:8f16
- (void)setTotalDiskSpace:(float)arg0;
// IMP 0x10066dd18 | f16@0:8
- (float)freeMemeory;
// IMP 0x10066dd20 | v20@0:8f16
- (void)setFreeMemeory:(float)arg0;
// IMP 0x10066dd28 | f16@0:8
- (float)totalMemeory;
// IMP 0x10066dd30 | v20@0:8f16
- (void)setTotalMemeory:(float)arg0;
// IMP 0x10066dd38 | Q16@0:8
- (unsigned long long)jailbrokenStatus;
// IMP 0x10066dd40 | v24@0:8Q16
- (void)setJailbrokenStatus:(unsigned long long)arg0;
// IMP 0x10066bcf8 | @16@0:8
+ (id)currentDevice;
// IMP 0x10066bd78 | @16@0:8
+ (id)generateDeviceID;
// IMP 0x10066be34 | @16@0:8
+ (id)deviceIDFromKeychain;
// IMP 0x10066bee4 | @16@0:8
+ (id)qIMEIFromKeychain;
// IMP 0x10066c88c | @16@0:8
+ (id)systemVersion;
// IMP 0x10066c968 | @16@0:8
+ (id)freeDiskSpace;
// IMP 0x10066cac8 | @16@0:8
+ (id)totalDiskSpace;
// IMP 0x10066cbf0 | @16@0:8
+ (id)freeMemeory;
// IMP 0x10066cd38 | @16@0:8
+ (id)totalMemeory;
// IMP 0x10066d8b0 | B16@0:8
+ (BOOL)isJailBreak;
// IMP 0x10066d904 | @16@0:8
+ (id)idfv;
// IMP 0x10066da00 | @16@0:8
+ (id)idfvHash;
// IMP 0x10066dadc | d16@0:8
+ (double)systemUpTime;
// IMP 0x10066db38 | @16@0:8
+ (id)systemBootTime;
// IMP 0x10066dbc4 | Q16@0:8
+ (unsigned long long)cpuCount;
// IMP 0x10066dc18 | @16@0:8
+ (id)countryCode;
@end
