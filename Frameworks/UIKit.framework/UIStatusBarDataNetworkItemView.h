/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {
    int _dataNetworkType;
    BOOL _enableRSSI;
    BOOL _showRSSI;
    int _wifiStrengthBars;
    int _wifiStrengthRaw;
}

- (id)_dataNetworkImageForStyle:(int)arg1;
- (id)_stringForRSSI;
- (id)contentsImageForStyle:(int)arg1;
- (float)extraLeftPadding;
- (float)maximumOverlap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;

@end
