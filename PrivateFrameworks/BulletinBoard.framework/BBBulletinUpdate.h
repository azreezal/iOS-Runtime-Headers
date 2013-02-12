/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCoding> {
    BBBulletin *_bulletin;
    unsigned int _transactionID;
    int _updateType;
}

@property(readonly) BBBulletin * bulletin;
@property(readonly) unsigned int transactionID;
@property(readonly) int updateType;

- (id)bulletin;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBulletin:(id)arg1 updateType:(int)arg2 transactionID:(unsigned int)arg3;
- (id)initWithCoder:(id)arg1;
- (unsigned int)transactionID;
- (int)updateType;

@end
