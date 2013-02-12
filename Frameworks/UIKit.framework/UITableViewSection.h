/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIView;

@interface UITableViewSection : NSObject <NSCoding> {
    NSString *_footerTitle;
    UIView *_footerView;
    NSString *_headerTitle;
    UIView *_headerView;
    NSArray *_rows;
}

@property(copy) NSString * footerTitle;
@property(retain) UIView * footerView;
@property(copy) NSString * headerTitle;
@property(retain) UIView * headerView;
@property(copy) NSArray * rows;

+ (id)sectionWithRows:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)footerTitle;
- (id)footerView;
- (id)headerTitle;
- (id)headerView;
- (id)initWithCoder:(id)arg1;
- (id)rows;
- (void)setFooterTitle:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setRows:(id)arg1;

@end
