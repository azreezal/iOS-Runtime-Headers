/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface ADOpenURLAlertView : ADAlertView <UIAlertViewDelegate> {
    NSString *_URLString;
    id _completionBlock;
}

@property(copy) NSString * URLString;
@property(copy) id completionBlock;

+ (id)openURL:(id)arg1 forAd:(id)arg2 fromClient:(id)arg3 completionBlock:(id)arg4;

- (id)URLString;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (id)completionBlock;
- (void)dealloc;
- (void)didPresentAlertView:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setURLString:(id)arg1;

@end
