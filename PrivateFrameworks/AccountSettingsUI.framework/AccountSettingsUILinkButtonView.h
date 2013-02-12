/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class AccountSettingsUILinkButton, NSString, NSURL, UIFont, UIImageView;

@interface AccountSettingsUILinkButtonView : UIView <PreferencesTableCustomView> {
    UIImageView *_arrowImageView;
    UIFont *_font;
    float _height;
    NSURL *_helpURL;
    AccountSettingsUILinkButton *_linkButton;
    BOOL _showArrow;
    NSString *_text;
    BOOL _underline;
}

@property(retain) UIFont * font;
@property BOOL showArrow;
@property(retain) NSString * text;
@property BOOL underline;
@property(retain) NSURL * url;

- (void)_goToAccountURL;
- (void)dealloc;
- (id)font;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (float)preferredHeightForWidth:(float)arg1;
- (void)setFont:(id)arg1;
- (void)setShowArrow:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setUnderline:(BOOL)arg1;
- (void)setUrl:(id)arg1;
- (BOOL)showArrow;
- (id)text;
- (BOOL)underline;
- (id)url;

@end
