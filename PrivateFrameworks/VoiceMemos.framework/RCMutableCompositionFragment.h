/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSURL;

@interface RCMutableCompositionFragment : RCCompositionFragment {
}

@property(retain) NSURL * AVOutputURL;
@property double contentDuration;
@property struct { double x1; double x2; } timeRangeInComposition;
@property struct { double x1; double x2; } timeRangeInContentToUse;

- (void)intersectWithTimeRange:(struct { double x1; double x2; })arg1;

@end