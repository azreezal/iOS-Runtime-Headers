/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, UIAlertView;

@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate> {
    UIAlertView *_alert;
    id _completionHandler;
    NSError *_error;
}

+ (id)_presentAlertWithError:(id)arg1 completionHandler:(id)arg2;

- (void)_forceFinishNow;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)dealloc;
- (id)initWithError:(id)arg1 completionHandler:(id)arg2;

@end
