//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/SecureRandomSpi.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySecureRandomSpi")
#ifdef RESTRICT_JavaSecuritySecureRandomSpi
#define INCLUDE_ALL_JavaSecuritySecureRandomSpi 0
#else
#define INCLUDE_ALL_JavaSecuritySecureRandomSpi 1
#endif
#undef RESTRICT_JavaSecuritySecureRandomSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySecureRandomSpi_) && (INCLUDE_ALL_JavaSecuritySecureRandomSpi || defined(INCLUDE_JavaSecuritySecureRandomSpi))
#define JavaSecuritySecureRandomSpi_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../java/io/Serializable.h"

@class IOSByteArray;

/*!
 @brief This class defines the <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>SecureRandom</code> class.
 All the abstract methods in this class must be implemented by each
  service provider who wishes to supply the implementation
  of a cryptographically strong pseudo-random number generator.
 - seealso: SecureRandom
 @since 1.2
 */
@interface JavaSecuritySecureRandomSpi : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)init;

#pragma mark Protected

/*!
 @brief Returns the given number of seed bytes.This call may be used to
  seed other random number generators.
 @param numBytes the number of seed bytes to generate.
 @return the seed bytes.
 */
- (IOSByteArray *)engineGenerateSeedWithInt:(jint)numBytes;

/*!
 @brief Generates a user-specified number of random bytes.
 <p> If a call to <code>engineSetSeed</code> had not occurred previously,
  the first call to this method forces this SecureRandom implementation
  to seed itself.  This self-seeding will not occur if 
 <code>engineSetSeed</code> was previously called.
 @param bytes the array to be filled in with random bytes.
 */
- (void)engineNextBytesWithByteArray:(IOSByteArray *)bytes;

/*!
 @brief Reseeds this random object.The given seed supplements, rather than
  replaces, the existing seed.
 Thus, repeated calls are guaranteed
  never to reduce randomness.
 @param seed the seed.
 */
- (void)engineSetSeedWithByteArray:(IOSByteArray *)seed;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySecureRandomSpi)

FOUNDATION_EXPORT void JavaSecuritySecureRandomSpi_init(JavaSecuritySecureRandomSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySecureRandomSpi)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySecureRandomSpi")
