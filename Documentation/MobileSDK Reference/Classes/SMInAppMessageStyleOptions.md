# SMInAppMessageStyleOptions

## Properties
```swift
@objc var navigationTitleColor: UIColor? { get set }
```

>Sets the navigation bar title color for inapp messages of type html, url, image and map<br/>By default, it is set to nil to keep app's default<br/>

```swift
@objc var navigationTitleFont: UIFont? { get set }
```

>Sets the navigation bar title font for inapp messages of type html, url, image and map<br/>By default, it is set to nil to keep app's default

```swift
@objc var navigationBackgroundColor: UIColor? { get set }
```

>Sets the navigation bar background color for inapp messages of type html, url, image and map<br/>By default, it is set to nil to keep app's default

```swift
@objc var navigationMenuCloseButtonSwitchPosition: Bool { get set }
```

>Sets whether the positions of menu and close buttons need to be switched for inapp messages of type html, url, image and map<br/>By default, it is set to false (menu button is on the left side and close button on the right side, of the navigation bar)

```swift
@objc var navigationMenuButtonColor: UIColor? { get set }
```

>Sets the navigation bar menu button color for inapp messages of type html, url, image and map<br/>By default, it is set to nil to keep app's default

```swift
@objc var navigationMenuButtonAlternateAssetName: String { get set }
```

>Specifies a custom asset name the SDK needs to use for the menu button<br/>By default, it is set to `SM.Menu`

```swift
@objc var navigationCloseButtonColor: UIColor? { get set }
```

>Sets the navigation bar close button color for inapp messages of type html, url, image and map<br/>By default, it is set to nil to keep app's default

```swift
@objc var navigationCloseButtonAlternateAssetName: String { get set }
```

>Specifies a custom asset name the SDK needs to use for the close button<br/>By default, it is set to `SM.Close`

```swift
@objc var navigationArrowButtonsColor: UIColor? { get set }
```

>Sets the navigation bar navigation arrows button color for inapp messages of type url<br/>By default, it is set to nil to keep app's default

```swift
@objc var navigationArrowBackButtonAlternateAssetName: String { get set }
```

>Specifies a custom asset name the SDK needs to use for the navigation arrow back button<br/>By default, it is set to `SM.Back`

```swift
@objc var navigationArrowForwardButtonAlternateAssetName: String { get set }
```

>Specifies a custom asset name the SDK needs to use for the navigation arrow forward button<br/>By default, it is set to `SM.Forward`

```swift
@objc var viewBackgroundColor: UIColor? { get set }
```

>Sets the view background color for inapp messages of type html, url, image and map<br/>By default, it is set to nil to keep app's default

```swift
@objc var linksColor: UIColor? { get set }
```

>Sets the links text color for any type of inapp message<br/>By default, it is set to nil to keep app's default

```swift
@objc var presentWithTransition: Bool { get set }
```

>Defines whether the view controller will be presented and dismissed with a transition, for inapp messages of type html, url, image and map<br/>By default, it is set to false

```swift
@objc var transition: SMViewTransition { get set }
```

>If ``SMInAppMessageStyleOptions/presentWithTransition`` is set to `true` and ``SMInAppMessageStyleOptions/transitioningDelegate`` to `nil`, you can use one ``SMViewTransition``<br/>By default, it is set to .horizontalSlide

```swift
@objc var transitioningDelegate: UIViewControllerTransitioningDelegate? { get set }
```

>Defines a custom UIViewControllerTransitioningDelegate to manage the view controller transition on your own, for inapp messages of type html, url, image and map<br/>By default, it is set to nil, so SDK's default one will be used (slide left/right)

```swift
@objc var imageCanBeTapped: Bool { get set }
```

>Defines whether inapps of type image can be tapped.<br/>If set to true, it will use the first link defined in Selligent UI and will remove it from the list of links to show after clicking in the Menu button (hidding it if no other link has been defined)<br/>By default, it is set to false

```swift
@objc var reloadButtonColor: UIColor? { get set }
```

>Sets the reload button color for inapp messages of type url and image<br/>By default, it is set to nil to keep app's default

```swift
@objc var reloadButtonAlternateAssetName: String { get set }
```

>Specifies a custom asset name the SDK needs to use for the reload button<br/>By default, it is set to `SM.Reload`
