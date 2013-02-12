/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSMutableArray, NSMutableSet, UIActivityIndicatorView, UIImageView, UILabel, UIPageControl, UIView, ViewScroller;

@interface InternetViewController : AssistantSubUIViewController <UIScrollViewDelegate> {
    struct { 
        unsigned int ethernetPortCount; 
        unsigned int productID; 
        unsigned int productFamily; 
    struct { 
        unsigned int ethernetPortCount; 
        unsigned int productID; 
        unsigned int productFamily; 
    UIImageView *cablingImageFirstFrame;
    UIImageView *cablingImageLastFrame;
    UIView *containerView;
    UILabel *cyclePowerLabel;
    UIView *descriptionContainerView;
    UILabel *descriptionLabel;
    UIImageView *deviceImageView;
    UILabel *deviceLabel;
    UIView *diagramContainerView;
    ViewScroller *diagramView;
    NSMutableArray *images;
    UIImageView *insetImageView;
    unsigned int internetFlow;
    UILabel *internetLabel;
    UIPageControl *pageControl;
    BOOL pageControlIsChangingPage;
    NSMutableSet *recycledPages;
    UILabel *removeBatteryLabel;
    UIImageView *resetBroadband1Image;
    UIView *resetBroadband1View;
    UIImageView *resetBroadband2Image;
    UIView *resetBroadband2View;
    UIImageView *routerImageView;
    UILabel *routerLabel;
    } sourceDevice;
    UILabel *spinnerWithStatusAdjacentLabel;
    UIActivityIndicatorView *spinnerWithStatusAdjacentSpinner;
    UIView *spinnerWithStatusAdjacentView;
    UIView *swapCableView;
    UIImageView *swapCableViewCablingImageFirstFrame;
    UIImageView *swapCableViewCablingImageLastFrame;
    UIImageView *swapCableViewInsetImage;
    UILabel *swapCableViewInternetLabel;
    UIImageView *swapCableViewRouterImage;
    UILabel *swapCableViewRouterLabel;
    UIImageView *swapCableViewSourceImage;
    UILabel *swapCableViewSourceLabel;
    UIImageView *swapCableViewTargetImage;
    UILabel *swapCableViewTargetLabel;
    } targetDevice;
    NSMutableSet *visiblePages;
    UIView *wanCableView;
    UILabel *wanPortLabel;
}

@property(retain) UIImageView * cablingImageFirstFrame;
@property(retain) UIImageView * cablingImageLastFrame;
@property(retain) UIView * containerView;
@property(retain) UIView * descriptionContainerView;
@property(retain) UILabel * descriptionLabel;
@property(retain) UIImageView * deviceImageView;
@property(retain) UILabel * deviceLabel;
@property(retain) UIView * diagramContainerView;
@property(retain) ViewScroller * diagramView;
@property(retain) UIImageView * insetImageView;
@property unsigned int internetFlow;
@property(retain) UILabel * internetLabel;
@property(retain) UIPageControl * pageControl;
@property(retain) UIImageView * resetBroadband1Image;
@property(retain) UIView * resetBroadband1View;
@property(retain) UIImageView * resetBroadband2Image;
@property(retain) UIView * resetBroadband2View;
@property(retain) UIImageView * routerImageView;
@property(retain) UILabel * routerLabel;
@property(retain) UIView * swapCableView;
@property(retain) UIImageView * swapCableViewCablingImageFirstFrame;
@property(retain) UIImageView * swapCableViewCablingImageLastFrame;
@property(retain) UIImageView * swapCableViewInsetImage;
@property(retain) UILabel * swapCableViewInternetLabel;
@property(retain) UIImageView * swapCableViewRouterImage;
@property(retain) UILabel * swapCableViewRouterLabel;
@property(retain) UIImageView * swapCableViewSourceImage;
@property(retain) UILabel * swapCableViewSourceLabel;
@property(retain) UIImageView * swapCableViewTargetImage;
@property(retain) UILabel * swapCableViewTargetLabel;
@property(retain) UIView * wanCableView;
@property(retain) UILabel * wanPortLabel;

- (void)addInternetNotWorkingUI;
- (void)addInternetWANPluginUI;
- (void)addSwapCablingUI;
- (id)cablingImageFirstFrame;
- (id)cablingImageLastFrame;
- (void)changeDiagram:(id)arg1;
- (id)containerView;
- (id)descriptionContainerView;
- (id)descriptionLabel;
- (void)determineInfoForProductID:(unsigned int)arg1 deviceDiagramInfo:(struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg2;
- (id)deviceImageForDeviceDiagramInfo:(struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)deviceImageView;
- (id)deviceLabel;
- (id)diagramContainerView;
- (id)diagramView;
- (id)insetImageForDeviceDiagramInfo:(struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)insetImageView;
- (unsigned int)internetFlow;
- (id)internetLabel;
- (id)pageControl;
- (void)presentInternetDisconnectedUI;
- (void)presentInternetWANPluginUI;
- (void)presentSwapCablingCompleteUI;
- (void)presentSwapCablingUI;
- (id)resetBroadband1Image;
- (id)resetBroadband1View;
- (id)resetBroadband2Image;
- (id)resetBroadband2View;
- (id)routerImageView;
- (id)routerLabel;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCablingImageFirstFrame:(id)arg1;
- (void)setCablingImageLastFrame:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDescriptionContainerView:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDeviceImageView:(id)arg1;
- (void)setDeviceLabel:(id)arg1;
- (void)setDiagramContainerView:(id)arg1;
- (void)setDiagramView:(id)arg1;
- (void)setInsetImageView:(id)arg1;
- (void)setInternetFlow:(unsigned int)arg1;
- (void)setInternetLabel:(id)arg1;
- (void)setPageControl:(id)arg1;
- (void)setResetBroadband1Image:(id)arg1;
- (void)setResetBroadband1View:(id)arg1;
- (void)setResetBroadband2Image:(id)arg1;
- (void)setResetBroadband2View:(id)arg1;
- (void)setRouterImageView:(id)arg1;
- (void)setRouterLabel:(id)arg1;
- (void)setSwapCableView:(id)arg1;
- (void)setSwapCableViewCablingImageFirstFrame:(id)arg1;
- (void)setSwapCableViewCablingImageLastFrame:(id)arg1;
- (void)setSwapCableViewInsetImage:(id)arg1;
- (void)setSwapCableViewInternetLabel:(id)arg1;
- (void)setSwapCableViewRouterImage:(id)arg1;
- (void)setSwapCableViewRouterLabel:(id)arg1;
- (void)setSwapCableViewSourceImage:(id)arg1;
- (void)setSwapCableViewSourceLabel:(id)arg1;
- (void)setSwapCableViewTargetImage:(id)arg1;
- (void)setSwapCableViewTargetLabel:(id)arg1;
- (void)setWanCableView:(id)arg1;
- (void)setWanPortLabel:(id)arg1;
- (id)sizedImageNamed:(id)arg1;
- (void)startAnimatingCablingForView:(id)arg1 startingOpacity:(float)arg2 endingOpacity:(float)arg3 duration:(double)arg4;
- (id)swapCableView;
- (id)swapCableViewCablingImageFirstFrame;
- (id)swapCableViewCablingImageLastFrame;
- (id)swapCableViewInsetImage;
- (id)swapCableViewInternetLabel;
- (id)swapCableViewRouterImage;
- (id)swapCableViewRouterLabel;
- (id)swapCableViewSourceImage;
- (id)swapCableViewSourceLabel;
- (id)swapCableViewTargetImage;
- (id)swapCableViewTargetLabel;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)wanCableView;
- (id)wanPortLabel;

@end
