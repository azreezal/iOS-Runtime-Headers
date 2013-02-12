/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CoreDAVTaskGroupDelegate>, CalDAVCalendarServerInviteNotificationItem, NSURL;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
    BOOL _acceptInvitation;
    NSURL *_calendarHomeURL;
    CalDAVCalendarServerInviteNotificationItem *_invitation;
}

@property BOOL acceptInvitation;
@property(retain) NSURL * calendarHomeURL;
@property <CoreDAVTaskGroupDelegate> * delegate;
@property(retain) CalDAVCalendarServerInviteNotificationItem * invitation;

- (BOOL)acceptInvitation;
- (id)calendarHomeURL;
- (void)dealloc;
- (id)description;
- (id)generateReply;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)initWithInvitation:(id)arg1 acceptInvitation:(BOOL)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;
- (id)invitation;
- (void)setAcceptInvitation:(BOOL)arg1;
- (void)setCalendarHomeURL:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
