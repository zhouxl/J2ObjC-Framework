//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/TimeoutException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentTimeoutException")
#ifdef RESTRICT_JavaUtilConcurrentTimeoutException
#define INCLUDE_ALL_JavaUtilConcurrentTimeoutException 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentTimeoutException 1
#endif
#undef RESTRICT_JavaUtilConcurrentTimeoutException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentTimeoutException_) && (INCLUDE_ALL_JavaUtilConcurrentTimeoutException || defined(INCLUDE_JavaUtilConcurrentTimeoutException))
#define JavaUtilConcurrentTimeoutException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../../java/lang/Exception.h"

@class JavaLangThrowable;

/*!
 @brief Exception thrown when a blocking operation times out.Blocking
  operations for which a timeout is specified need a means to
  indicate that the timeout has occurred.
 For many such operations it
  is possible to return a value that indicates timeout; when that is
  not possible or desirable then <code>TimeoutException</code> should be
  declared and thrown.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentTimeoutException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a <code>TimeoutException</code> with no specified detail
  message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>TimeoutException</code> with the specified detail
  message.
 @param message the detail message
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentTimeoutException)

FOUNDATION_EXPORT void JavaUtilConcurrentTimeoutException_init(JavaUtilConcurrentTimeoutException *self);

FOUNDATION_EXPORT JavaUtilConcurrentTimeoutException *new_JavaUtilConcurrentTimeoutException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentTimeoutException *create_JavaUtilConcurrentTimeoutException_init(void);

FOUNDATION_EXPORT void JavaUtilConcurrentTimeoutException_initWithNSString_(JavaUtilConcurrentTimeoutException *self, NSString *message);

FOUNDATION_EXPORT JavaUtilConcurrentTimeoutException *new_JavaUtilConcurrentTimeoutException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentTimeoutException *create_JavaUtilConcurrentTimeoutException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentTimeoutException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentTimeoutException")
