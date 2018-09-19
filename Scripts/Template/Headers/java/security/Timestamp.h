//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/Timestamp.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityTimestamp")
#ifdef RESTRICT_JavaSecurityTimestamp
#define INCLUDE_ALL_JavaSecurityTimestamp 0
#else
#define INCLUDE_ALL_JavaSecurityTimestamp 1
#endif
#undef RESTRICT_JavaSecurityTimestamp

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityTimestamp_) && (INCLUDE_ALL_JavaSecurityTimestamp || defined(INCLUDE_JavaSecurityTimestamp))
#define JavaSecurityTimestamp_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../java/io/Serializable.h"

@class JavaSecurityCertCertPath;
@class JavaUtilDate;

/*!
 @brief This class encapsulates information about a signed timestamp.
 It is immutable.
  It includes the timestamp's date and time as well as information about the
  Timestamping Authority (TSA) which generated and signed the timestamp.
 @since 1.5
 @author Vincent Ryan
 */
@interface JavaSecurityTimestamp : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a Timestamp.
 @param timestamp is the timestamp's date and time. It must not be null.
 @param signerCertPath is the TSA's certificate path. It must not be null.
 @throw NullPointerExceptionif timestamp or signerCertPath is null.
 */
- (instancetype __nonnull)initWithJavaUtilDate:(JavaUtilDate *)timestamp
                  withJavaSecurityCertCertPath:(JavaSecurityCertCertPath *)signerCertPath;

/*!
 @brief Tests for equality between the specified object and this
  timestamp.Two timestamps are considered equal if the date and time of
  their timestamp's and their signer's certificate paths are equal.
 @param obj the object to test for equality with this timestamp.
 @return true if the timestamp are considered equal, false otherwise.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the certificate path for the Timestamping Authority.
 @return The TSA's certificate path.
 */
- (JavaSecurityCertCertPath *)getSignerCertPath;

/*!
 @brief Returns the date and time when the timestamp was generated.
 @return The timestamp's date and time.
 */
- (JavaUtilDate *)getTimestamp;

/*!
 @brief Returns the hash code value for this timestamp.
 The hash code is generated using the date and time of the timestamp
  and the TSA's certificate path.
 @return a hash code value for this timestamp.
 */
- (NSUInteger)hash;

/*!
 @brief Returns a string describing this timestamp.
 @return A string comprising the date and time of the timestamp and
          its signer's certificate.
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityTimestamp)

FOUNDATION_EXPORT void JavaSecurityTimestamp_initWithJavaUtilDate_withJavaSecurityCertCertPath_(JavaSecurityTimestamp *self, JavaUtilDate *timestamp, JavaSecurityCertCertPath *signerCertPath);

FOUNDATION_EXPORT JavaSecurityTimestamp *new_JavaSecurityTimestamp_initWithJavaUtilDate_withJavaSecurityCertCertPath_(JavaUtilDate *timestamp, JavaSecurityCertCertPath *signerCertPath) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityTimestamp *create_JavaSecurityTimestamp_initWithJavaUtilDate_withJavaSecurityCertCertPath_(JavaUtilDate *timestamp, JavaSecurityCertCertPath *signerCertPath);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityTimestamp)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityTimestamp")
