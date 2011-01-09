/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class UIPDFScrollViewDelegate, UIPDFContentLayer, UIPDFDocumentLayout, UIPDFSelectionLayer, UIPDFAccessoryView, UIPDFViewTouchHandler, NSLock, UIPDFContentLayerDelegate, UIPDFMagnifier;



@interface UIPDFViewPrivateVars : NSObject 
{
    float documentScale;
    float baseDocumentScale;
    UIPDFContentLayer *contentLayer;
    struct CGSize { 
        float width; 
        float height; 
    } contentSize;
    struct CGPoint { 
        float x; 
        float y; 
    } contentOffset;
    UIPDFAccessoryView *accessoryView;
    UIPDFContentLayerDelegate *contentLayerDelegate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } originalFrame;
    struct CGPoint { 
        float x; 
        float y; 
    } viewOffset;
    UIPDFSelectionLayer *selectionLayer;
    struct UIPDFPageLayout { } *pageLayout;
    UIPDFViewTouchHandler *gestureHandler;
    UIPDFDocumentLayout *layout;
    BOOL laidOutSubviews;
    NSLock *lock_accessSelection;
    UIPDFMagnifier *magnifier;
    BOOL portraitMode;
    UIPDFScrollViewDelegate *scrollViewDelegate;
}



@end