/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface GMMTransitAgency : PBCodable {
    NSString *_mainUrl;
    NSString *_name;
    NSString *_phone;
}

@property(readonly) BOOL hasMainUrl;
@property(readonly) BOOL hasPhone;
@property(retain) NSString * mainUrl;
@property(retain) NSString * name;
@property(retain) NSString * phone;

- (void)dealloc;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMainUrl;
- (BOOL)hasPhone;
- (id)mainUrl;
- (id)name;
- (id)phone;
- (BOOL)readFrom:(id)arg1;
- (void)setMainUrl:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhone:(id)arg1;
- (void)writeTo:(id)arg1;

@end
