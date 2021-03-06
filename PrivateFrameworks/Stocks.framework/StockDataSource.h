/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSString;

@interface StockDataSource : NSObject {
    long long _identifier;
    NSString *_name;
    NSString *_sourceDescription;
}

@property long long identifier;
@property(readonly) NSString * localizedSourceDescription;
@property(copy) NSString * name;
@property(copy) NSString * sourceDescription;

- (void).cxx_destruct;
- (id)archiveDictionary;
- (id)description;
- (long long)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)localizedSourceDescription;
- (id)name;
- (void)setIdentifier:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setSourceDescription:(id)arg1;
- (id)sourceDescription;

@end
