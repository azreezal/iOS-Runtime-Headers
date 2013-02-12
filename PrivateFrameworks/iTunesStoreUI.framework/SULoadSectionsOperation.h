/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUSectionsResponse;

@interface SULoadSectionsOperation : ISOperation <ISURLOperationDelegate> {
    NSString *_activeSectionVersionString;
    SUSectionsResponse *_sectionsResponse;
    BOOL _shouldUseCache;
}

@property(copy) NSString * activeSectionVersionString;
@property(readonly) SUSectionsResponse * sectionsResponse;
@property BOOL shouldUseCache;

- (id)_cachePathForVersion:(id)arg1 create:(BOOL)arg2;
- (BOOL)_loadSectionsFromCacheForVersion:(id)arg1;
- (BOOL)_loadSectionsFromNetworkWithDictionary:(id)arg1;
- (void)_setSectionsResponse:(id)arg1;
- (void)_writeSectionsResponseToCache:(id)arg1 forVersion:(id)arg2;
- (id)activeSectionVersionString;
- (void)dealloc;
- (id)init;
- (void)run;
- (id)sectionsResponse;
- (void)setActiveSectionVersionString:(id)arg1;
- (void)setShouldUseCache:(BOOL)arg1;
- (BOOL)shouldUseCache;

@end
