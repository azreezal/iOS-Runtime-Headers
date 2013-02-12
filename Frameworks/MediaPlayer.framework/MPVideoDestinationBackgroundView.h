/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, UIImageView, UILabel;

@interface MPVideoDestinationBackgroundView : UIImageView {
    NSString *_destinationName;
    UILabel *_destinationSubtitleLabel;
    UILabel *_destinationTitleLabel;
    int _style;
    UIImageView *_videosImageView;
}

@property(copy) NSString * destinationName;
@property int style;

- (void)dealloc;
- (id)destinationName;
- (void)layoutSubviews;
- (void)setDestinationName:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStyle:(int)arg1;
- (int)style;

@end
