//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/hamcrest/TypeSafeDiagnosingMatcher.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestTypeSafeDiagnosingMatcher")
#ifdef RESTRICT_OrgHamcrestTypeSafeDiagnosingMatcher
#define INCLUDE_ALL_OrgHamcrestTypeSafeDiagnosingMatcher 0
#else
#define INCLUDE_ALL_OrgHamcrestTypeSafeDiagnosingMatcher 1
#endif
#undef RESTRICT_OrgHamcrestTypeSafeDiagnosingMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgHamcrestTypeSafeDiagnosingMatcher_) && (INCLUDE_ALL_OrgHamcrestTypeSafeDiagnosingMatcher || defined(INCLUDE_OrgHamcrestTypeSafeDiagnosingMatcher))
#define OrgHamcrestTypeSafeDiagnosingMatcher_

#define RESTRICT_OrgHamcrestBaseMatcher 1
#define INCLUDE_OrgHamcrestBaseMatcher 1
#include "../../org/hamcrest/BaseMatcher.h"

@class IOSClass;
@class OrgHamcrestInternalReflectiveTypeFinder;
@protocol OrgHamcrestDescription;

/*!
 @brief Convenient base class for Matchers that require a non-null value of a specific type
  and that will report why the received value has been rejected.
 This implements the null check, checks the type and then casts. 
  To use, implement @code
matchesSafely()
@endcode.
 @author Neil Dunn
 @author Nat Pryce
 @author Steve Freeman
 */
@interface OrgHamcrestTypeSafeDiagnosingMatcher : OrgHamcrestBaseMatcher

#pragma mark Public

- (void)describeMismatchWithId:(id)item
    withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatchDescription;

- (jboolean)matchesWithId:(id)item;

#pragma mark Protected

/*!
 @brief The default constructor for simple sub types
 */
- (instancetype __nonnull)init;

/*!
 @brief Use this constructor if the subclass that implements <code>matchesSafely</code> 
  is <em>not</em> the class that binds &lt;T&gt; to a type.
 @param expectedType The expectedType of the actual value.
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)expectedType;

/*!
 @brief Use this constructor if the subclass that implements <code>matchesSafely</code> 
  is <em>not</em> the class that binds &lt;T&gt; to a type.
 @param typeFinder A type finder to extract the type
 */
- (instancetype __nonnull)initWithOrgHamcrestInternalReflectiveTypeFinder:(OrgHamcrestInternalReflectiveTypeFinder *)typeFinder;

/*!
 @brief Subclasses should implement this.The item will already have been checked
  for the specific type and will never be null.
 */
- (jboolean)matchesSafelyWithId:(id)item
     withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatchDescription;

@end

J2OBJC_STATIC_INIT(OrgHamcrestTypeSafeDiagnosingMatcher)

FOUNDATION_EXPORT void OrgHamcrestTypeSafeDiagnosingMatcher_initWithIOSClass_(OrgHamcrestTypeSafeDiagnosingMatcher *self, IOSClass *expectedType);

FOUNDATION_EXPORT void OrgHamcrestTypeSafeDiagnosingMatcher_initWithOrgHamcrestInternalReflectiveTypeFinder_(OrgHamcrestTypeSafeDiagnosingMatcher *self, OrgHamcrestInternalReflectiveTypeFinder *typeFinder);

FOUNDATION_EXPORT void OrgHamcrestTypeSafeDiagnosingMatcher_init(OrgHamcrestTypeSafeDiagnosingMatcher *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestTypeSafeDiagnosingMatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestTypeSafeDiagnosingMatcher")
