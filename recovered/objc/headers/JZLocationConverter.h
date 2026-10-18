// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c844b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface JZLocationConverter : NSObject
// IMP 0x100425170 | d32@0:8d16d24
+ (double)transformLat:(double)arg0 bdLon:(double)arg1;
// IMP 0x1004252b0 | d32@0:8d16d24
+ (double)transformLon:(double)arg0 bdLon:(double)arg1;
// IMP 0x1004253d4 | B32@0:8d16d24
+ (BOOL)outOfChina:(double)arg0 bdLon:(double)arg1;
// IMP 0x100425420 | {CLLocationCoordinate2D=dd}32@0:8d16d24
+ (struct CLLocationCoordinate2D)gcj02Encrypt:(double)arg0 bdLon:(double)arg1;
// IMP 0x100425524 | {CLLocationCoordinate2D=dd}32@0:8d16d24
+ (struct CLLocationCoordinate2D)gcj02Decrypt:(double)arg0 gjLon:(double)arg1;
// IMP 0x100425558 | {CLLocationCoordinate2D=dd}32@0:8d16d24
+ (struct CLLocationCoordinate2D)bd09Decrypt:(double)arg0 bdLon:(double)arg1;
// IMP 0x1004255f4 | {CLLocationCoordinate2D=dd}32@0:8d16d24
+ (struct CLLocationCoordinate2D)bd09Encrypt:(double)arg0 bdLon:(double)arg1;
// IMP 0x100425698 | {CLLocationCoordinate2D=dd}32@0:8{CLLocationCoordinate2D=dd}16
+ (struct CLLocationCoordinate2D)wgs84ToGcj02:(struct CLLocationCoordinate2D)arg0;
// IMP 0x10042569c | {CLLocationCoordinate2D=dd}32@0:8{CLLocationCoordinate2D=dd}16
+ (struct CLLocationCoordinate2D)gcj02ToWgs84:(struct CLLocationCoordinate2D)arg0;
// IMP 0x1004256a0 | {CLLocationCoordinate2D=dd}32@0:8{CLLocationCoordinate2D=dd}16
+ (struct CLLocationCoordinate2D)wgs84ToBd09:(struct CLLocationCoordinate2D)arg0;
// IMP 0x1004256c4 | {CLLocationCoordinate2D=dd}32@0:8{CLLocationCoordinate2D=dd}16
+ (struct CLLocationCoordinate2D)gcj02ToBd09:(struct CLLocationCoordinate2D)arg0;
// IMP 0x1004256c8 | {CLLocationCoordinate2D=dd}32@0:8{CLLocationCoordinate2D=dd}16
+ (struct CLLocationCoordinate2D)bd09ToGcj02:(struct CLLocationCoordinate2D)arg0;
// IMP 0x1004256cc | {CLLocationCoordinate2D=dd}32@0:8{CLLocationCoordinate2D=dd}16
+ (struct CLLocationCoordinate2D)bd09ToWgs84:(struct CLLocationCoordinate2D)arg0;
@end
