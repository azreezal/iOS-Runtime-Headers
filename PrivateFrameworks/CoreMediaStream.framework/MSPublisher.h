/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class <MSPublishStorageProtocol>, <MSPublisherDelegate>, MSMediaStreamDaemon, MSObjectQueue, MSPublishStreamsProtocol, NSMutableArray, NSMutableDictionary, NSURL;

@interface MSPublisher : MSCupidStateMachine <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate> {
    MSMediaStreamDaemon *_daemon;
    <MSPublisherDelegate> *_delegate;
    NSMutableDictionary *_fileHashToAssetMap;
    int _maxErrorCount;
    NSMutableDictionary *_maxSizeByUTI;
    MSPublishStreamsProtocol *_protocol;
    int _publishBatchSize;
    long long _publishTargetByteCount;
    NSMutableArray *_requestAuthQueue;
    NSMutableArray *_sendingQueue;
    int _state;
    <MSPublishStorageProtocol> *_storageProtocol;
    NSURL *_storageProtocolURL;
    NSMutableArray *_tempFiles;
    MSObjectQueue *_uploadQueue;
}

@property MSMediaStreamDaemon * daemon;
@property <MSPublisherDelegate> * delegate;
@property int publishBatchSize;
@property long long publishTargetByteCount;
@property(retain) NSURL * storageProtocolURL;

+ (id)_clearInstantiatedPublishersByPersonID;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (id)existingPublisherForPersonID:(id)arg1;
+ (void)forgetPersonID:(id)arg1;
+ (BOOL)isInRetryState;
+ (id)nextActivityDate;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (id)personIDsWithOutstandingActivities;
+ (id)publisherForPersonID:(id)arg1;
+ (void)stopAllActivities;

- (void)_abort;
- (id)_abortedError;
- (void)_addAssetToFileHashMap:(id)arg1;
- (void)_categorizeError:(id)arg1 setOutIsIgnorable:(BOOL*)arg2 setOutIsCounted:(BOOL*)arg3 setOutNeedsBackoff:(BOOL*)arg4 setOutIsTemporary:(BOOL*)arg5 setOutIsTokenAuth:(BOOL*)arg6;
- (void)_didFinishUsingAssetCollections:(id)arg1;
- (void)_forget;
- (id)_invalidStreamsResponseErrorUnderlyingError:(id)arg1;
- (BOOL)_isAllowedToUpload;
- (BOOL)_isInRetryState;
- (void)_refreshServerSideConfiguredParameters;
- (void)_removeAssetFromFileHashMap:(id)arg1;
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)arg1;
- (void)_requestDerivatives;
- (void)_sendFilesToMMCS;
- (void)_sendMetadataToStreams;
- (void)_sendUploadComplete;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (int)_stop;
- (void)_updateMasterManifest;
- (void)abort;
- (void)computeHashForAsset:(id)arg1;
- (id)daemon;
- (void)deactivate;
- (void)dealloc;
- (id)delegate;
- (BOOL)enqueueAssetCollections:(id)arg1 outError:(id*)arg2;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)publish;
- (int)publishBatchSize;
- (void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3;
- (void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3;
- (int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2;
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1;
- (void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2;
- (void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3;
- (void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (long long)publishTargetByteCount;
- (void)setDaemon:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPublishBatchSize:(int)arg1;
- (void)setPublishTargetByteCount:(long long)arg1;
- (void)setStorageProtocolURL:(id)arg1;
- (void)stop;
- (id)storageProtocolURL;
- (void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2;
- (void)submitAssetCollectionsForPublication:(id)arg1;

@end
