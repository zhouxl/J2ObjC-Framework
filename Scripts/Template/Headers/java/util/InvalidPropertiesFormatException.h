//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/InvalidPropertiesFormatException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilInvalidPropertiesFormatException")
#ifdef RESTRICT_JavaUtilInvalidPropertiesFormatException
#define INCLUDE_ALL_JavaUtilInvalidPropertiesFormatException 0
#else
#define INCLUDE_ALL_JavaUtilInvalidPropertiesFormatException 1
#endif
#undef RESTRICT_JavaUtilInvalidPropertiesFormatException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilInvalidPropertiesFormatException_) && (INCLUDE_ALL_JavaUtilInvalidPropertiesFormatException || defined(INCLUDE_JavaUtilInvalidPropertiesFormatException))
#define JavaUtilInvalidPropertiesFormatException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "../../java/io/IOException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown to indicate that an operation could not complete because
  the input did not conform to the appropriate XML document type
  for a collection of properties, as per the <code>Properties</code>
  specification.
 <p>
  Note, that although InvalidPropertiesFormatException inherits Serializable
  interface from Exception, it is not intended to be Serializable. Appropriate
  serialization methods are implemented to throw NotSerializableException.
 - seealso: Properties
 @since 1.5
 */
@interface JavaUtilInvalidPropertiesFormatException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs an InvalidPropertiesFormatException with the specified
  detail message.
 @param message the detail message. The detail message is saved for           later retrieval by the 
 <code>Throwable.getMessage()</code>  method.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

/*!
 @brief Constructs an InvalidPropertiesFormatException with the specified
  cause.
 @param cause the cause (which is saved for later retrieval by the          
 <code>Throwable.getCause()</code>  method).
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilInvalidPropertiesFormatException)

FOUNDATION_EXPORT void JavaUtilInvalidPropertiesFormatException_initWithJavaLangThrowable_(JavaUtilInvalidPropertiesFormatException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaUtilInvalidPropertiesFormatException *new_JavaUtilInvalidPropertiesFormatException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilInvalidPropertiesFormatException *create_JavaUtilInvalidPropertiesFormatException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaUtilInvalidPropertiesFormatException_initWithNSString_(JavaUtilInvalidPropertiesFormatException *self, NSString *message);

FOUNDATION_EXPORT JavaUtilInvalidPropertiesFormatException *new_JavaUtilInvalidPropertiesFormatException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilInvalidPropertiesFormatException *create_JavaUtilInvalidPropertiesFormatException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilInvalidPropertiesFormatException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilInvalidPropertiesFormatException")
