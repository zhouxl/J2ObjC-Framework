//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/HttpRetryException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetHttpRetryException")
#ifdef RESTRICT_JavaNetHttpRetryException
#define INCLUDE_ALL_JavaNetHttpRetryException 0
#else
#define INCLUDE_ALL_JavaNetHttpRetryException 1
#endif
#undef RESTRICT_JavaNetHttpRetryException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetHttpRetryException_) && (INCLUDE_ALL_JavaNetHttpRetryException || defined(INCLUDE_JavaNetHttpRetryException))
#define JavaNetHttpRetryException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "../../java/io/IOException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown to indicate that a HTTP request needs to be retried
  but cannot be retried automatically, due to streaming mode
  being enabled.
 @author Michael McMahon
 @since 1.5
 */
@interface JavaNetHttpRetryException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a new <code>HttpRetryException</code> from the
  specified response code and exception detail message
 @param detail the detail message.
 @param code the HTTP response code from server.
 */
- (instancetype)initWithNSString:(NSString *)detail
                         withInt:(jint)code;

/*!
 @brief Constructs a new <code>HttpRetryException</code> with detail message
  responseCode and the contents of the Location response header field.
 @param detail the detail message.
 @param code the HTTP response code from server.
 @param location the URL to be redirected to
 */
- (instancetype)initWithNSString:(NSString *)detail
                         withInt:(jint)code
                    withNSString:(NSString *)location;

/*!
 @brief Returns the value of the Location header field if the
  error resulted from redirection.
 @return The location string
 */
- (NSString *)getLocation;

/*!
 @brief Returns a string explaining why the http request could
  not be retried.
 @return The reason string
 */
- (NSString *)getReason;

/*!
 @brief Returns the http response code
 @return The http response code.
 */
- (jint)responseCode;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetHttpRetryException)

FOUNDATION_EXPORT void JavaNetHttpRetryException_initWithNSString_withInt_(JavaNetHttpRetryException *self, NSString *detail, jint code);

FOUNDATION_EXPORT JavaNetHttpRetryException *new_JavaNetHttpRetryException_initWithNSString_withInt_(NSString *detail, jint code) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetHttpRetryException *create_JavaNetHttpRetryException_initWithNSString_withInt_(NSString *detail, jint code);

FOUNDATION_EXPORT void JavaNetHttpRetryException_initWithNSString_withInt_withNSString_(JavaNetHttpRetryException *self, NSString *detail, jint code, NSString *location);

FOUNDATION_EXPORT JavaNetHttpRetryException *new_JavaNetHttpRetryException_initWithNSString_withInt_withNSString_(NSString *detail, jint code, NSString *location) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetHttpRetryException *create_JavaNetHttpRetryException_initWithNSString_withInt_withNSString_(NSString *detail, jint code, NSString *location);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetHttpRetryException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetHttpRetryException")
