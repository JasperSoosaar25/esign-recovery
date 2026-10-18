// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b468
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADException : NSObject
// IMP 0x10087d280 | v16@0:8
+ (void)raiseUnknownException;
// IMP 0x10087d290 | v16@0:8
+ (void)raiseInputException;
// IMP 0x10087d2a0 | v16@0:8
+ (void)raiseOutputException;
// IMP 0x10087d2b0 | v16@0:8
+ (void)raiseIllegalDataException;
// IMP 0x10087d2c0 | v16@0:8
+ (void)raiseNotSupportedException;
// IMP 0x10087d2d0 | v16@0:8
+ (void)raisePasswordException;
// IMP 0x10087d2e0 | v16@0:8
+ (void)raiseDecrunchException;
// IMP 0x10087d2f0 | v16@0:8
+ (void)raiseChecksumException;
// IMP 0x10087d300 | v16@0:8
+ (void)raiseDataFormatException;
// IMP 0x10087d310 | v16@0:8
+ (void)raiseOutOfMemoryException;
// IMP 0x10087d320 | v20@0:8i16
+ (void)raiseExceptionWithXADError:(int)arg0;
// IMP 0x10087d3e4 | i24@0:8@16
+ (int)parseException:(id)arg0;
// IMP 0x10087d5ac | @20@0:8i16
+ (id)describeXADError:(int)arg0;
@end
