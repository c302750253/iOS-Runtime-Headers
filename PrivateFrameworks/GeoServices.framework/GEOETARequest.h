/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOAutomobileOptions, GEOWalkingOptions, GEOWaypoint, GEOWaypointTyped, NSMutableArray;

@interface GEOETARequest : PBRequest <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    struct { 
        double _time; 
        int _flexibility; 
        int _type; 
        struct { 
            unsigned int time : 1; 
            unsigned int flexibility : 1; 
            unsigned int type : 1; 
        } _has; 
    struct { 
        unsigned int sessionID : 1; 
        unsigned int timepoint : 1; 
        unsigned int distanceLimitMeters : 1; 
        unsigned int transportType : 1; 
        unsigned int allowPartialResults : 1; 
        unsigned int includeDistance : 1; 
        unsigned int includeHistoricTravelTime : 1; 
    GEOAutomobileOptions *_automobileOptions;
    NSMutableArray *_destinationWaypointTypeds;
    NSMutableArray *_destinations;
    unsigned int _distanceLimitMeters;
    } _has;
    GEOWaypoint *_origin;
    GEOWaypointTyped *_originWaypointTyped;
    NSMutableArray *_serviceTags;
    } _sessionID;
    } _timepoint;
    int _transportType;
    GEOWalkingOptions *_walkingOptions;
    bool_allowPartialResults;
    bool_includeDistance;
    bool_includeHistoricTravelTime;
}

@property bool allowPartialResults;
@property(retain) GEOAutomobileOptions * automobileOptions;
@property(retain) NSMutableArray * destinationWaypointTypeds;
@property(retain) NSMutableArray * destinations;
@property unsigned int distanceLimitMeters;
@property bool hasAllowPartialResults;
@property(readonly) bool hasAutomobileOptions;
@property bool hasDistanceLimitMeters;
@property bool hasIncludeDistance;
@property bool hasIncludeHistoricTravelTime;
@property(readonly) bool hasOrigin;
@property(readonly) bool hasOriginWaypointTyped;
@property bool hasSessionID;
@property bool hasTimepoint;
@property bool hasTransportType;
@property(readonly) bool hasWalkingOptions;
@property bool includeDistance;
@property bool includeHistoricTravelTime;
@property(retain) GEOWaypoint * origin;
@property(retain) GEOWaypointTyped * originWaypointTyped;
@property(retain) NSMutableArray * serviceTags;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property struct { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } timepoint;
@property int transportType;
@property(retain) GEOWalkingOptions * walkingOptions;

- (void)addDestination:(id)arg1;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (bool)allowPartialResults;
- (id)automobileOptions;
- (void)clearDestinationWaypointTypeds;
- (void)clearDestinations;
- (void)clearServiceTags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationAtIndex:(unsigned long long)arg1;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (id)destinationWaypointTypeds;
- (unsigned long long)destinationWaypointTypedsCount;
- (id)destinations;
- (unsigned long long)destinationsCount;
- (id)dictionaryRepresentation;
- (unsigned int)distanceLimitMeters;
- (bool)hasAllowPartialResults;
- (bool)hasAutomobileOptions;
- (bool)hasDistanceLimitMeters;
- (bool)hasIncludeDistance;
- (bool)hasIncludeHistoricTravelTime;
- (bool)hasOrigin;
- (bool)hasOriginWaypointTyped;
- (bool)hasSessionID;
- (bool)hasTimepoint;
- (bool)hasTransportType;
- (bool)hasWalkingOptions;
- (unsigned long long)hash;
- (bool)includeDistance;
- (bool)includeHistoricTravelTime;
- (id)initWithQuickETARequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)origin;
- (id)originWaypointTyped;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (id)serviceTags;
- (unsigned long long)serviceTagsCount;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setAllowPartialResults:(bool)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setDestinationWaypointTypeds:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setDistanceLimitMeters:(unsigned int)arg1;
- (void)setHasAllowPartialResults:(bool)arg1;
- (void)setHasDistanceLimitMeters:(bool)arg1;
- (void)setHasIncludeDistance:(bool)arg1;
- (void)setHasIncludeHistoricTravelTime:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasTimepoint:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setIncludeDistance:(bool)arg1;
- (void)setIncludeHistoricTravelTime:(bool)arg1;
- (void)setOrigin:(id)arg1;
- (void)setOriginWaypointTyped:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTimepoint:(struct { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)setTransportType:(int)arg1;
- (void)setWalkingOptions:(id)arg1;
- (struct { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })timepoint;
- (int)transportType;
- (id)walkingOptions;
- (void)writeTo:(id)arg1;

@end
