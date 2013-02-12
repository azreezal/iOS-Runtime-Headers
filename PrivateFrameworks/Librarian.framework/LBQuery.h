/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSPredicate, NSString, NSThread;

@interface LBQuery : NSObject {
    struct { 
        unsigned int first_max_num; 
        unsigned int first_max_ms; 
        unsigned int progress_max_num; 
        unsigned int progress_max_ms; 
        unsigned int update_max_num; 
        unsigned int update_max_ms; 
    int (*_create_result_callbacks_equal)();
    int (*_create_result_callbacks_release)();
    int (*_create_result_fn)();
    int (*_create_value_callbacks_equal)();
    int (*_create_value_callbacks_release)();
    int (*_create_value_fn)();
    int (*_sort_fn)();
    unsigned int _accumulatedItemCount;
    } _batchingParameters;
    NSMutableArray *_changes;
    void *_create_result_context;
    void *_create_value_context;
    NSMutableDictionary *_created;
    long long _disableCount;
    NSThread *_executeThread;
    NSMutableIndexSet *_insertionSet;
    struct dispatch_queue_s { } *_notificationQueue;
    unsigned long long _notifyInterval;
    struct dispatch_source_s { } *_notifyTimer;
    struct __LBItemUpdateObserver { } *_observer;
    NSPredicate *_predicate;
    NSString *_query;
    int _queryState;
    NSMutableIndexSet *_removalSet;
    NSMutableIndexSet *_replacementSet;
    NSMutableArray *_results;
    NSMutableDictionary *_resultsDict;
    unsigned long _scopeOptions;
    NSArray *_searchScopes;
    void *_sort_context;
    NSArray *_sortingAttributes;
    BOOL _synchronous;
    NSMutableDictionary *_toBeInserted;
    NSMutableDictionary *_toBeRemoved;
    NSMutableDictionary *_toBeReplaced;
    NSArray *_values;
    bool_pendingChanges;
    bool_pendingNote;
    bool_ubiquitousGatherComplete;
}

- (void)_createChangeSets;
- (void)_didChange:(unsigned int)arg1 inSet:(id)arg2;
- (void)_didInsert:(id)arg1;
- (void)_didRemove:(id)arg1;
- (void)_didReplace:(id)arg1;
- (void)_disableUpdates;
- (void)_enableUpdates;
- (void)_postNote:(struct __CFString { }*)arg1;
- (void)_processChanges;
- (void)_processUpdates;
- (void)_real_dealloc;
- (void)_runQuery;
- (void)_stop;
- (void)_willChange:(unsigned int)arg1 inSet:(id)arg2;
- (void)_willInsert:(id)arg1;
- (void)_willRemove:(id)arg1;
- (void)_willReplace:(id)arg1;
- (void)addChangeToURL:(id)arg1 withInfo:(id)arg2;
- (void)addCreatedURL:(id)arg1 withInfo:(id)arg2 makeLive:(bool)arg3;
- (void)addItemWithURL:(id)arg1 usingInfo:(id)arg2;
- (id)attributeValueForName:(id)arg1 forResultAtIndex:(int)arg2;
- (unsigned int)countOfResultsForAttributeName:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (void)deleteURL:(id)arg1;
- (void)disableUpdates;
- (void)enableUpdates;
- (unsigned char)executeWithOptions:(unsigned long)arg1;
- (void)finalize;
- (int)indexOfResult:(const void*)arg1;
- (id)initWithQuery:(id)arg1 values:(id)arg2 sortingAttributes:(id)arg3 items:(struct __CFArray { }*)arg4;
- (void)postNote:(struct __CFString { }*)arg1;
- (id)predicate;
- (void)processUpdates;
- (const void*)resultAtIndex:(int)arg1;
- (unsigned int)resultCount;
- (void)sendNote;
- (void)setBatchingParameters:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (void)setCreateResultFunction:(int (*)())arg1 withContext:(void*)arg2 callbacks:(const struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)setCreateValueFunction:(int (*)())arg1 withContext:(void*)arg2 callbacks:(const struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)setSearchScope:(id)arg1 withOptions:(unsigned long)arg2;
- (void)setSortComparator:(int (*)())arg1 withContext:(void*)arg2;
- (void)stop;
- (void)updateQueryResultForURL:(id)arg1 info:(id)arg2 updateType:(int)arg3;
- (id)valuesOfAttribute:(id)arg1;

@end
