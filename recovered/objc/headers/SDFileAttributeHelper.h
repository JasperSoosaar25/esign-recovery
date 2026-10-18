// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8f9e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDFileAttributeHelper : NSObject
// IMP 0x100539f44 | @36@0:8@16B24^@28
+ (id)extendedAttributeNamesAtPath:(id)arg0 traverseLink:(BOOL)arg1 error:(id *)arg2;
// IMP 0x10053a21c | B44@0:8@16@24B32^@36
+ (BOOL)hasExtendedAttribute:(id)arg0 atPath:(id)arg1 traverseLink:(BOOL)arg2 error:(id *)arg3;
// IMP 0x10053a4c8 | @44@0:8@16@24B32^@36
+ (id)extendedAttribute:(id)arg0 atPath:(id)arg1 traverseLink:(BOOL)arg2 error:(id *)arg3;
// IMP 0x10053a734 | B56@0:8@16@24@32B40B44^@48
+ (BOOL)setExtendedAttribute:(id)arg0 value:(id)arg1 atPath:(id)arg2 traverseLink:(BOOL)arg3 overwrite:(BOOL)arg4 error:(id *)arg5;
// IMP 0x10053a9f4 | B44@0:8@16@24B32^@36
+ (BOOL)removeExtendedAttribute:(id)arg0 atPath:(id)arg1 traverseLink:(BOOL)arg2 error:(id *)arg3;
@end
