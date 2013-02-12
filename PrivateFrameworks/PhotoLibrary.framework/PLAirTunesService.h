/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLAirTunesServicePhotoBrowsingDataSource>, AirPlayRemoteSlideshow, MCMediaControlClientRemote, MediaControlClient, NSDictionary, NSMutableArray, NSNetService, NSString;

@interface PLAirTunesService : NSObject <NSNetServiceDelegate> {
    <PLAirTunesServicePhotoBrowsingDataSource> *_dataSource;
    NSString *_deviceID;
    struct _DNSServiceRef_t { } *_dnsService;
    unsigned int _features;
    NSString *_ipAddress;
    MediaControlClient *_mediaControlClient;
    NSNetService *_netService;
    NSString *_password;
    double _playStartTime;
    MCMediaControlClientRemote *_remoteMediaControlClient;
    AirPlayRemoteSlideshow *_remoteSlideshow;
    NSDictionary *_remoteSlideshowAvailableFeatures;
    BOOL _requiresPassword;
    BOOL _sentPhoto;
    NSMutableArray *_streamedPhotoUuids;
    BOOL _streamingLocalSlideShow;
    BOOL _streamingPhotos;
    BOOL _streamingRemoteSlideshow;
    BOOL _streamingVideo;
    BOOL _validPassword;
}

@property <PLAirTunesServicePhotoBrowsingDataSource> * dataSource;
@property(readonly) NSString * deviceID;
@property unsigned int features;
@property(retain) NSString * ipAddress;
@property(readonly) NSNetService * netService;
@property(retain) NSString * password;
@property(retain) AirPlayRemoteSlideshow * remoteSlideshow;
@property(retain) NSDictionary * remoteSlideshowAvailableFeatures;
@property BOOL requiresPassword;
@property BOOL streamingLocalSlideShow;
@property BOOL validPassword;

+ (void)beginNetworkAssertion;
+ (BOOL)canDisplayMedia:(id)arg1;
+ (void)endNetworkAssertion;

- (BOOL)_allowsPhotoCaching;
- (void)_cancelResolve;
- (id)_fixLegacyEvent:(id)arg1;
- (void)_invalidatePassword;
- (void*)_keychainAccessibility;
- (void)_reallySendPhotoData:(id)arg1 forPhotoWithUUID:(id)arg2 withTransition:(id)arg3 andAction:(id)arg4;
- (void)_resolveWithTimeout:(double)arg1;
- (void)_setDeviceID:(id)arg1;
- (void)_streamPhoto:(id)arg1 withTransition:(id)arg2 andAction:(id)arg3;
- (void)_streamPhotosAdjacentToPhoto:(id)arg1 withTransition:(id)arg2;
- (BOOL)_streaming;
- (BOOL)_supportsPhotoCaching;
- (void)_validateWithCompletionBlock:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)description;
- (id)deviceID;
- (unsigned int)features;
- (void)getRemoteFeaturesWithCompletionHandler:(id)arg1;
- (void)getVideoPosition:(id)arg1;
- (unsigned int)hash;
- (id)initWithNSNetService:(id)arg1;
- (void)invalidateStreaming;
- (id)ipAddress;
- (BOOL)isAvailable;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (id)netService;
- (void)netServiceDidResolveAddress:(id)arg1;
- (id)password;
- (void)playVideo:(id)arg1 startTime:(double)arg2 stateChangedBlock:(id)arg3;
- (id)remoteLocalizationForSlideshowThemeKey:(id)arg1;
- (id)remoteSlideshow;
- (id)remoteSlideshowAvailableFeatures;
- (BOOL)requiresPassword;
- (void)setDataSource:(id)arg1;
- (void)setFeatures:(unsigned int)arg1;
- (void)setIpAddress:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setRemoteSlideshow:(id)arg1;
- (void)setRemoteSlideshowAvailableFeatures:(id)arg1;
- (void)setRequiresPassword:(BOOL)arg1;
- (void)setStreamingLocalSlideShow:(BOOL)arg1;
- (void)setValidPassword:(BOOL)arg1;
- (void)setVideoPosition:(double)arg1;
- (void)startRemoteSlideshowWithTheme:(id)arg1 remoteSlideshowDelegate:(id)arg2;
- (void)stopRemoteSlideshow;
- (void)stopStreaming;
- (void)stopStreamingWithCompletionBlock:(id)arg1;
- (void)streamPhoto:(id)arg1 withTransition:(id)arg2;
- (BOOL)streamingLocalSlideShow;
- (id)supportedRemoteSlideshowThemes;
- (BOOL)supportsRemoteSlideshow;
- (BOOL)validPassword;
- (void)validate;

@end
