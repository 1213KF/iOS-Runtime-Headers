/* Generated by RuntimeBrowser.
 */

@protocol FBUIProcess <NSObject>

@required

- (NSString *)bundleIdentifier;
- (BOOL)isApplicationProcess;
- (BOOL)isExtensionProcess;
- (BOOL)isRunning;
- (BOOL)isSystemApplicationProcess;
- (int)pid;

@end
