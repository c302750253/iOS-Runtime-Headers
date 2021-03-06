/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCDatabaseManager, NSObject<OS_dispatch_queue>;

@interface BRCStagePersistedState : NSObject <NSSecureCoding> {
    BRCDatabaseManager *_dbManager;
    long long _latestGCStartTime;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> * queue;

+ (id)loadFromClientStateInDBManager:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)queue;
- (void)setLatestGCStartTime:(long long)arg1;
- (void)setQueue:(id)arg1;
- (long long)timeSinceLatestGCStartTime;

@end
