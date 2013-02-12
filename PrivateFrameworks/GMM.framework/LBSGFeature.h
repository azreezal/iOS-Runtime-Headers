/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGAddress, LBSGLatLng, LBSGRectangle, NSString;

@interface LBSGFeature : PBCodable {
    LBSGAddress *_address;
    LBSGRectangle *_bounds;
    LBSGLatLng *_center;
    int _featureType;
    NSString *_name;
}

@property(retain) LBSGAddress * address;
@property(retain) LBSGRectangle * bounds;
@property(retain) LBSGLatLng * center;
@property int featureType;
@property(readonly) BOOL hasBounds;
@property(readonly) BOOL hasCenter;
@property(retain) NSString * name;

- (id)address;
- (id)bounds;
- (id)center;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)featureType;
- (BOOL)hasBounds;
- (BOOL)hasCenter;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setFeatureType:(int)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
