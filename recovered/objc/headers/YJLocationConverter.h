// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e240
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YJLocationConverter : NSObject
// IMP 0x1001cc538 | {CLLocationCoordinate2D=dd}32@0:8{CLLocationCoordinate2D=dd}16
+ (struct CLLocationCoordinate2D)yj_WGS84ConvertToGCJ02:(struct CLLocationCoordinate2D)arg0;
// IMP 0x1001cc548 | {CLLocationCoordinate2D=dd}32@0:8{CLLocationCoordinate2D=dd}16
+ (struct CLLocationCoordinate2D)yj_GCJ02ConvertToWGS84:(struct CLLocationCoordinate2D)arg0;
// IMP 0x1001cc5c4 | {CLLocationCoordinate2D=dd}32@0:8{CLLocationCoordinate2D=dd}16
+ (struct CLLocationCoordinate2D)yj_WGS84ConvertToBD09:(struct CLLocationCoordinate2D)arg0;
// IMP 0x1001cc63c | {CLLocationCoordinate2D=dd}32@0:8{CLLocationCoordinate2D=dd}16
+ (struct CLLocationCoordinate2D)yj_GCJ02ConvertToBD09:(struct CLLocationCoordinate2D)arg0;
// IMP 0x1001cc6ac | {CLLocationCoordinate2D=dd}32@0:8{CLLocationCoordinate2D=dd}16
+ (struct CLLocationCoordinate2D)yj_BD09ConvertToGCJ02:(struct CLLocationCoordinate2D)arg0;
// IMP 0x1001cc728 | {CLLocationCoordinate2D=dd}32@0:8{CLLocationCoordinate2D=dd}16
+ (struct CLLocationCoordinate2D)yj_BD09ConvertToWGS84:(struct CLLocationCoordinate2D)arg0;
// IMP 0x1001cc79c | d32@0:8d16d24
+ (double)transformLat:(double)arg0 bdLon:(double)arg1;
// IMP 0x1001cc8f4 | d32@0:8d16d24
+ (double)transformLon:(double)arg0 bdLon:(double)arg1;
// IMP 0x1001cca28 | B32@0:8d16d24
+ (BOOL)outOfChina:(double)arg0 bdLon:(double)arg1;
// IMP 0x1001ccb0c | {CLLocationCoordinate2D=dd}32@0:8d16d24
+ (struct CLLocationCoordinate2D)gcj02Encrypt:(double)arg0 bdLon:(double)arg1;
// IMP 0x1001ccce8 | {CLLocationCoordinate2D=dd}32@0:8d16d24
+ (struct CLLocationCoordinate2D)gcj02Decrypt:(double)arg0 gjLon:(double)arg1;
// IMP 0x1001ccd74 | {CLLocationCoordinate2D=dd}32@0:8d16d24
+ (struct CLLocationCoordinate2D)bd09Decrypt:(double)arg0 bdLon:(double)arg1;
// IMP 0x1001cce28 | {CLLocationCoordinate2D=dd}32@0:8d16d24
+ (struct CLLocationCoordinate2D)bd09Encrypt:(double)arg0 bdLon:(double)arg1;
@end
