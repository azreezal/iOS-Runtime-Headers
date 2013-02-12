/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIColor, UIFont;

@interface UILabel : UIView <NSCoding> {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        unsigned int lineBreakMode : 3; 
        unsigned int highlighted : 1; 
        unsigned int autosizeTextToFit : 1; 
        unsigned int autotrackTextToFit : 1; 
        unsigned int baselineAdjustment : 2; 
        unsigned int alignment : 2; 
        unsigned int enabled : 1; 
        unsigned int wordRoundingEnabled : 1; 
        unsigned int explicitAlignment : 1; 
        unsigned int marqueeEnabled : 1; 
        unsigned int marqueeRunable : 1; 
        unsigned int marqueeRequired : 1; 
        unsigned int drawsLetterpress : 1; 
        unsigned int drawsUnderline : 1; 
    float _actualFontSize;
    UIColor *_color;
    UIFont *_font;
    UIColor *_highlightedColor;
    float _lastLineBaseline;
    int _lineSpacing;
    float _minFontSize;
    int _numberOfLines;
    UIColor *_shadowColor;
    } _shadowOffset;
    } _size;
    NSString *_text;
    } _textLabelFlags;
}

@property(readonly) float _lastLineBaseline;
@property BOOL adjustsFontSizeToFitWidth;
@property BOOL autotrackTextToFit;
@property int baselineAdjustment;
@property(getter=isEnabled) BOOL enabled;
@property(retain) UIFont * font;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) UIColor * highlightedTextColor;
@property int lineBreakMode;
@property int lineSpacing;
@property float minimumFontSize;
@property int numberOfLines;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property(copy) NSString * text;
@property int textAlignment;
@property(retain) UIColor * textColor;
@property(getter=isUserInteractionEnabled) BOOL userInteractionEnabled;

+ (id)defaultFont;
+ (id)sectionHeaderLabelWithText:(id)arg1 theme:(id)arg2;

- (BOOL)_allowAscentRounding;
- (id)_attributes;
- (void)_commonInit;
- (void)_coordinateBeginTimeForMarqueeAnimations:(double)arg1;
- (id)_disabledFontColor;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 baselineCalculationOnly:(BOOL)arg2;
- (void)_invalidateTextSize;
- (float)_lastLineBaseline;
- (float)_maximumMarqueeTextWidth;
- (id)_scriptingInfo;
- (void)_setShadowUIOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)_setWordRoundingEnabled:(BOOL)arg1;
- (id)_siblingMarqueeLabels;
- (void)_startMarquee;
- (void)_startMarqueeIfNecessary;
- (void)_stopMarqueeWithRedisplay:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(int)arg2 includingShadow:(BOOL)arg3;
- (float)actualFontSize;
- (BOOL)adjustsFontSizeToFitWidth;
- (BOOL)autotrackTextToFit;
- (int)baselineAdjustment;
- (BOOL)centersHorizontally;
- (id)color;
- (id)currentTextColor;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)drawContentsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)drawsLetterpress;
- (BOOL)drawsUnderline;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (id)highlightedTextColor;
- (id)initNoContentLabelWithText:(id)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isEnabled;
- (BOOL)isHighlighted;
- (BOOL)isTextFieldCenteredLabel;
- (id)letterpressStyle;
- (int)lineBreakMode;
- (int)lineSpacing;
- (BOOL)marqueeRunning;
- (float)minimumFontSize;
- (int)numberOfLines;
- (struct CGSize { float x1; float x2; })rawSize;
- (void)setActualFontSize:(float)arg1;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setAutotrackTextToFit:(BOOL)arg1;
- (void)setBaselineAdjustment:(int)arg1;
- (void)setCentersHorizontally:(BOOL)arg1;
- (void)setColor:(id)arg1;
- (void)setDrawsLetterpress:(BOOL)arg1;
- (void)setDrawsUnderline:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setLetterpressStyle:(id)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setLineSpacing:(int)arg1;
- (void)setMarqueeEnabled:(BOOL)arg1;
- (void)setMarqueeRunning:(BOOL)arg1;
- (void)setMinimumFontSize:(float)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)setRawSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1 forDisplayInBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)text;
- (int)textAlignment;
- (id)textColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })textSize;
- (struct CGSize { float x1; float x2; })textSizeForWidth:(float)arg1;

@end
