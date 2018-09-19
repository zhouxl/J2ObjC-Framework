//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/CodeSource.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCodeSource")
#ifdef RESTRICT_JavaSecurityCodeSource
#define INCLUDE_ALL_JavaSecurityCodeSource 0
#else
#define INCLUDE_ALL_JavaSecurityCodeSource 1
#endif
#undef RESTRICT_JavaSecurityCodeSource

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCodeSource_) && (INCLUDE_ALL_JavaSecurityCodeSource || defined(INCLUDE_JavaSecurityCodeSource))
#define JavaSecurityCodeSource_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../java/io/Serializable.h"

@class IOSObjectArray;
@class JavaNetURL;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityCodeSource : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithJavaNetURL:(JavaNetURL *)url
        withJavaSecurityCertCertificateArray:(IOSObjectArray *)certs;

- (instancetype __nonnull)initWithJavaNetURL:(JavaNetURL *)url
             withJavaSecurityCodeSignerArray:(IOSObjectArray *)signers;

- (IOSObjectArray *)getCertificates;

- (IOSObjectArray *)getCodeSigners;

- (JavaNetURL *)getLocation;

- (jboolean)impliesWithJavaSecurityCodeSource:(JavaSecurityCodeSource *)codesource;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCodeSource)

FOUNDATION_EXPORT void JavaSecurityCodeSource_initWithJavaNetURL_withJavaSecurityCertCertificateArray_(JavaSecurityCodeSource *self, JavaNetURL *url, IOSObjectArray *certs);

FOUNDATION_EXPORT JavaSecurityCodeSource *new_JavaSecurityCodeSource_initWithJavaNetURL_withJavaSecurityCertCertificateArray_(JavaNetURL *url, IOSObjectArray *certs) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCodeSource *create_JavaSecurityCodeSource_initWithJavaNetURL_withJavaSecurityCertCertificateArray_(JavaNetURL *url, IOSObjectArray *certs);

FOUNDATION_EXPORT void JavaSecurityCodeSource_initWithJavaNetURL_withJavaSecurityCodeSignerArray_(JavaSecurityCodeSource *self, JavaNetURL *url, IOSObjectArray *signers);

FOUNDATION_EXPORT JavaSecurityCodeSource *new_JavaSecurityCodeSource_initWithJavaNetURL_withJavaSecurityCodeSignerArray_(JavaNetURL *url, IOSObjectArray *signers) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCodeSource *create_JavaSecurityCodeSource_initWithJavaNetURL_withJavaSecurityCodeSignerArray_(JavaNetURL *url, IOSObjectArray *signers);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCodeSource)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCodeSource")
