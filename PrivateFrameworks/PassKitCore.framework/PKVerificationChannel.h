/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString;

@interface PKVerificationChannel : NSObject <NSCopying, NSSecureCoding> {
    NSString *_contactPoint;
    NSString *_identifier;
    NSString *_sourceAddress;
    unsigned long long _type;
    NSString *_typeDescription;
    bool_requiresUserInteraction;
}

@property(copy) NSString * contactPoint;
@property(copy) NSString * identifier;
@property bool requiresUserInteraction;
@property(copy) NSString * sourceAddress;
@property unsigned long long type;
@property(copy) NSString * typeDescription;
@property(readonly) NSString * typeDescriptionUnlocalized;

+ (bool)supportsSecureCoding;
+ (id)verificationChannelWithDictionary:(id)arg1;

- (id)contactPoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)needsServerRequest;
- (bool)requiresUserInteraction;
- (void)setContactPoint:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRequiresUserInteraction:(bool)arg1;
- (void)setSourceAddress:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setTypeDescription:(id)arg1;
- (id)sourceAddress;
- (unsigned long long)type;
- (id)typeDescription;
- (id)typeDescriptionUnlocalized;

@end
