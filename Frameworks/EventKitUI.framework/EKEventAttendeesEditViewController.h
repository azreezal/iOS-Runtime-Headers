/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventAttendeePicker, NSArray;

@interface EKEventAttendeesEditViewController : EKEditItemViewController {
    EKEventAttendeePicker *_picker;
}

@property(copy) NSArray * attendees;

- (id)_attendeeFromRecipient:(id)arg1;
- (id)_firstInvalidRecipientAddress;
- (id)_recipientFromAttendee:(id)arg1;
- (id)attendees;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAttendees:(id)arg1;
- (void)setSearchAccountID:(id)arg1;
- (BOOL)validateAllowingAlert:(BOOL)arg1;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
