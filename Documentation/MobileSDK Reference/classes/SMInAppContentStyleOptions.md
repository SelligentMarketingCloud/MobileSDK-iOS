# SMInAppContentStyleOptions

## Properties
```swift
@objc var mainViewIsScrollable: Bool { get set }
```

>Inform the sdk if the main container view  of your in app content must be scrollable<br/>By default, it is set to true

```swift
@objc var mainViewBackgroundColor: UIColor? { get set }
```

>Set the main container view of your in app contents background color<br/>By default, it is UIColor.clear

```swift
@objc var activityIndicatorStyle: UIActivityIndicatorView.Style { get set }
```

>Set the UIActivityIndicator style<br/>By default, it is UIActivityIndicatorView.Style.gray / UIActivityIndicatorView.Style.medium

```swift
@objc var isStatusBarHidden: Bool { get set }
```

>Set the boolean to determine if status bar must be hidden or not<br/>By default, it is true

```swift
@objc var boxLeading: CGFloat { get set }
```

>Set the leading constant between edge of view and every in app content box<br/>CGFloat must be a positive value.<br/>By default, it is set to 10

```swift
@objc var boxTrailing: CGFloat { get set }
```

>Set the trailing constant between edge of view and every in app content box<br/>CGFloat must be a positive value.<br/>By default, it is set to 10

```swift
@objc var marginBetweenBoxes: CGFloat { get set }
```

>Set the Margin between bottom of a box and top of next one<br/>CGFloat must be a positive value.<br/>By default, it is set to 20

```swift
@objc var marginBetweenFirstBoxAndTopOfView: CGFloat { get set }
```

>Set the Margin between top of first box and top of view<br/>CGFloat must be a positive value.<br/>By default, it is set to 20

```swift
@objc var marginBetweenLastBoxAndBottomOfView: CGFloat { get set }
```

>Set the Margin between bottom of last box and bottom of view<br/>CGFloat must be a positive value.<br/>By default, it is set to 20

```swift
@objc var boxBorderWidth: CGFloat { get set }
```

>Set the border width for all boxes<br/>CGFloat must be a positive value.<br/>By default, it is set to 1

```swift
@objc var boxBorderColor: UIColor? { get set }
```

>Set the color of box Border<br/>By default, it is set to UIColor(red: 0.5, green: 0.5, blue: 0.5, alpha: 0.8)

```swift
@objc var boxCornerRadius: CGFloat { get set }
```

>Set the radius of the corner for all boxes<br/>CGFloat must be a positive value.<br/>By default, it is not set

```swift
@objc var boxBackgroundColor: UIColor? { get set }
```

>Set the background color of all boxes<br/>By default, it is UIColor.clear

```swift
@objc var boxShadowColor: UIColor? { get set }
```

>Set the shadow color of all boxes<br/>By default, it is not set

```swift
@objc var boxShadowOpacity: Float { get set }
```

>Set the shadow opacity of all boxes<br/>By default, it is not set

```swift
@objc var boxShadowRadius: CGFloat { get set }
```

>Set the shadow radius of all boxes<br/>By default, it is not set

```swift
@objc var boxShadowOffset: CGSize { get set }
```

>Set the shadow offset of all boxes<br/>By default, it is CGSize.zero

```swift
@objc var titleBorderWidth: CGFloat { get set }
```

>Set the border width for title<br/>By default, it is not set

```swift
@objc var titleBorderColor: UIColor? { get set }
```

>Set the color of title border<br/>By default, it is not set

```swift
@objc var titleCornerRadius: CGFloat { get set }
```

>Set the radius of the corner for all boxes<br/>By default, it is not set

```swift
@objc var titleBackgroundColor: UIColor? { get set }
```

>Set the background color of all titles<br/>By default, it is UIColor.clear

```swift
@objc var titleNumberOfLines: Int { get set }
```

>Set the number of lines of all titles<br/>By default, it is 1

```swift
@objc var titleLineBreakMode: NSLineBreakMode { get set }
```

>Set the NSLineBreakMode of all titles<br/>By default, it is NSLineBreakMode.byWordWrapping

```swift
@objc var titleTextAlignment: NSTextAlignment { get set }
```

>Set the title text alignment<br/>By default, it is NSTextAlignment.left

```swift
@objc var titleAttributes: [AnyHashable: Any]? { get set }
```

>Set the attributes that will be passed to NSAttributedString init which will create the text that will be display for title<br/>By default, it is nil

```swift
@objc var titleTextColor: UIColor? { get set }
```

>Set title text color<br/>By default, it is iOS default

```swift
@objc var titleFont: UIFont? { get set }
```

>Set font of the title<br/>By default, it is UIFont.systemFont(ofSize: 18, weight: .black)

```swift
@objc var titleTrailing: CGFloat { get set }
```

>Set the trailing between the title container and the box<br/>By default, it is 10.0

```swift
@objc var titleLeading: CGFloat { get set }
```

>Set the leading between the title container and the box<br/>By default, it is 10.0

```swift
@objc var titleTop: CGFloat { get set }
```

>Set the top between the title container and the box<br/>By default, it is 20.0

```swift
@objc var titleShadowColor: UIColor? { get set }
```

>Set the shadow color of all titles<br/>By default, it is not set

```swift
@objc var titleShadowOpacity: Float { get set }
```

>Set the shadow opacity of all titles<br/>By default, it is not set

```swift
@objc var titleShadowRadius: CGFloat { get set }
```

>Set the corner radius of all titles<br/>By default, it is not set

```swift
@objc var titleShadowOffset: CGSize { get set }
```

>Set the shadow offset  of all titles<br/>By default, it is not set

```swift
@objc var showTitleBorderBottom: Bool { get set }
```

>Set the bool that will tell if a border bottom must be displayed under all titles in box<br/>By default, it is false

```swift
@objc var titleBorderBottomColor: UIColor? { get set }
```

>Set the border color of all border bottom that are displayed under all titles in box<br/>By default, it is UIColor(red: 0.5, green: 0.5, blue: 0.5, alpha: 0.8)

```swift
@objc var textViewTrailing: CGFloat { get set }
```

>Set the trailing between the textview and the box<br/>By default, it is 20.0

```swift
@objc var textViewLeading: CGFloat { get set }
```

>Set the leading between the textview and the box<br/>By default, it is 10.0

```swift
@objc var textViewTop: CGFloat { get set }
```

>Set the top between the textview and the box<br/>By default, it is 10.0

```swift
@objc var textViewContentOffset: CGPoint { get set }
```

>Set the textview content offset<br/>By default, it is CGPoint.zero

```swift
@objc var textViewContentInset: UIEdgeInsets { get set }
```

>Set the textview content edge inset<br/>By default, it is UIEdgeInsets.zero

```swift
@objc var textViewBorderWidth: CGFloat { get set }
```

>Set the border width for textview<br/>By default, it is not set

```swift
@objc var textViewBorderColor: UIColor? { get set }
```

>Set the color of textview Border<br/>By default, it is not set

```swift
@objc var textViewCornerRadius: CGFloat { get set }
```

>Set the radius of the corner for all textview<br/>By default, it is not set

```swift
@objc var textViewBackgroundColor: UIColor? { get set }
```

>Set the background color of textview<br/>By default, it is UIColor.clear

```swift
@objc var linksAlignment: SMContentAlignment { get set }
```

>Set position of the links, this can be Left, Right, or Center<br/>By default, it is SMContentAlignment.left

```swift
@objc var linksMargin: CGFloat { get set }
```

>Set the constant margin between links and edge of box (depends also of the linksAlignment property: if linksAligment is kSMAlignLeft than this property will only be applied for Leading margin, if linksAlignment is kSMAlignRight than this property is applied to trailing margin, if linksAlignment is kSMAlignCenter than this property is applied both for leading and trailing)<br/>By default, it is 10

```swift
@objc var linksTop: CGFloat { get set }
```

>Set the constant between links top and bottom of textview<br/>By default  it is 10

```swift
@objc var linksBottom: CGFloat { get set }
```

>Set the constant between links bottom and bottom of box<br/>By default  it is 10

```swift
@objc var marginBetweenLinks: CGFloat { get set }
```

>Set the constant between links margin - useful when there is two links that will be displayed<br/>By default  it is 10

```swift
@objc var linkBorderWidth: CGFloat { get set }
```

>Set the border width for links<br/>By default, it is not set

```swift
@objc var linkBorderColor: UIColor? { get set }
```

>Set the color of link  Border<br/>By default, it is not set

```swift
@objc var linkCornerRadius: CGFloat { get set }
```

>Set the corner radius for links<br/>By default, it is not set

```swift
@objc var linkShadowColor: UIColor? { get set }
```

>Set the shadow color of all links<br/>By default, it is not set

```swift
@objc var linkShadowOpacity: Float { get set }
```

>Set the shadow opacity of all links<br/>By default, it is not set

```swift
@objc var linkShadowRadius: CGFloat { get set }
```

>Set the shadow radius of all links<br/>By default, it is not set

```swift
@objc var linkShadowOffset: CGSize { get set }
```

>Set the shadow offset of all links<br/>By default, it is CGSize.zero

```swift
@objc var linkBackgroundColor: UIColor? { get set }
```

>Set the background color of link<br/>By default, it is UIColor.clear

```swift
@objc var linkTextColor: UIColor? { get set }
```

>Set the text color in link<br/>By default, it is UIColor(red: 0.5, green: 0.5, blue: 0.5, alpha: 0.8)

```swift
@objc var linkFont: UIFont? { get set }
```

>Set the font of links<br/>By default, it is iOS label default

```swift
@objc var linkContentEdgeInsets: UIEdgeInsets { get set }
```

>Set the link content edge inset<br/>By default, it is not set
