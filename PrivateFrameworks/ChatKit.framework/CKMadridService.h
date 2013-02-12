/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKEntity, FTCAccountMonitor, NSMutableArray, NSMutableDictionary;

@interface CKMadridService : CKService {
    FTCAccountMonitor *_accountMonitor;
    BOOL _blockingForChatLoad;
    NSMutableArray *_knownIMHandles;
    NSMutableDictionary *_preloadQueries;
    CKEntity *_unknownEntity;
}

+ (BOOL)_connectToDaemon:(BOOL)arg1;
+ (BOOL)_connectToDaemon;
+ (void)_daemonConnectedNotification:(id)arg1;
+ (void)_daemonDisconnectedNotification:(id)arg1;
+ (void)_disconnectFromDaemon;
+ (void)_setIMChatToDesiredDefaults:(id)arg1;
+ (void)_updateNetworkFlags;
+ (id)activeMadridAccounts;
+ (unsigned long long)capabilities;
+ (id)defaultMadridAccount;
+ (BOOL)isConnectedToDaemon;
+ (BOOL)isMadridEnabled;
+ (BOOL)isMadridSupported;
+ (void)setCapabilities:(unsigned long long)arg1;
+ (id)sharedMadridService;
+ (void)tearDown;

- (id)_CKMessageFromIMMessage:(id)arg1 forConversation:(id)arg2;
- (id)_IMMessageToConversation:(id)arg1 withText:(id)arg2 subject:(id)arg3 date:(id)arg4 messageParts:(id)arg5 isFinished:(BOOL)arg6 messageGUID:(id)arg7;
- (void)__postDowngradeStateChanged:(id)arg1;
- (int)_availabilityForIMHandle:(id)arg1 checkWithServer:(BOOL)arg2;
- (id)_chat:(id)arg1 addMessage:(id)arg2 incrementUnreadCount:(BOOL)arg3;
- (id)_chatForConversation:(id)arg1;
- (BOOL)_chatHasDowngradeMarkers:(id)arg1;
- (BOOL)_chatHasValidAccount:(id)arg1;
- (void)_clearDowngradeMarkersForChat:(id)arg1;
- (BOOL)_contentChangedFromOldMessage:(id)arg1 toNewMessage:(id)arg2;
- (id)_conversationForChat:(id)arg1;
- (id)_conversationWithRecipients:(id)arg1 createIfNecessary:(BOOL)arg2;
- (void)_handleActiveMadridAccountsDidChange:(id)arg1;
- (BOOL)_handleChangedMessage:(id)arg1 inChat:(id)arg2 forQuery:(id)arg3;
- (void)_handleChatPropertiesChangedNotification:(id)arg1;
- (void)_handleDaemonDidConnectNotification:(id)arg1;
- (void)_handleDaemonDidDisconnectNotification:(id)arg1;
- (void)_handleFileTransferRemovedNotification:(id)arg1;
- (void)_handleIMHandleIDStatusChangedNotification:(id)arg1;
- (void)_handleItemsDidChangeNotification:(id)arg1;
- (void)_handleLoginStatusChangedNotification:(id)arg1;
- (void)_handleReceipientReceivedDowngradeNotification:(id)arg1;
- (void)_handleRegistryDidRegisterChatNotification:(id)arg1;
- (void)_handleRegistryWillUnregisterChatNotification:(id)arg1;
- (BOOL)_handleRemovedMessage:(id)arg1 inChat:(id)arg2;
- (BOOL)_handleTypingIndicationMessage:(id)arg1 inChat:(id)arg2;
- (id)_localizedErrorForReason:(int)arg1;
- (id)_madridMessageForIMMessage:(id)arg1 inIMChat:(id)arg2;
- (unsigned int)_maxTransferFileSizeForWiFi:(BOOL)arg1;
- (id)_messagesFromChat:(id)arg1 forConversation:(id)arg2;
- (id)_placeholderDateForIMChat:(id)arg1;
- (void)_postNotification:(id)arg1 forMessage:(id)arg2;
- (id)_preloadQueryForConversation:(id)arg1;
- (void)_prepareIMChat:(id)arg1 andSendMessage:(id)arg2;
- (id)_registerChat:(id)arg1;
- (void)_registerForIMNotifications;
- (void)_removePreloadQuery:(id)arg1;
- (void)_removeTemporaryFileURLforGUID:(id)arg1;
- (void)_resetToDefaultAccountOnIMChat:(id)arg1;
- (void)_setAndIncrementDowngradeMarkersForChat:(id)arg1 manual:(BOOL)arg2;
- (void)_setConversation:(id)arg1 forPreloadQuery:(id)arg2;
- (void)_setMessagesForChat:(id)arg1 onConversation:(id)arg2;
- (void)_setTemporaryFileURL:(id)arg1 forGUID:(id)arg2;
- (id)_temporaryFileURLforGUID:(id)arg1;
- (void)_unregisterChat:(id)arg1;
- (id)abPropertyTypes;
- (int)availabilityForAddress:(id)arg1 checkWithServer:(BOOL)arg2;
- (int)availabilityForEntity:(id)arg1 checkWithServer:(BOOL)arg2;
- (BOOL)canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
- (BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
- (BOOL)canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(int*)arg2;
- (BOOL)canSendMessageWithMediaObjectTypes:(int*)arg1;
- (BOOL)canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id*)arg3;
- (BOOL)canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (void)cancelMessage:(id)arg1;
- (void)clearDowngradeMarkersForConversation:(id)arg1;
- (id)consecutiveDowngradeAttemptsForConversation:(id)arg1 manualDowngrades:(BOOL)arg2;
- (BOOL)containsConversation:(id)arg1;
- (id)conversationIDWithRecipients:(id)arg1;
- (id)conversationSummaries:(id)arg1 groupIDs:(id)arg2 groupedRecipients:(id)arg3;
- (id)copyEntityForAddressString:(id)arg1;
- (id)createConversationWithRecipients:(id)arg1;
- (void)dealloc;
- (void)deleteMessage:(id)arg1 fromConversation:(id)arg2;
- (void)deleteMessagesForConversationIDs:(id)arg1 removeConversations:(BOOL)arg2;
- (id)displayName;
- (BOOL)ensureMadridConnection;
- (Class)entityClass;
- (int)failedSendCount;
- (BOOL)hasActiveConversations;
- (id)headerTitleForComposeRecipients:(id)arg1 mediaObjects:(id)arg2 subject:(id)arg3;
- (id)headerTitleForEntities:(id)arg1;
- (id)imChatForGroupID:(id)arg1;
- (id)init;
- (BOOL)isAvailable;
- (BOOL)isValidAddress:(id)arg1;
- (id)lastCanceledMessageTimeForConversation:(id)arg1;
- (id)lookupRecipientsForConversation:(id)arg1;
- (void)manualConnectToIMChatRegistry;
- (void)markAllMessagesInConversationAsRead:(id)arg1;
- (int)maxAttachmentCount;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (void)messagesForConversation:(id)arg1;
- (void)newMessageContentChangedWithComposition:(id)arg1 forConversation:(id)arg2;
- (id)newMessageWithComposition:(id)arg1 forConversation:(id)arg2;
- (id)newMessageWithMessage:(id)arg1 forConversation:(id)arg2 isForward:(BOOL)arg3;
- (id)placeholderMessageForConversation:(id)arg1 withDate:(id)arg2;
- (void)resetEntityCaches;
- (BOOL)restrictsMediaObjects;
- (void)sendDowngradePingForMessage:(id)arg1 inConversation:(id)arg2 manualDowngrade:(BOOL)arg3;
- (void)sendMessage:(id)arg1;
- (BOOL)supportsDeliveryReceipts;
- (BOOL)supportsExtendedDeliveryError;
- (BOOL)supportsMediaAttachments;
- (id)unknownEntity;
- (int)unreadConversationCount;
- (int)unreadCount;
- (int)unreadCountForConversation:(id)arg1;

@end
