// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96720
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface RqdCrashReporterLiteException : NSObject
// ivar _name encoding=@"NSString" offset=8
// ivar _reason encoding=@"NSString" offset=16
// ivar _threadName encoding=@"NSString" offset=24
// ivar _callStack encoding=@"NSString" offset=32
// ivar _appId encoding=@"NSString" offset=40
// ivar _bundleId encoding=@"NSString" offset=48
// ivar _appVersion encoding=@"NSString" offset=56
// ivar _processName encoding=@"NSString" offset=64
// ivar _cpuArch encoding=@"NSString" offset=72
// ivar _execUUID encoding=@"NSString" offset=80
// ivar _baseAddr encoding=@"NSString" offset=88
// ivar _typeString encoding=@"NSString" offset=96
// ivar _extensionType encoding=Q offset=104
// ivar _time encoding=d offset=112
// ivar _screenBoundsString encoding=@"NSString" offset=120
// ivar _systemVersion encoding=@"NSString" offset=128
// ivar _deviceName encoding=@"NSString" offset=136
// ivar _model encoding=@"NSString" offset=144
// ivar _systemName encoding=@"NSString" offset=152
// property name attributes=T@"NSString",C,N,V_name
// property reason attributes=T@"NSString",C,N,V_reason
// property threadName attributes=T@"NSString",C,N,V_threadName
// property callStack attributes=T@"NSString",C,N,V_callStack
// property appId attributes=T@"NSString",C,N,V_appId
// property bundleId attributes=T@"NSString",C,N,V_bundleId
// property appVersion attributes=T@"NSString",C,N,V_appVersion
// property processName attributes=T@"NSString",C,N,V_processName
// property cpuArch attributes=T@"NSString",C,N,V_cpuArch
// property execUUID attributes=T@"NSString",C,N,V_execUUID
// property baseAddr attributes=T@"NSString",C,N,V_baseAddr
// property typeString attributes=T@"NSString",C,N,V_typeString
// property extensionType attributes=TQ,N,V_extensionType
// property time attributes=Td,N,V_time
// property screenBoundsString attributes=T@"NSString",C,N,V_screenBoundsString
// property systemVersion attributes=T@"NSString",C,N,V_systemVersion
// property deviceName attributes=T@"NSString",C,N,V_deviceName
// property model attributes=T@"NSString",C,N,V_model
// property systemName attributes=T@"NSString",C,N,V_systemName
// IMP 0x100674b0c | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x100674fcc | @24@0:8@16
- (id)initWithException:(id)arg0;
// IMP 0x100675164 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1006755dc | @16@0:8
- (id)threadName;
// IMP 0x100675650 | @16@0:8
- (id)processName;
// IMP 0x1006756c4 | @16@0:8
- (id)bundleId;
// IMP 0x100675738 | @16@0:8
- (id)appVersion;
// IMP 0x1006758d8 | @16@0:8
- (id)description;
// IMP 0x100675a78 | @16@0:8
- (id)typeString;
// IMP 0x100675c10 | Q16@0:8
- (unsigned long long)extensionType;
// IMP 0x100675dfc | v16@0:8
- (void)fetchArchInfo;
// IMP 0x100675fb4 | @24@0:8i16i20
- (id)getcpu:(int)arg0 subType:(int)arg1;
// IMP 0x100676094 | @32@0:8r^v16Q24
- (id)bugly_encode16:(void *)arg0 size:(unsigned long long)arg1;
// IMP 0x10067626c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10067613c | @16@0:8
- (id)name;
// IMP 0x100676148 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x100676150 | @16@0:8
- (id)reason;
// IMP 0x10067615c | v24@0:8@16
- (void)setReason:(id)arg0;
// IMP 0x100676164 | v24@0:8@16
- (void)setThreadName:(id)arg0;
// IMP 0x10067616c | @16@0:8
- (id)callStack;
// IMP 0x100676178 | v24@0:8@16
- (void)setCallStack:(id)arg0;
// IMP 0x100676180 | @16@0:8
- (id)appId;
// IMP 0x10067618c | v24@0:8@16
- (void)setAppId:(id)arg0;
// IMP 0x100676194 | v24@0:8@16
- (void)setBundleId:(id)arg0;
// IMP 0x10067619c | v24@0:8@16
- (void)setAppVersion:(id)arg0;
// IMP 0x1006761a4 | v24@0:8@16
- (void)setProcessName:(id)arg0;
// IMP 0x1006761ac | @16@0:8
- (id)cpuArch;
// IMP 0x1006761b8 | v24@0:8@16
- (void)setCpuArch:(id)arg0;
// IMP 0x1006761c0 | @16@0:8
- (id)execUUID;
// IMP 0x1006761cc | v24@0:8@16
- (void)setExecUUID:(id)arg0;
// IMP 0x1006761d4 | @16@0:8
- (id)baseAddr;
// IMP 0x1006761e0 | v24@0:8@16
- (void)setBaseAddr:(id)arg0;
// IMP 0x1006761e8 | v24@0:8@16
- (void)setTypeString:(id)arg0;
// IMP 0x1006761f0 | v24@0:8Q16
- (void)setExtensionType:(unsigned long long)arg0;
// IMP 0x1006761f8 | d16@0:8
- (double)time;
// IMP 0x100676200 | v24@0:8d16
- (void)setTime:(double)arg0;
// IMP 0x100676208 | @16@0:8
- (id)screenBoundsString;
// IMP 0x100676214 | v24@0:8@16
- (void)setScreenBoundsString:(id)arg0;
// IMP 0x10067621c | @16@0:8
- (id)systemVersion;
// IMP 0x100676228 | v24@0:8@16
- (void)setSystemVersion:(id)arg0;
// IMP 0x100676230 | @16@0:8
- (id)deviceName;
// IMP 0x10067623c | v24@0:8@16
- (void)setDeviceName:(id)arg0;
// IMP 0x100676244 | @16@0:8
- (id)model;
// IMP 0x100676250 | v24@0:8@16
- (void)setModel:(id)arg0;
// IMP 0x100676258 | @16@0:8
- (id)systemName;
// IMP 0x100676264 | v24@0:8@16
- (void)setSystemName:(id)arg0;
// IMP 0x1006755d4 | B16@0:8
+ (BOOL)supportsSecureCoding;
@end
