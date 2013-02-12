/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKButton, GKUITheme, NSString, UIActivityIndicatorView, UIImage, UIImageView, UILabel;

@interface GKBackgroundView : UIView <GKTableViewCellContents> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    GKButton *_actionButton;
    BOOL _actionExpected;
    } _backgroundInsets;
    } _contentInsets;
    UIImageView *_imageView;
    UILabel *_infoLabel;
    int _infoTextExpectedNumberOfLines;
    float _infoTextWidth;
    BOOL _loading;
    id _loadingHandler;
    UIActivityIndicatorView *_loadingSpinner;
    BOOL _shouldHideLabelAfterLoading;
    } _statusInsets;
    UILabel *_statusLabel;
    GKUITheme *_theme;
    float currentInfoTextWidth;
}

@property(retain) GKButton * actionButton;
@property BOOL actionExpected;
@property(retain) NSString * actionTitle;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } backgroundInsets;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } confirmationButtonRect;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentBounds;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property float currentInfoTextWidth;
@property(retain) UIImage * image;
@property(retain) UIImageView * imageView;
@property(retain) NSString * info;
@property(retain) UILabel * infoLabel;
@property int infoTextExpectedNumberOfLines;
@property float infoTextWidth;
@property BOOL loading;
@property(copy) id loadingHandler;
@property(retain) UIActivityIndicatorView * loadingSpinner;
@property BOOL shouldHideLabelAfterLoading;
@property(retain) NSString * status;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } statusInsets;
@property(retain) UILabel * statusLabel;
@property(retain) GKUITheme * theme;

+ (float)defaultRowHeight;

- (id)actionButton;
- (BOOL)actionExpected;
- (id)actionTitle;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })backgroundInsets;
- (void)clearAllButStatus;
- (void)clearStatus;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (float)currentInfoTextWidth;
- (void)dealloc;
- (id)image;
- (id)imageView;
- (id)info;
- (id)infoLabel;
- (int)infoTextExpectedNumberOfLines;
- (float)infoTextWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (BOOL)loading;
- (id)loadingHandler;
- (id)loadingSpinner;
- (float)preferredHeightForOrientation:(int)arg1;
- (void)prepareForReuse;
- (void)setActionButton:(id)arg1;
- (void)setActionExpected:(BOOL)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setBackgroundInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setCurrentInfoTextWidth:(float)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInfoTextExpectedNumberOfLines:(int)arg1;
- (void)setInfoTextWidth:(float)arg1;
- (void)setInfoWithError:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setLoadingHandler:(id)arg1;
- (void)setLoadingSpinner:(id)arg1;
- (void)setLoadingWithNoDelay;
- (void)setShouldHideLabelAfterLoading:(BOOL)arg1;
- (void)setStatus:(id)arg1;
- (void)setStatusInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setTheme:(id)arg1;
- (BOOL)shouldHideLabelAfterLoading;
- (id)status;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })statusInsets;
- (id)statusLabel;
- (id)theme;
- (void)updateLoading;

@end
