/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@class NSDictionary;

@interface DataClassMigrator : NSObject {
    NSDictionary *_context;
}

@property(retain) NSDictionary * context;
@property(readonly) BOOL didMigrateBackupFromDifferentDevice;
@property(readonly) BOOL didRestoreFromBackup;
@property(readonly) BOOL didRestoreFromCloudBackup;
@property(readonly) BOOL shouldPreserveSettingsAfterRestore;
@property(readonly) BOOL wasPasscodeSetInBackup;

- (id)context;
- (id)dataClassName;
- (void)dealloc;
- (BOOL)didMigrateBackupFromDifferentDevice;
- (BOOL)didRestoreFromBackup;
- (BOOL)didRestoreFromCloudBackup;
- (float)estimatedDuration;
- (float)migrationProgress;
- (BOOL)performMigration;
- (void)setContext:(id)arg1;
- (BOOL)shouldPreserveSettingsAfterRestore;
- (BOOL)wasPasscodeSetInBackup;

@end
