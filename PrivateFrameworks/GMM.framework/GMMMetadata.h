/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMMetadata : PBCodable {
    BOOL _fetchDepthMap;
    BOOL _fetchPanoMap;
    BOOL _hasFetchDepthMap;
    BOOL _hasFetchPanoMap;
    BOOL _hasNeedsLinkStreetRange;
    BOOL _needsLinkStreetRange;
}

@property BOOL fetchDepthMap;
@property BOOL fetchPanoMap;
@property BOOL hasFetchDepthMap;
@property BOOL hasFetchPanoMap;
@property BOOL hasNeedsLinkStreetRange;
@property BOOL needsLinkStreetRange;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)fetchDepthMap;
- (BOOL)fetchPanoMap;
- (BOOL)hasFetchDepthMap;
- (BOOL)hasFetchPanoMap;
- (BOOL)hasNeedsLinkStreetRange;
- (BOOL)needsLinkStreetRange;
- (BOOL)readFrom:(id)arg1;
- (void)setFetchDepthMap:(BOOL)arg1;
- (void)setFetchPanoMap:(BOOL)arg1;
- (void)setHasFetchDepthMap:(BOOL)arg1;
- (void)setHasFetchPanoMap:(BOOL)arg1;
- (void)setHasNeedsLinkStreetRange:(BOOL)arg1;
- (void)setNeedsLinkStreetRange:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
