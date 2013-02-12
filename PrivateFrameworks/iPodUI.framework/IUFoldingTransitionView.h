/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class <IUFoldingTransitionDelegate>, UIView;

@interface IUFoldingTransitionView : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UIView *_containerView;
    <IUFoldingTransitionDelegate> *_delegate;
    int _direction;
    double _duration;
    id *_faces;
    } _finalFrame;
    BOOL _initializedParameters;
    id *_skewContainerViews;
}

@property <IUFoldingTransitionDelegate> * delegate;
@property(readonly) double duration;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } finalFrame;
@property int transitionDirection;

- (void)_addFoldAnimationsToFacesWithDuration:(double)arg1;
- (void)_addUnfoldAnimationsToFacesWithDuration:(double)arg1;
- (struct CGPoint { float x1; float x2; })_anchorPointForPivotEdge:(int)arg1;
- (id)_containerLayerAnimation;
- (struct CGSize { float x1; float x2; })_distanceFromFrontFaceCenterToContainerCenterWhenFoldedScaleX:(float)arg1 scaleY:(float)arg2;
- (id)_foldHeightAnimationForFaceWithIndex:(unsigned int)arg1;
- (id)_foldRotationAnimationForFaceWithIndex:(unsigned int)arg1;
- (id)_foldSkewAnimationForFaceWithIndex:(unsigned int)arg1;
- (id)_frontFace;
- (id)_inputColorFoldAnimationForFaceWithIndex:(unsigned int)arg1;
- (id)_inputColorUnfoldAnimation;
- (void)_prepareForFold;
- (void)_prepareForTransition;
- (void)_prepareForUnfold;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_rotateTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1 angle:(float)arg2 pivotEdge:(int)arg3;
- (id)_unfoldHeightAnimationForFaceWithIndex:(unsigned int)arg1;
- (id)_unfoldRotationAnimationForFaceWithIndex:(unsigned int)arg1;
- (id)_unfoldSkewAnimationForFaceWithIndex:(unsigned int)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)performTransitionWithDuration:(double)arg1 afterDelay:(double)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFacesWithControllerToSnapshot:(id)arg1;
- (void)setFinalFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTransitionDirection:(int)arg1;
- (int)transitionDirection;

@end
