/* Generated by RuntimeBrowser.
 */

@protocol VKStyleManagerObserver <NSObject>

@required

+ (BOOL)reloadOnStylesheetChange;

- (struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; })styleManager;

@optional

- (void)prepareForStylesheetTransitionToMapDisplayStyle:(void *)arg1 withReadinessBlock:(void *)arg2; // needs 2 arg types, found 7: struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <VKStyleManagerObserver> *, void*
- (void)stylesheetDidChange;
- (void)stylesheetDidReload;
- (void)stylesheetDoneChanging;
- (void)stylesheetTransitionDidProgress;
- (void)stylesheetWillChange;
- (void)stylesheetWillTransition:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; })arg1;

@end
