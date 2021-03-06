/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABTransportButton, UIColor, UIImageView;

@interface ABPropertySimpleTransportCell : ABPropertySimpleCell {
    UIColor *_actionsColor;
    UIImageView *_starView;
    ABTransportButton *_transportIcon1;
    ABTransportButton *_transportIcon2;
    bool_allowsActions;
}

@property(retain) UIColor * actionsColor;
@property bool allowsActions;
@property(readonly) bool shouldShowStar;
@property(readonly) UIImageView * standardStarView;
@property(readonly) ABTransportButton * standardTransportIcon;
@property(readonly) ABTransportButton * transportIcon1;
@property(readonly) ABTransportButton * transportIcon2;

- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateStarImageForView:(id)arg1;
- (id)actionsColor;
- (bool)allowsActions;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)rightMostView;
- (void)setActionsColor:(id)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setCardGroupItem:(id)arg1;
- (bool)shouldPerformDefaultAction;
- (bool)shouldShowStar;
- (id)standardStarView;
- (id)standardTransportIcon;
- (void)transportButtonClicked:(id)arg1;
- (id)transportIcon1;
- (id)transportIcon2;
- (void)updateStarIcon;
- (void)updateTransportButtons;
- (void)updateWithPropertyItem:(id)arg1;
- (id)variableConstraints;

@end
