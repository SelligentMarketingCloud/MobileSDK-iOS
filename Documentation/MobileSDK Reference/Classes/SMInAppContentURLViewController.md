# SMInAppContentURLViewController

## Properties
```swift
var description: String { get }
```

>A textual representation of the receiver.

## Methods
```swift
@objc init(category: String, options: SMInAppContentStyleOptions? = nil)
```

>This will provide you a custom viewcontroller with one web view loaded with the url provided by an in app content for a specific category of an URL type<br/>

```swift
override func viewDidLoad()
```

>Called after the controller's view is loaded into memory.

```swift
override func viewWillAppear(_ animated: Bool)
```

>Notifies the view controller that its view is about to be added to a view hierarchy.

```swift
func webView(_ webView: WKWebView, didFail navigation: WKNavigation!, withError error: Error)
```

>Inherited from WKNavigationDelegate.webView(_:didFail:withError:).

```swift
func webView(_ webView: WKWebView, didFinish navigation: WKNavigation!)
```

>Inherited from WKNavigationDelegate.webView(_:didFinish:).