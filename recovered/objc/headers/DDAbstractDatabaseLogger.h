// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c822c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDAbstractDatabaseLogger : DDAbstractLogger
// ivar _saveThreshold encoding=Q offset=24
// ivar _saveInterval encoding=d offset=32
// ivar _maxAge encoding=d offset=40
// ivar _deleteInterval encoding=d offset=48
// ivar _deleteOnEverySave encoding=B offset=56
// ivar _saveTimerSuspended encoding=q offset=64
// ivar _unsavedCount encoding=Q offset=72
// ivar _unsavedTime encoding=Q offset=80
// ivar _saveTimer encoding=@"NSObject<OS_dispatch_source>" offset=88
// ivar _lastDeleteTime encoding=Q offset=96
// ivar _deleteTimer encoding=@"NSObject<OS_dispatch_source>" offset=104
// property saveThreshold attributes=TQ
// property saveInterval attributes=Td
// property maxAge attributes=Td
// property deleteInterval attributes=Td
// property deleteOnEverySave attributes=TB
// IMP 0x100408428 | @16@0:8
- (id)init;
// IMP 0x1004084a8 | v16@0:8
- (void)dealloc;
// IMP 0x1004084f4 | B24@0:8@16
- (BOOL)db_log:(id)arg0;
// IMP 0x1004084fc | v16@0:8
- (void)db_save;
// IMP 0x100408500 | v16@0:8
- (void)db_delete;
// IMP 0x100408504 | v16@0:8
- (void)db_saveAndDelete;
// IMP 0x100408508 | v16@0:8
- (void)performSaveAndSuspendSaveTimer;
// IMP 0x100408594 | v16@0:8
- (void)performDelete;
// IMP 0x1004085e0 | v16@0:8
- (void)destroySaveTimer;
// IMP 0x100408650 | v16@0:8
- (void)updateAndResumeSaveTimer;
// IMP 0x100408704 | v16@0:8
- (void)createSuspendedSaveTimer;
// IMP 0x100408814 | v16@0:8
- (void)destroyDeleteTimer;
// IMP 0x100408858 | v16@0:8
- (void)updateDeleteTimer;
// IMP 0x1004088fc | v16@0:8
- (void)createAndStartDeleteTimer;
// IMP 0x100408a24 | Q16@0:8
- (unsigned long long)saveThreshold;
// IMP 0x100408b64 | v24@0:8Q16
- (void)setSaveThreshold:(unsigned long long)arg0;
// IMP 0x100408cfc | d16@0:8
- (double)saveInterval;
// IMP 0x100408e44 | v24@0:8d16
- (void)setSaveInterval:(double)arg0;
// IMP 0x100408ffc | d16@0:8
- (double)maxAge;
// IMP 0x100409144 | v24@0:8d16
- (void)setMaxAge:(double)arg0;
// IMP 0x10040931c | d16@0:8
- (double)deleteInterval;
// IMP 0x100409464 | v24@0:8d16
- (void)setDeleteInterval:(double)arg0;
// IMP 0x10040961c | B16@0:8
- (BOOL)deleteOnEverySave;
// IMP 0x10040975c | v20@0:8B16
- (void)setDeleteOnEverySave:(BOOL)arg0;
// IMP 0x1004098a8 | v16@0:8
- (void)savePendingLogEntries;
// IMP 0x100409980 | v16@0:8
- (void)deleteOldLogEntries;
// IMP 0x100409a58 | v16@0:8
- (void)didAddLogger;
// IMP 0x100409a7c | v16@0:8
- (void)willRemoveLogger;
// IMP 0x100409aa8 | v24@0:8@16
- (void)logMessage:(id)arg0;
// IMP 0x100409b34 | v16@0:8
- (void)flush;
// IMP 0x100409b38 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
