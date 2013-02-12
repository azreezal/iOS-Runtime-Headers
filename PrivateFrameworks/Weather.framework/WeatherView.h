/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@class City, UIImage, UIView;

@interface WeatherView : UIView <CityUpdaterDelegate> {
    UIImage *_bigIcon;
    unsigned int _bigIconIndex;
    City *_city;
    id _delegate;
    UIImage *_secondaryBigIcon;
    BOOL _showWind;
    BOOL _showingDay;
    UIView *_windView;
}

@property(setter=showCity:,retain) City * city;
@property id delegate;

- (id)_bigIcon;
- (void)_removeWindView;
- (id)_secondaryBigIcon;
- (id)bigImageBundle;
- (id)bundle;
- (id)city;
- (void)cityDidFinishWeatherUpdate:(id)arg1;
- (void)cityDidStartWeatherUpdate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)refreshLocalization;
- (void)setBigIcon:(unsigned int)arg1 dayNightChanged:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setupBigIconOffset:(int)arg1;
- (void)setupSecondaryBigIconOffset:(int)arg1;
- (void)showCity:(id)arg1;
- (void)updateWeatherDisplayForCity:(id)arg1;
- (void)updateWind;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })windFrame;

@end
