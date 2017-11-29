#import "CDVRemoteInjection.h"
#import "CDVRemoteInjectionWebViewBaseDelegate.h"

@interface CDVRemoteInjectionUIWebViewDelegate: CDVRemoteInjectionWebViewBaseDelegate <CDVRemoteInjectionWebViewDelegate>
@property (readwrite, strong) CDVRemoteInjectionPlugin *plugin;
- (void) onWebViewDidStartLoad;
- (void) onWebViewDidFinishLoad:(UIWebView *)webView;
- (void) onWebViewFailLoadWithError:(NSError *)error;
@end

@interface CDVRemoteInjectionUIWebViewNotificationDelegate : WrappedDelegateProxy <UIWebViewDelegate>
@property (readwrite, strong) CDVRemoteInjectionUIWebViewDelegate *webViewDelegate;
@end
