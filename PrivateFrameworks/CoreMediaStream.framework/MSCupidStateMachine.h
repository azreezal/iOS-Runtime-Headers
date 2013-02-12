/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MSBackoffManager, NSMutableDictionary, NSString;

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate> {
    MSBackoffManager *_MMCSBackoffManager;
    NSString *_manifestPath;
    NSString *_personID;
    MSBackoffManager *_streamsBackoffManager;
    NSMutableDictionary *_userManifest;
}

@property(retain) NSMutableDictionary * _userManifest;
@property(readonly) NSString * personID;

- (void)_abort;
- (void)_backoffMMCSBackoffTimer;
- (void)_backoffStreamsBackoffTimer;
- (void)_commitUserManifest;
- (void)_didReceiveMMCSRetryAfterDate:(id)arg1;
- (void)_didReceiveStreamsRetryAfterDate:(id)arg1;
- (void)_forget;
- (id)_latestNextActivityDate;
- (void)_resetMMCSBackoffTimer;
- (void)_resetStreamsBackoffTimer;
- (void)_updateMasterManifest;
- (id)_userManifest;
- (void)deactivate;
- (void)dealloc;
- (void)forget;
- (id)initWithPersonID:(id)arg1;
- (id)personID;
- (void)protocol:(id)arg1 didReceiveRetryAfterDate:(id)arg2;
- (void)set_userManifest:(id)arg1;

@end
