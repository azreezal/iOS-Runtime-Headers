/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, NSMutableSet, NSString;

@interface MKTransitIconCache : MKCache0 {
    NSString *_cacheFolderPath;
    NSMutableSet *_gmmIconIDs;
    float _iconScale;
    unsigned int _iconSize;
    int _iconVersion;
    BOOL _isEnabled;
}

@property(retain) NSString * cacheFolderPath;
@property(readonly) NSArray * gmmIconIDs;
@property float iconScale;
@property unsigned int iconSize;
@property int iconVersion;
@property BOOL isEnabled;

+ (id)sharedTransitIconCache;

- (id)_iconPathForName:(id)arg1 canPurge:(BOOL*)arg2;
- (id)_infoPath;
- (void)_resetCache;
- (void)_updateInfoPlist;
- (id)cacheFolderPath;
- (void)dealloc;
- (void)evictObject:(id)arg1;
- (id)gmmIconIDs;
- (id)iconForName:(id)arg1;
- (float)iconScale;
- (unsigned int)iconSize;
- (int)iconVersion;
- (id)initWithCapacity:(unsigned int)arg1 maxCapacity:(unsigned int)arg2;
- (BOOL)isEnabled;
- (void)setCacheFolderPath:(id)arg1;
- (void)setIconData:(id)arg1 forName:(id)arg2;
- (void)setIconScale:(float)arg1;
- (void)setIconSize:(unsigned int)arg1;
- (void)setIconVersion:(int)arg1;
- (void)setIsEnabled:(BOOL)arg1;

@end
