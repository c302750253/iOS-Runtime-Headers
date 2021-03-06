/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDNFCVersions : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int middlewareVersion : 1; 
        unsigned int nfccFWRevision : 1; 
        unsigned int nfccFWVersion : 1; 
        unsigned int nfccHWVersion : 1; 
        unsigned int nfccROMVersion : 1; 
        unsigned int seDeviceType : 1; 
        unsigned int seFWVersion : 1; 
        unsigned int seHWVersion : 1; 
        unsigned int seMigrationInst : 1; 
        unsigned int seMigrationPkgs : 1; 
        unsigned int seMigrationState : 1; 
        unsigned int seOSMode : 1; 
        unsigned int seReferenceCounter : 1; 
        unsigned int seRestrictedMode : 1; 
        unsigned int seSequenceCounter : 1; 
        unsigned int seSignKeyType : 1; 
    } _has;
    unsigned int _middlewareVersion;
    unsigned int _nfccFWRevision;
    unsigned int _nfccFWVersion;
    unsigned int _nfccHWVersion;
    unsigned int _nfccROMVersion;
    NSString *_platformVersion;
    unsigned int _seDeviceType;
    unsigned int _seFWVersion;
    unsigned int _seHWVersion;
    unsigned int _seMigrationInst;
    unsigned int _seMigrationPkgs;
    unsigned int _seMigrationState;
    unsigned int _seOSMode;
    unsigned int _seReferenceCounter;
    unsigned int _seRestrictedMode;
    unsigned int _seSequenceCounter;
    unsigned int _seSignKeyType;
    unsigned long long _timestamp;
}

@property bool hasMiddlewareVersion;
@property bool hasNfccFWRevision;
@property bool hasNfccFWVersion;
@property bool hasNfccHWVersion;
@property bool hasNfccROMVersion;
@property(readonly) bool hasPlatformVersion;
@property bool hasSeDeviceType;
@property bool hasSeFWVersion;
@property bool hasSeHWVersion;
@property bool hasSeMigrationInst;
@property bool hasSeMigrationPkgs;
@property bool hasSeMigrationState;
@property bool hasSeOSMode;
@property bool hasSeReferenceCounter;
@property bool hasSeRestrictedMode;
@property bool hasSeSequenceCounter;
@property bool hasSeSignKeyType;
@property bool hasTimestamp;
@property unsigned int middlewareVersion;
@property unsigned int nfccFWRevision;
@property unsigned int nfccFWVersion;
@property unsigned int nfccHWVersion;
@property unsigned int nfccROMVersion;
@property(retain) NSString * platformVersion;
@property unsigned int seDeviceType;
@property unsigned int seFWVersion;
@property unsigned int seHWVersion;
@property unsigned int seMigrationInst;
@property unsigned int seMigrationPkgs;
@property unsigned int seMigrationState;
@property unsigned int seOSMode;
@property unsigned int seReferenceCounter;
@property unsigned int seRestrictedMode;
@property unsigned int seSequenceCounter;
@property unsigned int seSignKeyType;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMiddlewareVersion;
- (bool)hasNfccFWRevision;
- (bool)hasNfccFWVersion;
- (bool)hasNfccHWVersion;
- (bool)hasNfccROMVersion;
- (bool)hasPlatformVersion;
- (bool)hasSeDeviceType;
- (bool)hasSeFWVersion;
- (bool)hasSeHWVersion;
- (bool)hasSeMigrationInst;
- (bool)hasSeMigrationPkgs;
- (bool)hasSeMigrationState;
- (bool)hasSeOSMode;
- (bool)hasSeReferenceCounter;
- (bool)hasSeRestrictedMode;
- (bool)hasSeSequenceCounter;
- (bool)hasSeSignKeyType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)middlewareVersion;
- (unsigned int)nfccFWRevision;
- (unsigned int)nfccFWVersion;
- (unsigned int)nfccHWVersion;
- (unsigned int)nfccROMVersion;
- (id)platformVersion;
- (bool)readFrom:(id)arg1;
- (unsigned int)seDeviceType;
- (unsigned int)seFWVersion;
- (unsigned int)seHWVersion;
- (unsigned int)seMigrationInst;
- (unsigned int)seMigrationPkgs;
- (unsigned int)seMigrationState;
- (unsigned int)seOSMode;
- (unsigned int)seReferenceCounter;
- (unsigned int)seRestrictedMode;
- (unsigned int)seSequenceCounter;
- (unsigned int)seSignKeyType;
- (void)setHasMiddlewareVersion:(bool)arg1;
- (void)setHasNfccFWRevision:(bool)arg1;
- (void)setHasNfccFWVersion:(bool)arg1;
- (void)setHasNfccHWVersion:(bool)arg1;
- (void)setHasNfccROMVersion:(bool)arg1;
- (void)setHasSeDeviceType:(bool)arg1;
- (void)setHasSeFWVersion:(bool)arg1;
- (void)setHasSeHWVersion:(bool)arg1;
- (void)setHasSeMigrationInst:(bool)arg1;
- (void)setHasSeMigrationPkgs:(bool)arg1;
- (void)setHasSeMigrationState:(bool)arg1;
- (void)setHasSeOSMode:(bool)arg1;
- (void)setHasSeReferenceCounter:(bool)arg1;
- (void)setHasSeRestrictedMode:(bool)arg1;
- (void)setHasSeSequenceCounter:(bool)arg1;
- (void)setHasSeSignKeyType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMiddlewareVersion:(unsigned int)arg1;
- (void)setNfccFWRevision:(unsigned int)arg1;
- (void)setNfccFWVersion:(unsigned int)arg1;
- (void)setNfccHWVersion:(unsigned int)arg1;
- (void)setNfccROMVersion:(unsigned int)arg1;
- (void)setPlatformVersion:(id)arg1;
- (void)setSeDeviceType:(unsigned int)arg1;
- (void)setSeFWVersion:(unsigned int)arg1;
- (void)setSeHWVersion:(unsigned int)arg1;
- (void)setSeMigrationInst:(unsigned int)arg1;
- (void)setSeMigrationPkgs:(unsigned int)arg1;
- (void)setSeMigrationState:(unsigned int)arg1;
- (void)setSeOSMode:(unsigned int)arg1;
- (void)setSeReferenceCounter:(unsigned int)arg1;
- (void)setSeRestrictedMode:(unsigned int)arg1;
- (void)setSeSequenceCounter:(unsigned int)arg1;
- (void)setSeSignKeyType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
