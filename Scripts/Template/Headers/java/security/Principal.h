//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/Principal.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityPrincipal")
#ifdef RESTRICT_JavaSecurityPrincipal
#define INCLUDE_ALL_JavaSecurityPrincipal 0
#else
#define INCLUDE_ALL_JavaSecurityPrincipal 1
#endif
#undef RESTRICT_JavaSecurityPrincipal

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityPrincipal_) && (INCLUDE_ALL_JavaSecurityPrincipal || defined(INCLUDE_JavaSecurityPrincipal))
#define JavaSecurityPrincipal_

/*!
 @brief This interface represents the abstract notion of a principal, which
  can be used to represent any entity, such as an individual, a
  corporation, and a login id.
 - seealso: java.security.cert.X509Certificate
 @author Li Gong
 */
@protocol JavaSecurityPrincipal < JavaObject >

/*!
 @brief Compares this principal to the specified object.Returns true
  if the object passed in matches the principal represented by
  the implementation of this interface.
 @param another principal to compare with.
 @return true if the principal passed in is the same as that
  encapsulated by this principal, and false otherwise.
 */
- (jboolean)isEqual:(id)another;

/*!
 @brief Returns a string representation of this principal.
 @return a string representation of this principal.
 */
- (NSString *)description;

/*!
 @brief Returns a hashcode for this principal.
 @return a hashcode for this principal.
 */
- (NSUInteger)hash;

/*!
 @brief Returns the name of this principal.
 @return the name of this principal.
 */
- (NSString *)getName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPrincipal)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPrincipal)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityPrincipal")
