/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOTileSetVersion : PBCodable {
    NSMutableArray *_availableTiles;
    unsigned int _identifier;
}

@property(retain) NSMutableArray * availableTiles;
@property unsigned int identifier;

- (void)addAvailableTiles:(id)arg1;
- (id)availableTiles;
- (id)availableTilesAtIndex:(unsigned int)arg1;
- (unsigned int)availableTilesCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)identifier;
- (BOOL)readFrom:(id)arg1;
- (void)setAvailableTiles:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
