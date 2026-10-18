// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82b70
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDLogFileManagerDefault : NSObject
// ivar _fileDateFormatter encoding=@"NSDateFormatter" offset=8
// ivar _maximumNumberOfLogFiles encoding=Q offset=16
// ivar _logFilesDiskQuota encoding=Q offset=24
// ivar _logsDirectory encoding=@"NSString" offset=32
// ivar _defaultFileProtectionLevel encoding=@"NSString" offset=40
// property newLogFileName attributes=T@"NSString",R,C
// property logFileHeader attributes=T@"NSString",R,C
// property maximumNumberOfLogFiles attributes=TQ,V_maximumNumberOfLogFiles
// property logFilesDiskQuota attributes=TQ,V_logFilesDiskQuota
// property logsDirectory attributes=T@"NSString",R,C,N
// property unsortedLogFilePaths attributes=T@"NSArray",R,N
// property unsortedLogFileNames attributes=T@"NSArray",R,N
// property unsortedLogFileInfos attributes=T@"NSArray",R,N
// property sortedLogFilePaths attributes=T@"NSArray",R,N
// property sortedLogFileNames attributes=T@"NSArray",R,N
// property sortedLogFileInfos attributes=T@"NSArray",R,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10040b054 | @16@0:8
- (id)init;
// IMP 0x10040b05c | @24@0:8@16
- (id)initWithLogsDirectory:(id)arg0;
// IMP 0x10040b1bc | @32@0:8@16@24
- (id)initWithLogsDirectory:(id)arg0 defaultFileProtectionLevel:(id)arg1;
// IMP 0x10040b280 | v16@0:8
- (void)deleteOldFilesForConfigurationChange;
// IMP 0x10040b32c | v24@0:8Q16
- (void)setLogFilesDiskQuota:(unsigned long long)arg0;
// IMP 0x10040b344 | v24@0:8Q16
- (void)setMaximumNumberOfLogFiles:(unsigned long long)arg0;
// IMP 0x10040b35c | @16@0:8
- (id)logFileProtection;
// IMP 0x10040b4e0 | v16@0:8
- (void)deleteOldLogFiles;
// IMP 0x10040b6d0 | @16@0:8
- (id)defaultLogsDirectory;
// IMP 0x10040b748 | @16@0:8
- (id)logsDirectory;
// IMP 0x10040b7d0 | B24@0:8@16
- (BOOL)isLogFile:(id)arg0;
// IMP 0x10040b870 | @16@0:8
- (id)logFileDateFormatter;
// IMP 0x10040b878 | @16@0:8
- (id)unsortedLogFilePaths;
// IMP 0x10040ba34 | @16@0:8
- (id)unsortedLogFileNames;
// IMP 0x10040bb88 | @16@0:8
- (id)unsortedLogFileInfos;
// IMP 0x10040bce4 | @16@0:8
- (id)sortedLogFilePaths;
// IMP 0x10040be38 | @16@0:8
- (id)sortedLogFileNames;
// IMP 0x10040bf8c | @16@0:8
- (id)sortedLogFileInfos;
// IMP 0x10040c2d4 | @16@0:8
- (id)newLogFileName;
// IMP 0x10040c39c | @16@0:8
- (id)logFileHeader;
// IMP 0x10040c3a4 | @16@0:8
- (id)logFileHeaderData;
// IMP 0x10040c43c | @24@0:8^@16
- (id)createNewLogFileWithError:(id *)arg0;
// IMP 0x10040c7f4 | @16@0:8
- (id)applicationName;
// IMP 0x10040c904 | Q16@0:8
- (unsigned long long)maximumNumberOfLogFiles;
// IMP 0x10040c90c | Q16@0:8
- (unsigned long long)logFilesDiskQuota;
// IMP 0x10040c914 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
