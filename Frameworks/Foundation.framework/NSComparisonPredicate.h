/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSExpression, NSPredicateOperator;

@interface NSComparisonPredicate : NSPredicate {
    NSExpression *_lhs;
    NSPredicateOperator *_predicateOperator;
    void *_reserved2;
    NSExpression *_rhs;
}

@property(readonly) unsigned long long comparisonPredicateModifier;
@property(readonly) SEL customSelector;
@property(retain,readonly) NSExpression * leftExpression;
@property(readonly) unsigned long long options;
@property(readonly) unsigned long long predicateOperatorType;
@property(retain,readonly) NSExpression * rightExpression;

+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5;
+ (id)predicateWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
+ (bool)supportsSecureCoding;

- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;
- (void)_acceptExpressions:(id)arg1 flags:(unsigned long long)arg2;
- (void)_acceptOperator:(id)arg1 flags:(unsigned long long)arg2;
- (unsigned long long)_comparisonOptionForString:(id)arg1;
- (unsigned long long)_comparisonOptionForString:(id)arg1;
- (bool)_isForeignObjectExpression:(id)arg1 givenContext:(id)arg2;
- (id)_nearFilterWithKey:(id)arg1 location:(id)arg2 radius:(double)arg3 translator:(id)arg4;
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseComparisonPredicateWithKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 filterClasses:(id)arg5;
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseNearFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (id)br_watchedURL;
- (unsigned long long)comparisonPredicateModifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (SEL)customSelector;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)generateMetadataDescription;
- (unsigned long long)hash;
- (id)hk_filterRepresentationForDataTypes:(id)arg1 filterClasses:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5;
- (id)initWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyPathExpressionForString:(id)arg1;
- (id)leftExpression;
- (id)minimalFormInContext:(id)arg1;
- (unsigned long long)options;
- (id)predicateFormat;
- (id)predicateOperator;
- (unsigned long long)predicateOperatorType;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (id)rightExpression;
- (void)setPredicateOperator:(id)arg1;
- (void)validate;
- (bool)validateBasicOperatorPredicate;
- (bool)validateBeginsWithPredicate;
- (bool)validateBetweenPredicate;
- (bool)validateContainsAllInPredicate;
- (bool)validateContainsAnyPredicate;
- (bool)validateContainsPredicate;
- (bool)validateFullTextSearchPredicate;
- (bool)validateInPredicate;
- (bool)validateNearPredicate;

@end
