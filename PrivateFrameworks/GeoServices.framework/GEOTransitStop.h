/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlace, NSString;

@interface GEOTransitStop : PBCodable {
    int _agentIndex;
    int _departureInterval;
    BOOL _hasAgentIndex;
    BOOL _hasDepartureInterval;
    BOOL _hasTimestamp;
    BOOL _hasTimezoneOffset;
    NSString *_iconName;
    GEOPlace *_place;
    NSString *_supplementalInstructions;
    double _timestamp;
    int _timezoneOffset;
    NSString *_transitCost;
}

@property int agentIndex;
@property int departureInterval;
@property BOOL hasAgentIndex;
@property BOOL hasDepartureInterval;
@property(readonly) BOOL hasIconName;
@property(readonly) BOOL hasPlace;
@property(readonly) BOOL hasSupplementalInstructions;
@property BOOL hasTimestamp;
@property BOOL hasTimezoneOffset;
@property(readonly) BOOL hasTransitCost;
@property(retain) NSString * iconName;
@property(retain) GEOPlace * place;
@property(retain) NSString * supplementalInstructions;
@property double timestamp;
@property int timezoneOffset;
@property(retain) NSString * transitCost;

- (int)agentIndex;
- (id)calendarDate;
- (void)dealloc;
- (int)departureInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAgentIndex;
- (BOOL)hasDepartureInterval;
- (BOOL)hasIconName;
- (BOOL)hasPlace;
- (BOOL)hasSupplementalInstructions;
- (BOOL)hasTimestamp;
- (BOOL)hasTimezoneOffset;
- (BOOL)hasTransitCost;
- (id)iconName;
- (id)place;
- (BOOL)readFrom:(id)arg1;
- (void)setAgentIndex:(int)arg1;
- (void)setDepartureInterval:(int)arg1;
- (void)setHasAgentIndex:(BOOL)arg1;
- (void)setHasDepartureInterval:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTimezoneOffset:(BOOL)arg1;
- (void)setIconName:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)setSupplementalInstructions:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTimezoneOffset:(int)arg1;
- (void)setTransitCost:(id)arg1;
- (id)supplementalInstructions;
- (double)timestamp;
- (int)timezoneOffset;
- (id)transitCost;
- (void)writeTo:(id)arg1;

@end
