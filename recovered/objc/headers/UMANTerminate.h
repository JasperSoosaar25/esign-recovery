// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96c20
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMANTerminate : UMComEvent
// ivar _duration encoding=d offset=8
// ivar _pageViews encoding=@"NSMutableArray" offset=16
// ivar _latitude encoding=d offset=24
// ivar _longitude encoding=d offset=32
// ivar _gps_time encoding=q offset=40
// property duration attributes=Td,N,V_duration
// property pageViews attributes=T@"NSMutableArray",&,N,V_pageViews
// property latitude attributes=Td,N,V_latitude
// property longitude attributes=Td,N,V_longitude
// property gps_time attributes=Tq,N,V_gps_time
// IMP 0x100683e6c | @16@0:8
- (id)init;
// IMP 0x100683e7c | B16@0:8
- (BOOL)hasGPSInfo;
// IMP 0x100683ec4 | @24@0:8d16
- (id)initWithDuration:(double)arg0;
// IMP 0x100683f68 | v16@0:8
- (void)dealloc;
// IMP 0x100683fc0 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1006840e0 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1006841f8 | v16@0:8
- (void)outputUMLog;
// IMP 0x100684bb4 | d16@0:8
- (double)duration;
// IMP 0x100684bc4 | v24@0:8d16
- (void)setDuration:(double)arg0;
// IMP 0x100684bd4 | @16@0:8
- (id)pageViews;
// IMP 0x100684be4 | v24@0:8@16
- (void)setPageViews:(id)arg0;
// IMP 0x100684bfc | d16@0:8
- (double)latitude;
// IMP 0x100684c0c | v24@0:8d16
- (void)setLatitude:(double)arg0;
// IMP 0x100684c1c | d16@0:8
- (double)longitude;
// IMP 0x100684c2c | v24@0:8d16
- (void)setLongitude:(double)arg0;
// IMP 0x100684c3c | q16@0:8
- (long long)gps_time;
// IMP 0x100684c4c | v24@0:8q16
- (void)setGps_time:(long long)arg0;
// IMP 0x100684340 | i24@0:8@16
+ (int)rowCountInTable:(id)arg0;
// IMP 0x100684384 | v24@0:8@16
+ (void)clearDataInTable:(id)arg0;
// IMP 0x1006843c8 | v16@0:8
+ (void)clearAllSdDataInTable;
// IMP 0x1006843fc | v24@0:8@16
+ (void)clearDataInTableWithVersion:(id)arg0;
// IMP 0x100684440 | v32@0:8@16@24
+ (void)clearDataInTableWithVersion:(id)arg0 withSid:(id)arg1;
// IMP 0x10068448c | v32@0:8@16@24
+ (void)insertSessionTable:(id)arg0 st:(id)arg1;
// IMP 0x1006844d0 | v32@0:8@16@24
+ (void)insertPageTable:(id)arg0 page:(id)arg1;
// IMP 0x100684514 | v28@0:8@16B24
+ (void)addPage:(id)arg0 autoPage:(BOOL)arg1;
// IMP 0x100684a70 | v32@0:8@16@24
+ (void)insertSessionEndTable:(id)arg0 et:(id)arg1;
// IMP 0x100684ab4 | v32@0:8@16@24
+ (void)insertSessionBeginTable:(id)arg0 st:(id)arg1;
// IMP 0x100684af8 | @24@0:8@16
+ (id)loadTable:(id)arg0;
// IMP 0x100684b34 | @24@0:8@16
+ (id)loadTableWithVersion:(id)arg0;
// IMP 0x100684b70 | @32@0:8@16@24
+ (id)loadTableWithVersion:(id)arg0 withSid:(id)arg1;
@end
