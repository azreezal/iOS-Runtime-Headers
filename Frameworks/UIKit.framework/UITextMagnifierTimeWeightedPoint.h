/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextMagnifierTimeWeightedPoint : NSObject {
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } point; 
        double time; 
    int m_index;
    } m_points[16];
}

@property(readonly) struct CGPoint { float x1; float x2; } weightedPoint;

- (void)addPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)clearHistory;
- (struct CGSize { float x1; float x2; })displacementInInterval:(double)arg1 priorTo:(double)arg2;
- (struct CGSize { float x1; float x2; })displacementInInterval:(double)arg1;
- (float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;
- (float)distanceCoveredInInterval:(double)arg1;
- (BOOL)historyCovers:(double)arg1;
- (struct CGPoint { float x1; float x2; })weightedPoint;

@end
