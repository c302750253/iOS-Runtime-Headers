/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSDictionary, NSMutableDictionary, NSString;

@interface DAResolvedRecipient : NSObject {
    long long _availabilityStatus;
    long long _certificatesStatus;
    NSMutableDictionary *_mResolvedEmailToX509Certs;
    NSString *_mergedFreeBusy;
    long long _status;
}

@property long long availabilityStatus;
@property long long certificatesStatus;
@property(retain) NSMutableDictionary * mResolvedEmailToX509Certs;
@property(retain) NSString * mergedFreeBusy;
@property(readonly) NSDictionary * resolvedEmailToX509Certs;
@property long long status;

- (void).cxx_destruct;
- (void)addCert:(id)arg1 forEmailAddress:(id)arg2;
- (long long)availabilityStatus;
- (long long)certificatesStatus;
- (id)description;
- (id)mResolvedEmailToX509Certs;
- (id)mergedFreeBusy;
- (id)resolvedEmailToX509Certs;
- (void)setAvailabilityStatus:(long long)arg1;
- (void)setCertificatesStatus:(long long)arg1;
- (void)setMResolvedEmailToX509Certs:(id)arg1;
- (void)setMergedFreeBusy:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
