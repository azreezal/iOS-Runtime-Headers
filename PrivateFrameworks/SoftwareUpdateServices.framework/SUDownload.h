/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class SUDescriptor, SUDownloadMetadata, SUOperationProgress;

@interface SUDownload : NSObject <NSCoding, NSCopying> {
    SUDescriptor *_descriptor;
    SUDownloadMetadata *_metadata;
    SUOperationProgress *_progress;
}

@property(retain) SUDescriptor * descriptor;
@property(retain) SUDownloadMetadata * metadata;
@property(retain) SUOperationProgress * progress;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (id)progress;
- (void)setDescriptor:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setProgress:(id)arg1;

@end
