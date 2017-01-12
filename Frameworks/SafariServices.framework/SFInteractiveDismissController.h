/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFInteractiveDismissController : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    float  _accelerations;
    float  _averageAcceleration;
    float  _averageVelocity;
    <SFInteractiveDismissControllerDelegate> * _delegate;
    UIView * _dimmingView;
    unsigned int  _dismissMode;
    UIScreenEdgePanGestureRecognizer * _edgeSwipeGestureRecognizer;
    UIView * _edgeSwipeView;
    int  _interactionState;
    float  _previousAcceleration;
    float  _previousDisplacement;
    double  _previousTimeStamp;
    float  _previousVelocity;
    unsigned int  _sampleCount;
    double  _skipTimeStamp;
    float  _timestamps;
    float  _totalDistance;
    <UIViewControllerContextTransitioning> * _transitionContext;
    float  _velocities;
    UIViewController * _viewControllerToBeDismissed;
}

@property (nonatomic) float averageAcceleration;
@property (nonatomic) float averageVelocity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFInteractiveDismissControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIScreenEdgePanGestureRecognizer *edgeSwipeGestureRecognizer;
@property (nonatomic, retain) UIView *edgeSwipeView;
@property (readonly) unsigned int hash;
@property (nonatomic) float previousAcceleration;
@property (nonatomic) float previousDisplacement;
@property (nonatomic) double previousTimeStamp;
@property (nonatomic) float previousVelocity;
@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) double skipTimeStamp;
@property (readonly) Class superclass;
@property (nonatomic) float totalDistance;
@property (nonatomic) UIViewController *viewControllerToBeDismissed;

- (void).cxx_destruct;
- (void)_animateDismissalCancelTransition;
- (void)_animateDismissalCompleteTransition;
- (void)_dismissAnimateTransition:(id)arg1;
- (float)_percentComplete:(id)arg1;
- (void)_presentAnimateTransition:(id)arg1;
- (float)_translationCoefficient;
- (void)_updateStatistics:(id)arg1 firstSample:(BOOL)arg2 finalSample:(BOOL)arg3;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (float)averageAcceleration;
- (float)averageVelocity;
- (void)cancelInteractiveTransition;
- (id)delegate;
- (id)edgeSwipeGestureRecognizer;
- (id)edgeSwipeView;
- (void)finishInteractiveTransition;
- (id)init;
- (id)interactionControllerForDismissal:(id)arg1;
- (BOOL)popGesture:(id)arg1 withRemainingDuration:(float)arg2 shouldPopWithVelocity:(float*)arg3;
- (float)previousAcceleration;
- (float)previousDisplacement;
- (double)previousTimeStamp;
- (float)previousVelocity;
- (unsigned int)sampleCount;
- (void)setAverageAcceleration:(float)arg1;
- (void)setAverageVelocity:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEdgeSwipeView:(id)arg1;
- (void)setPreviousAcceleration:(float)arg1;
- (void)setPreviousDisplacement:(float)arg1;
- (void)setPreviousTimeStamp:(double)arg1;
- (void)setPreviousVelocity:(float)arg1;
- (void)setSampleCount:(unsigned int)arg1;
- (void)setSkipTimeStamp:(double)arg1;
- (void)setTotalDistance:(float)arg1;
- (void)setViewControllerToBeDismissed:(id)arg1;
- (double)skipTimeStamp;
- (void)startInteractiveTransition:(id)arg1;
- (void)swiped:(id)arg1;
- (float)totalDistance;
- (double)transitionDuration:(id)arg1;
- (struct CGPoint { float x1; float x2; })translationForStatistics;
- (struct CGPoint { float x1; float x2; })velocityForStatistics;
- (id)viewControllerToBeDismissed;

@end