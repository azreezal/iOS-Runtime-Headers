/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVTextBadge : UIView {
    float  _cornerRadius;
    NSAttributedString * _text;
    UIColor * _tintColor;
    NSString * _type;
}

@property (nonatomic) float cornerRadius;
@property (nonatomic, retain) NSAttributedString *text;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) NSString *type;

+ (id)textBadgeViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (float)cornerRadius;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setText:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setType:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)text;
- (id)tintColor;
- (id)type;

@end
