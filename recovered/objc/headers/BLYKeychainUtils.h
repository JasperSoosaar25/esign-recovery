// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95230
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYKeychainUtils : NSObject
// IMP 0x10063a2b4 | @40@0:8@16@24^@32
+ (id)getPasswordForUsername:(id)arg0 andServiceName:(id)arg1 error:(id *)arg2;
// IMP 0x10063a6c4 | B52@0:8@16@24@32B40^@44
+ (BOOL)storeUsername:(id)arg0 andPassword:(id)arg1 forServiceName:(id)arg2 updateExisting:(BOOL)arg3 error:(id *)arg4;
// IMP 0x10063a760 | B60@0:8@16@24@32B40^v44^@52
+ (BOOL)storeUsername:(id)arg0 andPassword:(id)arg1 forServiceName:(id)arg2 updateExisting:(BOOL)arg3 accessibility:(void *)arg4 error:(id *)arg5;
// IMP 0x10063ac70 | B40@0:8@16@24^@32
+ (BOOL)deleteItemForUsername:(id)arg0 andServiceName:(id)arg1 error:(id *)arg2;
// IMP 0x10063ae84 | B32@0:8@16^@24
+ (BOOL)purgeItemsForServiceName:(id)arg0 error:(id *)arg1;
@end
