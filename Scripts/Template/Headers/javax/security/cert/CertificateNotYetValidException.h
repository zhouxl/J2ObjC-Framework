//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/security/cert/CertificateNotYetValidException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSecurityCertCertificateNotYetValidException")
#ifdef RESTRICT_JavaxSecurityCertCertificateNotYetValidException
#define INCLUDE_ALL_JavaxSecurityCertCertificateNotYetValidException 0
#else
#define INCLUDE_ALL_JavaxSecurityCertCertificateNotYetValidException 1
#endif
#undef RESTRICT_JavaxSecurityCertCertificateNotYetValidException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSecurityCertCertificateNotYetValidException_) && (INCLUDE_ALL_JavaxSecurityCertCertificateNotYetValidException || defined(INCLUDE_JavaxSecurityCertCertificateNotYetValidException))
#define JavaxSecurityCertCertificateNotYetValidException_

#define RESTRICT_JavaxSecurityCertCertificateException 1
#define INCLUDE_JavaxSecurityCertCertificateException 1
#include "../../../javax/security/cert/CertificateException.h"

/*!
 @brief The exception that is thrown when a <code>Certificate</code> is not yet valid.
 <p>
  Note: This package is provided only for compatibility reasons. It contains a
  simplified version of the java.security.cert package that was previously used
  by JSSE (Java SSL package). All applications that do not have to be
  compatible with older versions of JSSE (that is before Java SDK 1.5) should
  only use java.security.cert.
 */
@interface JavaxSecurityCertCertificateNotYetValidException : JavaxSecurityCertCertificateException

#pragma mark Public

/*!
 @brief Creates a new <code>CertificateNotYetValidException</code>.
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a new <code>CertificateNotYetValidException</code> with the specified
  message.
 @param msg the detail message for the exception.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertCertificateNotYetValidException)

FOUNDATION_EXPORT void JavaxSecurityCertCertificateNotYetValidException_initWithNSString_(JavaxSecurityCertCertificateNotYetValidException *self, NSString *msg);

FOUNDATION_EXPORT JavaxSecurityCertCertificateNotYetValidException *new_JavaxSecurityCertCertificateNotYetValidException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityCertCertificateNotYetValidException *create_JavaxSecurityCertCertificateNotYetValidException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaxSecurityCertCertificateNotYetValidException_init(JavaxSecurityCertCertificateNotYetValidException *self);

FOUNDATION_EXPORT JavaxSecurityCertCertificateNotYetValidException *new_JavaxSecurityCertCertificateNotYetValidException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityCertCertificateNotYetValidException *create_JavaxSecurityCertCertificateNotYetValidException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertCertificateNotYetValidException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxSecurityCertCertificateNotYetValidException")
