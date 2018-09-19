//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/core/AllOf.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreAllOf")
#ifdef RESTRICT_OrgHamcrestCoreAllOf
#define INCLUDE_ALL_OrgHamcrestCoreAllOf 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreAllOf 1
#endif
#undef RESTRICT_OrgHamcrestCoreAllOf

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestCoreAllOf_) && (INCLUDE_ALL_OrgHamcrestCoreAllOf || defined(INCLUDE_OrgHamcrestCoreAllOf))
#define OrgHamcrestCoreAllOf_

#define RESTRICT_OrgHamcrestDiagnosingMatcher 1
#define INCLUDE_OrgHamcrestDiagnosingMatcher 1
#include "../../../org/hamcrest/DiagnosingMatcher.h"

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

/*!
 @brief Calculates the logical conjunction of multiple matchers.Evaluation is shortcut, so
  subsequent matchers are not called if an earlier matcher returns <code>false</code>.
 */
@interface OrgHamcrestCoreAllOf : OrgHamcrestDiagnosingMatcher

#pragma mark Public

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)matchers;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithJavaLangIterable:(id<JavaLangIterable>)matchers;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcherArray:(IOSObjectArray *)matchers;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fifth;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ALL</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", allOf(startsWith("my"), containsString("Val")))
@endcode
 */
+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fifth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)sixth;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)o
withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatch;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreAllOf)

FOUNDATION_EXPORT void OrgHamcrestCoreAllOf_initWithJavaLangIterable_(OrgHamcrestCoreAllOf *self, id<JavaLangIterable> matchers);

FOUNDATION_EXPORT OrgHamcrestCoreAllOf *new_OrgHamcrestCoreAllOf_initWithJavaLangIterable_(id<JavaLangIterable> matchers) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreAllOf *create_OrgHamcrestCoreAllOf_initWithJavaLangIterable_(id<JavaLangIterable> matchers);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithJavaLangIterable_(id<JavaLangIterable> matchers);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithOrgHamcrestMatcherArray_(IOSObjectArray *matchers);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth, id<OrgHamcrestMatcher> fifth);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth, id<OrgHamcrestMatcher> fifth, id<OrgHamcrestMatcher> sixth);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreAllOf)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreAllOf")
