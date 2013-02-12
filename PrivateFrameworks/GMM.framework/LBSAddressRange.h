/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface LBSAddressRange : PBCodable {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        float *list; 
        unsigned int count; 
        unsigned int size; 
    BOOL _hasParameterIsSynthesized;
    BOOL _hasSameParity;
    } _numbers;
    BOOL _parameterIsSynthesized;
    } _parameters;
    NSString *_prefix;
    BOOL _sameParity;
    NSString *_suffix;
}

@property BOOL hasParameterIsSynthesized;
@property(readonly) BOOL hasPrefix;
@property BOOL hasSameParity;
@property(readonly) BOOL hasSuffix;
@property(readonly) int* numbers;
@property(readonly) unsigned int numbersCount;
@property BOOL parameterIsSynthesized;
@property(readonly) float* parameters;
@property(readonly) unsigned int parametersCount;
@property(retain) NSString * prefix;
@property BOOL sameParity;
@property(retain) NSString * suffix;

- (void)addNumber:(int)arg1;
- (void)addParameter:(float)arg1;
- (void)clearNumbers;
- (void)clearParameters;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasParameterIsSynthesized;
- (BOOL)hasPrefix;
- (BOOL)hasSameParity;
- (BOOL)hasSuffix;
- (int)numberAtIndex:(unsigned int)arg1;
- (int*)numbers;
- (unsigned int)numbersCount;
- (float)parameterAtIndex:(unsigned int)arg1;
- (BOOL)parameterIsSynthesized;
- (float*)parameters;
- (unsigned int)parametersCount;
- (id)prefix;
- (BOOL)readFrom:(id)arg1;
- (BOOL)sameParity;
- (void)setHasParameterIsSynthesized:(BOOL)arg1;
- (void)setHasSameParity:(BOOL)arg1;
- (void)setNumbers:(int*)arg1 count:(unsigned int)arg2;
- (void)setParameterIsSynthesized:(BOOL)arg1;
- (void)setParameters:(float*)arg1 count:(unsigned int)arg2;
- (void)setPrefix:(id)arg1;
- (void)setSameParity:(BOOL)arg1;
- (void)setSuffix:(id)arg1;
- (id)suffix;
- (void)writeTo:(id)arg1;

@end
