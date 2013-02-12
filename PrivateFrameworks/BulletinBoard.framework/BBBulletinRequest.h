/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBAction, BBContent, BBSound, NSArray, NSDate, NSString, NSTimeZone;

@interface BBBulletinRequest : BBBulletin {
}

@property int accessoryStyle;
@property(copy) BBAction * acknowledgeAction;
@property int addressBookRecordID;
@property(copy) NSString * bulletinID;
@property(copy) NSArray * buttons;
@property BOOL clearable;
@property(retain) NSDate * date;
@property int dateFormatStyle;
@property BOOL dateIsAllDay;
@property(copy) BBAction * defaultAction;
@property(retain) NSDate * endDate;
@property(retain) NSDate * expirationDate;
@property(copy) BBAction * expireAction;
@property BOOL expiresOnPublisherDeath;
@property(copy) NSString * message;
@property(retain) BBContent * modalAlertContent;
@property int primaryAttachmentType;
@property(copy) NSString * publisherBulletinID;
@property unsigned int realertCount;
@property(retain) NSDate * recencyDate;
@property(copy) NSString * recordID;
@property(copy) BBAction * replyAction;
@property(copy) NSString * section;
@property(copy) NSString * sectionID;
@property int sectionSubtype;
@property BOOL showsUnreadIndicator;
@property(retain) BBSound * sound;
@property(copy) NSString * subtitle;
@property BOOL tentative;
@property(retain) NSTimeZone * timeZone;
@property(copy) NSString * title;

- (void)addAlertSuppressionAppID:(id)arg1;
- (void)addAttachmentOfType:(int)arg1;
- (void)addButton:(id)arg1;
- (void)generateBulletinID;
- (void)generateNewBulletinID;
- (BOOL)hasContentModificationsRelativeTo:(id)arg1;
- (void)publish:(BOOL)arg1;
- (void)publish;
- (id)publisherMatchID;
- (unsigned int)realertCount;
- (void)setContextValue:(id)arg1 forKey:(id)arg2;
- (void)setPrimaryAttachmentType:(int)arg1;
- (void)setRealertCount:(unsigned int)arg1;
- (void)setShowsUnreadIndicator:(BOOL)arg1;
- (void)setTentative:(BOOL)arg1;
- (void)setUnlockActionLabel:(id)arg1;
- (BOOL)showsUnreadIndicator;
- (BOOL)tentative;
- (void)withdraw;

@end
