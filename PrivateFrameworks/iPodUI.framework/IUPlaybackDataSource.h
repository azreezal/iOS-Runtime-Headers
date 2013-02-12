/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUPlaybackDataSource : IUMediaDataSource {
    BOOL _preservePlaybackState;
    BOOL _restartPlaybackOnly;
    unsigned int _shuffleType;
}

@property BOOL preservePlaybackState;
@property BOOL restartPlaybackOnly;
@property unsigned int shuffleType;

+ (Class)queueFeederClass;

- (id)init;
- (BOOL)preservePlaybackState;
- (BOOL)restartPlaybackOnly;
- (void)setPreservePlaybackState:(BOOL)arg1;
- (void)setRestartPlaybackOnly:(BOOL)arg1;
- (void)setShuffleType:(unsigned int)arg1;
- (unsigned int)shuffleType;

@end
