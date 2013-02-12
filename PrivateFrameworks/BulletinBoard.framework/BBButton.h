/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBAction, NSString;

@interface BBButton : NSObject <NSCopying, NSCoding> {
    BBAction *_action;
    NSString *_title;
}

@property(retain) BBAction * action;
@property(copy) NSString * title;

+ (id)buttonWithTitle:(id)arg1 action:(id)arg2;

- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
