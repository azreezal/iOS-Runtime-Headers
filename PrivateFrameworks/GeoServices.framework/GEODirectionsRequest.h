/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLocation, GEOMapRegion, NSMutableArray;

@interface GEODirectionsRequest : PBRequest {
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    BOOL _hasIncludeNavigationInfo;
    BOOL _hasIncludePhonetics;
    BOOL _hasIncludeRoutePoints;
    BOOL _hasIncludeRouteSegments;
    BOOL _hasMaxRouteCount;
    BOOL _hasPageOffset;
    BOOL _hasPreference;
    BOOL _hasTimestamp;
    BOOL _hasTimestampType;
    BOOL _includeNavigationInfo;
    BOOL _includePhonetics;
    BOOL _includeRoutePoints;
    BOOL _includeRouteSegments;
    int _maxRouteCount;
    int _pageOffset;
    NSMutableArray *_placeSearchs;
    int _preference;
    double _timestamp;
    int _timestampType;
    int _type;
}

@property(retain) GEOMapRegion * currentMapRegion;
@property(retain) GEOLocation * currentUserLocation;
@property(readonly) BOOL hasCurrentMapRegion;
@property(readonly) BOOL hasCurrentUserLocation;
@property BOOL hasIncludeNavigationInfo;
@property BOOL hasIncludePhonetics;
@property BOOL hasIncludeRoutePoints;
@property BOOL hasIncludeRouteSegments;
@property BOOL hasMaxRouteCount;
@property BOOL hasPageOffset;
@property BOOL hasPreference;
@property BOOL hasTimestamp;
@property BOOL hasTimestampType;
@property BOOL includeNavigationInfo;
@property BOOL includePhonetics;
@property BOOL includeRoutePoints;
@property BOOL includeRouteSegments;
@property int maxRouteCount;
@property int pageOffset;
@property(retain) NSMutableArray * placeSearchs;
@property int preference;
@property double timestamp;
@property int timestampType;
@property int type;

- (void)addPlaceSearch:(id)arg1;
- (id)currentMapRegion;
- (id)currentUserLocation;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCurrentMapRegion;
- (BOOL)hasCurrentUserLocation;
- (BOOL)hasIncludeNavigationInfo;
- (BOOL)hasIncludePhonetics;
- (BOOL)hasIncludeRoutePoints;
- (BOOL)hasIncludeRouteSegments;
- (BOOL)hasMaxRouteCount;
- (BOOL)hasPageOffset;
- (BOOL)hasPreference;
- (BOOL)hasTimestamp;
- (BOOL)hasTimestampType;
- (BOOL)includeNavigationInfo;
- (BOOL)includePhonetics;
- (BOOL)includeRoutePoints;
- (BOOL)includeRouteSegments;
- (int)maxRouteCount;
- (int)pageOffset;
- (id)placeSearchAtIndex:(unsigned int)arg1;
- (id)placeSearchs;
- (unsigned int)placeSearchsCount;
- (int)preference;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setCurrentMapRegion:(id)arg1;
- (void)setCurrentUserLocation:(id)arg1;
- (void)setHasIncludeNavigationInfo:(BOOL)arg1;
- (void)setHasIncludePhonetics:(BOOL)arg1;
- (void)setHasIncludeRoutePoints:(BOOL)arg1;
- (void)setHasIncludeRouteSegments:(BOOL)arg1;
- (void)setHasMaxRouteCount:(BOOL)arg1;
- (void)setHasPageOffset:(BOOL)arg1;
- (void)setHasPreference:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTimestampType:(BOOL)arg1;
- (void)setIncludeNavigationInfo:(BOOL)arg1;
- (void)setIncludePhonetics:(BOOL)arg1;
- (void)setIncludeRoutePoints:(BOOL)arg1;
- (void)setIncludeRouteSegments:(BOOL)arg1;
- (void)setMaxRouteCount:(int)arg1;
- (void)setPageOffset:(int)arg1;
- (void)setPlaceSearchs:(id)arg1;
- (void)setPreference:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTimestampType:(int)arg1;
- (void)setType:(int)arg1;
- (double)timestamp;
- (int)timestampType;
- (int)type;
- (void)writeTo:(id)arg1;

@end
