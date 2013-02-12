/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController, MPMoviePlayerVideoViewController, NSError, NSURL, UIColor, UIWindow;

@interface MPMoviePlayerControllerInternalOld : NSObject {
    struct { 
        unsigned int active : 1; 
        unsigned int visible : 1; 
        unsigned int mediaType : 1; 
        unsigned int isStreaming : 1; 
        unsigned int statusBarWasHidden : 1; 
        unsigned int shouldRestartPlaybackAfterAudioRouteChange : 1; 
        unsigned int playbackFailed : 1; 
        unsigned int isFinishing : 1; 
        unsigned int hideLoadingIndicatorForLocalFiles : 1; 
        unsigned int fullscreen : 1; 
        unsigned int playAfterCreatingPlayer : 1; 
        unsigned int canShowControlsOverlay : 1; 
        unsigned int tearDownPlayerOnEnd : 1; 
        unsigned int didSendPreloadNotification : 1; 
        unsigned int isValidating : 1; 
        unsigned int unused : 17; 
    UIColor *_backgroundColor;
    NSURL *_contentURL;
    double _initialPlaybackTime;
    int _movieControlMode;
    NSError *_playbackError;
    MPAVController *_player;
    } _playerBitfield;
    UIWindow *_previousKeyWindow;
    unsigned int _previousStatusBarOrientation;
    int _previousStatusBarStyle;
    int _scalingMode;
    MPMoviePlayerVideoViewController *_videoViewController;
    UIWindow *_window;
}

@end
