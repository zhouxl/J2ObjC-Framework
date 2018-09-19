//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/junit/runners/model/MultipleFailureException.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersModelMultipleFailureException")
#ifdef RESTRICT_OrgJunitRunnersModelMultipleFailureException
#define INCLUDE_ALL_OrgJunitRunnersModelMultipleFailureException 0
#else
#define INCLUDE_ALL_OrgJunitRunnersModelMultipleFailureException 1
#endif
#undef RESTRICT_OrgJunitRunnersModelMultipleFailureException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRunnersModelMultipleFailureException_) && (INCLUDE_ALL_OrgJunitRunnersModelMultipleFailureException || defined(INCLUDE_OrgJunitRunnersModelMultipleFailureException))
#define OrgJunitRunnersModelMultipleFailureException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../../../java/lang/Exception.h"

@class JavaLangThrowable;
@protocol JavaUtilList;

/*!
 @brief Collects multiple <code>Throwable</code>s into one exception.
 @since 4.9
 */
@interface OrgJunitRunnersModelMultipleFailureException : JavaLangException

#pragma mark Public

- (instancetype __nonnull)initWithJavaUtilList:(id<JavaUtilList>)errors;

/*!
 @brief Asserts that a list of throwables is empty.If it isn't empty,
  will throw <code>MultipleFailureException</code> (if there are
  multiple throwables in the list) or the first element in the list
  (if there is only one element).
 @param errors list to check
 @throw Throwableif the list is not empty
 */
+ (void)assertEmptyWithJavaUtilList:(id<JavaUtilList>)errors;

- (id<JavaUtilList>)getFailures;

- (NSString *)getMessage;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelMultipleFailureException)

FOUNDATION_EXPORT void OrgJunitRunnersModelMultipleFailureException_initWithJavaUtilList_(OrgJunitRunnersModelMultipleFailureException *self, id<JavaUtilList> errors);

FOUNDATION_EXPORT OrgJunitRunnersModelMultipleFailureException *new_OrgJunitRunnersModelMultipleFailureException_initWithJavaUtilList_(id<JavaUtilList> errors) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnersModelMultipleFailureException *create_OrgJunitRunnersModelMultipleFailureException_initWithJavaUtilList_(id<JavaUtilList> errors);

FOUNDATION_EXPORT void OrgJunitRunnersModelMultipleFailureException_assertEmptyWithJavaUtilList_(id<JavaUtilList> errors);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelMultipleFailureException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersModelMultipleFailureException")
