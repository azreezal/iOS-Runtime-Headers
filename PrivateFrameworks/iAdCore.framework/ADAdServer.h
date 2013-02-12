/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSMapTable, NSMutableArray, NSTimer;

@interface ADAdServer : NSObject <PBRequesterDelegate, ADBannerDataDelegate> {
    NSMutableArray *_activeRequesters;
    NSMapTable *_bannersToRequesters;
    NSMutableArray *_pendingGroups;
    NSTimer *_requiredPropertiesAcquisitionTimeout;
}

@property(retain) NSMutableArray * activeRequesters;
@property(retain) NSMapTable * bannersToRequesters;
@property(retain) NSMutableArray * pendingGroups;
@property(retain) NSTimer * requiredPropertiesAcquisitionTimeout;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedAdServer;

- (void)_cleanupRequester:(id)arg1;
- (void)_handleRequiredPropertiesAcquisitionTimeout;
- (id)activeRequesters;
- (id)autorelease;
- (void)bannerData:(id)arg1 didFailToLoad:(id)arg2;
- (void)bannerDataDidFinishLoading:(id)arg1;
- (id)bannersToRequesters;
- (void)cancelRequestForBannerGroup:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)pendingGroups;
- (oneway void)release;
- (void)requestAdsForBannerGroup:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
- (void)requesterDidFinish:(id)arg1;
- (id)requiredPropertiesAcquisitionTimeout;
- (id)retain;
- (unsigned int)retainCount;
- (void)setActiveRequesters:(id)arg1;
- (void)setBannersToRequesters:(id)arg1;
- (void)setPendingGroups:(id)arg1;
- (void)setRequiredPropertiesAcquisitionTimeout:(id)arg1;

@end
