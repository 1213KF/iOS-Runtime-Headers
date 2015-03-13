/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSMutableSet;

@interface UIViewKeyframeAnimationState : UIViewAnimationState {
    int _calculationMode;
    double _frameDuration;
    double _frameStartTime;
    BOOL _inFrame;
    NSMutableSet *_keyframeLayers;
    NSMutableDictionary *_keyframeLayersForCurrentKeyFrameDict;
}

- (void)addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(id)arg3;
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)cleanupTrackedLayers;
- (void)dealloc;
- (id)init;
- (void)pop;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned int)arg4 factory:(id)arg5 parentState:(id)arg6 start:(id)arg7 completion:(id)arg8;

@end