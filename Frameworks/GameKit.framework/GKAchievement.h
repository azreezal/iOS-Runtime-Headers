/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKAchievementInternal, NSDate, NSString;

@interface GKAchievement : NSObject <NSCoding> {
    BOOL _hidden;
    GKAchievementInternal *_internal;
    BOOL _showsCompletionBanner;
}

@property(getter=isCompleted,readonly) BOOL completed;
@property(getter=isHidden) BOOL hidden;
@property(retain) NSString * identifier;
@property(retain) GKAchievementInternal * internal;
@property(retain) NSDate * lastReportedDate;
@property double percentComplete;
@property BOOL showsCompletionBanner;

+ (id)allAchievementsForDescriptions:(id)arg1 achievements:(id)arg2;
+ (void)loadAchievementsForGame:(id)arg1 player:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)loadAchievementsWithCompletionHandler:(id)arg1;
+ (id)nonHiddenAchievementsForDescriptions:(id)arg1 achievements:(id)arg2;
+ (void)resetAchievementsWithCompletionHandler:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescription:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isCompleted;
- (BOOL)isHidden;
- (void)reportAchievementWithCompletionHandler:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setInternal:(id)arg1;
- (void)setShowsCompletionBanner:(BOOL)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)showsCompletionBanner;
- (id)valueForUndefinedKey:(id)arg1;

@end
