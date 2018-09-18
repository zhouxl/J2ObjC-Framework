//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/MGF1ParameterSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecMGF1ParameterSpec")
#ifdef RESTRICT_JavaSecuritySpecMGF1ParameterSpec
#define INCLUDE_ALL_JavaSecuritySpecMGF1ParameterSpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecMGF1ParameterSpec 1
#endif
#undef RESTRICT_JavaSecuritySpecMGF1ParameterSpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySpecMGF1ParameterSpec_) && (INCLUDE_ALL_JavaSecuritySpecMGF1ParameterSpec || defined(INCLUDE_JavaSecuritySpecMGF1ParameterSpec))
#define JavaSecuritySpecMGF1ParameterSpec_

#define RESTRICT_JavaSecuritySpecAlgorithmParameterSpec 1
#define INCLUDE_JavaSecuritySpecAlgorithmParameterSpec 1
#include "java/security/spec/AlgorithmParameterSpec.h"

/*!
 @brief This class specifies the set of parameters used with mask generation
  function MGF1 in OAEP Padding and RSA-PSS signature scheme, as
  defined in the 
 <a href="http://www.ietf.org/rfc/rfc3447.txt">PKCS #1 v2.1</a>
  standard.
 <p>Its ASN.1 definition in PKCS#1 standard is described below: 
 @code

  MGF1Parameters ::= OAEP-PSSDigestAlgorthms 
  
@endcode
  where 
 @code

  OAEP-PSSDigestAlgorithms    ALGORITHM-IDENTIFIER ::= {
    { OID id-sha1 PARAMETERS NULL   }|
    { OID id-sha256 PARAMETERS NULL }|
    { OID id-sha384 PARAMETERS NULL }|
    { OID id-sha512 PARAMETERS NULL },
    ...  -- Allows for future expansion --
  } 
  
@endcode
 - seealso: PSSParameterSpec
 - seealso: javax.crypto.spec.OAEPParameterSpec
 @author Valerie Peng
 @since 1.5
 */
@interface JavaSecuritySpecMGF1ParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >
@property (readonly, class, strong) JavaSecuritySpecMGF1ParameterSpec *SHA1 NS_SWIFT_NAME(SHA1);
@property (readonly, class, strong) JavaSecuritySpecMGF1ParameterSpec *SHA256 NS_SWIFT_NAME(SHA256);
@property (readonly, class, strong) JavaSecuritySpecMGF1ParameterSpec *SHA384 NS_SWIFT_NAME(SHA384);
@property (readonly, class, strong) JavaSecuritySpecMGF1ParameterSpec *SHA512 NS_SWIFT_NAME(SHA512);

+ (JavaSecuritySpecMGF1ParameterSpec *)SHA1;

+ (JavaSecuritySpecMGF1ParameterSpec *)SHA256;

+ (JavaSecuritySpecMGF1ParameterSpec *)SHA384;

+ (JavaSecuritySpecMGF1ParameterSpec *)SHA512;

#pragma mark Public

/*!
 @brief Constructs a parameter set for mask generation function MGF1
  as defined in the PKCS #1 standard.
 @param mdName the algorithm name for the message digest  used in this mask generation function MGF1.
 @throw NullPointerExceptionif <code>mdName</code> is null.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)mdName;

/*!
 @brief Returns the algorithm name of the message digest used by the mask
  generation function.
 @return the algorithm name of the message digest.
 */
- (NSString *)getDigestAlgorithm;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaSecuritySpecMGF1ParameterSpec)

/*!
 @brief The MGF1ParameterSpec which uses "SHA-1" message digest.
 */
inline JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_get_SHA1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecuritySpecMGF1ParameterSpec, SHA1, JavaSecuritySpecMGF1ParameterSpec *)

/*!
 @brief The MGF1ParameterSpec which uses "SHA-256" message digest.
 */
inline JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_get_SHA256(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA256;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecuritySpecMGF1ParameterSpec, SHA256, JavaSecuritySpecMGF1ParameterSpec *)

/*!
 @brief The MGF1ParameterSpec which uses "SHA-384" message digest.
 */
inline JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_get_SHA384(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA384;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecuritySpecMGF1ParameterSpec, SHA384, JavaSecuritySpecMGF1ParameterSpec *)

/*!
 @brief The MGF1ParameterSpec which uses SHA-512 message digest.
 */
inline JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_get_SHA512(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA512;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecuritySpecMGF1ParameterSpec, SHA512, JavaSecuritySpecMGF1ParameterSpec *)

FOUNDATION_EXPORT void JavaSecuritySpecMGF1ParameterSpec_initWithNSString_(JavaSecuritySpecMGF1ParameterSpec *self, NSString *mdName);

FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *new_JavaSecuritySpecMGF1ParameterSpec_initWithNSString_(NSString *mdName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *create_JavaSecuritySpecMGF1ParameterSpec_initWithNSString_(NSString *mdName);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecMGF1ParameterSpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecMGF1ParameterSpec")
