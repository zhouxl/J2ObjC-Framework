//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/interfaces/ECPublicKey.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityInterfacesECPublicKey")
#ifdef RESTRICT_JavaSecurityInterfacesECPublicKey
#define INCLUDE_ALL_JavaSecurityInterfacesECPublicKey 0
#else
#define INCLUDE_ALL_JavaSecurityInterfacesECPublicKey 1
#endif
#undef RESTRICT_JavaSecurityInterfacesECPublicKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityInterfacesECPublicKey_) && (INCLUDE_ALL_JavaSecurityInterfacesECPublicKey || defined(INCLUDE_JavaSecurityInterfacesECPublicKey))
#define JavaSecurityInterfacesECPublicKey_

#define RESTRICT_JavaSecurityPublicKey 1
#define INCLUDE_JavaSecurityPublicKey 1
#include "../../../java/security/PublicKey.h"

#define RESTRICT_JavaSecurityInterfacesECKey 1
#define INCLUDE_JavaSecurityInterfacesECKey 1
#include "../../../java/security/interfaces/ECKey.h"

@class JavaSecuritySpecECPoint;

/*!
 @brief The interface to an elliptic curve (EC) public key.
 @author Valerie Peng
 - seealso: PublicKey
 - seealso: ECKey
 - seealso: java.security.spec.ECPoint
 @since 1.5
 */
@protocol JavaSecurityInterfacesECPublicKey < JavaSecurityPublicKey, JavaSecurityInterfacesECKey, JavaObject >

/*!
 @brief Returns the public point W.
 @return the public point W.
 */
- (JavaSecuritySpecECPoint *)getW;

@end

@interface JavaSecurityInterfacesECPublicKey : NSObject
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesECPublicKey)

/*!
 @brief The class fingerprint that is set to indicate
  serialization compatibility.
 */
inline jlong JavaSecurityInterfacesECPublicKey_get_serialVersionUID(void);
#define JavaSecurityInterfacesECPublicKey_serialVersionUID -3314988629879632826LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityInterfacesECPublicKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesECPublicKey)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityInterfacesECPublicKey")
