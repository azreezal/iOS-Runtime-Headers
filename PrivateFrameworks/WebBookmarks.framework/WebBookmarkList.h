/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class NSMutableArray, NSString, WebBookmarkCollection;

@interface WebBookmarkList : NSObject {
    unsigned int _bookmarkCount;
    NSMutableArray *_bookmarks;
    WebBookmarkCollection *_collection;
    BOOL _customQuery;
    unsigned int _folderID;
    NSString *_query;
    unsigned int _skipOffset;
}

@property(readonly) unsigned int folderID;

- (void)_moveBookmarkAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (unsigned int)_reverseOrderIndex:(unsigned int)arg1;
- (id)bookmarkAtIndex:(unsigned int)arg1;
- (unsigned int)bookmarkCount;
- (void)dealloc;
- (unsigned int)folderID;
- (id)initWithBookmarksWhere:(id)arg1 collection:(id)arg2 bookmarkCount:(unsigned int)arg3 skipOffset:(unsigned int)arg4;
- (id)initWithFolderID:(unsigned int)arg1 inCollection:(id)arg2 bookmarkCount:(unsigned int)arg3 skipOffset:(unsigned int)arg4 includeHidden:(BOOL)arg5;
- (BOOL)stepThroughIndex:(unsigned int)arg1;

@end
