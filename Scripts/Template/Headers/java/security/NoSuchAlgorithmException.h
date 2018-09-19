//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/NoSuchAlgorithmException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityNoSuchAlgorithmException")
#ifdef RESTRICT_JavaSecurityNoSuchAlgorithmException
#define INCLUDE_ALL_JavaSecurityNoSuchAlgorithmException 0
#else
#define INCLUDE_ALL_JavaSecurityNoSuchAlgorithmException 1
#endif
#undef RESTRICT_JavaSecurityNoSuchAlgorithmException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityNoSuchAlgorithmException_) && (INCLUDE_ALL_JavaSecurityNoSuchAlgorithmException || defined(INCLUDE_JavaSecurityNoSuchAlgorithmException))
#define JavaSecurityNoSuchAlgorithmException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "../../java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief This exception is thrown when a particular cryptographic algorithm is
  requested but is not available in the environment.
 @author Benjamin Renaud
 */
@interface JavaSecurityNoSuchAlgorithmException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a NoSuchAlgorithmException with no detail
  message.A detail message is a String that describes this
  particular exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a NoSuchAlgorithmException with the specified
  detail message.A detail message is a String that describes
  this particular exception, which may, for example, specify which
  algorithm is not available.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a <code>NoSuchAlgorithmException</code> with the specified
  detail message and cause.
 @param message the detail message (which is saved for later retrieval         by the 
 <code>getMessage()</code>  method).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A  <tt> null </tt>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a <code>NoSuchAlgorithmException</code> with the specified cause
  and a detail message of <tt>(cause==null ?
 null : cause.toString())</tt>
  (which typically contains the class and detail message of 
 <tt>cause</tt>).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A  <tt> null </tt>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityNoSuchAlgorithmException)

FOUNDATION_EXPORT void JavaSecurityNoSuchAlgorithmException_init(JavaSecurityNoSuchAlgorithmException *self);

FOUNDATION_EXPORT JavaSecurityNoSuchAlgorithmException *new_JavaSecurityNoSuchAlgorithmException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityNoSuchAlgorithmException *create_JavaSecurityNoSuchAlgorithmException_init(void);

FOUNDATION_EXPORT void JavaSecurityNoSuchAlgorithmException_initWithNSString_(JavaSecurityNoSuchAlgorithmException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityNoSuchAlgorithmException *new_JavaSecurityNoSuchAlgorithmException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityNoSuchAlgorithmException *create_JavaSecurityNoSuchAlgorithmException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityNoSuchAlgorithmException_initWithNSString_withJavaLangThrowable_(JavaSecurityNoSuchAlgorithmException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityNoSuchAlgorithmException *new_JavaSecurityNoSuchAlgorithmException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityNoSuchAlgorithmException *create_JavaSecurityNoSuchAlgorithmException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSecurityNoSuchAlgorithmException_initWithJavaLangThrowable_(JavaSecurityNoSuchAlgorithmException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityNoSuchAlgorithmException *new_JavaSecurityNoSuchAlgorithmException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityNoSuchAlgorithmException *create_JavaSecurityNoSuchAlgorithmException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityNoSuchAlgorithmException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityNoSuchAlgorithmException")
