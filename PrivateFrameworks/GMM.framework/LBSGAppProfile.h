/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface LBSGAppProfile : PBCodable {
    NSString *_appKey;
    NSString *_appName;
    BOOL _hasRequestType;
    BOOL _hasSearchType;
    BOOL _hasZoomLevel;
    int _requestType;
    NSString *_searchTerm;
    int _searchType;
    int _zoomLevel;
}

@property(retain) NSString * appKey;
@property(retain) NSString * appName;
@property(readonly) BOOL hasAppKey;
@property(readonly) BOOL hasAppName;
@property BOOL hasRequestType;
@property(readonly) BOOL hasSearchTerm;
@property BOOL hasSearchType;
@property BOOL hasZoomLevel;
@property int requestType;
@property(retain) NSString * searchTerm;
@property int searchType;
@property int zoomLevel;

- (id)appKey;
- (id)appName;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAppKey;
- (BOOL)hasAppName;
- (BOOL)hasRequestType;
- (BOOL)hasSearchTerm;
- (BOOL)hasSearchType;
- (BOOL)hasZoomLevel;
- (BOOL)readFrom:(id)arg1;
- (int)requestType;
- (id)searchTerm;
- (int)searchType;
- (void)setAppKey:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setHasRequestType:(BOOL)arg1;
- (void)setHasSearchType:(BOOL)arg1;
- (void)setHasZoomLevel:(BOOL)arg1;
- (void)setRequestType:(int)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSearchType:(int)arg1;
- (void)setZoomLevel:(int)arg1;
- (void)writeTo:(id)arg1;
- (int)zoomLevel;

@end
