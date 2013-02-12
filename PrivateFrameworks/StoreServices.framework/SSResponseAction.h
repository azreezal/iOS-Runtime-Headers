/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSURL, SSAccount, SSDialog;

@interface SSResponseAction : NSObject <NSCopying> {
    SSAccount *_account;
    NSString *_actionType;
    NSString *_creditsString;
    SSDialog *_dialog;
    NSString *_footerSection;
    NSURL *_url;
}

@property(readonly) NSURL * URL;
@property(readonly) SSAccount * account;
@property(readonly) NSString * actionType;
@property(readonly) NSString * creditsString;
@property(readonly) SSDialog * dialog;
@property(readonly) NSString * footerSection;

+ (id)_actionWithActionType:(id)arg1;
+ (id)_dialogActionWithDialog:(id)arg1;
+ (id)_invalidateURLBagsAction;
+ (id)_selectFooterActionWithSection:(id)arg1;
+ (id)_setActiveAccountActionWithAccount:(id)arg1;
+ (id)_setCreditsActionWithCredits:(id)arg1 account:(id)arg2;
+ (id)_urlActionWithType:(id)arg1 URL:(id)arg2;

- (id)URL;
- (id)account;
- (id)actionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creditsString;
- (void)dealloc;
- (id)description;
- (id)dialog;
- (id)footerSection;

@end
