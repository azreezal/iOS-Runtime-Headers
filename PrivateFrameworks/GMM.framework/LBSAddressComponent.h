/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSAddressRange, LBSFeatureId, NSMutableArray;

@interface LBSAddressComponent : PBCodable {
    LBSFeatureId *_featureId;
    int _featureType;
    BOOL _hasFeatureType;
    NSMutableArray *_parsedNames;
    LBSAddressRange *_range;
    int _type;
}

@property(retain) LBSFeatureId * featureId;
@property int featureType;
@property(readonly) BOOL hasFeatureId;
@property BOOL hasFeatureType;
@property(readonly) BOOL hasRange;
@property(retain) NSMutableArray * parsedNames;
@property(retain) LBSAddressRange * range;
@property int type;

- (void)addParsedName:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureId;
- (int)featureType;
- (BOOL)hasFeatureId;
- (BOOL)hasFeatureType;
- (BOOL)hasRange;
- (id)parsedNameAtIndex:(unsigned int)arg1;
- (id)parsedNames;
- (unsigned int)parsedNamesCount;
- (id)range;
- (BOOL)readFrom:(id)arg1;
- (void)setFeatureId:(id)arg1;
- (void)setFeatureType:(int)arg1;
- (void)setHasFeatureType:(BOOL)arg1;
- (void)setParsedNames:(id)arg1;
- (void)setRange:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
