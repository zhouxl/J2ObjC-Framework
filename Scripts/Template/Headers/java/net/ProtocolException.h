//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/ProtocolException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetProtocolException")
#ifdef RESTRICT_JavaNetProtocolException
#define INCLUDE_ALL_JavaNetProtocolException 0
#else
#define INCLUDE_ALL_JavaNetProtocolException 1
#endif
#undef RESTRICT_JavaNetProtocolException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetProtocolException_) && (INCLUDE_ALL_JavaNetProtocolException || defined(INCLUDE_JavaNetProtocolException))
#define JavaNetProtocolException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "../../java/io/IOException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown to indicate that there is an error in the underlying
  protocol, such as a TCP error.
 @author Chris Warth
 @since JDK1.0
 */
@interface JavaNetProtocolException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a new <code>ProtocolException</code> with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a new <code>ProtocolException</code> with the
  specified detail message.
 @param host the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)host;

/*!
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetProtocolException)

FOUNDATION_EXPORT void JavaNetProtocolException_initWithNSString_(JavaNetProtocolException *self, NSString *host);

FOUNDATION_EXPORT JavaNetProtocolException *new_JavaNetProtocolException_initWithNSString_(NSString *host) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetProtocolException *create_JavaNetProtocolException_initWithNSString_(NSString *host);

FOUNDATION_EXPORT void JavaNetProtocolException_init(JavaNetProtocolException *self);

FOUNDATION_EXPORT JavaNetProtocolException *new_JavaNetProtocolException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetProtocolException *create_JavaNetProtocolException_init(void);

FOUNDATION_EXPORT void JavaNetProtocolException_initWithNSString_withJavaLangThrowable_(JavaNetProtocolException *self, NSString *msg, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaNetProtocolException *new_JavaNetProtocolException_initWithNSString_withJavaLangThrowable_(NSString *msg, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetProtocolException *create_JavaNetProtocolException_initWithNSString_withJavaLangThrowable_(NSString *msg, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetProtocolException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetProtocolException")
