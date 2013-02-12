/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUiPodSegmentedViewController, IUiPodViewController;

@interface IUWildcatBrowserViewController : IUiPodViewController {
    IUiPodSegmentedViewController *_segmentedViewController;
}

@property(readonly) IUiPodSegmentedViewController * segmentedViewController;
@property(readonly) int style;
@property(readonly) IUiPodViewController * topViewController;

+ (Class)navigationBarClass;

- (id)createNavigationBar;
- (id)createSegmentedController;
- (void)dealloc;
- (id)segmentedViewController;
- (id)topViewController;

@end
