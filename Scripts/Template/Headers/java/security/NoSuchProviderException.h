//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/NoSuchProviderException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityNoSuchProviderException_INCLUDE_ALL")
#ifdef JavaSecurityNoSuchProviderException_RESTRICT
#define JavaSecurityNoSuchProviderException_INCLUDE_ALL 0
#else
#define JavaSecurityNoSuchProviderException_INCLUDE_ALL 1
#endif
#undef JavaSecurityNoSuchProviderException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityNoSuchProviderException_) && (JavaSecurityNoSuchProviderException_INCLUDE_ALL || defined(JavaSecurityNoSuchProviderException_INCLUDE))
#define JavaSecurityNoSuchProviderException_

#define JavaSecurityGeneralSecurityException_RESTRICT 1
#define JavaSecurityGeneralSecurityException_INCLUDE 1
#include "../../java/security/GeneralSecurityException.h"

/*!
 @brief <code>NoSuchProviderException</code> indicates that a requested security provider
 could not be found.
 */
@interface JavaSecurityNoSuchProviderException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>NoSuchProviderException</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>NoSuchProviderException</code> with the
 given message.
 @param msg
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityNoSuchProviderException)

FOUNDATION_EXPORT void JavaSecurityNoSuchProviderException_initWithNSString_(JavaSecurityNoSuchProviderException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityNoSuchProviderException *new_JavaSecurityNoSuchProviderException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityNoSuchProviderException_init(JavaSecurityNoSuchProviderException *self);

FOUNDATION_EXPORT JavaSecurityNoSuchProviderException *new_JavaSecurityNoSuchProviderException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityNoSuchProviderException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityNoSuchProviderException_INCLUDE_ALL")
