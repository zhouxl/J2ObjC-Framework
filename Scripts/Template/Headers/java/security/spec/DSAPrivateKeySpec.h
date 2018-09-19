//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/DSAPrivateKeySpec.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecDSAPrivateKeySpec")
#ifdef RESTRICT_JavaSecuritySpecDSAPrivateKeySpec
#define INCLUDE_ALL_JavaSecuritySpecDSAPrivateKeySpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecDSAPrivateKeySpec 1
#endif
#undef RESTRICT_JavaSecuritySpecDSAPrivateKeySpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySpecDSAPrivateKeySpec_) && (INCLUDE_ALL_JavaSecuritySpecDSAPrivateKeySpec || defined(INCLUDE_JavaSecuritySpecDSAPrivateKeySpec))
#define JavaSecuritySpecDSAPrivateKeySpec_

#define RESTRICT_JavaSecuritySpecKeySpec 1
#define INCLUDE_JavaSecuritySpecKeySpec 1
#include "../../../java/security/spec/KeySpec.h"

@class JavaMathBigInteger;

/*!
 @brief This class specifies a DSA private key with its associated parameters.
 @author Jan Luehe
 - seealso: java.security.Key
 - seealso: java.security.KeyFactory
 - seealso: KeySpec
 - seealso: DSAPublicKeySpec
 - seealso: PKCS8EncodedKeySpec
 @since 1.2
 */
@interface JavaSecuritySpecDSAPrivateKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

/*!
 @brief Creates a new DSAPrivateKeySpec with the specified parameter values.
 @param x the private key.
 @param p the prime.
 @param q the sub-prime.
 @param g the base.
 */
- (instancetype __nonnull)initWithJavaMathBigInteger:(JavaMathBigInteger *)x
                              withJavaMathBigInteger:(JavaMathBigInteger *)p
                              withJavaMathBigInteger:(JavaMathBigInteger *)q
                              withJavaMathBigInteger:(JavaMathBigInteger *)g;

/*!
 @brief Returns the base <code>g</code>.
 @return the base <code>g</code>.
 */
- (JavaMathBigInteger *)getG;

/*!
 @brief Returns the prime <code>p</code>.
 @return the prime <code>p</code>.
 */
- (JavaMathBigInteger *)getP;

/*!
 @brief Returns the sub-prime <code>q</code>.
 @return the sub-prime <code>q</code>.
 */
- (JavaMathBigInteger *)getQ;

/*!
 @brief Returns the private key <code>x</code>.
 @return the private key <code>x</code>.
 */
- (JavaMathBigInteger *)getX;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecDSAPrivateKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecDSAPrivateKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaSecuritySpecDSAPrivateKeySpec *self, JavaMathBigInteger *x, JavaMathBigInteger *p, JavaMathBigInteger *q, JavaMathBigInteger *g);

FOUNDATION_EXPORT JavaSecuritySpecDSAPrivateKeySpec *new_JavaSecuritySpecDSAPrivateKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *x, JavaMathBigInteger *p, JavaMathBigInteger *q, JavaMathBigInteger *g) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecDSAPrivateKeySpec *create_JavaSecuritySpecDSAPrivateKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *x, JavaMathBigInteger *p, JavaMathBigInteger *q, JavaMathBigInteger *g);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecDSAPrivateKeySpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecDSAPrivateKeySpec")
