//
//  SMManager+ViewController.h
//  MobileSDK
//
//  Created by Gauthier Dumont on 07/07/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

/**
 *  This category will help our SDK making the WKWebView navigation buttons enabled/disabled when needed, if inAppMessageWKNavigationDelegate is set.
 *
 *  #SMManager+ViewController :#
 */
@interface SMManager (ViewController)

/*!
 *  Use this API inside the corresponding method in your WKNavigationDelegate when inAppMessageWKNavigationDelegate is set.
 *  It will enable the SDK to have the navigation arrows working properly and log the error when the delegate is implemented in your APP.
 *
 *  @param webView The WKWebView from the WKNavigationDelegate.
 *  @param navigation The WKNavigation from the WKNavigationDelegate.
 *  @param error The NSError from the WKNavigationDelegate.
 */
- (void) webView:(WKWebView *)webView didFailNavigation:(WKNavigation *)navigation withError:(NSError *)error;

/*!
 *  Use this API inside the corresponding method in your WKNavigationDelegate when inAppMessageWKNavigationDelegate is set.
 *  It will enable the SDK to have the navigation arrows working properly when the delegate is implemented in your APP.
 *
 *  @param webView The WKWebView from the WKNavigationDelegate.
 *  @param navigation The WKNavigation from the WKNavigationDelegate
 */
- (void) webView:(WKWebView *)webView didFinishNavigation:(WKNavigation *)navigation;

/*!
 *  Use this API inside the corresponding method in your WKNavigationDelegate when inAppMessageWKNavigationDelegate is set.
 *  It will enable the SDK to have the navigation arrows working properly when the delegate is implemented in your APP.
 *
 *  @param webView The WKWebView from the WKNavigationDelegate.
 *  @param navigation The WKNavigation from the WKNavigationDelegate.
 */
- (void)webView:(WKWebView *)webView didCommitNavigation:(WKNavigation *)navigation;

@end



