/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3Predicate, NSArray, NSString;

@interface ML3Container : ML3Entity {
}

@property(readonly) ML3Predicate * dynamicPredicate;
@property(getter=isLimitOrderingDescending,readonly) BOOL limitOrderingDescending;
@property(readonly) NSArray * limitOrderingDirectionality;
@property(readonly) NSArray * limitOrderingProperties;
@property(readonly) long long limitValue;
@property(getter=isLimitedByCount,readonly) BOOL limitedByCount;
@property(readonly) NSString * limitingProperty;
@property(readonly) ML3Predicate * staticPredicate;

+ (void)_insertNewSmartPlaylist:(id)arg1 criteriaBlob:(id)arg2 limited:(BOOL)arg3 trackOrder:(unsigned long)arg4 distinguishedKind:(int)arg5 inLibrary:(id)arg6 cachedNameOrders:(id)arg7;
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1;
+ (BOOL)createMissingBuiltInSmartPlaylists:(id)arg1;
+ (id)databaseTable;
+ (id)defaultOrderingProperties;
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)extraTablesToDelete;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (BOOL)hasCriterionInCriteriaList:(struct OpaqueSearchCriteriaList { }*)arg1 forITDBTrackField:(int)arg2;
+ (void)initialize;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)nextFilepathForPlaylistType:(int)arg1 withPersistentID:(unsigned long long)arg2 inLibrary:(id)arg3;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (void)populateDynamicContainersInLibrary:(id)arg1;
+ (void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (void)populateStaticItemsOfDynamicContainersOnHandle:(struct sqlite3 { }*)arg1;
+ (id)predicateForCriteriaList:(struct OpaqueSearchCriteriaList { }*)arg1 dynamicCriteria:(BOOL)arg2;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;
+ (int)revisionTrackingCode;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (BOOL)smartCriteriaCanBeEvaluated:(id)arg1;

- (void)_accessCurrentSwappedPersisentIDsUsingBlock:(id)arg1;
- (BOOL)_isDescendingForTrackOrderProperty:(id)arg1 reverseOrderProperty:(id)arg2;
- (BOOL)_setSwappedItemPersistentIDs:(const long long*)arg1 size:(int)arg2 notify:(BOOL)arg3;
- (BOOL)_setSwappedItemPersistentIDs:(const long long*)arg1 size:(int)arg2;
- (BOOL)addTrackWithPersistentID:(long long)arg1;
- (BOOL)addTracksWithPersistentIDs:(long long*)arg1 count:(unsigned int)arg2 notify:(BOOL)arg3;
- (BOOL)addTracksWithPersistentIDs:(long long*)arg1 count:(unsigned int)arg2;
- (void)bindPopulateStatement:(struct sqlite3_stmt { }*)arg1 withStaticTrackPersistentID:(id)arg2;
- (id)dynamicPredicate;
- (void)getDisplayOrderingProperties:(id*)arg1 isDescending:(BOOL*)arg2;
- (struct OpaqueSearchCriteriaList { }*)importedCriteriaList;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
- (BOOL)isCustomContainerOrderingDescending;
- (BOOL)isLimitOrderingDescending;
- (BOOL)isLimitedByCount;
- (id)limitOrderingDirectionality;
- (id)limitOrderingProperties;
- (long long)limitValue;
- (id)limitingProperty;
- (BOOL)moveTrackFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (id)populateSQLWithStaticTrackPersistentID:(id)arg1;
- (BOOL)removeAllTracks;
- (BOOL)removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2 indexesTransformBlock:(id)arg3;
- (BOOL)removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2;
- (BOOL)removeTracksAtIndexes:(id)arg1;
- (BOOL)removeTracksWithPersistentIDs:(const long long*)arg1 atFilteredIndexes:(id)arg2;
- (BOOL)setContainsTrack:(BOOL)arg1 forPersistentID:(long long)arg2 notify:(BOOL)arg3;
- (BOOL)setTracksWithPersistentIDs:(const long long*)arg1 count:(unsigned int)arg2 notify:(BOOL)arg3;
- (BOOL)setTracksWithPersistentIDs:(const long long*)arg1 count:(unsigned int)arg2;
- (BOOL)setTracksWithSwappedPersistentIDData:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (id)staticPredicate;

@end
