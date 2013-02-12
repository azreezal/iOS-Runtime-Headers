/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;

@interface EKReminder : EKCalendarItem {
}

@property(getter=isCompleted) BOOL completed;
@property(copy) NSDate * completionDate;
@property(readonly) NSDate * dueDate;

+ (id)reminderWithEventStore:(id)arg1;

- (id)_persistentReminder;
- (void)_sendModifiedNote;
- (void)clearParentUUID;
- (BOOL)commit:(id*)arg1;
- (int)compareDueDateWithReminder:(id)arg1;
- (id)completionDate;
- (void)dealloc;
- (id)description;
- (id)dueDate;
- (id)dueDateComponents;
- (id)externalURI;
- (id)initWithPersistentObject:(id)arg1;
- (BOOL)isCompleted;
- (id)parentUUID;
- (void)setCompleted:(BOOL)arg1;
- (void)setCompletionDate:(id)arg1;
- (void)setDueDateComponents:(id)arg1;
- (void)setStartDateComponents:(id)arg1;
- (id)startDateComponents;
- (BOOL)validate:(id*)arg1;

@end
