/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFConditionLock, NSMutableArray;

@interface MFGenericAttachmentStore : MFWebAttachmentSource {
    struct __CFDictionary { } *_attachmentSizes;
    NSMutableArray *_attachmentsOrder;
    BOOL _didCancelImageScalingOperations;
    BOOL _outgoing;
    struct dispatch_queue_s { } *_scalingQueue;
    MFConditionLock *_scalingThrottle;
    unsigned int _size;
}

+ (void)beginPreventingInlinePDFs;
+ (void)endPreventingInlinePDFs;
+ (BOOL)isPreventingInlinePDFs;

- (void)_delayedSetScalingEnabled;
- (void)_enqueueScaleAttachment:(id)arg1 withFlags:(unsigned int)arg2 originalSize:(unsigned int)arg3;
- (BOOL)addAttachment:(id)arg1 allowingOverride:(id)arg2;
- (BOOL)addAttachment:(id)arg1;
- (id)attachments;
- (void)cancelImageScalingOperations;
- (void)dealloc;
- (id)description;
- (BOOL)didCancelImageScalingOperations;
- (id)initOutgoing;
- (void)removeAttachmentForURL:(id)arg1;
- (void)removeAttachmentsForURLs:(id)arg1;
- (BOOL)setAttachment:(id)arg1 forURL:(id)arg2;
- (void)setScalingThrottled:(BOOL)arg1;
- (unsigned long)sizeForScale:(int)arg1 imagesOnly:(BOOL)arg2;

@end
