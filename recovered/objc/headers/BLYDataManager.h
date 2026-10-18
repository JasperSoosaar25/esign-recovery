// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96130
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYDataManager : NSObject
// ivar _keyValueQueue encoding=@"NSObject<OS_dispatch_queue>" offset=8
// ivar _keyValueSubscriptionQueue encoding=@"NSObject<OS_dispatch_queue>" offset=16
// ivar _keyValueCache encoding=@"NSMutableDictionary" offset=24
// ivar _keyValueStorage encoding=@"NSMutableDictionary" offset=32
// ivar _kvoModels encoding=@"NSMutableArray" offset=40
// ivar _fileQueue encoding=@"NSOperationQueue" offset=48
// property keyValueQueue attributes=T@"NSObject<OS_dispatch_queue>",&,V_keyValueQueue
// property keyValueSubscriptionQueue attributes=T@"NSObject<OS_dispatch_queue>",&,V_keyValueSubscriptionQueue
// property keyValueCache attributes=T@"NSMutableDictionary",&,V_keyValueCache
// property keyValueStorage attributes=T@"NSMutableDictionary",&,V_keyValueStorage
// property kvoModels attributes=T@"NSMutableArray",&,V_kvoModels
// property fileQueue attributes=T@"NSOperationQueue",&,V_fileQueue
// IMP 0x10065b680 | @16@0:8
- (id)init;
// IMP 0x10065b7e0 | v16@0:8
- (void)removeOldFolder;
// IMP 0x10065bd60 | @16@0:8
- (id)keyValueCache;
// IMP 0x10065bdf4 | v24@0:8@16
- (void)setKeyValueCache:(id)arg0;
// IMP 0x10065be50 | @16@0:8
- (id)keyValueStorage;
// IMP 0x10065bf20 | v24@0:8@16
- (void)setKeyValueStorage:(id)arg0;
// IMP 0x10065bf7c | @16@0:8
- (id)kvoModels;
// IMP 0x10065c010 | v24@0:8@16
- (void)setKvoModels:(id)arg0;
// IMP 0x10065c06c | v44@0:8@16@24B32@?36
- (void)saveValue:(id)arg0 forKey:(id)arg1 persistence:(BOOL)arg2 completion:(id /* block */)arg3;
// IMP 0x10065c814 | v24@0:8@16
- (void)batchFetch:(id)arg0;
// IMP 0x10065c880 | v36@0:8@16B24@?28
- (void)batchSave:(id)arg0 persistence:(BOOL)arg1 completion:(id /* block */)arg2;
// IMP 0x10065d144 | v32@0:8@16@?24
- (void)fetchValueForKey:(id)arg0 completion:(id /* block */)arg1;
// IMP 0x10065d48c | v32@0:8@16@24
- (void)saveValue:(id)arg0 forKey:(id)arg1;
// IMP 0x10065d4e4 | v32@0:8@16@24
- (void)persistValue:(id)arg0 forKey:(id)arg1;
// IMP 0x10065d53c | @24@0:8@16
- (id)fetchValueForKey:(id)arg0;
// IMP 0x10065d814 | @24@0:8@16
- (id)fetchStringForKey:(id)arg0;
// IMP 0x10065d894 | v16@0:8
- (void)clearKeyValueCache;
// IMP 0x10065d9c8 | v16@0:8
- (void)clearKeyValueStorage;
// IMP 0x10065dbcc | @24@0:8@16
- (id)errorWithDescription:(id)arg0;
// IMP 0x10065dcec | @16@0:8
- (id)allCrashFileURL;
// IMP 0x10065dcfc | @16@0:8
- (id)allFilesExceptCrash;
// IMP 0x10065dd0c | @16@0:8
- (id)crashLogDirectoryPath;
// IMP 0x10065dd1c | @16@0:8
- (id)traceDataDirectoryPath;
// IMP 0x10065dd2c | @16@0:8
- (id)defaultDirectoryPath;
// IMP 0x10065dd3c | v16@0:8
- (void)deleteAllFilesExceptCrash;
// IMP 0x10065ddd4 | v16@0:8
- (void)deleteAllCrashFiles;
// IMP 0x10065de6c | @16@0:8
- (id)buglyRootFilePath;
// IMP 0x10065df84 | v44@0:8@16q24B32@?36
- (void)persistObj:(id)arg0 persistenceType:(long long)arg1 enableNotifications:(BOOL)arg2 withCompletionBlock:(id /* block */)arg3;
// IMP 0x10065e354 | v44@0:8@16q24B32@?36
- (void)fetchObjWithKey:(id)arg0 persistenceType:(long long)arg1 enableNotifications:(BOOL)arg2 withCompletionBlock:(id /* block */)arg3;
// IMP 0x10065e418 | @32@0:8@16q24
- (id)fetchObjWithKey:(id)arg0 persistenceType:(long long)arg1;
// IMP 0x10065e494 | @32@0:8@16q24
- (id)fetchObjFromFileWithFileName:(id)arg0 persistenceType:(long long)arg1;
// IMP 0x10065e738 | v44@0:8@16q24B32@?36
- (void)fetchObjFromFileWithFileName:(id)arg0 persistenceType:(long long)arg1 enableNotifications:(BOOL)arg2 withCompletionBlock:(id /* block */)arg3;
// IMP 0x10065e99c | v44@0:8@16q24B32@?36
- (void)deleteFileWithKey:(id)arg0 persistenceType:(long long)arg1 enableNotifications:(BOOL)arg2 withCompletionBlock:(id /* block */)arg3;
// IMP 0x10065ea98 | v44@0:8@16q24B32@?36
- (void)persistData:(id)arg0 ofType:(long long)arg1 enableNotifications:(BOOL)arg2 withCompletionBlock:(id /* block */)arg3;
// IMP 0x10065ee54 | @16@0:8
- (id)savedKeyValueStorage;
// IMP 0x10065f040 | @24@0:8@16
- (id)dataAtPath:(id)arg0;
// IMP 0x10065f0c4 | v20@0:8B16
- (void)sendDataSavedNotificationSuccess:(BOOL)arg0;
// IMP 0x10065f210 | v24@0:8@16
- (void)deleteFileAtPath:(id)arg0;
// IMP 0x10065f490 | @24@0:8q16
- (id)fileNameForPersitenceType:(long long)arg0;
// IMP 0x10065f698 | @24@0:8q16
- (id)folderPathForPersistenceType:(long long)arg0;
// IMP 0x10065f834 | v24@0:8@16
- (void)createFolderAtPathIfNeeded:(id)arg0;
// IMP 0x10065f958 | v16@0:8
- (void)createApplicationSupportDirectoryIfNeeded;
// IMP 0x10065fbcc | @24@0:8q16
- (id)allFileURLWithPriority:(long long)arg0;
// IMP 0x10065fd58 | v32@0:8@16@24
- (void)notifySubscribersForValue:(id)arg0 changedForKey:(id)arg1;
// IMP 0x1006600f4 | B24@0:8@16
- (BOOL)isKeySubscriped:(id)arg0;
// IMP 0x1006603c0 | @24@0:8@16
- (id)kvoModelForKey:(id)arg0;
// IMP 0x1006606c0 | B32@0:8@16@24
- (BOOL)isSubscriber:(id)arg0 existForKey:(id)arg1;
// IMP 0x1006608a0 | B32@0:8@16@24
- (BOOL)addSubscriber:(id)arg0 forKey:(id)arg1;
// IMP 0x100660c08 | B32@0:8@16@24
- (BOOL)removeSubscriber:(id)arg0 forKey:(id)arg1;
// IMP 0x100661314 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006612d8 | @16@0:8
- (id)keyValueQueue;
// IMP 0x1006612e4 | v24@0:8@16
- (void)setKeyValueQueue:(id)arg0;
// IMP 0x1006612ec | @16@0:8
- (id)keyValueSubscriptionQueue;
// IMP 0x1006612f8 | v24@0:8@16
- (void)setKeyValueSubscriptionQueue:(id)arg0;
// IMP 0x100661300 | @16@0:8
- (id)fileQueue;
// IMP 0x10066130c | v24@0:8@16
- (void)setFileQueue:(id)arg0;
// IMP 0x10065b600 | @16@0:8
+ (id)sharedManager;
@end
