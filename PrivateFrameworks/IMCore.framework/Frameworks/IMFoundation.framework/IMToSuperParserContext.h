/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSString;

@interface IMToSuperParserContext : IMXMLParserContext {
    NSString *_backgroundColor;
    NSMutableArray *_backgroundColorStack;
    int _baseWritingDirection;
    NSMutableAttributedString *_body;
    unsigned int _boldCount;
    NSMutableDictionary *_currentAttributes;
    BOOL _didAddBodyAttributes;
    NSMutableArray *_fileTransferGUIDs;
    NSMutableArray *_fontFamilyStack;
    NSMutableArray *_fontSizeStack;
    NSString *_foregroundColor;
    NSMutableArray *_foregroundColorStack;
    unsigned int _italicCount;
    NSMutableArray *_linkStack;
    unsigned int _messagePartNumber;
    unsigned int _strikethroughCount;
    unsigned int _underlineCount;
}

@property(retain) NSString * backgroundColor;
@property int baseWritingDirection;
@property(readonly) NSAttributedString * body;
@property(retain) NSArray * fileTransferGUIDs;
@property(retain) NSString * foregroundColor;
@property(setter=setRightToLeft:) BOOL isRightToLeft;

- (void)_clearIvars;
- (void)_incrementMessagePartNumber;
- (void)_initIvars;
- (void)_popValueFromStack:(id)arg1 attributeName:(id)arg2;
- (void)_pushValue:(id)arg1 ontoStack:(id)arg2 attributeName:(id)arg3;
- (void)_updateFontFamily;
- (void)_updateFontSize;
- (void)appendFileTransferWithGUID:(id)arg1;
- (void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(int)arg3 height:(int)arg4;
- (void)appendString:(id)arg1;
- (id)backgroundColor;
- (int)baseWritingDirection;
- (id)body;
- (void)dealloc;
- (void)decrementBoldCount;
- (void)decrementItalicCount;
- (void)decrementStrikethroughCount;
- (void)decrementUnderlineCount;
- (id)fileTransferGUIDs;
- (id)foregroundColor;
- (void)incrementBoldCount;
- (void)incrementItalicCount;
- (void)incrementStrikethroughCount;
- (void)incrementUnderlineCount;
- (BOOL)isRightToLeft;
- (id)name;
- (void)popBackgroundColor;
- (void)popFontFamily;
- (void)popFontSize;
- (void)popForegroundColor;
- (void)popLink;
- (void)pushBackgroundColor:(id)arg1;
- (void)pushFontFamily:(id)arg1;
- (void)pushFontSize:(id)arg1;
- (void)pushForegroundColor:(id)arg1;
- (void)pushLink:(id)arg1;
- (void)reset;
- (id)resultsForLogging;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setFileTransferGUIDs:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setRightToLeft:(BOOL)arg1;

@end
