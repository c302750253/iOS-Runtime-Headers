/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SACreateSessionInfoRequest : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * refId;
@property(copy) NSData * sessionInfoRequest;
@property(readonly) Class superclass;

+ (id)createSessionInfoRequest;
+ (id)createSessionInfoRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)sessionInfoRequest;
- (void)setSessionInfoRequest:(id)arg1;

@end
