/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADRgbColor : OADColor {
    float mBlue;
    float mGreen;
    float mRed;
}

+ (id)black;
+ (id)rgbColorWithNSColor:(id)arg1;
+ (id)rgbColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)rgbColorWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;
+ (id)rgbColorWithWhite:(float)arg1;
+ (id)rgbColorWithWhiteByte:(float)arg1;
+ (id)white;

- (float)blue;
- (unsigned char)blueByte;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)green;
- (unsigned char)greenByte;
- (unsigned int)hash;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)initWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;
- (id)initWithWhite:(float)arg1;
- (id)initWithWhiteByte:(float)arg1;
- (BOOL)isEqual:(id)arg1;
- (float)red;
- (unsigned char)redByte;
- (id)rgbColorWithFraction:(float)arg1 ofRgbColor:(id)arg2;

@end
