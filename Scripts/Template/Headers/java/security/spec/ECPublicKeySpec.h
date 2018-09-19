//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/ECPublicKeySpec.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecECPublicKeySpec")
#ifdef RESTRICT_JavaSecuritySpecECPublicKeySpec
#define INCLUDE_ALL_JavaSecuritySpecECPublicKeySpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecECPublicKeySpec 1
#endif
#undef RESTRICT_JavaSecuritySpecECPublicKeySpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySpecECPublicKeySpec_) && (INCLUDE_ALL_JavaSecuritySpecECPublicKeySpec || defined(INCLUDE_JavaSecuritySpecECPublicKeySpec))
#define JavaSecuritySpecECPublicKeySpec_

#define RESTRICT_JavaSecuritySpecKeySpec 1
#define INCLUDE_JavaSecuritySpecKeySpec 1
#include "../../../java/security/spec/KeySpec.h"

@class JavaSecuritySpecECParameterSpec;
@class JavaSecuritySpecECPoint;

/*!
 @brief This immutable class specifies an elliptic curve public key with
  its associated parameters.
 - seealso: KeySpec
 - seealso: ECPoint
 - seealso: ECParameterSpec
 @author Valerie Peng
 @since 1.5
 */
@interface JavaSecuritySpecECPublicKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

/*!
 @brief Creates a new ECPublicKeySpec with the specified
  parameter values.
 @param w the public point.
 @param params the associated elliptic curve domain  parameters.
 @throw NullPointerExceptionif <code>w</code>
  or <code>params</code> is null.
 @throw IllegalArgumentExceptionif <code>w</code>
  is point at infinity, i.e. ECPoint.POINT_INFINITY
 */
- (instancetype __nonnull)initWithJavaSecuritySpecECPoint:(JavaSecuritySpecECPoint *)w
                      withJavaSecuritySpecECParameterSpec:(JavaSecuritySpecECParameterSpec *)params;

/*!
 @brief Returns the associated elliptic curve domain
  parameters.
 @return the EC domain parameters.
 */
- (JavaSecuritySpecECParameterSpec *)getParams;

/*!
 @brief Returns the public point W.
 @return the public point W.
 */
- (JavaSecuritySpecECPoint *)getW;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecECPublicKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecECPublicKeySpec_initWithJavaSecuritySpecECPoint_withJavaSecuritySpecECParameterSpec_(JavaSecuritySpecECPublicKeySpec *self, JavaSecuritySpecECPoint *w, JavaSecuritySpecECParameterSpec *params);

FOUNDATION_EXPORT JavaSecuritySpecECPublicKeySpec *new_JavaSecuritySpecECPublicKeySpec_initWithJavaSecuritySpecECPoint_withJavaSecuritySpecECParameterSpec_(JavaSecuritySpecECPoint *w, JavaSecuritySpecECParameterSpec *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecECPublicKeySpec *create_JavaSecuritySpecECPublicKeySpec_initWithJavaSecuritySpecECPoint_withJavaSecuritySpecECParameterSpec_(JavaSecuritySpecECPoint *w, JavaSecuritySpecECParameterSpec *params);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecECPublicKeySpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecECPublicKeySpec")
