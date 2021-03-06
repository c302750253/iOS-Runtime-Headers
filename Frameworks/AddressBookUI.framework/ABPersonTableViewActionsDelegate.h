/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABFMFActionButtonsDelegate>, ABPersonTableActionDataSource, ABPersonTableTinyActionCell, ABPersonTableViewDataSource, ABStyleProvider, ABUIPerson, NSString;

@interface ABPersonTableViewActionsDelegate : NSObject <UIActionSheetDelegate, ABPersonTableActionDelegate, ABPersonTableTinyActionDelegate> {
    <ABFMFActionButtonsDelegate> *_FMFActionButtonsDelegate;
    ABPersonTableActionDataSource *_actionDataSource;
    int _actionSheetType;
    ABPersonTableViewDataSource *_dataSource;
    int _highlightedValueIdentifier;
    ABUIPerson *_highlightedValuePerson;
    int _highlightedValueProperty;
    ABStyleProvider *_styleProvider;
    ABPersonTableTinyActionCell *_tinyActionCell;
    bool_actionShouldPickHighlightedValue;
    bool_highlightedValueIsImportant;
}

@property <ABFMFActionButtonsDelegate> * FMFActionButtonsDelegate;
@property(readonly) ABPersonTableActionDataSource * actionDataSource;
@property bool actionShouldPickHighlightedValue;
@property ABPersonTableViewDataSource * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property int highlightedValueIdentifier;
@property(retain) ABUIPerson * highlightedValuePerson;
@property int highlightedValueProperty;
@property(retain) ABStyleProvider * styleProvider;
@property(readonly) Class superclass;
@property(readonly) ABPersonTableTinyActionCell * tinyActionCell;

- (id)FMFActionButtonsDelegate;
- (unsigned long long)_sectionForAction:(id)arg1;
- (void)action:(id)arg1 willShowButton:(id)arg2 forValueAtIndex:(long long)arg3 inPropertyGroup:(id)arg4;
- (long long)actionCountForBottomGroupingExcludingProperty:(int)arg1 excludedPropertyGroupContext:(void*)arg2;
- (long long)actionCountForGrouping:(long long)arg1 inSection:(long long)arg2 excludingProperty:(int)arg3 excludedPropertyGroupContext:(void*)arg4 outExcludedIndexPaths:(id*)arg5;
- (long long)actionCountForTopGroupingInSection:(long long)arg1 excludingProperty:(int)arg2 excludedPropertyGroupContext:(void*)arg3 outExcludedIndexPaths:(id*)arg4;
- (id)actionDataSource;
- (long long)actionGroupingCountForPropertyGroup:(id)arg1 whenEditing:(bool)arg2 assumeThatPropertyHasSection:(bool)arg3;
- (long long)actionGroupingCountForPropertyGroup:(id)arg1 whenEditing:(bool)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (bool)actionShouldPickHighlightedValue;
- (id)actionsForProperty:(int)arg1 withActionGrouping:(long long)arg2;
- (id)actionsForProperty:(int)arg1 withActionGroupingAtIndex:(long long)arg2;
- (id)addActionWithTitle:(id)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(int)arg5 actionGrouping:(long long)arg6 ordering:(long long)arg7;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 property:(int)arg7 actionGrouping:(long long)arg8 ordering:(long long)arg9;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(int)arg5 actionGrouping:(long long)arg6 ordering:(long long)arg7;
- (void)addToFavoritesButtonClicked:(id)arg1;
- (void)callContact:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)conference:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)dataSource;
- (void)dealloc;
- (long long)groupingCountForProperty:(int)arg1;
- (bool)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(long long)arg5 ordering:(long long)arg6 outActions:(id*)arg7 outIndex:(long long*)arg8;
- (bool)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(long long)arg5 ordering:(long long)arg6;
- (int)highlightedValueIdentifier;
- (id)highlightedValuePerson;
- (int)highlightedValueProperty;
- (id)init;
- (bool)isFavoriteOfType:(int)arg1 inPropertyGroup:(id)arg2 atIndex:(long long)arg3;
- (id)newActionsForProperty:(int)arg1;
- (void)performPersonTableAction:(id)arg1 atIndexPath:(id)arg2;
- (bool)personTableTinyActionCell:(id)arg1 shouldShowAction:(id)arg2;
- (void)presentDifferentiationSheetForAction:(id)arg1;
- (void)presentDifferentiationSheetIfNeededForAction:(id)arg1 withPropertyGroup:(id)arg2;
- (void)reloadBottomActionCellAnimated:(bool)arg1;
- (void)reloadBottomActionDataForFavorites:(bool)arg1 texting:(bool)arg2 sharing:(bool)arg3 conferencing:(bool)arg4;
- (void)reloadBottomActions;
- (void)reloadBottomActionsAnimated:(bool)arg1 favorites:(bool)arg2 texting:(bool)arg3 sharing:(bool)arg4 conferencing:(bool)arg5;
- (void)reloadBottomActionsAnimated:(bool)arg1;
- (void)reloadPrimaryPropertyActionsSection;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 property:(int)arg3 actionGrouping:(long long)arg4 ordering:(long long)arg5 animated:(bool)arg6;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 property:(int)arg3 actionGrouping:(long long)arg4 ordering:(long long)arg5;
- (void)sendTextMessage:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)setActionShouldPickHighlightedValue:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFMFActionButtonsDelegate:(id)arg1;
- (void)setHighlightedValueIdentifier:(int)arg1;
- (void)setHighlightedValuePerson:(id)arg1;
- (void)setHighlightedValueProperty:(int)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)shareContactButtonClicked:(id)arg1;
- (bool)shouldShowAction:(id)arg1 excludingProperty:(int)arg2 excludedPropertyGroupContext:(void*)arg3;
- (bool)shouldShowActionForProperty:(int)arg1 propertyGroupContext:(void*)arg2 assumeThatPropertyHasSection:(bool)arg3;
- (bool)shouldShowActionForProperty:(int)arg1 propertyGroupContext:(void*)arg2;
- (bool)shouldShowAddToFavoritesAction;
- (id)styleProvider;
- (void)tellDelegateAddToFavoriteWasSelectedForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 entryType:(int)arg3;
- (id)tinyActionCell;

@end
