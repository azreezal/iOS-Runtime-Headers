/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUMediaListDataSource, IUPropertyLayoutStorage, MPMediaItem, UIImage;

@interface IUMediaListAggregateViewConfiguration : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    MPMediaItem *_aggregateItem;
    IUPropertyLayoutStorage *_buttonStorage;
    IUMediaListDataSource *_dataSource;
    IUPropertyLayoutStorage *_labelStorage;
    } _layoutSize;
    BOOL _showsShuffleButton;
    BOOL _shuffleButtonEnabled;
}

@property(retain) MPMediaItem * aggregateItem;
@property(readonly) UIImage * backgroundImage;
@property(retain) IUPropertyLayoutStorage * buttonStorage;
@property(readonly) BOOL canDisplayShuffleButton;
@property(retain) IUMediaListDataSource * dataSource;
@property(retain) IUPropertyLayoutStorage * labelStorage;
@property struct CGSize { float x1; float x2; } layoutSize;
@property(readonly) unsigned int numberOfButtons;
@property(readonly) unsigned int numberOfLabels;
@property BOOL showsShuffleButton;
@property BOOL shuffleButtonEnabled;

+ (id)newConfigurationForDataSource:(id)arg1;

- (id)aggregateItem;
- (id)artworkImageWithLoadingCompletionHandler:(id)arg1;
- (id)backgroundColorWithModifiers:(unsigned int)arg1;
- (id)backgroundImage;
- (id)buttonStorage;
- (BOOL)canDisplayShuffleButton;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForButtonAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLabelAtIndex:(unsigned int)arg1;
- (BOOL)getShadowColor:(id*)arg1 offset:(struct CGSize { float x1; float x2; }*)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (void)initStorage;
- (id)initWithDataSource:(id)arg1;
- (id)labelStorage;
- (struct CGSize { float x1; float x2; })layoutSize;
- (float)minFontPointSizeForLabelAtIndex:(unsigned int)arg1;
- (id)newViewWithDelegate:(id)arg1;
- (unsigned int)numberOfButtons;
- (unsigned int)numberOfLabels;
- (void)reloadData;
- (void)reloadDisplayValues;
- (void)reloadLayoutInformation;
- (void)setAggregateItem:(id)arg1;
- (void)setButtonStorage:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setLabelStorage:(id)arg1;
- (void)setLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setShowsShuffleButton:(BOOL)arg1;
- (void)setShuffleButtonEnabled:(BOOL)arg1;
- (BOOL)showsShuffleButton;
- (BOOL)shuffleButtonEnabled;
- (id)stringForLabelAtIndex:(unsigned int)arg1;
- (int)textAlignmentForLabelAtIndex:(unsigned int)arg1;
- (BOOL)useLabelStorage;
- (Class)viewClass;
- (id)viewForButtonAtIndex:(unsigned int)arg1;

@end
