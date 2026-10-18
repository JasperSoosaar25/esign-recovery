// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95280
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYJceSerializer : NSObject
// IMP 0x10063b9a0 | @16@0:8
+ (id)defaultSerializer;
// IMP 0x10063ba20 | @24@0:8@16
+ (id)dataWithJCEObject:(id)arg0;
// IMP 0x10063ba90 | @32@0:8@16@24
+ (id)dataWithJCEObject:(id)arg0 requestReserveInfo:(id)arg1;
// IMP 0x10063bda8 | @24@0:8@16
+ (id)responsePkgWithData:(id)arg0;
// IMP 0x10063bf24 | @28@0:8@16B24
+ (id)strategyWithData:(id)arg0 decode:(BOOL)arg1;
// IMP 0x10063bff4 | @32@0:8@16^@24
+ (id)encode:(id)arg0 error:(id *)arg1;
// IMP 0x10063c0dc | @32@0:8@16^@24
+ (id)decode:(id)arg0 error:(id *)arg1;
// IMP 0x10063c23c | @24@0:8@16
+ (id)requestPackageWithReserveInfo:(id)arg0;
// IMP 0x10063cef4 | @16@0:8
+ (id)uniPacket;
@end
