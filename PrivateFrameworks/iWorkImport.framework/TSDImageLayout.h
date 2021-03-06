/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDBezierPath, TSDImageAdjustments, TSDInfoGeometry, TSDLayoutGeometry, TSDMaskLayout, TSDPathSource<TSDSmartPathSource>;

@interface TSDImageLayout : TSDMediaLayout <TSDShapeControlLayout> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    boolmInInstantAlphaMode;
    boolmIsUpdatingImageAdjustments;
    boolmMaskIntersectsImage;
    boolmScalingInMaskMode;
    TSDLayoutGeometry *mBaseImageLayoutGeometry;
    TSDInfoGeometry *mBaseInfoGeometry;
    TSDImageAdjustments *mDynamicImageAdjustments;
    TSDInfoGeometry *mDynamicInfoGeometry;
    int mHasAlpha;
    TSDLayoutGeometry *mImageGeometry;
    } mLayoutToImageTransform;
    } mLayoutToMaskTransform;
    int mMaskEditMode;
    TSDMaskLayout *mMaskLayout;
    struct CGPath { } *mPathToStroke;
    TSDBezierPath *mTracedPath;
}

@property(getter=isInInstantAlphaMode,readonly) bool inInstantAlphaMode;
@property(getter=isInMaskEditMode,readonly) bool inMaskEditMode;
@property(getter=isInMaskScaleMode,readonly) bool inMaskScaleMode;
@property(readonly) bool isDraggingInMaskEditMode;
@property(readonly) bool isResizingInMaskEditMode;
@property(readonly) bool isRotatingInMaskEditMode;
@property(readonly) int maskEditMode;
@property(readonly) int maskEditModeForDragging;
@property(readonly) int maskEditModeForLayoutState;
@property(readonly) int maskEditModeForResizing;
@property(readonly) int maskEditModeForRotating;
@property(readonly) TSDPathSource<TSDSmartPathSource> * smartPathSource;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrameForProvidingGuidesInRoot;
- (void)beginDrag;
- (void)beginDynamicOperation;
- (void)beginEditingImageInMaskEditMode;
- (void)beginEditingMaskInMaskEditMode;
- (void)beginInstantAlphaMode;
- (void)beginResize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (bool)canAspectRatioLockBeChangedByUser;
- (struct CGPoint { double x1; double x2; })centerForConnecting;
- (struct CGPoint { double x1; double x2; })centerForRotation;
- (struct CGPoint { double x1; double x2; })centerForRotationInMaskMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeAlignmentFrameInRoot:(bool)arg1;
- (id)computeLayoutGeometry;
- (id)currentInfoGeometry;
- (void)dealloc;
- (void)dragBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)dynamicImageAdjustmentsChangeDidBegin;
- (void)dynamicImageAdjustmentsChangeDidEnd;
- (void)dynamicImageAdjustmentsUpdateToValue:(id)arg1;
- (void)endDrag;
- (void)endDynamicOperation;
- (void)endInstantAlphaMode;
- (void)endMaskEditMode;
- (id)geometryForTransforming;
- (bool)hasAlpha;
- (bool)hasMaskingPath;
- (id)i_computeWrapPath;
- (bool)i_useBaseCapturedAlignmentFrameOriginForInline;
- (id)imageAdjustments;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })imageDataToVisualSizeTransform;
- (id)imageGeometry;
- (id)imageGeometryInRoot;
- (id)imageInfo;
- (id)initWithInfo:(id)arg1;
- (id)inspectorGeometry;
- (bool)isDraggingInMaskEditMode;
- (bool)isDynamicallyChangingImageAdjustments;
- (bool)isInInstantAlphaMode;
- (bool)isInMaskEditMode;
- (bool)isInMaskScaleMode;
- (bool)isInvisible;
- (bool)isResizingInMaskEditMode;
- (bool)isRotatingInMaskEditMode;
- (id)layoutGeometryFromInfo;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layoutToImageTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layoutToMaskTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layoutTransformInInfoSpace:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (int)maskEditMode;
- (int)maskEditModeForDragging;
- (int)maskEditModeForLayoutState;
- (int)maskEditModeForResizing;
- (int)maskEditModeForRotating;
- (bool)maskIntersectsImage;
- (id)maskLayout;
- (void)maskModeScaleDidBegin;
- (void)maskModeScaleDidEnd;
- (void)maskWasApplied;
- (void)maskWasReset;
- (void)offsetGeometryBy:(struct CGPoint { double x1; double x2; })arg1;
- (id)originalImageGeometry;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pathBoundsWithoutStroke;
- (struct CGPath { }*)pathToStroke;
- (void)processChangedProperty:(int)arg1;
- (bool)resizeMayChangeAspectRatio;
- (void)resizeWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 asChild:(bool)arg2;
- (bool)shouldDisplayGuides;
- (bool)shouldRenderFrameStroke;
- (bool)shouldSnapWhileResizing;
- (struct CGSize { double x1; double x2; })sizeOfFrameRectIncludingCoverage;
- (id)smartPathSource;
- (bool)supportsRotation;
- (void)takeRotationFromTracker:(id)arg1;
- (void)takeScaledImageGeometry:(id)arg1 maskGeometry:(id)arg2;
- (void)takeSizeFromTracker:(id)arg1;
- (void)updateChildrenFromInfo;
- (id)visibleGeometries;

@end
