/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimParameterGroup, NSMutableArray, NSString, TSDGLShader;

@interface KNBuildTrace : KNAnimationEffect <KNFrameBuildAnimator> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _animationRect;
    TSDGLShader *_circleShader;
    } _drawableFrame;
    TSDGLShader *_lineShader;
    TSDGLShader *_objectShader;
    KNAnimParameterGroup *_parameterGroup;
    NSMutableArray *_traceDrawObjects;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned long long)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (id)localizedMenuString:(int)arg1;
+ (bool)requiresSingleTexturePerStage;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfEffectWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(id)arg2;
- (id)initWithAnimationContext:(id)arg1;
- (id)p_extraTraceObjectsWithContext:(id)arg1 originalTraceObjects:(id)arg2;
- (void)p_setupShaders;
- (void)p_setupTraceEffectsWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)teardown;

@end
