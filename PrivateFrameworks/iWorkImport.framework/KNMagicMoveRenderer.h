/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDate, NSMapTable, NSMutableArray, NSOperationQueue, NSTimer, TSDFPSCounter;

@interface KNMagicMoveRenderer : KNTransitionRenderer {
    boolmIsDone;
    boolmIsRealtime;
    NSMutableArray *mAnimatedLayersRetained;
    double mAnimationStartTime;
    NSDate *mLastMorphDate;
    NSMapTable *mLayerToOldHiddenMap;
    NSMutableArray *mLayerToOldParentArray;
    NSMutableArray *mMatches;
    TSDFPSCounter *mMorphFPSCounter;
    double mMorphFrameDurationAverage;
    NSMutableArray *mMorphLayerUpdates;
    NSMutableArray *mMorphMatches;
    NSOperationQueue *mMorphOperationQueue;
    NSTimer *mMorphUpdateTimer;
}

+ (void)generateLayersForMatches:(id)arg1 addToArray:(id)arg2 oldHiddenValuesMap:(id)arg3;
+ (void)generateLayersForTexture:(id)arg1 inTextureSet:(id)arg2 isOutgoing:(bool)arg3 addToArray:(id)arg4 oldHiddenValuesMap:(id)arg5;

- (bool)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(bool)arg2;
- (void)addLayersForSlideIndex:(unsigned long long)arg1;
- (void)animateWithDelay:(double)arg1;
- (void)dealloc;
- (id)initWithEffectClass:(Class)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6;
- (void)p_cleanUpUpdateMorphAnimations;
- (void)p_generateMagicMoveMatches;
- (void)p_restoreLayerHierarchy;
- (void)p_updateMorphAnimations;
- (void)p_updateMorphAnimationsForTime:(double)arg1;
- (void)removeAnimationsAndFinish:(bool)arg1;
- (void)renderOutgoingSlideAndPrecacheIncomingSlide;
- (void)renderSlideIndex:(unsigned long long)arg1;
- (void)setupPluginContext;
- (void)stopAnimations;
- (void)teardownTransitionIsExitingShow:(bool)arg1;
- (void)updateAnimationsForLayerTime:(double)arg1;

@end
