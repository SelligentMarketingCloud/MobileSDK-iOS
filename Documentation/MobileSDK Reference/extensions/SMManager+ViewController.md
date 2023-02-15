# SMManager

## Methods
```swift
@objc func inAppMessageWKNavigationDelegate(_ delegate: WKNavigationDelegate)
```

>In  case the sdk displays an In App Message in a WKWebView you will for example be able to process the linked click on the app side by implementing decidePolicyForNavigationAction on the provided class<br/>

```swift
@objc func webView(_ webView: WKWebView, didFail navigation: WKNavigation, withError error: Error)
```

>Use this API inside the corresponding method in your WKNavigationDelegate when inAppMessageWKNavigationDelegate is set<br/>It will enable the SDK to have the WKWebview working properly and log the error when the delegate is implemented in your App<br/>

```swift
@objc func webView(_ webView: WKWebView, didFinish navigation: WKNavigation)
```

>Use this API inside the corresponding method in your WKNavigationDelegate when ``SMManager/inAppMessageWKNavigationDelegate(_:)`` is set<br/>It will enable the SDK to have the WKWebview working properly and log the error when the delegate is implemented in your App<br/>

```swift
@objc func webView(_ webView: WKWebView, didFailProvisionalNavigation navigation: WKNavigation!, withError error: Error)
```

>Use this API inside the corresponding method in your WKNavigationDelegate when ``SMManager/inAppMessageWKNavigationDelegate(_:)`` is set<br/>It will enable the SDK to have the WKWebview working properly and log the error when the delegate is implemented in your App<br/>

```swift
@objc func webView(_ webView: WKWebView, didCommit navigation: WKNavigation)
```

>Use this API inside the corresponding method in your WKNavigationDelegate when ``SMManager/inAppMessageWKNavigationDelegate(_:)`` is set<br/>It will enable the SDK to have the WKWebview working properly and log the error when the delegate is implemented in your App<br/>

```swift
@objc func removeViewController()
```

>This method must be called whenever a user has clicked on a link that you  manage to display<br/>It will remove the view controller from your App hierarchy