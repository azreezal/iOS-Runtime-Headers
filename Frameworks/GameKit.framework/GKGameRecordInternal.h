/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGameInternal, GKScoreInternal, NSDate, NSString;

@interface GKGameRecordInternal : GKInternalRepresentation {
    unsigned int _achievementPoints;
    unsigned int _achievements;
    NSString *_categoryID;
    unsigned int _friendRank;
    GKGameInternal *_game;
    NSDate *_lastPlayedDate;
    unsigned int _maxFriendRank;
    unsigned int _maxRank;
    NSDate *_purchaseDate;
    unsigned int _rank;
    float _rating;
    GKScoreInternal *_score;
    BOOL _valid;
}

@property unsigned int achievementPoints;
@property unsigned int achievements;
@property(retain) NSString * categoryID;
@property unsigned int friendRank;
@property(retain) GKGameInternal * game;
@property(retain) NSDate * lastPlayedDate;
@property unsigned int maxFriendRank;
@property unsigned int maxRank;
@property(retain) NSDate * purchaseDate;
@property unsigned int rank;
@property float rating;
@property(retain) GKScoreInternal * score;
@property(getter=isValid) BOOL valid;

+ (id)codedPropertyKeys;

- (unsigned int)achievementPoints;
- (unsigned int)achievements;
- (id)categoryID;
- (void)dealloc;
- (id)description;
- (unsigned int)friendRank;
- (id)game;
- (BOOL)isValid;
- (id)lastPlayedDate;
- (unsigned int)maxFriendRank;
- (unsigned int)maxRank;
- (id)purchaseDate;
- (unsigned int)rank;
- (float)rating;
- (id)score;
- (void)setAchievementPoints:(unsigned int)arg1;
- (void)setAchievements:(unsigned int)arg1;
- (void)setCategoryID:(id)arg1;
- (void)setFriendRank:(unsigned int)arg1;
- (void)setGame:(id)arg1;
- (void)setLastPlayedDate:(id)arg1;
- (void)setMaxFriendRank:(unsigned int)arg1;
- (void)setMaxRank:(unsigned int)arg1;
- (void)setPurchaseDate:(id)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setRating:(float)arg1;
- (void)setScore:(id)arg1;
- (void)setValid:(BOOL)arg1;

@end
