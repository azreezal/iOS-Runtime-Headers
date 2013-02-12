/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSDictionary, NSSet, NSString;

@interface MBDomain : NSObject {
    NSString *_name;
    NSDictionary *_relativePathAggregateDictionaryGroups;
    NSDictionary *_relativePathDomainRedirects;
    NSSet *_relativePathsNotToBackup;
    NSSet *_relativePathsNotToBackupToDrive;
    NSSet *_relativePathsNotToBackupToService;
    NSSet *_relativePathsNotToCheckIfModifiedDuringBackup;
    NSSet *_relativePathsNotToMigrate;
    NSSet *_relativePathsNotToRestore;
    NSSet *_relativePathsNotToRestoreToIPods;
    NSSet *_relativePathsOfSystemFilesToAlwaysRestore;
    NSSet *_relativePathsToBackgroundRestore;
    NSSet *_relativePathsToBackupAndRestore;
    NSSet *_relativePathsToMoveAsideOnRestore;
    NSSet *_relativePathsToRestoreOnly;
    NSString *_rootPath;
    BOOL _shouldDigest;
}

@property(getter=isAppDomain,readonly) BOOL appDomain;
@property(readonly) NSString * bundleID;
@property(getter=isUninstalledAppDomain,readonly) BOOL installedAppDomain;
@property(readonly) NSString * name;
@property(getter=isPlaceholderAppDomain,readonly) BOOL placeholderAppDomain;
@property(retain) NSDictionary * relativePathAggregateDictionaryGroups;
@property(retain) NSDictionary * relativePathDomainRedirects;
@property(retain) NSSet * relativePathsNotToBackup;
@property(retain) NSSet * relativePathsNotToBackupToDrive;
@property(retain) NSSet * relativePathsNotToBackupToService;
@property(retain) NSSet * relativePathsNotToCheckIfModifiedDuringBackup;
@property(retain) NSSet * relativePathsNotToMigrate;
@property(retain) NSSet * relativePathsNotToRestore;
@property(retain) NSSet * relativePathsNotToRestoreToIPods;
@property(retain) NSSet * relativePathsOfSystemFilesToAlwaysRestore;
@property(retain) NSSet * relativePathsToBackgroundRestore;
@property(readonly) NSSet * relativePathsToBackup;
@property(retain) NSSet * relativePathsToBackupAndRestore;
@property(retain) NSSet * relativePathsToMoveAsideOnRestore;
@property(readonly) NSSet * relativePathsToRestore;
@property(retain) NSSet * relativePathsToRestoreOnly;
@property(readonly) NSString * rootPath;
@property BOOL shouldDigest;

+ (BOOL)_boolFromValue:(id)arg1 forKey:(id)arg2;
+ (id)_dictionaryOfStringsToStringFromValue:(id)arg1 forKey:(id)arg2;
+ (double)_doubleFromStringValueForKey:(id)arg1 plist:(id)arg2;
+ (void)_loadSystemDomains;
+ (id)_relativePathsByAddingSQLiteJournals:(id)arg1;
+ (id)_setOfStringsFromValue:(id)arg1 forKey:(id)arg2;
+ (id)_stringByRemovingCommentsFromValue:(id)arg1 forKey:(id)arg2;
+ (id)appDomainWithBundleID:(id)arg1 rootPath:(id)arg2;
+ (id)appPlaceholderDomainWithBundleID:(id)arg1 rootPath:(id)arg2;
+ (id)bundleIDWithName:(id)arg1;
+ (id)domainWithName:(id)arg1 rootPath:(id)arg2;
+ (BOOL)isAppName:(id)arg1;
+ (BOOL)isAppPlaceholderName:(id)arg1;
+ (id)nameWithAppBundleID:(id)arg1;
+ (id)systemDomains;
+ (id)systemDomainsByName;
+ (double)systemDomainsMaxSupportedVersion;
+ (double)systemDomainsMinSupportedVersion;
+ (double)systemDomainsVersion;
+ (id)uninstalledAppDomainWithBundleID:(id)arg1;

- (id)bundleID;
- (int)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithName:(id)arg1 plist:(id)arg2;
- (id)initWithName:(id)arg1 rootPath:(id)arg2;
- (BOOL)isAppDomain;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDomain:(id)arg1;
- (BOOL)isPlaceholderAppDomain;
- (BOOL)isUninstalledAppDomain;
- (id)name;
- (id)relativePathAggregateDictionaryGroups;
- (id)relativePathDomainRedirects;
- (id)relativePathsNotToBackup;
- (id)relativePathsNotToBackupToDrive;
- (id)relativePathsNotToBackupToService;
- (id)relativePathsNotToCheckIfModifiedDuringBackup;
- (id)relativePathsNotToMigrate;
- (id)relativePathsNotToRestore;
- (id)relativePathsNotToRestoreToIPods;
- (id)relativePathsOfSystemFilesToAlwaysRestore;
- (id)relativePathsToBackgroundRestore;
- (id)relativePathsToBackup;
- (id)relativePathsToBackupAndRestore;
- (id)relativePathsToMoveAsideOnRestore;
- (id)relativePathsToRestore;
- (id)relativePathsToRestoreOnly;
- (id)rootPath;
- (void)setRelativePathAggregateDictionaryGroups:(id)arg1;
- (void)setRelativePathDomainRedirects:(id)arg1;
- (void)setRelativePathsNotToBackup:(id)arg1;
- (void)setRelativePathsNotToBackupToDrive:(id)arg1;
- (void)setRelativePathsNotToBackupToService:(id)arg1;
- (void)setRelativePathsNotToCheckIfModifiedDuringBackup:(id)arg1;
- (void)setRelativePathsNotToMigrate:(id)arg1;
- (void)setRelativePathsNotToRestore:(id)arg1;
- (void)setRelativePathsNotToRestoreToIPods:(id)arg1;
- (void)setRelativePathsOfSystemFilesToAlwaysRestore:(id)arg1;
- (void)setRelativePathsToBackgroundRestore:(id)arg1;
- (void)setRelativePathsToBackupAndRestore:(id)arg1;
- (void)setRelativePathsToMoveAsideOnRestore:(id)arg1;
- (void)setRelativePathsToRestoreOnly:(id)arg1;
- (void)setShouldDigest:(BOOL)arg1;
- (BOOL)shouldDigest;

@end
