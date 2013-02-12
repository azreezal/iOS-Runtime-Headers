/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerInternal, NSArray, NSError;

@interface AVPlayer : NSObject {
    AVPlayerInternal *_player;
}

@property(setter=_setDisplaysUsedForPlayback:,copy) NSArray * _displaysUsedForPlayback;
@property(readonly) int _externalProtectionStatus;
@property(getter=isAudioPlaybackEnabledAtAllRates,readonly) BOOL audioPlaybackEnabledAtAllRates;
@property(readonly) NSError * error;
@property float maxRateForAudioPlayback;
@property float minRateForAudioPlayback;
@property(readonly) int status;

+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (BOOL)automaticallyNotifiesObserversOfAllowsAirPlayVideo;
+ (BOOL)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (BOOL)automaticallyNotifiesObserversOfVolume;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingRate;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;

- (BOOL)_CALayerDestinationIsTVOut;
- (int)_actionAtItemEnd;
- (void)_addFPListeners;
- (void)_addLayer:(id)arg1;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (BOOL)_airPlayVideoActive;
- (BOOL)_allowsAirPlayVideo;
- (BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
- (BOOL)_attachItem:(id)arg1 andPerformOperation:(int)arg2 withObject:(id)arg3;
- (void)_attachLayerToFigPlayer;
- (id)_cachedValueForKey:(id)arg1;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (void)_checkDefaultsWriteForPerformanceLogging;
- (id)_clientName;
- (id)_currentItem;
- (void)_currentItemStatusIsReadyToPlay;
- (int)_defaultActionAtItemEnd;
- (void)_detachLayerFromFigPlayer;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_didFinishSuspension:(id)arg1;
- (id)_displaysUsedForPlayback;
- (void)_enumerateItemsUsingBlock:(id)arg1;
- (int)_externalProtectionStatus;
- (struct OpaqueFigPlayer { }*)_figPlayer;
- (id)_fpNotificationNames;
- (BOOL)_hasAssociatedOnscreenAVPlayerLayer;
- (BOOL)_iapdExtendedModeIsActive;
- (BOOL)_insertItem:(id)arg1 afterItem:(id)arg2;
- (BOOL)_insertPlaybackItemOfItem:(id)arg1 inPlayerQueueAfterPlaybackItemOfItem:(id)arg2;
- (BOOL)_isClosedCaptionDisplayEnabled;
- (int)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1;
- (id)_items;
- (void)_logPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (id)_playbackDisplaysForFigPlayer;
- (id)_playerLayers;
- (int)_playerType;
- (void)_preparePlaybackItemOfItemForEnqueueing:(id)arg1 withCompletionHandler:(id)arg2;
- (id)_propertyStorage;
- (float)_rate;
- (void)_removeAllItems;
- (BOOL)_removeAnItem:(id)arg1;
- (void)_removeFPListeners;
- (BOOL)_removeItem:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (BOOL)_resumePlayback:(double)arg1 error:(id*)arg2;
- (void)_setActionAtItemEnd:(int)arg1 allowingAdvance:(BOOL)arg2;
- (void)_setCALayerDestinationIsTVOut:(BOOL)arg1;
- (void)_setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)_setClientName:(id)arg1;
- (void)_setCurrentItem:(id)arg1;
- (void)_setDisplaysUsedForPlayback:(id)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_setLayer:(id)arg1;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setVolume:(float)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1;
- (BOOL)_shouldDetachContentLayersFromFigPlayer;
- (BOOL)_shouldLogPerformanceData;
- (struct dispatch_queue_s { }*)_stateDispatchQueue;
- (BOOL)_usesAirPlayVideoWhileAirPlayScreenIsActive;
- (float)_volume;
- (id)_weakReference;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (int)actionAtItemEnd;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2 usingBlock:(id)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(struct dispatch_queue_s { }*)arg2 usingBlock:(id)arg3;
- (BOOL)allowsAirPlayVideo;
- (id)currentItem;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (struct dispatch_queue_s { }*)dispatchQueue;
- (id)error;
- (void)finalize;
- (id)init;
- (id)initWithDispatchQueue:(struct dispatch_queue_s { }*)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isAirPlayVideoActive;
- (BOOL)isAudioPlaybackEnabledAtAllRates;
- (BOOL)isClosedCaptionDisplayEnabled;
- (float)maxRateForAudioPlayback;
- (float)minRateForAudioPlayback;
- (void)pause;
- (void)play;
- (id)playerAVAudioSession;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id)arg2;
- (float)rate;
- (void)removeAudioPlaybackRateLimits;
- (void)removeTimeObserver:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id)arg4;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActionAtItemEnd:(int)arg1;
- (void)setAllowsAirPlayVideo:(BOOL)arg1;
- (void)setClosedCaptionDisplayEnabled:(BOOL)arg1;
- (void)setMaxRateForAudioPlayback:(float)arg1;
- (void)setMinRateForAudioPlayback:(float)arg1;
- (void)setRate:(float)arg1;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)arg1;
- (void)setWaitsUntilItemsAreReadyForInspectionBeforeMakingEligibleForPlayback:(BOOL)arg1;
- (int)status;
- (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (BOOL)waitsUntilItemsAreReadyForInspectionBeforeMakingEligibleForPlayback;
- (void)willChangeValueForKey:(id)arg1;

@end
