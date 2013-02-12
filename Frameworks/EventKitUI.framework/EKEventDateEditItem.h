/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDateEditItem : EKEventEditItem <EKCellShortener> {
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _endDateGr;
    BOOL _showsTimeZone;
    } _startDateGr;
}

@property BOOL showsTimeZone;

- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(int)arg1;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(int)arg2;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)requiresReconfigurationOnCommit;
- (void)setShowsTimeZone:(BOOL)arg1;
- (void)shortenCell:(id)arg1;
- (BOOL)showsTimeZone;

@end
