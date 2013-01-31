/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SAMPSetState : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property int state;

+ (id)setStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setState;

- (int)state;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;
- (void)setState:(int)arg1;
- (id)groupIdentifier;

@end