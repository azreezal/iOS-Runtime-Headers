/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSMutableArray, NSTimer;

@interface IMAVHandler : NSObject {
    NSTimer *_wiFiQueueTimer;
    NSMutableArray *_wifiActivationQueue;
}

+ (void)ensureHandlerSetup;
+ (void)initialize;

- (void)_checkWiFiQueue:(id)arg1;
- (void)_clearWiFiActivationQueue;
- (void)_enqueueIMAVChatForWiFiActivation:(id)arg1;
- (void)_handleIncomingAVChatForNotification:(id)arg1;
- (void)_notifyInvitationFor:(id)arg1;
- (void)_notifyMissedInvitationFor:(id)arg1;
- (void)_notifyOfIncomingInvitationFor:(id)arg1 notifyInvitationListeners:(BOOL)arg2;
- (void)_setWiFiActivationTimer;
- (void)account:(id)arg1 conference:(id)arg2 cancelRequestInvitationWithBuddy:(id)arg3;
- (void)account:(id)arg1 conference:(id)arg2 changedToNewConferenceID:(id)arg3;
- (void)account:(id)arg1 conference:(id)arg2 notifyMissedInvitationWithBuddy:(id)arg3;
- (void)account:(id)arg1 conference:(id)arg2 peerID:(id)arg3 propertiesUpdated:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 peerIDChangedFromID:(id)arg3 toID:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 receivedAVMessage:(unsigned int)arg3 from:(id)arg4 sessionID:(unsigned int)arg5 userInfo:(id)arg6;
- (void)account:(id)arg1 conference:(id)arg2 receivedCancelInvitationFrom:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 receivedCounterProposalFrom:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 receivedInvitationFrom:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 receivedResponseToInvitationFrom:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 receivedUpdateFrom:(id)arg3 data:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 requestInvitationWithBuddy:(id)arg3;
- (void)account:(id)arg1 conference:(id)arg2 requestSendResponseWithResult:(int)arg3 toPerson:(id)arg4;
- (void)account:(id)arg1 postedError:(id)arg2;
- (void)account:(id)arg1 relay:(id)arg2 handleCancel:(id)arg3 fromPerson:(id)arg4;
- (void)account:(id)arg1 relay:(id)arg2 handleInitate:(id)arg3 fromPerson:(id)arg4;
- (void)account:(id)arg1 relay:(id)arg2 handleUpdate:(id)arg3 fromPerson:(id)arg4;
- (void)audioReflectorRequested:(BOOL)arg1 transactionID:(unsigned int)arg2;
- (void)currentAVChatInfoRequestedWithTransactionID:(unsigned int)arg1;
- (void)dealloc;
- (void)pendingVCRequestComplete;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)setupComplete;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (void)videoStillForPersonRequested:(id)arg1 withTransactionID:(unsigned int)arg2;

@end
