/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSNumber, NSValue;

@interface _UIBarBackButtonItemAppearanceStorage : NSObject {
    NSMutableDictionary *backgroundImages;
    NSNumber *backgroundVerticalAdjustment;
    NSMutableDictionary *miniBackgroundImages;
    NSNumber *miniBackgroundVerticalAdjustment;
    NSValue *miniTitlePositionOffset;
    NSValue *titlePositionOffset;
}

@property(retain) NSNumber * backgroundVerticalAdjustment;
@property(retain) NSNumber * miniBackgroundVerticalAdjustment;
@property(retain) NSValue * miniTitlePositionOffset;
@property(retain) NSValue * titlePositionOffset;

- (id)anyBackgroundImage;
- (id)backgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2;
- (id)backgroundVerticalAdjustment;
- (void)dealloc;
- (id)miniBackgroundVerticalAdjustment;
- (id)miniTitlePositionOffset;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 isMini:(BOOL)arg3;
- (void)setBackgroundVerticalAdjustment:(id)arg1;
- (void)setMiniBackgroundVerticalAdjustment:(id)arg1;
- (void)setMiniTitlePositionOffset:(id)arg1;
- (void)setTitlePositionOffset:(id)arg1;
- (id)titlePositionOffset;

@end
