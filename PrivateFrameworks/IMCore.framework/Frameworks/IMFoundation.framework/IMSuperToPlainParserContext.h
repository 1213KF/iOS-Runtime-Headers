/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSMutableString;



@interface IMSuperToPlainParserContext : IMFromSuperParserContext 
{
    NSMutableString *_plainString;
    BOOL _extractLinks;
}

@property(readonly) NSString *plainString;


- (id)initWithAttributedString:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 extractLinks:(BOOL)arg2;
- (id)plainString;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3 characters:(id)arg4;
- (id)resultsForLogging;

@end