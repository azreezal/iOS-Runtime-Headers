/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSArray, NSString;

@interface CKClientComposeMessage : CKMessage {
    NSString *_markup;
    NSArray *_parts;
    NSString *_subject;
}

@property(retain,readonly) NSString * markup;
@property(retain) NSString * subject;

- (void)dealloc;
- (id)initWithConversation:(id)arg1 text:(id)arg2 markup:(id)arg3 parts:(id)arg4;
- (void)loadParts;
- (id)markup;
- (unsigned int)messagePartCount;
- (id)parts;
- (id)sender;
- (void)setSubject:(id)arg1;
- (id)subject;

@end
