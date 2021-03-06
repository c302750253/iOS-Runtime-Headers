/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSError, NSMutableString, NSString;

@interface SWSyncServiceResponse : NSObject <NSXMLParserDelegate> {
    NSString *_currentLeafElement;
    NSMutableString *_email;
    NSString *_errorCode;
    NSMutableString *_pin;
    NSMutableString *_pinStatus;
    NSMutableString *_screenName;
    NSMutableString *_serviceException;
    NSMutableString *_status;
    NSMutableString *_token;
    NSError *_validationError;
    bool_hasFoundRootElement;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSString * email;
@property(readonly) NSString * errorCode;
@property(readonly) unsigned long long hash;
@property(readonly) NSString * pin;
@property(readonly) NSString * pinStatus;
@property(readonly) NSString * screenName;
@property(readonly) NSString * serviceException;
@property(readonly) NSString * status;
@property(readonly) Class superclass;
@property(readonly) NSString * token;

- (void)dealloc;
- (id)email;
- (id)errorCode;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)pin;
- (id)pinStatus;
- (id)screenName;
- (id)serviceException;
- (id)status;
- (id)token;

@end
