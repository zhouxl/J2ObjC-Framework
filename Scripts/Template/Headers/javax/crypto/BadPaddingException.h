//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/BadPaddingException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoBadPaddingException")
#ifdef RESTRICT_JavaxCryptoBadPaddingException
#define INCLUDE_ALL_JavaxCryptoBadPaddingException 0
#else
#define INCLUDE_ALL_JavaxCryptoBadPaddingException 1
#endif
#undef RESTRICT_JavaxCryptoBadPaddingException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoBadPaddingException_) && (INCLUDE_ALL_JavaxCryptoBadPaddingException || defined(INCLUDE_JavaxCryptoBadPaddingException))
#define JavaxCryptoBadPaddingException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "../../java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief This exception is thrown when a particular padding mechanism is
  expected for the input data but the data is not padded properly.
 @author Gigi Ankney
 @since 1.4
 */
@interface JavaxCryptoBadPaddingException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a BadPaddingException with no detail
  message.A detail message is a String that describes this
  particular exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a BadPaddingException with the specified
  detail message.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoBadPaddingException)

FOUNDATION_EXPORT void JavaxCryptoBadPaddingException_init(JavaxCryptoBadPaddingException *self);

FOUNDATION_EXPORT JavaxCryptoBadPaddingException *new_JavaxCryptoBadPaddingException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoBadPaddingException *create_JavaxCryptoBadPaddingException_init(void);

FOUNDATION_EXPORT void JavaxCryptoBadPaddingException_initWithNSString_(JavaxCryptoBadPaddingException *self, NSString *msg);

FOUNDATION_EXPORT JavaxCryptoBadPaddingException *new_JavaxCryptoBadPaddingException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoBadPaddingException *create_JavaxCryptoBadPaddingException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoBadPaddingException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoBadPaddingException")
