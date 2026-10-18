// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94130
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYKVStorageItem : NSObject
// ivar _size encoding=i offset=8
// ivar _modTime encoding=i offset=12
// ivar _accessTime encoding=i offset=16
// ivar _key encoding=@"NSString" offset=24
// ivar _value encoding=@"NSData" offset=32
// ivar _filename encoding=@"NSString" offset=40
// ivar _extendedData encoding=@"NSData" offset=48
// property key attributes=T@"NSString",&,N,V_key
// property value attributes=T@"NSData",&,N,V_value
// property filename attributes=T@"NSString",&,N,V_filename
// property size attributes=Ti,N,V_size
// property modTime attributes=Ti,N,V_modTime
// property accessTime attributes=Ti,N,V_accessTime
// property extendedData attributes=T@"NSData",&,N,V_extendedData
// IMP 0x10058d50c | @16@0:8
- (id)key;
// IMP 0x10058d514 | v24@0:8@16
- (void)setKey:(id)arg0;
// IMP 0x10058d520 | @16@0:8
- (id)value;
// IMP 0x10058d528 | v24@0:8@16
- (void)setValue:(id)arg0;
// IMP 0x10058d534 | @16@0:8
- (id)filename;
// IMP 0x10058d53c | v24@0:8@16
- (void)setFilename:(id)arg0;
// IMP 0x10058d548 | i16@0:8
- (int)size;
// IMP 0x10058d550 | v20@0:8i16
- (void)setSize:(int)arg0;
// IMP 0x10058d558 | i16@0:8
- (int)modTime;
// IMP 0x10058d560 | v20@0:8i16
- (void)setModTime:(int)arg0;
// IMP 0x10058d568 | i16@0:8
- (int)accessTime;
// IMP 0x10058d570 | v20@0:8i16
- (void)setAccessTime:(int)arg0;
// IMP 0x10058d578 | @16@0:8
- (id)extendedData;
// IMP 0x10058d580 | v24@0:8@16
- (void)setExtendedData:(id)arg0;
// IMP 0x10058d58c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
