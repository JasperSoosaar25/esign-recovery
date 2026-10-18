// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81800
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface LMApp : NSObject
// ivar _applicationProxy encoding=@"PrivateApi_LSApplicationProxy" offset=8
// ivar _icon encoding=@"UIImage" offset=16
// ivar _date encoding=@"NSDate" offset=24
// ivar _dynamicDiskUsage encoding=@"NSNumber" offset=32
// ivar _roleIdentifier encoding=@"NSString" offset=40
// ivar _sourceAppIdentifier encoding=@"NSString" offset=48
// property bundleIdentifier attributes=T@"NSString",R,N
// property name attributes=T@"NSString",R,N
// property icon attributes=T@"UIImage",R,N
// property applicationDSID attributes=T@"NSString",R,N
// property applicationIdentifier attributes=T@"NSString",R,N
// property applicationType attributes=T@"NSString",R,N
// property dynamicDiskUsage attributes=T@"NSNumber",R,N,V_dynamicDiskUsage
// property groupIdentifiers attributes=T@"NSArray",R,N
// property itemID attributes=T@"NSNumber",R,N
// property itemName attributes=T@"NSString",R,N
// property minimumSystemVersion attributes=T@"NSString",R,N
// property requiredDeviceCapabilities attributes=T@"NSArray",R,N
// property roleIdentifier attributes=T@"NSString",R,N,V_roleIdentifier
// property sdkVersion attributes=T@"NSString",R,N
// property shortVersionString attributes=T@"NSString",R,N
// property sourceAppIdentifier attributes=T@"NSString",R,N,V_sourceAppIdentifier
// property staticDiskUsage attributes=T@"NSNumber",R,N
// property teamID attributes=T@"NSString",R,N
// property vendorName attributes=T@"NSString",R,N
// property bundleURL attributes=T@"NSURL",R,N
// property isHiddenApp attributes=TB,R,N
// property modifyDate attributes=T@"NSDate",R,N
// property dataContainerURL attributes=T@"NSURL",R,N
// IMP 0x1003ce318 | @16@0:8
- (id)name;
// IMP 0x1003ce478 | @16@0:8
- (id)bundleIdentifier;
// IMP 0x1003ce4f8 | @16@0:8
- (id)icon;
// IMP 0x1003ce6b8 | @16@0:8
- (id)applicationDSID;
// IMP 0x1003ce738 | @16@0:8
- (id)applicationIdentifier;
// IMP 0x1003ce7ac | @16@0:8
- (id)applicationType;
// IMP 0x1003ce7cc | @16@0:8
- (id)groupIdentifiers;
// IMP 0x1003ce834 | @16@0:8
- (id)itemID;
// IMP 0x1003ce89c | @16@0:8
- (id)itemName;
// IMP 0x1003ce8fc | @16@0:8
- (id)minimumSystemVersion;
// IMP 0x1003ce988 | @16@0:8
- (id)requiredDeviceCapabilities;
// IMP 0x1003ce9fc | @16@0:8
- (id)sdkVersion;
// IMP 0x1003cea88 | @16@0:8
- (id)shortVersionString;
// IMP 0x1003ceae8 | @16@0:8
- (id)staticDiskUsage;
// IMP 0x1003ceb50 | @16@0:8
- (id)teamID;
// IMP 0x1003cebdc | @16@0:8
- (id)vendorName;
// IMP 0x1003cec3c | B16@0:8
- (BOOL)isHiddenApp;
// IMP 0x1003cee60 | @24@0:8@16
- (id)initWithPrivateProxy:(id)arg0;
// IMP 0x1003cefb4 | @16@0:8
- (id)bundleURL;
// IMP 0x1003cf010 | @16@0:8
- (id)modifyDate;
// IMP 0x1003cf210 | @16@0:8
- (id)dataContainerURL;
// IMP 0x1003cf240 | @24@0:8@16
- (id)initWithBundleIdentifier:(id)arg0;
// IMP 0x1003cf5e4 | @16@0:8
- (id)dynamicDiskUsage;
// IMP 0x1003cf604 | @16@0:8
- (id)roleIdentifier;
// IMP 0x1003cf624 | @16@0:8
- (id)sourceAppIdentifier;
// IMP 0x1003cf650 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1003cf534 | @24@0:8@16
+ (id)appWithPrivateProxy:(id)arg0;
// IMP 0x1003cf58c | @24@0:8@16
+ (id)appWithBundleIdentifier:(id)arg0;
@end
