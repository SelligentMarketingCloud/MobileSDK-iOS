# SMManager

## Methods
```swift
@objc func webView(_ webView: WKWebView, didFail navigation: WKNavigation, withError error: Error)
```

>Use this API inside the corresponding method in your WKNavigationDelegate when inAppMessageWKNavigationDelegate is set<br/>It will enable the SDK to have the navigation arrows working properly and log the error when the delegate is implemented in your App<br/>

```swift
@objc func webView(_ webView: WKWebView, didFinish navigation: WKNavigation)
```

>Use this API inside the corresponding method in your WKNavigationDelegate when ``SMManager/inAppMessageWKNavigationDelegate(_:)`` is set<br/>It will enable the SDK to have the navigation arrows working properly and log the error when the delegate is implemented in your App<br/>

```swift
@objc func webView(_ webView: WKWebView, didCommit navigation: WKNavigation)
```

>Use this API inside the corresponding method in your WKNavigationDelegate when ``SMManager/inAppMessageWKNavigationDelegate(_:)`` is set<br/>It will enable the SDK to have the navigation arrows working properly and log the error when the delegate is implemented in your App<br/>