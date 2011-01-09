/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */



@interface UITableTextAccessibilityElement : UIAccessibilityElement 
{
    id _delegate;
    id _attributeDelegate;
    SEL _selector;
}


- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLanguage;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)accessibilityActivate;
- (id)_tableViewCellAttributeDelegate;
- (id)_tableViewCellTextDelegate;
- (id)textDelegate;
- (void)setTextDelegate:(id)arg1;
- (void)setAttributeDelegate:(id)arg1;
- (void)setTextDelegate:(id)arg1 selector:(SEL)arg2;

@end