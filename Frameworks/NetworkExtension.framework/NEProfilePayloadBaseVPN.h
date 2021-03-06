/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSString;

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase {
    NSString *_password;
    NSString *_pin;
    NSString *_proxyPassword;
    NSString *_proxyUserName;
    NSString *_sharedSecret;
    NSString *_userName;
    bool_passwordRequired;
    bool_pinRequired;
    bool_proxyPasswordRequired;
    bool_proxyUserNameRequired;
    bool_sharedSecretRequired;
    bool_userNameRequired;
}

@property(copy) NSString * password;
@property bool passwordRequired;
@property(copy) NSString * pin;
@property bool pinRequired;
@property(copy) NSString * proxyPassword;
@property bool proxyPasswordRequired;
@property(copy) NSString * proxyUserName;
@property bool proxyUserNameRequired;
@property(copy) NSString * sharedSecret;
@property bool sharedSecretRequired;
@property(copy) NSString * userName;
@property bool userNameRequired;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)extractPayloadContents:(id)arg1;
- (void)extractPayloadContentsHTTPProxy:(id)arg1;
- (void)extractPayloadContentsPIN:(id)arg1;
- (void)extractPayloadContentsSharedSecret:(id)arg1;
- (void)extractPayloadContentsUserNamePassword:(id)arg1;
- (id)getPreprocessedPayloadContents;
- (id)initWithPayload:(id)arg1;
- (id)password;
- (bool)passwordRequired;
- (id)pin;
- (bool)pinRequired;
- (id)proxyPassword;
- (bool)proxyPasswordRequired;
- (id)proxyUserName;
- (bool)proxyUserNameRequired;
- (void)setPassword:(id)arg1;
- (void)setPasswordRequired:(bool)arg1;
- (void)setPin:(id)arg1;
- (void)setPinRequired:(bool)arg1;
- (bool)setPostprocessedPayloadContents:(id)arg1;
- (void)setProxyPassword:(id)arg1;
- (void)setProxyPasswordRequired:(bool)arg1;
- (void)setProxyUserName:(id)arg1;
- (void)setProxyUserNameRequired:(bool)arg1;
- (void)setSharedSecret:(id)arg1;
- (void)setSharedSecretRequired:(bool)arg1;
- (void)setUserName:(id)arg1;
- (void)setUserNameRequired:(bool)arg1;
- (id)sharedSecret;
- (bool)sharedSecretRequired;
- (id)userName;
- (bool)userNameRequired;
- (id)validatePayload;

@end
