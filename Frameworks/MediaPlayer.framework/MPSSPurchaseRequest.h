/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, NSError, NSMutableArray, SSDownload, SSPurchase;

@interface MPSSPurchaseRequest : SSPurchaseRequest {
    BOOL _completed;
    NSMutableArray *_completionHandlers;
    MPMediaItem *_mediaItem;
    SSDownload *_purchaseDownload;
    NSError *_purchaseError;
    int _purchaseReason;
}

@property(readonly) BOOL completed;
@property(readonly) MPMediaItem * mediaItem;
@property(readonly) SSPurchase * purchase;
@property int purchaseReason;

+ (id)purchaseForMediaItem:(id)arg1 purchaseReason:(int)arg2;

- (void)addCompletionHandler:(id)arg1;
- (BOOL)completed;
- (void)dealloc;
- (id)description;
- (id)initWithMediaItem:(id)arg1 purchaseReason:(int)arg2;
- (void)invokeAndClearAllCompletionHandlers;
- (void)invokeCompletionHandler:(id)arg1;
- (id)mediaItem;
- (id)purchase;
- (int)purchaseReason;
- (void)setCompletedWithDownload:(id)arg1 error:(id)arg2;
- (void)setPurchaseReason:(int)arg1;

@end
