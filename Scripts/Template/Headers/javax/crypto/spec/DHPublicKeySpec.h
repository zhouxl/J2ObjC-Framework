//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/spec/DHPublicKeySpec.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoSpecDHPublicKeySpec")
#ifdef RESTRICT_JavaxCryptoSpecDHPublicKeySpec
#define INCLUDE_ALL_JavaxCryptoSpecDHPublicKeySpec 0
#else
#define INCLUDE_ALL_JavaxCryptoSpecDHPublicKeySpec 1
#endif
#undef RESTRICT_JavaxCryptoSpecDHPublicKeySpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoSpecDHPublicKeySpec_) && (INCLUDE_ALL_JavaxCryptoSpecDHPublicKeySpec || defined(INCLUDE_JavaxCryptoSpecDHPublicKeySpec))
#define JavaxCryptoSpecDHPublicKeySpec_

#define RESTRICT_JavaSecuritySpecKeySpec 1
#define INCLUDE_JavaSecuritySpecKeySpec 1
#include "../../../java/security/spec/KeySpec.h"

@class JavaMathBigInteger;

/*!
 @brief This class specifies a Diffie-Hellman public key with its associated
  parameters.
 <p>Note that this class does not perform any validation on specified
  parameters. Thus, the specified values are returned directly even
  if they are null.
 @author Jan Luehe
 - seealso: DHPrivateKeySpec
 @since 1.4
 */
@interface JavaxCryptoSpecDHPublicKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

/*!
 @brief Constructor that takes a public value <code>y</code>, a prime
  modulus <code>p</code>, and a base generator <code>g</code>.
 @param y public value y
 @param p prime modulus p
 @param g base generator g
 */
- (instancetype __nonnull)initWithJavaMathBigInteger:(JavaMathBigInteger *)y
                              withJavaMathBigInteger:(JavaMathBigInteger *)p
                              withJavaMathBigInteger:(JavaMathBigInteger *)g;

/*!
 @brief Returns the base generator <code>g</code>.
 @return the base generator <code>g</code>
 */
- (JavaMathBigInteger *)getG;

/*!
 @brief Returns the prime modulus <code>p</code>.
 @return the prime modulus <code>p</code>
 */
- (JavaMathBigInteger *)getP;

/*!
 @brief Returns the public value <code>y</code>.
 @return the public value <code>y</code>
 */
- (JavaMathBigInteger *)getY;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoSpecDHPublicKeySpec)

FOUNDATION_EXPORT void JavaxCryptoSpecDHPublicKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaxCryptoSpecDHPublicKeySpec *self, JavaMathBigInteger *y, JavaMathBigInteger *p, JavaMathBigInteger *g);

FOUNDATION_EXPORT JavaxCryptoSpecDHPublicKeySpec *new_JavaxCryptoSpecDHPublicKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *y, JavaMathBigInteger *p, JavaMathBigInteger *g) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecDHPublicKeySpec *create_JavaxCryptoSpecDHPublicKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *y, JavaMathBigInteger *p, JavaMathBigInteger *g);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecDHPublicKeySpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoSpecDHPublicKeySpec")
