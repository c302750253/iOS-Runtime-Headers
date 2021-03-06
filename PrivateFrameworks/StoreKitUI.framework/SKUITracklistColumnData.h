/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray;

@interface SKUITracklistColumnData : NSObject {
    NSArray *_columns;
    double _interColumnSpacing;
    double _leftEdgeInset;
    double _rightEdgeInset;
}

@property(copy) NSArray * columns;
@property double interColumnSpacing;
@property double leftEdgeInset;
@property double rightEdgeInset;

- (void).cxx_destruct;
- (id)_initSKUITracklistColumnData;
- (void)adjustColumnsToFitWidth:(double)arg1;
- (id)columnForIdentifier:(long long)arg1;
- (id)columns;
- (void)enumerateColumnsForHeader:(id)arg1 usingBlock:(id)arg2;
- (void)enumerateColumnsForTrack:(id)arg1 usingBlock:(id)arg2;
- (id)initWithRepresentativeTrack:(id)arg1;
- (double)interColumnSpacing;
- (double)leftEdgeInset;
- (double)rightEdgeInset;
- (void)setColumns:(id)arg1;
- (void)setInterColumnSpacing:(double)arg1;
- (void)setLeftEdgeInset:(double)arg1;
- (void)setRightEdgeInset:(double)arg1;
- (id)viewElementsForTrack:(id)arg1 columnIndex:(long long)arg2;

@end
