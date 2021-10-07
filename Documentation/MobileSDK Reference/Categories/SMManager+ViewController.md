# SMManager(ViewController) Category Reference

**Declared in** SMManager+ViewController.h  

## Overview

This category will help our SDK making the WKWebView navigation buttons enabled/disabled when needed, if inAppMessageWKNavigationDelegate is set.

## Tasks

### 

[&ndash;&nbsp;webView:didFailNavigation:withError:](#/api/name/webView:didFailNavigation:withError:)  

[&ndash;&nbsp;webView:didFinishNavigation:](#/api/name/webView:didFinishNavigation:)  

[&ndash;&nbsp;webView:didCommitNavigation:](#/api/name/webView:didCommitNavigation:)  

<a title="Instance Methods" name="instance_methods"></a>
## Instance Methods

<a name="/api/name/webView:didCommitNavigation:" title="webView:didCommitNavigation:"></a>
### webView:didCommitNavigation:

Use this API inside the corresponding method in your WKNavigationDelegate when inAppMessageWKNavigationDelegate is set.
It will enable the SDK to have the navigation arrows working properly when the delegate is implemented in your APP.

<code>- (void)webView:(WKWebView *_Nonnull)*webView* didCommitNavigation:(WKNavigation *_Nonnull)*navigation*</code>

#### Parameters

*webView*  
&nbsp;&nbsp;&nbsp;The WKWebView from the WKNavigationDelegate.  

*navigation*  
&nbsp;&nbsp;&nbsp;The WKNavigation from the WKNavigationDelegate.  

#### Declared In
* `SMManager+ViewController.h`

<a name="/api/name/webView:didFailNavigation:withError:" title="webView:didFailNavigation:withError:"></a>
### webView:didFailNavigation:withError:

Use this API inside the corresponding method in your WKNavigationDelegate when inAppMessageWKNavigationDelegate is set.
It will enable the SDK to have the navigation arrows working properly and log the error when the delegate is implemented in your APP.

<code>- (void)webView:(WKWebView *_Nonnull)*webView* didFailNavigation:(WKNavigation *_Nonnull)*navigation* withError:(NSError *_Nonnull)*error*</code>

#### Parameters

*webView*  
&nbsp;&nbsp;&nbsp;The WKWebView from the WKNavigationDelegate.  

*navigation*  
&nbsp;&nbsp;&nbsp;The WKNavigation from the WKNavigationDelegate.  

*error*  
&nbsp;&nbsp;&nbsp;The NSError from the WKNavigationDelegate.  

#### Declared In
* `SMManager+ViewController.h`

<a name="/api/name/webView:didFinishNavigation:" title="webView:didFinishNavigation:"></a>
### webView:didFinishNavigation:

Use this API inside the corresponding method in your WKNavigationDelegate when inAppMessageWKNavigationDelegate is set.
It will enable the SDK to have the navigation arrows working properly when the delegate is implemented in your APP.

<code>- (void)webView:(WKWebView *_Nonnull)*webView* didFinishNavigation:(WKNavigation *_Nonnull)*navigation*</code>

#### Parameters

*webView*  
&nbsp;&nbsp;&nbsp;The WKWebView from the WKNavigationDelegate.  

*navigation*  
&nbsp;&nbsp;&nbsp;The WKNavigation from the WKNavigationDelegate  

#### Declared In
* `SMManager+ViewController.h`

