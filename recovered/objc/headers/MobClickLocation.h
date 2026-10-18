// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97080
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MobClickLocation : NSObject
// ivar _latitude encoding=d offset=8
// ivar _longitude encoding=d offset=16
// ivar _gps_time encoding=d offset=24
// property latitude attributes=Td,N,V_latitude
// property longitude attributes=Td,N,V_longitude
// property gps_time attributes=Td,N,V_gps_time
// IMP 0x1006a16c0 | d16@0:8
- (double)latitude;
// IMP 0x1006a16c8 | v24@0:8d16
- (void)setLatitude:(double)arg0;
// IMP 0x1006a16d0 | d16@0:8
- (double)longitude;
// IMP 0x1006a16d8 | v24@0:8d16
- (void)setLongitude:(double)arg0;
// IMP 0x1006a16e0 | d16@0:8
- (double)gps_time;
// IMP 0x1006a16e8 | v24@0:8d16
- (void)setGps_time:(double)arg0;
// IMP 0x1006a1470 | @16@0:8
+ (id)sharedInstance;
// IMP 0x1006a1530 | v32@0:8d16d24
+ (void)setLatitude:(double)arg0 longitude:(double)arg1;
@end
