/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSNumber, NSString, NSURL;

@interface EKAttachment : EKObject {
}

@property(readonly) NSURL * URL;
@property(readonly) NSString * UUID;
@property(readonly) NSString * fileFormat;
@property(readonly) NSString * fileName;
@property(readonly) NSNumber * fileSize;
@property(readonly) BOOL isBinary;
@property(readonly) NSURL * localURL;

- (id)URL;
- (id)UUID;
- (int)compareFileNames:(id)arg1;
- (id)description;
- (id)fileFormat;
- (id)fileName;
- (id)fileSize;
- (id)init;
- (BOOL)isBinary;
- (BOOL)isEqual:(id)arg1;
- (id)localURL;

@end
