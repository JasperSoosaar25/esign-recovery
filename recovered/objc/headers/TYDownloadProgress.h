// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d2a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface TYDownloadProgress : NSObject
// ivar _progress encoding=f offset=8
// ivar _speed encoding=f offset=12
// ivar _remainingTime encoding=i offset=16
// ivar _resumeBytesWritten encoding=q offset=24
// ivar _bytesWritten encoding=q offset=32
// ivar _totalBytesWritten encoding=q offset=40
// ivar _totalBytesExpectedToWrite encoding=q offset=48
// property resumeBytesWritten attributes=Tq,N,V_resumeBytesWritten
// property bytesWritten attributes=Tq,N,V_bytesWritten
// property totalBytesWritten attributes=Tq,N,V_totalBytesWritten
// property progress attributes=Tf,N,V_progress
// property speed attributes=Tf,N,V_speed
// property remainingTime attributes=Ti,N,V_remainingTime
// property totalBytesExpectedToWrite attributes=Tq,N,V_totalBytesExpectedToWrite
// IMP 0x1000fbb60 | @16@0:8
- (id)speedString;
// IMP 0x1000fbde4 | @16@0:8
- (id)fileSize;
// IMP 0x1000fc0a8 | q16@0:8
- (long long)resumeBytesWritten;
// IMP 0x1000fc0d8 | v24@0:8q16
- (void)setResumeBytesWritten:(long long)arg0;
// IMP 0x1000fc104 | q16@0:8
- (long long)bytesWritten;
// IMP 0x1000fc130 | v24@0:8q16
- (void)setBytesWritten:(long long)arg0;
// IMP 0x1000fc178 | q16@0:8
- (long long)totalBytesWritten;
// IMP 0x1000fc1a4 | v24@0:8q16
- (void)setTotalBytesWritten:(long long)arg0;
// IMP 0x1000fc1b8 | q16@0:8
- (long long)totalBytesExpectedToWrite;
// IMP 0x1000fc1d8 | v24@0:8q16
- (void)setTotalBytesExpectedToWrite:(long long)arg0;
// IMP 0x1000fc1f8 | f16@0:8
- (float)progress;
// IMP 0x1000fc218 | v20@0:8f16
- (void)setProgress:(float)arg0;
// IMP 0x1000fc260 | f16@0:8
- (float)speed;
// IMP 0x1000fc28c | v20@0:8f16
- (void)setSpeed:(float)arg0;
// IMP 0x1000fc2c8 | i16@0:8
- (int)remainingTime;
// IMP 0x1000fc2e8 | v20@0:8i16
- (void)setRemainingTime:(int)arg0;
@end
