/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class MPMediaItemCollection, NSArray, SUScriptMediaItem;

@interface SUScriptMediaItemCollection : SUScriptObject {
    NSArray *_items;
    SUScriptMediaItem *_representativeItem;
    BOOL _watchingLibrary;
}

@property(readonly) int count;
@property(readonly) NSArray * items;
@property(readonly) NSArray * mediaTypes;
@property(readonly) MPMediaItemCollection * nativeCollection;
@property(readonly) SUScriptMediaItem * representativeItem;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;

- (void)_beginWatchingLibraryIfNecessary;
- (id)_className;
- (id)_copyItems;
- (id)_copyMediaTypes;
- (id)_copyRepresentativeItem;
- (void)_libraryChangedNotification:(id)arg1;
- (int)_mainThreadCount;
- (void)_setItems:(id)arg1;
- (id)attributeKeys;
- (int)count;
- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (id)items;
- (id)mediaTypes;
- (id)nativeCollection;
- (id)representativeItem;
- (id)scriptAttributeKeys;

@end
