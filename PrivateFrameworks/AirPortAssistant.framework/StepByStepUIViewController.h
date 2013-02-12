/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NetTopoMiniStaticLayout, UIActivityIndicatorView, UILabel, UIView;

@interface StepByStepUIViewController : AssistantSubUIViewController {
    int sbsMode;
    UILabel *spinnerWithStatusBelowLabel;
    UIActivityIndicatorView *spinnerWithStatusBelowSpinner;
    UIView *spinnerWithStatusBelowView;
    UIView *tableFooterContainerView;
    UIView *topoContainerView;
    NetTopoMiniStaticLayout *topoLayout;
    UIView *topoView;
}

@property int sbsMode;
@property(retain) UILabel * spinnerWithStatusBelowLabel;
@property(retain) UIActivityIndicatorView * spinnerWithStatusBelowSpinner;
@property(retain) UIView * spinnerWithStatusBelowView;
@property(retain) UIView * tableFooterContainerView;
@property(retain) UIView * topoContainerView;
@property(retain) NetTopoMiniStaticLayout * topoLayout;
@property(retain) UIView * topoView;

- (void)dealloc;
- (int)sbsMode;
- (void)setSbsMode:(int)arg1;
- (void)setSpinnerWithStatusBelowLabel:(id)arg1;
- (void)setSpinnerWithStatusBelowSpinner:(id)arg1;
- (void)setSpinnerWithStatusBelowView:(id)arg1;
- (void)setTableFooterContainerView:(id)arg1;
- (void)setTopoContainerView:(id)arg1;
- (void)setTopoLayout:(id)arg1;
- (void)setTopoView:(id)arg1;
- (id)spinnerWithStatusBelowLabel;
- (id)spinnerWithStatusBelowSpinner;
- (id)spinnerWithStatusBelowView;
- (void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2;
- (void)syncTopoUIForTarget:(id)arg1 andSource:(id)arg2 andNetwork:(id)arg3 connectionType:(id)arg4;
- (void)syncTopoUIForTargetProductID:(id)arg1 targetName:(id)arg2 sourceProductID:(id)arg3 sourceName:(id)arg4 networkName:(id)arg5 connectionType:(id)arg6;
- (id)syncTopoUIInLayer:(id)arg1 withLayout:(id)arg2 targetProductID:(id)arg3 targetName:(id)arg4 sourceProductID:(id)arg5 sourceName:(id)arg6 networkName:(id)arg7 connectionType:(id)arg8;
- (id)tableFooterContainerView;
- (id)topoContainerView;
- (id)topoLayout;
- (id)topoView;
- (BOOL)updateUIStr1:(id)arg1 forTag1:(unsigned int)arg2 matchesStr2:(id)arg3 forTag2:(unsigned int)arg4;
- (void)viewWillAppear:(BOOL)arg1;

@end
