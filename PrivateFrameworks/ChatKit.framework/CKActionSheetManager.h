/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIActionSheet;

@interface CKActionSheetManager : NSObject {
    UIActionSheet *_actionSheet;
    BOOL _dismissingActionSheetForRotation;
    id _handler;
    id _presenter;
}

@property(retain) UIActionSheet * actionSheet;
@property(copy) id handler;
@property(copy) id presenter;

+ (id)sharedInstance;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)actionSheet;
- (void)dealloc;
- (void)didFinishRotating;
- (void)dismissCurrentActionSheet;
- (id)handler;
- (id)init;
- (id)presenter;
- (void)setActionSheet:(id)arg1;
- (void)setHandler:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)showActionSheet:(id)arg1 withPresenter:(id)arg2 withHandler:(id)arg3;
- (void)willStartRotating;

@end
