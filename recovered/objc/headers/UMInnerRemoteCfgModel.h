// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96b30
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMInnerRemoteCfgModel : NSObject
// ivar _type encoding=Q offset=8
// ivar _col_delay_times encoding=@"NSNumber" offset=16
// ivar _col_delay_ts encoding=@"NSNumber" offset=24
// ivar _col_interval encoding=@"NSNumber" offset=32
// ivar _hit_sdk encoding=@"NSString" offset=40
// ivar _week_on encoding=@"NSArray" offset=48
// ivar _sdk encoding=@"NSArray" offset=56
// ivar _hour_on encoding=@"NSString" offset=64
// property type attributes=TQ,N,V_type
// property col_delay_times attributes=T@"NSNumber",&,N,V_col_delay_times
// property col_delay_ts attributes=T@"NSNumber",&,N,V_col_delay_ts
// property col_interval attributes=T@"NSNumber",&,N,V_col_interval
// property hit_sdk attributes=T@"NSString",C,N,V_hit_sdk
// property week_on attributes=T@"NSArray",&,N,V_week_on
// property sdk attributes=T@"NSArray",&,N,V_sdk
// property hour_on attributes=T@"NSString",&,N,V_hour_on
// IMP 0x10068179c | @32@0:8@16Q24
- (id)initWithConfig:(id)arg0 type:(unsigned long long)arg1;
// IMP 0x100681e1c | B16@0:8
- (BOOL)isHitWeekOn;
// IMP 0x1006821e0 | B16@0:8
- (BOOL)isHitDelayTimes;
// IMP 0x100682280 | B16@0:8
- (BOOL)isHitInterval;
// IMP 0x1006823b8 | B16@0:8
- (BOOL)isHit;
// IMP 0x100682420 | B16@0:8
- (BOOL)isActionHit;
// IMP 0x100682474 | B16@0:8
- (BOOL)isHitHourOn;
// IMP 0x1006826f0 | q16@0:8
- (long long)getNowH;
// IMP 0x100682850 | Q16@0:8
- (unsigned long long)type;
// IMP 0x100682858 | v24@0:8Q16
- (void)setType:(unsigned long long)arg0;
// IMP 0x100682860 | @16@0:8
- (id)col_delay_times;
// IMP 0x100682868 | v24@0:8@16
- (void)setCol_delay_times:(id)arg0;
// IMP 0x100682874 | @16@0:8
- (id)col_delay_ts;
// IMP 0x10068287c | v24@0:8@16
- (void)setCol_delay_ts:(id)arg0;
// IMP 0x100682888 | @16@0:8
- (id)col_interval;
// IMP 0x100682890 | v24@0:8@16
- (void)setCol_interval:(id)arg0;
// IMP 0x10068289c | @16@0:8
- (id)hit_sdk;
// IMP 0x1006828a8 | v24@0:8@16
- (void)setHit_sdk:(id)arg0;
// IMP 0x1006828bc | @16@0:8
- (id)week_on;
// IMP 0x1006828c4 | v24@0:8@16
- (void)setWeek_on:(id)arg0;
// IMP 0x1006828d0 | @16@0:8
- (id)sdk;
// IMP 0x1006828d8 | v24@0:8@16
- (void)setSdk:(id)arg0;
// IMP 0x1006828e4 | @16@0:8
- (id)hour_on;
// IMP 0x1006828ec | v24@0:8@16
- (void)setHour_on:(id)arg0;
// IMP 0x1006828f8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100681f44 | @24@0:8@16
+ (id)getWeekDayFromDate:(id)arg0;
@end
