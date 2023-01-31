# SMInAppContentHTMLViewController

## Properties
```swift
var description: String { get }
```

>A textual representation of the receiver.

## Methods
```swift
@objc init(category: String, boxes: Int = -1, options: SMInAppContentStyleOptions? = nil)
```

>This will provide you a custom viewcontroller with all HTML in app content available<br/>    

```swift
override func viewDidLoad()
```

>Called after the controller's view is loaded into memory.

```swift
override func viewDidAppear(_ animated: Bool)
```

>Notifies the view controller that its view was added to a view hierarchy.