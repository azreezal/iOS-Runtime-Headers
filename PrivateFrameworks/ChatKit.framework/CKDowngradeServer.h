/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class FTCConnectionHandler, IMTimer;

@interface CKDowngradeServer : NSObject {
    FTCConnectionHandler *_connectionHandler;
    BOOL _ignoreConversationChangeNotifications;
    IMTimer *_nextDowngradeCheckTimer;
}

+ (id)sharedDowngradeServer;

- (BOOL)__messageHasDowngradeMarkers:(id)arg1;
- (id)_copyUndeliveredMessages;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleMessageSent:(id)arg1;
- (void)_handleSendAsSMSSettingChanged:(id)arg1;
- (double)_lowerDowngradeIntervalForMessage:(id)arg1;
- (void)_resendMessagesAsSMSIfNecessary:(id)arg1;
- (void)_resendMessagesAsSMSIfNecessary;
- (void)_scheduleTimerCheck;
- (void)_sendMessageAsSMS:(id)arg1;
- (void)_setActive:(BOOL)arg1;
- (void)_setActiveIfNecessary;
- (void)_setupTimerIfNecessary;
- (BOOL)_shouldIgnoreMessageDueToAge:(id)arg1;
- (BOOL)_shouldIgnoreMessageDueToContent:(id)arg1;
- (BOOL)_shouldSendMessageAsSMS:(id)arg1;
- (void)_timerFired;
- (double)_upperDowngradeInterval;
- (void)dealloc;
- (id)init;
- (void)start;
- (void)stop;

@end
