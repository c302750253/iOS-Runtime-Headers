/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSDate, NSDictionary;

@interface RadioMutableTrackPlaybackDescriptor : RadioTrackPlaybackDescriptor {
}

@property(getter=isCurrent) bool current;
@property(retain) NSDate * expirationDate;
@property double pauseTime;
@property(retain) NSDate * skipDate;
@property long long storeID;
@property(copy) NSDictionary * trackInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCurrent:(bool)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setPauseTime:(double)arg1;
- (void)setSkipDate:(id)arg1;
- (void)setStoreID:(long long)arg1;
- (void)setTrackInfo:(id)arg1;

@end
