// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c945e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDAsyncReadPacket : NSObject
// ivar buffer encoding=@"NSMutableData" offset=8
// ivar startOffset encoding=Q offset=16
// ivar bytesDone encoding=Q offset=24
// ivar maxLength encoding=Q offset=32
// ivar timeout encoding=d offset=40
// ivar readLength encoding=Q offset=48
// ivar term encoding=@"NSData" offset=56
// ivar bufferOwner encoding=B offset=64
// ivar originalBufferLength encoding=Q offset=72
// ivar tag encoding=q offset=80
// IMP 0x10059b5b8 | @72@0:8@16Q24Q32d40Q48@56q64
- (id)initWithData:(id)arg0 startOffset:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 readLength:(unsigned long long)arg4 terminator:(id)arg5 tag:(long long)arg6;
// IMP 0x10059b6fc | v24@0:8Q16
- (void)ensureCapacityForAdditionalDataOfLength:(unsigned long long)arg0;
// IMP 0x10059b74c | Q32@0:8Q16^B24
- (unsigned long long)optimalReadLengthWithDefault:(unsigned long long)arg0 shouldPreBuffer:(BOOL *)arg1;
// IMP 0x10059b7dc | Q24@0:8Q16
- (unsigned long long)readLengthForNonTermWithHint:(unsigned long long)arg0;
// IMP 0x10059b804 | Q32@0:8Q16^B24
- (unsigned long long)readLengthForTermWithHint:(unsigned long long)arg0 shouldPreBuffer:(BOOL *)arg1;
// IMP 0x10059b870 | Q32@0:8@16^B24
- (unsigned long long)readLengthForTermWithPreBuffer:(id)arg0 found:(BOOL *)arg1;
// IMP 0x10059ba80 | q24@0:8q16
- (long long)searchForTermAfterPreBuffering:(long long)arg0;
// IMP 0x10059bb30 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
