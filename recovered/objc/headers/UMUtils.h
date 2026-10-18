// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97df0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMUtils : NSObject
// IMP 0x1006cac7c | @16@0:8
+ (id)appkey;
// IMP 0x1006cacdc | d24@0:8d16
+ (double)durationNowWith1970TimeInterval:(double)arg0;
// IMP 0x1006cad1c | Q16@0:8
+ (unsigned long long)UTCIntervalMS;
// IMP 0x1006cad5c | B16@0:8
+ (BOOL)isDebugging;
// IMP 0x1006cad64 | @16@0:8
+ (id)osString;
// IMP 0x1006cad70 | @16@0:8
+ (id)osVersionString;
// IMP 0x1006cade4 | @16@0:8
+ (id)countryString;
// IMP 0x1006cae6c | @16@0:8
+ (id)languageString;
// IMP 0x1006caee8 | i16@0:8
+ (int)timezone;
// IMP 0x1006caf38 | @16@0:8
+ (id)timezoneString;
// IMP 0x1006caf90 | @16@0:8
+ (id)dateString;
// IMP 0x1006cb038 | @16@0:8
+ (id)deviceToken;
// IMP 0x1006cb184 | @16@0:8
+ (id)utdid;
// IMP 0x1006cb214 | @16@0:8
+ (id)openUDIDString;
// IMP 0x1006cb4b0 | @16@0:8
+ (id)idfa;
// IMP 0x1006cb62c | @16@0:8
+ (id)umfa;
// IMP 0x1006cb7a8 | @16@0:8
+ (id)idfv;
// IMP 0x1006cb8c4 | @16@0:8
+ (id)deviceMacAddressString;
// IMP 0x1006cb8d0 | @16@0:8
+ (id)deviceModelString;
// IMP 0x1006cb9d4 | @16@0:8
+ (id)resolutionString;
// IMP 0x1006cbae4 | B16@0:8
+ (BOOL)isDeviceJailBreak;
// IMP 0x1006cbc80 | @16@0:8
+ (id)deviceJailBreakString;
// IMP 0x1006cbcb4 | B16@0:8
+ (BOOL)isPad;
// IMP 0x1006cbd24 | @16@0:8
+ (id)batteryInfo;
// IMP 0x1006cbf00 | @16@0:8
+ (id)accessString;
// IMP 0x1006cbf4c | i16@0:8
+ (int)accessStatus;
// IMP 0x1006cc130 | @16@0:8
+ (id)CTTelephonyNetworkInfoObject;
// IMP 0x1006cc1b0 | @16@0:8
+ (id)accessSubType;
// IMP 0x1006cc294 | @16@0:8
+ (id)carrierString;
// IMP 0x1006cc37c | @16@0:8
+ (id)mncString;
// IMP 0x1006cc464 | @16@0:8
+ (id)mccString;
// IMP 0x1006cc54c | @16@0:8
+ (id)appPackageNameString;
// IMP 0x1006cc5e8 | @16@0:8
+ (id)appDisplayNameString;
// IMP 0x1006cc684 | @16@0:8
+ (id)realAppDisplayNameString;
// IMP 0x1006cc744 | @16@0:8
+ (id)processName;
// IMP 0x1006cc7d4 | @16@0:8
+ (id)appBundleVersionString;
// IMP 0x1006cc870 | @16@0:8
+ (id)appShortVersionString;
// IMP 0x1006cc90c | @16@0:8
+ (id)appPirateString;
// IMP 0x1006cc948 | B16@0:8
+ (BOOL)isAppPirate;
// IMP 0x1006ccaa0 | @24@0:8@16
+ (id)md5:(id)arg0;
// IMP 0x1006ccbb8 | *24@0:8@16
+ (char *)md5BytesWithString:(id)arg0;
// IMP 0x1006ccc04 | @24@0:8@16
+ (id)md5DataWithData:(id)arg0;
// IMP 0x1006cccbc | @24@0:8@16
+ (id)urlEncode:(id)arg0;
// IMP 0x1006ccd48 | @24@0:8@16
+ (id)urlDecode:(id)arg0;
// IMP 0x1006ccdd0 | @24@0:8@16
+ (id)JSONFragment:(id)arg0;
// IMP 0x1006ccde4 | @24@0:8@16
+ (id)JSONValue:(id)arg0;
// IMP 0x1006cce64 | @24@0:8@16
+ (id)encodeBase64:(id)arg0;
// IMP 0x1006ccec4 | @24@0:8@16
+ (id)decodeBase64:(id)arg0;
// IMP 0x1006ccf40 | @32@0:8@16r^v24
+ (id)AES128EncryptData:(id)arg0 withKey:(void *)arg1;
// IMP 0x1006cd020 | @32@0:8@16r^v24
+ (id)AES128DecryptData:(id)arg0 withKey:(void *)arg1;
// IMP 0x1006cd100 | @28@0:8*16i24
+ (id)bytesToHexString:(char *)arg0 length:(int)arg1;
// IMP 0x1006cd1ac | @28@0:8@16i24
+ (id)getString:(id)arg0 bytesLength:(int)arg1;
// IMP 0x1006cd2a8 | B24@0:8@16
+ (BOOL)notEmptyString:(id)arg0;
// IMP 0x1006cd38c | B24@0:8@16
+ (BOOL)isEmptyString:(id)arg0;
// IMP 0x1006cd3b4 | @24@0:8@16
+ (id)deflatedData:(id)arg0;
// IMP 0x1006cd3cc | @36@0:8@16i24@28
+ (id)deflatedDataPrefixedWith:(id)arg0 level:(int)arg1 source:(id)arg2;
// IMP 0x1006cd514 | v40@0:8@16@24@32
+ (void)performClass:(id)arg0 method:(id)arg1 object:(id)arg2;
// IMP 0x1006cd5b8 | v44@0:8@16@24^^v32i40
+ (void)reflectClass:(id)arg0 selector:(id)arg1 params:(void * *)arg2 paramsCount:(int)arg3;
// IMP 0x1006cd6ec | B24@0:8@16
+ (BOOL)loadSysFramework:(id)arg0;
// IMP 0x1006cd794 | @32@0:8@16@24
+ (id)reflectObject:(id)arg0 selector:(id)arg1;
// IMP 0x1006cd850 | @40@0:8@16@24@32
+ (id)reflectObject:(id)arg0 selector:(id)arg1 object:(id)arg2;
// IMP 0x1006cd954 | @48@0:8@16@24@32@40
+ (id)reflectObject:(id)arg0 selector:(id)arg1 object:(id)arg2 object:(id)arg3;
// IMP 0x1006cda80 | v48@0:8@16@24@32^v40
+ (void)invoke:(id)arg0 selString:(id)arg1 argument:(id)arg2 returnValue:(void *)arg3;
// IMP 0x1006cdb80 | v24@0:8@16
+ (void)appendComponentFlag:(id)arg0;
// IMP 0x1006cdc58 | @16@0:8
+ (id)componentFlags;
// IMP 0x1006cdcb0 | v56@0:8@16@24@32@40^v48
+ (void)invoke:(id)arg0 selString:(id)arg1 object1:(id)arg2 object2:(id)arg3 returnValue:(void *)arg4;
// IMP 0x1006cdddc | v56@0:8@16@24@32:40^v48
+ (void)invoke:(id)arg0 selString:(id)arg1 object1:(id)arg2 selector:(SEL)arg3 returnValue:(void *)arg4;
// IMP 0x1006cdf08 | v44@0:8@16@24B32^v36
+ (void)invoke:(id)arg0 selString:(id)arg1 enabled:(BOOL)arg2 returnValue:(void *)arg3;
// IMP 0x1006ce004 | v52@0:8@16@24B32@36^v44
+ (void)invoke:(id)arg0 selString:(id)arg1 enabled:(BOOL)arg2 md5:(id)arg3 returnValue:(void *)arg4;
// IMP 0x1006ce12c | @16@0:8
+ (id)localIPString;
// IMP 0x1006ce134 | @24@0:8@16
+ (id)getValidUrlString:(id)arg0;
// IMP 0x1006ce1d4 | v16@0:8
+ (void)UMZidInit;
// IMP 0x1006ce284 | @16@0:8
+ (id)getZid;
// IMP 0x1006ce350 | v40@0:8@16@24@32
+ (void)setModuleTag:(id)arg0 key:(id)arg1 value:(id)arg2;
// IMP 0x1006ce670 | v32@0:8@16@24
+ (void)deleteModuleTag:(id)arg0 key:(id)arg1;
// IMP 0x1006ce7b4 | @16@0:8
+ (id)getModuleTag;
// IMP 0x1006ce7e0 | @16@0:8
+ (id)getModule;
// IMP 0x1006ce8b0 | B16@0:8
+ (BOOL)isSilentMode;
@end
