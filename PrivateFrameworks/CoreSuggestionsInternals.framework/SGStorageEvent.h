/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSArray, NSData, NSSet, NSString, SGDuplicateKey, SGSimpleTimeRange;

@interface SGStorageEvent : NSObject {
    NSString *_content;
    double _creationTimestamp;
    SGDuplicateKey *_duplicateKey;
    double _lastModifiedTimestamp;
    NSArray *_locations;
    NSString *_sourceKey;
    unsigned int _state;
    NSData *_structuredData;
    NSSet *_tags;
    NSString *_title;
    SGSimpleTimeRange *_when;
    bool_curated;
}

@property(readonly) NSString * content;
@property(readonly) double creationTimestamp;
@property(readonly) bool curated;
@property(readonly) SGDuplicateKey * duplicateKey;
@property(readonly) double lastModifiedTimestamp;
@property(readonly) NSArray * locations;
@property(readonly) NSString * sourceKey;
@property(readonly) unsigned int state;
@property(readonly) NSData * structuredData;
@property(readonly) NSSet * tags;
@property(readonly) NSString * title;
@property(readonly) SGSimpleTimeRange * when;

+ (id)storageEventFromEntity:(id)arg1 usingStore:(id)arg2;

- (void).cxx_destruct;
- (id)content;
- (id)convertToEvent:(id)arg1;
- (double)creationTimestamp;
- (bool)curated;
- (id)duplicateKey;
- (id)extraKeyTag;
- (id)fieldsToSaveOnConfirmation;
- (id)initWithDuplicateKey:(id)arg1 sourceKey:(id)arg2 content:(id)arg3 title:(id)arg4 creationTimestamp:(double)arg5 lastModifiedTimestamp:(double)arg6 tags:(id)arg7 when:(id)arg8 locations:(id)arg9 structuredData:(id)arg10 state:(unsigned int)arg11 curated:(bool)arg12;
- (bool)isAllDay;
- (bool)isCancelled;
- (bool)isFromDataDetectors;
- (bool)isFromSuggestions;
- (double)lastModifiedTimestamp;
- (id)locations;
- (id)sourceKey;
- (unsigned int)state;
- (id)structuredData;
- (id)tags;
- (id)title;
- (id)when;

@end
