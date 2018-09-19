//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/hamcrest/core/IsInstanceOf.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreIsInstanceOf")
#ifdef RESTRICT_OrgHamcrestCoreIsInstanceOf
#define INCLUDE_ALL_OrgHamcrestCoreIsInstanceOf 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreIsInstanceOf 1
#endif
#undef RESTRICT_OrgHamcrestCoreIsInstanceOf

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgHamcrestCoreIsInstanceOf_) && (INCLUDE_ALL_OrgHamcrestCoreIsInstanceOf || defined(INCLUDE_OrgHamcrestCoreIsInstanceOf))
#define OrgHamcrestCoreIsInstanceOf_

#define RESTRICT_OrgHamcrestDiagnosingMatcher 1
#define INCLUDE_OrgHamcrestDiagnosingMatcher 1
#include "../../../org/hamcrest/DiagnosingMatcher.h"

@class IOSClass;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

/*!
 @brief Tests whether the value is an instance of a class.
 Classes of basic types will be converted to the relevant "Object" classes
 */
@interface OrgHamcrestCoreIsInstanceOf : OrgHamcrestDiagnosingMatcher

#pragma mark Public

/*!
 @brief Creates a new instance of IsInstanceOf
 @param expectedClass The predicate evaluates to true for instances of this class                  or one of its subclasses.
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)expectedClass;

/*!
 @brief Creates a matcher that matches when the examined object is an instance of the specified <code>type</code>,
  as determined by calling the <code>java.lang.Class</code> method on that type, passing the
  the examined object.
 <p>The created matcher forces a relationship between specified type and the examined object, and should be
  used when it is necessary to make generics conform, for example in the JMock clause 
 <code>with(any(Thing.class))</code></p>
  <p>
  For example:  
 @code
assertThat(new Canoe(), instanceOf(Canoe.class));
@endcode
 */
+ (id<OrgHamcrestMatcher>)anyWithIOSClass:(IOSClass *)type;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

/*!
 @brief Creates a matcher that matches when the examined object is an instance of the specified <code>type</code>,
  as determined by calling the <code>java.lang.Class</code> method on that type, passing the
  the examined object.
 <p>The created matcher assumes no relationship between specified type and the examined object.</p>
  <p>
  For example:  
 @code
assertThat(new Canoe(), instanceOf(Paddlable.class));
@endcode
 */
+ (id<OrgHamcrestMatcher>)instanceOfWithIOSClass:(IOSClass *)type;

#pragma mark Protected

- (jboolean)matchesWithId:(id)item
withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatch;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIsInstanceOf)

FOUNDATION_EXPORT void OrgHamcrestCoreIsInstanceOf_initWithIOSClass_(OrgHamcrestCoreIsInstanceOf *self, IOSClass *expectedClass);

FOUNDATION_EXPORT OrgHamcrestCoreIsInstanceOf *new_OrgHamcrestCoreIsInstanceOf_initWithIOSClass_(IOSClass *expectedClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreIsInstanceOf *create_OrgHamcrestCoreIsInstanceOf_initWithIOSClass_(IOSClass *expectedClass);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsInstanceOf_instanceOfWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsInstanceOf_anyWithIOSClass_(IOSClass *type);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIsInstanceOf)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreIsInstanceOf")
