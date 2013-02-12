/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, UILabel, UISwitch;

@interface PLCameraSettingsGroupView : UIView {
    UISwitch *accessorySwitch;
    BOOL shouldCenterTitle;
    NSString *title;
    UILabel *titleLabel;
    int type;
}

@property(retain) UISwitch * accessorySwitch;
@property BOOL shouldCenterTitle;
@property(copy) NSString * title;
@property(retain) UILabel * titleLabel;
@property int type;

- (id)accessorySwitch;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccessorySwitch:(id)arg1;
- (void)setShouldCenterTitle:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setType:(int)arg1;
- (BOOL)shouldCenterTitle;
- (id)title;
- (id)titleLabel;
- (int)type;

@end
