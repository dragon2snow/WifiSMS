/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableString, PlainTextDocument;



@interface FormatFlowedWriter : NSObject 
{
    PlainTextDocument *_inputDocument;
    NSUInteger _encoding;
    NSMutableString *_outputString;
    unsigned int _addedTrailingSpaces : 1;
    NSMutableString *_lineString;
}

+ (id)newWithPlainTextDocument:(id)arg1 encoding:(unsigned long)arg2;

- (void)dealloc;
- (NSUInteger)_findLineBreakInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 maxCharWidthCount:(NSUInteger)arg2 endIsURL:(BOOL)arg3;
- (void)_outputQuotedParagraph:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 withQuoteLevel:(NSUInteger)arg3;
- (id)outputString;
- (BOOL)addedTrailingSpaces;

@end
