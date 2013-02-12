/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonTableHeaderViewDelegate>, <ABStyleProvider>, ABMultiCellContentView, ABNamePropertyGroup, ABPersonImageView, ABPersonNameDisplayView, ABPersonNameEditingViewContainer, NSString, UIFont, UIImageView, UIView;

@interface ABPersonTableHeaderView : UIView {
    <ABPersonTableHeaderViewDelegate> *_delegate;
    ABPersonNameDisplayView *_displayView;
    BOOL _editing;
    ABMultiCellContentView *_editingView;
    ABPersonNameEditingViewContainer *_editingViewContainer;
    UIView *_extraHeaderView;
    BOOL _extraHeaderViewAlignsToImage;
    UIImageView *_imageShadowView;
    ABPersonImageView *_imageView;
    UIImageView *_multiplePhotoBackdropView;
    ABNamePropertyGroup *_namePropertyGroup;
    BOOL _representsLinkedPeople;
    BOOL _showsMultiplePhotoBackdropView;
    <ABStyleProvider> *_styleProvider;
}

@property(copy) NSString * alternateName;
@property(retain) UIView * customMessageView;
@property <ABPersonTableHeaderViewDelegate> * delegate;
@property(readonly) ABPersonNameDisplayView * displayView;
@property(readonly) ABMultiCellContentView * editingView;
@property(readonly) UIView * editingViewContainer;
@property(retain) UIView * extraHeaderView;
@property BOOL extraHeaderViewAlignsToImage;
@property(readonly) ABPersonImageView * imageView;
@property(copy) NSString * message;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIFont * messageFont;
@property(retain) ABNamePropertyGroup * namePropertyGroup;
@property void* personForImageView;
@property BOOL representsLinkedPeople;
@property(retain) <ABStyleProvider> * styleProvider;

- (id)_displayView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_displayViewFrameForWidth:(float)arg1;
- (struct CGPoint { float x1; float x2; })_displayViewOrigin;
- (float)_displayViewWidthForWidth:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingViewFrameForWidth:(float)arg1;
- (struct CGPoint { float x1; float x2; })_editingViewOrigin;
- (float)_editingViewWidthForWidth:(float)arg1;
- (float)_extraHeaderViewAvailableWidthForWidth:(float)arg1 whenEditing:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_extraHeaderViewOriginForWidth:(float)arg1 whenEditing:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForEditingView;
- (id)_imageShadowView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_imageViewFrameWhenEditing:(BOOL)arg1;
- (BOOL)_isSpecialInternalHeaderView;
- (void)_layoutExtraHeaderView;
- (id)_multiplePhotoBackdropView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_multiplePhotoBackdropViewFrame;
- (id)_multiplePhotoBackdropViewImage;
- (id)_newEditingViewContainerForWidth:(float)arg1;
- (void)_updateRecordIfNeeded;
- (void)_updateShowsMultiplePhotoBackdrop;
- (id)alternateName;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)customMessageView;
- (void)dealloc;
- (id)delegate;
- (void)deselectAnimated:(BOOL)arg1;
- (id)displayView;
- (id)editingView;
- (id)editingViewContainer;
- (id)entryFieldForRow:(unsigned int)arg1;
- (id)extraHeaderView;
- (BOOL)extraHeaderViewAlignsToImage;
- (float)extraHeaderViewHorizontalPaddingWhenEditing:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })extraHeaderViewOrigin;
- (id)imageView;
- (void)imageViewSelected:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (id)namePropertyGroup;
- (void*)personForImageView;
- (void*)personForName;
- (void)reloadData;
- (void)reloadImageData;
- (void)reloadNameDataAnimated:(BOOL)arg1;
- (void)reloadNameDataButNotModelAnimated:(BOOL)arg1;
- (BOOL)representsLinkedPeople;
- (BOOL)resignFirstResponder;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setExtraHeaderView:(id)arg1;
- (void)setExtraHeaderViewAlignsToImage:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setNamePropertyGroup:(id)arg1;
- (void)setPersonForImageView:(void*)arg1;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (void)setRepresentsLinkedPeople:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)styleProvider;

@end
