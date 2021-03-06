/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUIWebViewController : UIViewController <UIWebViewDelegate> {
    <RemoteUIWebViewControllerDelegate> *_delegate;
    id /* block */ _loadCompletion;
    BOOL _scalesPageToFit;
    _UIBackdropView *_statusBarBackdrop;
    UIToolbar *_toolbar;
    UIWebView *_webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RemoteUIWebViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL scalesPageToFit;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIToolbar *toolbar;
@property (nonatomic, readonly) UIWebView *webView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)donePressed:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)loadURL:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)scalesPageToFit;
- (void)setDelegate:(id)arg1;
- (void)setScalesPageToFit:(BOOL)arg1;
- (id)toolbar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;

@end
