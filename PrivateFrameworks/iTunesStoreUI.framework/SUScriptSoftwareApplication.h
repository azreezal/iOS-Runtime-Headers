/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISSoftwareApplication, NSNumber, NSString;

@interface SUScriptSoftwareApplication : SUScriptObject {
    ISSoftwareApplication *_application;
}

@property(readonly) NSNumber * adamID;
@property(readonly) NSString * bundleID;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSNumber * dsID;
@property(readonly) NSNumber * ratingRank;
@property(readonly) NSString * ratingSystem;
@property(readonly) NSString * softwareType;
@property(readonly) NSString * softwareTypeNewsstand;
@property(readonly) NSString * storeFrontID;
@property(readonly) NSNumber * versionID;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)_className;
- (id)adamID;
- (id)attributeKeys;
- (id)bundleID;
- (id)bundleVersion;
- (void)dealloc;
- (id)dsID;
- (id)initWithApplication:(id)arg1;
- (id)ratingRank;
- (id)ratingSystem;
- (id)scriptAttributeKeys;
- (id)softwareType;
- (id)softwareTypeNewsstand;
- (id)storeFrontID;
- (id)versionID;

@end
