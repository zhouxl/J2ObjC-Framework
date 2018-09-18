//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/PrivilegedActionException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityPrivilegedActionException")
#ifdef RESTRICT_JavaSecurityPrivilegedActionException
#define INCLUDE_ALL_JavaSecurityPrivilegedActionException 0
#else
#define INCLUDE_ALL_JavaSecurityPrivilegedActionException 1
#endif
#undef RESTRICT_JavaSecurityPrivilegedActionException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityPrivilegedActionException_) && (INCLUDE_ALL_JavaSecurityPrivilegedActionException || defined(INCLUDE_JavaSecurityPrivilegedActionException))
#define JavaSecurityPrivilegedActionException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangThrowable;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityPrivilegedActionException : JavaLangException

#pragma mark Public

- (instancetype __nonnull)initWithJavaLangException:(JavaLangException *)exception;

- (JavaLangException *)getException;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPrivilegedActionException)

FOUNDATION_EXPORT void JavaSecurityPrivilegedActionException_initWithJavaLangException_(JavaSecurityPrivilegedActionException *self, JavaLangException *exception);

FOUNDATION_EXPORT JavaSecurityPrivilegedActionException *new_JavaSecurityPrivilegedActionException_initWithJavaLangException_(JavaLangException *exception) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityPrivilegedActionException *create_JavaSecurityPrivilegedActionException_initWithJavaLangException_(JavaLangException *exception);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPrivilegedActionException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityPrivilegedActionException")
