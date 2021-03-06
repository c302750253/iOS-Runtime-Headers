/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLOptionElement : DOMHTMLElement {
}

@property bool defaultSelected;
@property bool disabled;
@property(readonly) DOMHTMLFormElement * form;
@property(readonly) int index;
@property(copy) NSString * label;
@property bool selected;
@property(copy,readonly) NSString * text;
@property(copy) NSString * value;

- (id)createPickerCell;
- (id)createSelectedItem;
- (bool)defaultSelected;
- (bool)disabled;
- (id)form;
- (int)index;
- (id)itemTitle;
- (id)label;
- (void)populateCell:(id)arg1;
- (bool)selected;
- (void)setDefaultSelected:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)text;
- (id)value;

@end
