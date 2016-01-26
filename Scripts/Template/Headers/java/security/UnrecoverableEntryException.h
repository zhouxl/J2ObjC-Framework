//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/UnrecoverableEntryException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityUnrecoverableEntryException_INCLUDE_ALL")
#ifdef JavaSecurityUnrecoverableEntryException_RESTRICT
#define JavaSecurityUnrecoverableEntryException_INCLUDE_ALL 0
#else
#define JavaSecurityUnrecoverableEntryException_INCLUDE_ALL 1
#endif
#undef JavaSecurityUnrecoverableEntryException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityUnrecoverableEntryException_) && (JavaSecurityUnrecoverableEntryException_INCLUDE_ALL || defined(JavaSecurityUnrecoverableEntryException_INCLUDE))
#define JavaSecurityUnrecoverableEntryException_

#define JavaSecurityGeneralSecurityException_RESTRICT 1
#define JavaSecurityGeneralSecurityException_INCLUDE 1
#include "../../java/security/GeneralSecurityException.h"

/*!
 @brief <code>UnrecoverableEntryException</code> indicates, that a <code>KeyStore.Entry</code>
 cannot be recovered from a <code>KeyStore</code>.
 - seealso: KeyStore
 - seealso: KeyStore.Entry
 */
@interface JavaSecurityUnrecoverableEntryException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>UnrecoverableEntryException</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>UnrecoverableEntryException</code> with the
 given message.
 @param msg
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityUnrecoverableEntryException)

FOUNDATION_EXPORT void JavaSecurityUnrecoverableEntryException_init(JavaSecurityUnrecoverableEntryException *self);

FOUNDATION_EXPORT JavaSecurityUnrecoverableEntryException *new_JavaSecurityUnrecoverableEntryException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityUnrecoverableEntryException_initWithNSString_(JavaSecurityUnrecoverableEntryException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityUnrecoverableEntryException *new_JavaSecurityUnrecoverableEntryException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityUnrecoverableEntryException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityUnrecoverableEntryException_INCLUDE_ALL")
