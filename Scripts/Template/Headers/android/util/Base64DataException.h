//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/Base64DataException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidUtilBase64DataException")
#ifdef RESTRICT_AndroidUtilBase64DataException
#define INCLUDE_ALL_AndroidUtilBase64DataException 0
#else
#define INCLUDE_ALL_AndroidUtilBase64DataException 1
#endif
#undef RESTRICT_AndroidUtilBase64DataException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidUtilBase64DataException_) && (INCLUDE_ALL_AndroidUtilBase64DataException || defined(INCLUDE_AndroidUtilBase64DataException))
#define AndroidUtilBase64DataException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "../../java/io/IOException.h"

@class JavaLangThrowable;

/*!
 @brief This exception is thrown by <code>Base64InputStream</code> or <code>Base64OutputStream</code>
  when an error is detected in the data being decoded.This allows problems with the base64 data
  to be disambiguated from errors in the underlying streams (e.g. actual connection errors.)
 */
@interface AndroidUtilBase64DataException : JavaIoIOException

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)detailMessage;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilBase64DataException)

FOUNDATION_EXPORT void AndroidUtilBase64DataException_initWithNSString_(AndroidUtilBase64DataException *self, NSString *detailMessage);

FOUNDATION_EXPORT AndroidUtilBase64DataException *new_AndroidUtilBase64DataException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilBase64DataException *create_AndroidUtilBase64DataException_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilBase64DataException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidUtilBase64DataException")
