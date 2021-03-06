/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSData, NSString;

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying> {
    long long _albumArtistPersisentID;
    NSString *_feedURL;
    NSData *_groupingKey;
    long long _seasonNumber;
    bool_compilation;
}

@property(readonly) long long albumArtistPersisentID;
@property(readonly) bool compilation;
@property(readonly) NSString * feedURL;
@property(readonly) NSData * groupingKey;
@property(readonly) long long seasonNumber;

- (void).cxx_destruct;
- (long long)albumArtistPersisentID;
- (bool)compilation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)feedURL;
- (id)groupingKey;
- (unsigned long long)hash;
- (id)initWithAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(bool)arg5 inLibrary:(id)arg6;
- (id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (long long)seasonNumber;

@end
