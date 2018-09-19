//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/annotation/AnnotationFormatError.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangAnnotationAnnotationFormatError")
#ifdef RESTRICT_JavaLangAnnotationAnnotationFormatError
#define INCLUDE_ALL_JavaLangAnnotationAnnotationFormatError 0
#else
#define INCLUDE_ALL_JavaLangAnnotationAnnotationFormatError 1
#endif
#undef RESTRICT_JavaLangAnnotationAnnotationFormatError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangAnnotationAnnotationFormatError_) && (INCLUDE_ALL_JavaLangAnnotationAnnotationFormatError || defined(INCLUDE_JavaLangAnnotationAnnotationFormatError))
#define JavaLangAnnotationAnnotationFormatError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "../../../java/lang/Error.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when the annotation parser attempts to read an annotation
  from a class file and determines that the annotation is malformed.
 This error can be thrown by the used to read annotations
  reflectively
 .
 @author Josh Bloch
 - seealso: java.lang.reflect.AnnotatedElement
 @since 1.5
 */
@interface JavaLangAnnotationAnnotationFormatError : JavaLangError

#pragma mark Public

/*!
 @brief Constructs a new <tt>AnnotationFormatError</tt> with the specified
  detail message.
 @param message the detail message.
 */
- (instancetype)initWithNSString:(NSString *)message;

/*!
 @brief Constructs a new <tt>AnnotationFormatError</tt> with the specified
  detail message and cause.Note that the detail message associated
  with <code>cause</code> is <i>not</i> automatically incorporated in
  this error's detail message.
 @param message the detail message
 @param cause the cause (A  <tt> null </tt>  value is permitted, and
       indicates that the cause is nonexistent or unknown.)
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a new <tt>AnnotationFormatError</tt> with the specified
  cause and a detail message of 
 <tt>(cause == null ?
 null : cause.toString())</tt> (which
  typically contains the class and detail message of <tt>cause</tt>).
 @param cause the cause (A  <tt> null </tt>  value is permitted, and
       indicates that the cause is nonexistent or unknown.)
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAnnotationAnnotationFormatError)

FOUNDATION_EXPORT void JavaLangAnnotationAnnotationFormatError_initWithNSString_(JavaLangAnnotationAnnotationFormatError *self, NSString *message);

FOUNDATION_EXPORT JavaLangAnnotationAnnotationFormatError *new_JavaLangAnnotationAnnotationFormatError_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAnnotationAnnotationFormatError *create_JavaLangAnnotationAnnotationFormatError_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaLangAnnotationAnnotationFormatError_initWithNSString_withJavaLangThrowable_(JavaLangAnnotationAnnotationFormatError *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangAnnotationAnnotationFormatError *new_JavaLangAnnotationAnnotationFormatError_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAnnotationAnnotationFormatError *create_JavaLangAnnotationAnnotationFormatError_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaLangAnnotationAnnotationFormatError_initWithJavaLangThrowable_(JavaLangAnnotationAnnotationFormatError *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangAnnotationAnnotationFormatError *new_JavaLangAnnotationAnnotationFormatError_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAnnotationAnnotationFormatError *create_JavaLangAnnotationAnnotationFormatError_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationAnnotationFormatError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangAnnotationAnnotationFormatError")
