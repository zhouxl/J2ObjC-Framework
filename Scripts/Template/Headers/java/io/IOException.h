//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/IOException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoIOException")
#ifdef RESTRICT_JavaIoIOException
#define INCLUDE_ALL_JavaIoIOException 0
#else
#define INCLUDE_ALL_JavaIoIOException 1
#endif
#undef RESTRICT_JavaIoIOException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoIOException_) && (INCLUDE_ALL_JavaIoIOException || defined(INCLUDE_JavaIoIOException))
#define JavaIoIOException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../java/lang/Exception.h"

@class JavaLangThrowable;

/*!
 @brief Signals that an I/O exception of some sort has occurred.This
  class is the general class of exceptions produced by failed or
  interrupted I/O operations.
 @author unascribed
 - seealso: java.io.InputStream
 - seealso: java.io.OutputStream
 @since JDK1.0
 */
@interface JavaIoIOException : JavaLangException
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructs an <code>IOException</code> with <code>null</code>
  as its error detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an <code>IOException</code> with the specified detail message.
 @param message The detail message (which is saved for later retrieval
          by the 
 <code>getMessage()</code>  method)
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

/*!
 @brief Constructs an <code>IOException</code> with the specified detail message
  and cause.
 <p> Note that the detail message associated with <code>cause</code> is 
 <i>not</i> automatically incorporated into this exception's detail
  message.
 @param message The detail message (which is saved for later retrieval
          by the 
 <code>getMessage()</code>  method)
 @param cause The cause (which is saved for later retrieval by the
          <code>getCause()</code>
   method).  (A null value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs an <code>IOException</code> with the specified cause and a
  detail message of <code>(cause==null ?
 null : cause.toString())</code>
  (which typically contains the class and detail message of <code>cause</code>).
 This constructor is useful for IO exceptions that are little more
  than wrappers for other throwables.
 @param cause The cause (which is saved for later retrieval by the
          <code>getCause()</code>
   method).  (A null value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.6
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoIOException)

inline jlong JavaIoIOException_get_serialVersionUID(void);
#define JavaIoIOException_serialVersionUID 7818375828146090155LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoIOException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaIoIOException_init(JavaIoIOException *self);

FOUNDATION_EXPORT JavaIoIOException *new_JavaIoIOException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoIOException *create_JavaIoIOException_init(void);

FOUNDATION_EXPORT void JavaIoIOException_initWithNSString_(JavaIoIOException *self, NSString *message);

FOUNDATION_EXPORT JavaIoIOException *new_JavaIoIOException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoIOException *create_JavaIoIOException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaIoIOException_initWithNSString_withJavaLangThrowable_(JavaIoIOException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaIoIOException *new_JavaIoIOException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoIOException *create_JavaIoIOException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaIoIOException_initWithJavaLangThrowable_(JavaIoIOException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaIoIOException *new_JavaIoIOException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoIOException *create_JavaIoIOException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoIOException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoIOException")
