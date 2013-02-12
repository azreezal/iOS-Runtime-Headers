/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableArray, NSString;

@interface EKMonthPainter : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    NSMutableArray *_dayViews;
    } _displayedMonth;
    BOOL _dontStrokeOutline;
    } _frame;
    } _headerFrame;
    BOOL _isInspected;
    BOOL _isThisMonth;
    NSString *_monthTitle;
    int _style;
    int _weekRows;
}

@property(readonly) NSMutableArray * dayViews;
@property struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; } displayedMonth;
@property BOOL dontStrokeOutline;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } headerFrame;
@property BOOL isInspected;
@property int style;
@property int weekRows;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })dayAreaFrame;
- (Class)dayPainterClass;
- (id)dayViews;
- (void)dealloc;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })displayedMonth;
- (BOOL)dontStrokeOutline;
- (void)drawDayAreaWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)engravedGridlineColor;
- (id)engravedTextColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)gridlineColor;
- (id)headerFillColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })headerFrame;
- (float)headerHeight;
- (id)headerLineColor;
- (id)initWithDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)isInspected;
- (id)monthTitleColor;
- (void)relayoutDays;
- (void)setDisplayedMonth:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)setDontStrokeOutline:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHeaderFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIsInspected:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)setWeekRows:(int)arg1;
- (void)setupDays;
- (void)showYearInTitle:(BOOL)arg1;
- (int)style;
- (id)thisMonthBackgroundGradientImage;
- (id)titleFont;
- (float)weekRowHeight;
- (float)weekRowWidth;
- (int)weekRows;
- (id)weekdayFont;
- (id)weekdayTextColor;

@end
