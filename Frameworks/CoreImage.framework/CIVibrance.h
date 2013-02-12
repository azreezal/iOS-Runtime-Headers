/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIVibrance : CIFilter {
    NSNumber *inputAmount;
    CIImage *inputImage;
}

@property(copy) NSNumber * inputAmount;
@property(retain) CIImage * inputImage;

+ (id)customAttributes;

- (id)_initFromProperties:(id)arg1;
- (BOOL)_isIdentity;
- (id)_kernelNeg;
- (id)_kernelPos;
- (id)_outputProperties;
- (id)inputAmount;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputAmount:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
