/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, NSString, UICalloutBarButton, UICalloutBarOverlay, UIResponder;

@interface UICalloutBar : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
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
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    int m_arrowDirection;
    } m_controlFrame;
    int m_currentPage;
    id m_delegate;
    BOOL m_didPromptForReplace;
    NSMutableArray *m_extraButtons;
    NSArray *m_extraItems;
    BOOL m_fadeAfterCommand;
    double m_fadedTime;
    BOOL m_ignoreFade;
    BOOL m_ignoringEvents;
    UICalloutBarButton *m_nextButton;
    UICalloutBarOverlay *m_overlay;
    int m_pageCount;
    } m_pointAboveControls;
    } m_pointBelowControls;
    } m_pointLeftOfControls;
    } m_pointRightOfControls;
    UICalloutBarButton *m_previousButton;
    BOOL m_recalcVisibleItems;
    NSMutableArray *m_rectsToEvade;
    NSArray *m_replacements;
    id m_responderTarget;
    BOOL m_shouldAppear;
    BOOL m_showAllReplacements;
    float m_supressedHorizontalMovementX;
    BOOL m_supressesHorizontalMovement;
    } m_supressesHorizontalMovementFrame;
    NSMutableArray *m_systemButtons;
    int m_targetDirection;
    BOOL m_targetHorizontal;
    } m_targetPoint;
    } m_targetRect;
    NSString *m_untruncatedString;
}

@property int arrowDirection;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } controlFrame;
@property id delegate;
@property(copy) NSArray * extraItems;
@property struct CGPoint { float x1; float x2; } pointAboveControls;
@property struct CGPoint { float x1; float x2; } pointBelowControls;
@property struct CGPoint { float x1; float x2; } pointLeftOfControls;
@property struct CGPoint { float x1; float x2; } pointRightOfControls;
@property(readonly) NSArray * rectsToEvade;
@property(copy) NSArray * replacements;
@property UIResponder * responderTarget;
@property BOOL showAllReplacements;
@property BOOL supressesHorizontalMovement;
@property int targetDirection;
@property BOOL targetHorizontal;
@property struct CGPoint { float x1; float x2; } targetPoint;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } targetRect;
@property(copy) NSString * untruncatedString;
@property(readonly) BOOL visible;

+ (void)_releaseSharedInstance;
+ (id)activeCalloutBar;
+ (void)fadeSharedCalloutBar;
+ (void)hideSharedCalloutBar;
+ (id)sharedCalloutBar;
+ (BOOL)sharedCalloutBarIsVisible;

- (void)_fadeAfterCommand:(SEL)arg1;
- (void)_showNextItems:(id)arg1;
- (void)_showPreviousItems:(id)arg1;
- (BOOL)_updateVisibleItemsAnimated:(BOOL)arg1;
- (void)addRectToEvade:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appear;
- (void)appearAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (int)arrowDirection;
- (void)buttonHighlighted:(id)arg1 highlighted:(BOOL)arg2;
- (void)buttonPressed:(id)arg1;
- (BOOL)calculateControlFrameForCalloutSize:(struct CGSize { float x1; float x2; })arg1 below:(BOOL)arg2;
- (BOOL)calculateControlFrameForCalloutSize:(struct CGSize { float x1; float x2; })arg1 right:(BOOL)arg2;
- (BOOL)calculateControlFrameInsideTargetRect:(struct CGSize { float x1; float x2; })arg1;
- (void)clearEvadeRects;
- (void)clearReplacements;
- (void)clearSupressesHorizontalMovementFrame;
- (void)configureButtons:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })controlFrame;
- (void)dealloc;
- (id)delegate;
- (void)expandAfterAlertOrBecomeActive:(id)arg1;
- (id)extraItems;
- (void)fade;
- (void)flattenForAlertOrResignActive:(id)arg1;
- (BOOL)hasReplacements;
- (void)hide;
- (void)hideAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })pointAboveControls;
- (struct CGPoint { float x1; float x2; })pointBelowControls;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })pointLeftOfControls;
- (struct CGPoint { float x1; float x2; })pointRightOfControls;
- (BOOL)recentlyFaded;
- (BOOL)rectClear:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)rectsToEvade;
- (void)removeFromSuperview;
- (id)replacements;
- (id)responderTarget;
- (void)setArrowDirection:(int)arg1;
- (void)setControlFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtraItems:(id)arg1;
- (BOOL)setFrameForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPointAboveControls:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPointBelowControls:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPointLeftOfControls:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPointRightOfControls:(struct CGPoint { float x1; float x2; })arg1;
- (void)setReplacements:(id)arg1;
- (void)setResponderTarget:(id)arg1;
- (void)setShowAllReplacements:(BOOL)arg1;
- (void)setSupressesHorizontalMovement:(BOOL)arg1;
- (void)setTargetDirection:(int)arg1;
- (void)setTargetHorizontal:(BOOL)arg1;
- (void)setTargetPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 arrowDirection:(int)arg2;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 pointBelowControls:(struct CGPoint { float x1; float x2; })arg2 pointAboveControls:(struct CGPoint { float x1; float x2; })arg3;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 pointLeftOfControls:(struct CGPoint { float x1; float x2; })arg2 pointRightOfControls:(struct CGPoint { float x1; float x2; })arg3;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setUntruncatedString:(id)arg1;
- (void)show;
- (BOOL)showAllReplacements;
- (float)supressHorizontalXMovementIfNeededForPoint:(struct CGPoint { float x1; float x2; })arg1 proposedX:(float)arg2;
- (BOOL)supressesHorizontalMovement;
- (int)targetDirection;
- (id)targetForAction:(SEL)arg1;
- (BOOL)targetHorizontal;
- (struct CGPoint { float x1; float x2; })targetPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRect;
- (int)textEffectsVisibilityLevel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textEffectsWindowBoundsWithoutStatusBar;
- (id)untruncatedString;
- (void)update;
- (void)updateAnimated:(BOOL)arg1;
- (void)updateAvailableButtons;
- (void)updateForCurrentPage;
- (BOOL)visible;

@end
