/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSCalendar, NSDate, NSDateComponents, NSLocale, NSString, NSTimeZone, UIDatePicker, UILabel;

@interface UIDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource> {
    struct { 
        unsigned int dateOrder : 2; 
        unsigned int timeOrder : 2; 
        unsigned int weekdayOrder : 1; 
        unsigned int staggerTimeIntervals : 1; 
        unsigned int loadingDateOrTime : 1; 
        unsigned int highlightsToday : 1; 
        unsigned int hasCustomCalendar : 1; 
        unsigned int reserved : 23; 
        unsigned int usesBlackChrome : 1; 
    NSString *_amString;
    NSCalendar *_calendar;
    double _countDownDuration;
    NSDate *_date;
    UIDatePicker *_datePickerDelegate;
    } _datePickerFlags;
    int _datePickerMode;
    id _delegateOfDatePicker;
    int _expectedAMPM;
    UILabel *_hourLabel;
    struct __CFDateFormatter { } *_localDateFormatter;
    NSLocale *_locale;
    NSDateComponents *_maxDateComponents;
    NSDate *_maximumDate;
    NSDateComponents *_minDateComponents;
    NSDate *_minimumDate;
    int _minuteInterval;
    UILabel *_minuteLabel;
    int _numberOfDaysInCurrentMonth;
    NSString *_pmString;
    NSDateComponents *_referenceComponents;
    NSTimeZone *_timeZone;
    NSDateComponents *_todayDateComponents;
    double _todaySinceReferenceDate;
}

@property(copy) NSCalendar * calendar;
@property double countDownDuration;
@property(copy) NSDate * date;
@property int datePickerMode;
@property id delegateOfDatePicker;
@property(getter=_hasCustomCalendar,readonly) BOOL hasCustomCalendar;
@property(retain) NSLocale * locale;
@property(copy) NSDate * maximumDate;
@property(copy) NSDate * minimumDate;
@property int minuteInterval;
@property(retain) NSTimeZone * timeZone;
@property(getter=_usesBlackChrome,setter=_setUsesBlackChrome:) BOOL usesBlackChrome;

- (int)_amPmValue;
- (id)_ampmCellFont;
- (int)_columnForElement:(unsigned int)arg1;
- (id)_createAccessoryViewWithText:(id)arg1 andFont:(id)arg2;
- (id)_createLabelWithString:(id)arg1 above:(id)arg2;
- (id)_dateForWeekMonthDayRow:(int)arg1;
- (id)_datePickerCellFont;
- (void)_datePickerReset:(id)arg1;
- (int)_dayForRow:(int)arg1;
- (void)_doneLoadingDateOrTime;
- (unsigned int)_elementForColumn:(int)arg1;
- (void)_ensureTodayIsSet;
- (int)_eraForRow:(int)arg1;
- (BOOL)_hasCustomCalendar;
- (int)_hourForRow:(int)arg1 in24HourTime:(BOOL)arg2;
- (int)_hourForRow:(int)arg1;
- (id)_hoursString;
- (id)_hrMinFont;
- (int)_incrementForElement:(unsigned int)arg1;
- (int)_incrementedAmountForValue:(int)arg1 withElement:(unsigned int)arg2;
- (void)_loadDateAnimated:(BOOL)arg1;
- (void)_loadDesignatorStrings;
- (void)_loadDesignatorStringsIfNeeded;
- (struct __CFDateFormatter { }*)_localDateFormatter;
- (int)_minuteForRow:(int)arg1;
- (id)_minutesString;
- (int)_monthForRow:(int)arg1;
- (id)_newFadeLabel:(id)arg1 toNewLabelWithString:(id)arg2 ifAnimated:(BOOL)arg3;
- (int)_numberOfDaysInDate:(id)arg1;
- (int)_numberOfDaysInWeek;
- (BOOL)_scrollingAnyColumnExcept:(int)arg1;
- (int)_secondForRow:(int)arg1;
- (void)_selectRow:(int)arg1 inComponent:(int)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4;
- (int)_selectedHourForColumn:(int)arg1;
- (int)_selectedMinuteForColumn:(int)arg1;
- (void)_setDate:(id)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (void)_setDateComponent:(id)arg1 withElement:(unsigned int)arg2;
- (void)_setHidesLabels:(BOOL)arg1;
- (void)_setUsesBlackChrome:(BOOL)arg1;
- (void)_setupCell:(id)arg1 atRow:(int)arg2 inColumn:(int)arg3 withElementFlag:(unsigned int)arg4;
- (void)_setupWeekMonthDayCell:(id)arg1 atRow:(int)arg2 inColumn:(int)arg3;
- (BOOL)_shouldEnableAmPmForValue:(int)arg1 column:(int)arg2;
- (BOOL)_shouldEnableDayForRow:(int)arg1 column:(int)arg2;
- (BOOL)_shouldEnableHourForValue:(int)arg1 column:(int)arg2;
- (BOOL)_shouldEnableMinuteForValue:(int)arg1 column:(int)arg2;
- (BOOL)_shouldEnableMonthForRow:(int)arg1 column:(int)arg2;
- (BOOL)_shouldEnableWeekMonthDayForRow:(int)arg1;
- (BOOL)_shouldEnableYearForRow:(int)arg1;
- (BOOL)_showingDate;
- (id)_sizedPickerCellFont;
- (float)_tableRowHeight;
- (void)_todayChanged:(id)arg1;
- (id)_todayTextColor;
- (void)_updateBitsForDate:(id)arg1 andReload:(BOOL)arg2 animateIfNeeded:(BOOL)arg3;
- (BOOL)_updateDateOrTime;
- (void)_updateEnabledCells:(BOOL)arg1;
- (void)_updateLabels:(BOOL)arg1;
- (void)_updateReferenceBits;
- (void)_updateRowInColumn:(int)arg1 toValue:(int)arg2 withRepeatingAmount:(int)arg3 element:(unsigned int)arg4 animated:(BOOL)arg5;
- (BOOL)_usesBlackChrome;
- (int)_yearForRow:(int)arg1;
- (id)calendar;
- (float)contentWidth;
- (double)countDownDuration;
- (id)date;
- (id)dateComponents;
- (int)datePickerMode;
- (void)dealloc;
- (id)delegateOfDatePicker;
- (int)hour;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)locale;
- (id)maximumDate;
- (id)minimumDate;
- (int)minute;
- (int)minuteInterval;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerImageNamePrefix;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(int)arg2 to:(int)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (void)pickerViewLoaded:(id)arg1;
- (void)scrollerWillStartDragging:(id)arg1;
- (int)second;
- (void)setCalendar:(id)arg1;
- (void)setCountDownDuration:(double)arg1;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
- (void)setDate:(id)arg1;
- (void)setDateComponents:(id)arg1;
- (void)setDatePickerMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateOfDatePicker:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlightsToday:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setMinuteInterval:(int)arg1;
- (void)setStaggerTimeIntervals:(BOOL)arg1;
- (void)setTimeZone:(id)arg1;
- (id)shadowColor;
- (id)timeZone;

@end
