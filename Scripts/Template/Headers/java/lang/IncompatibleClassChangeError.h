//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/IncompatibleClassChangeError.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangIncompatibleClassChangeError")
#ifdef RESTRICT_JavaLangIncompatibleClassChangeError
#define INCLUDE_ALL_JavaLangIncompatibleClassChangeError 0
#else
#define INCLUDE_ALL_JavaLangIncompatibleClassChangeError 1
#endif
#undef RESTRICT_JavaLangIncompatibleClassChangeError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangIncompatibleClassChangeError_) && (INCLUDE_ALL_JavaLangIncompatibleClassChangeError || defined(INCLUDE_JavaLangIncompatibleClassChangeError))
#define JavaLangIncompatibleClassChangeError_

#define RESTRICT_JavaLangLinkageError 1
#define INCLUDE_JavaLangLinkageError 1
#include "../../java/lang/LinkageError.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when an incompatible class change has occurred to some class
  definition.The definition of some class, on which the currently
  executing method depends, has since changed.
 @author unascribed
 @since JDK1.0
 */
@interface JavaLangIncompatibleClassChangeError : JavaLangLinkageError

#pragma mark Public

/*!
 @brief Constructs an <code>IncompatibleClassChangeError</code> with no
  detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an <code>IncompatibleClassChangeError</code> with the
  specified detail message.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIncompatibleClassChangeError)

FOUNDATION_EXPORT void JavaLangIncompatibleClassChangeError_init(JavaLangIncompatibleClassChangeError *self);

FOUNDATION_EXPORT JavaLangIncompatibleClassChangeError *new_JavaLangIncompatibleClassChangeError_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIncompatibleClassChangeError *create_JavaLangIncompatibleClassChangeError_init(void);

FOUNDATION_EXPORT void JavaLangIncompatibleClassChangeError_initWithNSString_(JavaLangIncompatibleClassChangeError *self, NSString *s);

FOUNDATION_EXPORT JavaLangIncompatibleClassChangeError *new_JavaLangIncompatibleClassChangeError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIncompatibleClassChangeError *create_JavaLangIncompatibleClassChangeError_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIncompatibleClassChangeError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangIncompatibleClassChangeError")
