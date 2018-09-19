//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/ThreadDeath.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangThreadDeath")
#ifdef RESTRICT_JavaLangThreadDeath
#define INCLUDE_ALL_JavaLangThreadDeath 0
#else
#define INCLUDE_ALL_JavaLangThreadDeath 1
#endif
#undef RESTRICT_JavaLangThreadDeath

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangThreadDeath_) && (INCLUDE_ALL_JavaLangThreadDeath || defined(INCLUDE_JavaLangThreadDeath))
#define JavaLangThreadDeath_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "../../java/lang/Error.h"

@class JavaLangThrowable;

/*!
 @brief An instance of <code>ThreadDeath</code> is thrown in the victim thread
  when the (deprecated) <code>Thread.stop()</code> method is invoked.
 <p>An application should catch instances of this class only if it
  must clean up after being terminated asynchronously.  If 
 <code>ThreadDeath</code> is caught by a method, it is important that it
  be rethrown so that the thread actually dies. 
 <p>The error
  handler
  does not print out a message if <code>ThreadDeath</code> is
  never caught. 
 <p>The class <code>ThreadDeath</code> is specifically a subclass of 
 <code>Error</code> rather than <code>Exception</code>, even though it is a
  "normal occurrence", because many applications catch all
  occurrences of <code>Exception</code> and then discard the exception.
 @since JDK1.0
 */
@interface JavaLangThreadDeath : JavaLangError

#pragma mark Public

- (instancetype __nonnull)init;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangThreadDeath)

FOUNDATION_EXPORT void JavaLangThreadDeath_init(JavaLangThreadDeath *self);

FOUNDATION_EXPORT JavaLangThreadDeath *new_JavaLangThreadDeath_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThreadDeath *create_JavaLangThreadDeath_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThreadDeath)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangThreadDeath")
