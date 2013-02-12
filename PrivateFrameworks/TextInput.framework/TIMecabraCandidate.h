/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIMecabraCandidate : UIKeyboardCandidate {
    NSString *_accessibilityLabel;
    void *_candidate;
}

@property(copy) NSString * accessibilityLabel;

- (id)accessibilityLabel;
- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initConversionCandidateWithSurface:(id)arg1 andInput:(id)arg2;
- (id)initWithMecabraCandidate:(const void*)arg1;
- (id)input;
- (BOOL)isExtensionCandidate;
- (BOOL)isForShortcutConversion;
- (void*)mecabraCandidate;
- (void)setAccessibilityLabel:(id)arg1;

@end
