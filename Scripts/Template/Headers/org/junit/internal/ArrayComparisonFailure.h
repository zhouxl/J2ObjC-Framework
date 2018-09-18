//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/junit/internal/ArrayComparisonFailure.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalArrayComparisonFailure")
#ifdef RESTRICT_OrgJunitInternalArrayComparisonFailure
#define INCLUDE_ALL_OrgJunitInternalArrayComparisonFailure 0
#else
#define INCLUDE_ALL_OrgJunitInternalArrayComparisonFailure 1
#endif
#undef RESTRICT_OrgJunitInternalArrayComparisonFailure

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalArrayComparisonFailure_) && (INCLUDE_ALL_OrgJunitInternalArrayComparisonFailure || defined(INCLUDE_OrgJunitInternalArrayComparisonFailure))
#define OrgJunitInternalArrayComparisonFailure_

#define RESTRICT_JavaLangAssertionError 1
#define INCLUDE_JavaLangAssertionError 1
#include "java/lang/AssertionError.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when two array elements differ
 - seealso: Assert#assertArrayEquals(String, Object[], Object[])
 */
@interface OrgJunitInternalArrayComparisonFailure : JavaLangAssertionError

#pragma mark Public

/*!
 @brief Construct a new <code>ArrayComparisonFailure</code> with an error text and the array's
  dimension that was not equal
 @param cause the exception that caused the array's content to fail the assertion test
 @param index the array position of the objects that are not equal.
 - seealso: Assert#assertArrayEquals(String, Object[], Object[])
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                withJavaLangAssertionError:(JavaLangAssertionError *)cause
                                   withInt:(jint)index;

- (void)addDimensionWithInt:(jint)index;

- (NSString *)getMessage;

/*!
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithBoolean:(jboolean)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithChar:(jchar)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithDouble:(jdouble)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithFloat:(jfloat)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithInt:(jint)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithLong:(jlong)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalArrayComparisonFailure)

FOUNDATION_EXPORT void OrgJunitInternalArrayComparisonFailure_initWithNSString_withJavaLangAssertionError_withInt_(OrgJunitInternalArrayComparisonFailure *self, NSString *message, JavaLangAssertionError *cause, jint index);

FOUNDATION_EXPORT OrgJunitInternalArrayComparisonFailure *new_OrgJunitInternalArrayComparisonFailure_initWithNSString_withJavaLangAssertionError_withInt_(NSString *message, JavaLangAssertionError *cause, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalArrayComparisonFailure *create_OrgJunitInternalArrayComparisonFailure_initWithNSString_withJavaLangAssertionError_withInt_(NSString *message, JavaLangAssertionError *cause, jint index);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalArrayComparisonFailure)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalArrayComparisonFailure")
