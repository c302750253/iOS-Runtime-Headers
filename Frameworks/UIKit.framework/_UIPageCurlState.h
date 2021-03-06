/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIView, _UIPageCurl;

@interface _UIPageCurlState : _UITransitionState {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    UIView *_backPageView;
    UIView *_backView;
    long long _completionCount;
    long long _curlState;
    long long _curlType;
    id _finally;
    UIView *_frontPageView;
    UIView *_frontView;
    } _initialLocation;
    _UIPageCurl *_pageCurl;
    } _referenceLocation;
    bool_finished;
    bool_willComplete;
}

@property(readonly) UIView * backPageView;
@property(readonly) UIView * backView;
@property(readonly) long long curlState;
@property(readonly) long long curlType;
@property(readonly) UIView * frontPageView;
@property(readonly) UIView * frontView;
@property(readonly) struct CGPoint { double x1; double x2; } initialLocation;
@property(readonly) _UIPageCurl * pageCurl;
@property(getter=hasPendingAnimations,readonly) bool pendingAnimations;
@property(readonly) struct CGPoint { double x1; double x2; } referenceLocation;

- (long long)_effectiveTransitionDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pageViewFrame;
- (void)addBackPageContent;
- (void)addFrontPageContent;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)backPageView;
- (id)backView;
- (void)cleanup;
- (void)cleanupWithFinishedState:(bool)arg1 completedState:(bool)arg2;
- (long long)curlState;
- (long long)curlType;
- (void)dealloc;
- (void)finally;
- (id)frontPageView;
- (id)frontView;
- (bool)hasPendingAnimations;
- (void)incrementCompletionCount;
- (id)initWithPageCurl:(id)arg1 andCurlType:(long long)arg2 fromLocation:(struct CGPoint { double x1; double x2; })arg3 withReferenceLocation:(struct CGPoint { double x1; double x2; })arg4 inDirection:(long long)arg5 withView:(id)arg6 revealingView:(id)arg7 completion:(id)arg8 finally:(id)arg9;
- (struct CGPoint { double x1; double x2; })initialLocation;
- (void)invalidatePageCurl;
- (bool)isCompatibleWithCurlOfType:(long long)arg1 inDirection:(long long)arg2;
- (id)pageCurl;
- (struct CGPoint { double x1; double x2; })referenceLocation;
- (void)setCurlState:(long long)arg1 willComplete:(bool)arg2;

@end
