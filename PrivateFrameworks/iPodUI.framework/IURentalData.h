/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUUserNotificationAlert, NSDate, NSDictionary, NSString, UILocalNotification;

@interface IURentalData : NSObject {
    IUUserNotificationAlert *_alert;
    int _deferRentalEventsCount;
    struct dispatch_queue_s { } *_dispatchQueue;
    NSString *_downloadIdentifier;
    BOOL _failed;
    NSDictionary *_fileProcessorInfo;
    BOOL _isPlaying;
    UILocalNotification *_lastFiredLocalNotification;
    BOOL _loaded;
    NSString *_mediaPath;
    NSDate *_playbackDate;
    unsigned long long _trackPersistentIdentifier;
}

@property(getter=isDeferringRentalEvents,readonly) BOOL deferringRentalEvents;
@property(readonly) NSString * downloadIdentifier;
@property(readonly) NSDate * expirationDate;
@property(readonly) NSString * mediaPath;
@property(readonly) NSDate * nextEventDate;
@property(readonly) double playbackTimeRemaining;
@property(getter=isPlaying) BOOL playing;
@property(readonly) int rentalState;
@property(readonly) unsigned long long trackPersistentIdentifier;
@property(readonly) BOOL willExpireSoon;

+ (BOOL)_shouldReadDemoRentalInfoForMediaItem:(id)arg1;

- (id)_expirationDate;
- (id)_lastFiredLocalNotification;
- (void)_loadDemoRentalInfoFromMediaItem:(id)arg1;
- (id)_newAlertTitleForTimeUntilExpiration:(double)arg1;
- (id)_nextEventDate;
- (void)_performActionForEventWithTimeUntilExpiration:(double)arg1;
- (id)_playbackEndDate;
- (void)_refreshAlert;
- (id)_rentalEndDate;
- (void)_setFileProcessorInfo:(id)arg1;
- (void)_setLastFiredLocalNotification:(id)arg1;
- (void)_showAlertForTimeUntilExpiration:(double)arg1;
- (void)beginDeferringRentalEvents;
- (id)copyNextLocalNotification;
- (void)dealloc;
- (id)downloadIdentifier;
- (void)endDeferringRentalEvents;
- (id)expirationDate;
- (id)init;
- (id)initWithMediaItem:(id)arg1;
- (BOOL)isDeferringRentalEvents;
- (BOOL)isPlaying;
- (id)mediaPath;
- (id)nextEventDate;
- (void)performActionForLocalNotification:(id)arg1;
- (void)performDeferredLocalNotifications;
- (double)playbackTimeRemaining;
- (int)rentalState;
- (void)resetForReason:(unsigned int)arg1;
- (void)setFailed:(BOOL)arg1;
- (void)setFileProcessorInfo:(id)arg1;
- (void)setLoaded:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)synchronizeLocalData;
- (unsigned long long)trackPersistentIdentifier;
- (BOOL)willExpireSoon;

@end
