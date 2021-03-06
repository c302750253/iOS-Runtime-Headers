/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartAlphaBlendAnimationClip : TSCH3DChartAnimationClip {
    boolmAlwaysRender;
    boolmBlendOpaque;
    boolmDelayOpaque;
    id mLayerKey;
}

@property bool alwaysRender;
@property bool blendOpaque;
@property bool delayOpaque;
@property(retain) id layerKey;

- (bool)alwaysRender;
- (bool)blendOpaque;
- (void)dealloc;
- (bool)delayOpaque;
- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 context:(id)arg4;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4 context:(id)arg5;
- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didTransformElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; boolx5; boolx6; boolx7; boolx8; }*)arg1 sceneObject:(id)arg2 context:(id)arg3;
- (void)didUpdateAnimationTimeForContext:(id)arg1 layers:(id)arg2;
- (id)layerKey;
- (void)p_updateOpacityForLayers:(id)arg1 context:(id)arg2;
- (float)p_updateUniform:(id)arg1 context:(id)arg2;
- (void)protected_addShaderEffect:(id)arg1;
- (float)protected_elementAlphaForContext:(id)arg1;
- (bool)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (struct ElementRenderPass { int x1; })renderPassForElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; boolx5; boolx6; boolx7; boolx8; }*)arg1 sceneObject:(id)arg2 context:(id)arg3;
- (struct ElementRenderPass { int x1; })renderPassForSceneObject:(id)arg1;
- (void)setAlwaysRender:(bool)arg1;
- (void)setBlendOpaque:(bool)arg1;
- (void)setDelayOpaque:(bool)arg1;
- (void)setLayerKey:(id)arg1;
- (void)willRunWithScene:(id)arg1 context:(id)arg2 layers:(id)arg3;
- (bool)willSubmitElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; boolx5; boolx6; boolx7; boolx8; }*)arg1 sceneObject:(id)arg2 context:(id)arg3;
- (bool)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo { id x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_3_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_3_1_2; } x3; id x4; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_5_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_5_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_5_1_3; } x5; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_6_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_6_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_6_1_3; } x6; unsigned int x7; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_8_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_8_1_2; } x8; float x9; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_10_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_10_1_2; } x10; float x11; }*)arg2 context:(id)arg3;
- (bool)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2 context:(id)arg3;

@end
