//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/HasPositionalPredChecker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesHasPositionalPredChecker")
#ifdef RESTRICT_OrgApacheXpathAxesHasPositionalPredChecker
#define INCLUDE_ALL_OrgApacheXpathAxesHasPositionalPredChecker 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesHasPositionalPredChecker 1
#endif
#undef RESTRICT_OrgApacheXpathAxesHasPositionalPredChecker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathAxesHasPositionalPredChecker_) && (INCLUDE_ALL_OrgApacheXpathAxesHasPositionalPredChecker || defined(INCLUDE_OrgApacheXpathAxesHasPositionalPredChecker))
#define OrgApacheXpathAxesHasPositionalPredChecker_

#define RESTRICT_OrgApacheXpathXPathVisitor 1
#define INCLUDE_OrgApacheXpathXPathVisitor 1
#include "org/apache/xpath/XPathVisitor.h"

@class OrgApacheXpathAxesLocPathIterator;
@class OrgApacheXpathExpression;
@class OrgApacheXpathFunctionsFunction;
@protocol OrgApacheXpathExpressionOwner;

@interface OrgApacheXpathAxesHasPositionalPredChecker : OrgApacheXpathXPathVisitor

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Process the LocPathIterator to see if it contains variables 
  or functions that may make it context dependent.
 @param path LocPathIterator that is assumed to be absolute, but needs checking.
 @return true if the path is confirmed to be absolute, false if it 
  may contain context dependencies.
 */
+ (jboolean)checkWithOrgApacheXpathAxesLocPathIterator:(OrgApacheXpathAxesLocPathIterator *)path;

/*!
 @brief Visit a function.
 @param owner The owner of the expression, to which the expression can                be reset if rewriting takes place.
 @param func The function reference object.
 @return true if the sub expressions should be traversed.
 */
- (jboolean)visitFunctionWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathFunctionsFunction:(OrgApacheXpathFunctionsFunction *)func;

/*!
 @brief Visit a predicate within a location path.Note that there isn't a 
  proper unique component for predicates, and that the expression will 
  be called also for whatever type Expression is.
 @param owner The owner of the expression, to which the expression can                be reset if rewriting takes place.
 @param pred The predicate object.
 @return true if the sub expressions should be traversed.
 */
- (jboolean)visitPredicateWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                               withOrgApacheXpathExpression:(OrgApacheXpathExpression *)pred;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesHasPositionalPredChecker)

FOUNDATION_EXPORT void OrgApacheXpathAxesHasPositionalPredChecker_init(OrgApacheXpathAxesHasPositionalPredChecker *self);

FOUNDATION_EXPORT OrgApacheXpathAxesHasPositionalPredChecker *new_OrgApacheXpathAxesHasPositionalPredChecker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesHasPositionalPredChecker *create_OrgApacheXpathAxesHasPositionalPredChecker_init(void);

FOUNDATION_EXPORT jboolean OrgApacheXpathAxesHasPositionalPredChecker_checkWithOrgApacheXpathAxesLocPathIterator_(OrgApacheXpathAxesLocPathIterator *path);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesHasPositionalPredChecker)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesHasPositionalPredChecker")
