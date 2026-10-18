// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82c38
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDFileLogger : DDAbstractLogger
// ivar _logFileManager encoding=@"<DDLogFileManager>" offset=24
// ivar _currentLogFileInfo encoding=@"DDLogFileInfo" offset=32
// ivar _currentLogFileHandle encoding=@"NSFileHandle" offset=40
// ivar _currentLogFileVnode encoding=@"NSObject<OS_dispatch_source>" offset=48
// ivar _rollingFrequency encoding=d offset=56
// ivar _rollingTimer encoding=@"NSObject<OS_dispatch_source>" offset=64
// ivar _maximumFileSize encoding=Q offset=72
// ivar _completionQueue encoding=@"NSObject<OS_dispatch_queue>" offset=80
// ivar _doNotReuseLogFiles encoding=B offset=88
// ivar _automaticallyAppendNewlineForCustomFormatters encoding=B offset=89
// property maximumFileSize attributes=TQ
// property rollingFrequency attributes=Td
// property doNotReuseLogFiles attributes=TB,V_doNotReuseLogFiles
// property logFileManager attributes=T@"<DDLogFileManager>",R,N,V_logFileManager
// property automaticallyAppendNewlineForCustomFormatters attributes=TB,N,V_automaticallyAppendNewlineForCustomFormatters
// property currentLogFileInfo attributes=T@"DDLogFileInfo",R,N
// property logFormatter attributes=T@"<DDLogFormatter>",&,N
// property loggerQueue attributes=T@"NSObject<OS_dispatch_queue>",R,N
// property loggerName attributes=T@"NSString",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100410258 | @16@0:8
- (id)wrapWithBuffer;
// IMP 0x100410288 | @16@0:8
- (id)unwrapFromBuffer;
// IMP 0x10040e880 | v24@0:8@16
- (void)logData:(id)arg0;
// IMP 0x10040ea0c | v16@0:8
- (void)lt_deprecationCatchAll;
// IMP 0x10040ea10 | @24@0:8:16
- (id)methodSignatureForSelector:(SEL)arg0;
// IMP 0x10040ea80 | v24@0:8@16
- (void)forwardInvocation:(id)arg0;
// IMP 0x10040eaec | v24@0:8@16
- (void)lt_logData:(id)arg0;
// IMP 0x10040ed54 | @24@0:8@16
- (id)lt_dataForMessage:(id)arg0;
// IMP 0x10040cb38 | @16@0:8
- (id)init;
// IMP 0x10040cb88 | @24@0:8@16
- (id)initWithLogFileManager:(id)arg0;
// IMP 0x10040cb90 | @32@0:8@16@24
- (id)initWithLogFileManager:(id)arg0 completionQueue:(id)arg1;
// IMP 0x10040cccc | v16@0:8
- (void)lt_cleanup;
// IMP 0x10040ce1c | v16@0:8
- (void)dealloc;
// IMP 0x10040cecc | Q16@0:8
- (unsigned long long)maximumFileSize;
// IMP 0x10040d040 | v24@0:8Q16
- (void)setMaximumFileSize:(unsigned long long)arg0;
// IMP 0x10040d1c8 | d16@0:8
- (double)rollingFrequency;
// IMP 0x10040d33c | v24@0:8d16
- (void)setRollingFrequency:(double)arg0;
// IMP 0x10040d4cc | v16@0:8
- (void)lt_scheduleTimerToRollLogFileDueToAge;
// IMP 0x10040d6e4 | v16@0:8
- (void)rollLogFile;
// IMP 0x10040d6ec | v24@0:8@?16
- (void)rollLogFileWithCompletionBlock:(id /* block */)arg0;
// IMP 0x10040d8e8 | v16@0:8
- (void)lt_rollLogFileNow;
// IMP 0x10040db88 | v16@0:8
- (void)lt_maybeRollLogFileDueToAge;
// IMP 0x10040dbf0 | v16@0:8
- (void)lt_maybeRollLogFileDueToSize;
// IMP 0x10040dcac | B24@0:8@16
- (BOOL)lt_shouldLogFileBeArchived:(id)arg0;
// IMP 0x10040dddc | @16@0:8
- (id)currentLogFileInfo;
// IMP 0x10040df90 | @16@0:8
- (id)lt_currentLogFileInfo;
// IMP 0x10040e108 | B28@0:8@16B24
- (BOOL)lt_shouldUseLogFile:(id)arg0 isResuming:(BOOL)arg1;
// IMP 0x10040e2c0 | v16@0:8
- (void)lt_monitorCurrentLogFileForExternalChanges;
// IMP 0x10040e3f8 | @16@0:8
- (id)lt_currentLogFileHandle;
// IMP 0x10040e4fc | v24@0:8@16
- (void)logMessage:(id)arg0;
// IMP 0x10040e540 | v24@0:8@16
- (void)willLogMessage:(id)arg0;
// IMP 0x10040e544 | v24@0:8@16
- (void)didLogMessage:(id)arg0;
// IMP 0x10040e548 | B24@0:8@16
- (BOOL)shouldArchiveRecentLogFileInfo:(id)arg0;
// IMP 0x10040e550 | v16@0:8
- (void)willRemoveLogger;
// IMP 0x10040e554 | v16@0:8
- (void)flush;
// IMP 0x10040e6b4 | v16@0:8
- (void)lt_flush;
// IMP 0x10040e78c | @16@0:8
- (id)loggerName;
// IMP 0x10040e79c | B16@0:8
- (BOOL)doNotReuseLogFiles;
// IMP 0x10040e7b0 | v20@0:8B16
- (void)setDoNotReuseLogFiles:(BOOL)arg0;
// IMP 0x10040e7c0 | @16@0:8
- (id)logFileManager;
// IMP 0x10040e7d0 | B16@0:8
- (BOOL)automaticallyAppendNewlineForCustomFormatters;
// IMP 0x10040e7e0 | v20@0:8B16
- (void)setAutomaticallyAppendNewlineForCustomFormatters:(BOOL)arg0;
// IMP 0x10040e7f0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
