// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97cb0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMBuildPayload : NSObject
// ivar _idTracking encoding=@"UMTIdTracking" offset=8
// ivar _jsonObject encoding=@"NSMutableDictionary" offset=16
// ivar _body encoding=@"NSMutableDictionary" offset=24
// IMP 0x1006c6588 | B24@0:8@16
- (BOOL)verifyResponseData:(id)arg0;
// IMP 0x1006c6b1c | B24@0:8@16
- (BOOL)verifySLResponseData:(id)arg0;
// IMP 0x1006c6f10 | @16@0:8
- (id)init;
// IMP 0x1006c6fd4 | v16@0:8
- (void)buildIdTracking;
// IMP 0x1006c7c88 | v16@0:8
- (void)generateIdTracking;
// IMP 0x1006c8340 | v16@0:8
- (void)saveIdTracking;
// IMP 0x1006ca59c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006c47dc | B24@0:8@16
+ (BOOL)validateImprintChecksum:(id)arg0;
// IMP 0x1006c48ac | @24@0:8@16
+ (id)generateImprintChecksum:(id)arg0;
// IMP 0x1006c4c90 | v24@0:8@16
+ (void)updateImprint:(id)arg0;
// IMP 0x1006c637c | @32@0:8@16@24
+ (id)imprintWithData:(id)arg0 forKey:(id)arg1;
// IMP 0x1006c6e60 | @16@0:8
+ (id)sharedInstance;
// IMP 0x1006c85b4 | f20@0:8i16
+ (float)calcProbWithSigIndex:(int)arg0;
// IMP 0x1006c8758 | v24@0:8@16
+ (void)configureExperimentWithString:(id)arg0;
// IMP 0x1006c90c4 | v24@0:8@16
+ (void)buildBaseheader:(id)arg0;
// IMP 0x1006ca2dc | v32@0:8@16@?24
+ (void)setFilterImprintKey:(id)arg0 withHandler:(id /* block */)arg1;
// IMP 0x1006ca368 | B32@0:8@16@24
+ (BOOL)processFilterImprintKey:(id)arg0 withImprintValue:(id)arg1;
// IMP 0x1006ca400 | @16@0:8
+ (id)saveUMKid;
@end
