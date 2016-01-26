//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/ECFieldFp.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaSecuritySpecECFieldFp_INCLUDE_ALL")
#ifdef JavaSecuritySpecECFieldFp_RESTRICT
#define JavaSecuritySpecECFieldFp_INCLUDE_ALL 0
#else
#define JavaSecuritySpecECFieldFp_INCLUDE_ALL 1
#endif
#undef JavaSecuritySpecECFieldFp_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySpecECFieldFp_) && (JavaSecuritySpecECFieldFp_INCLUDE_ALL || defined(JavaSecuritySpecECFieldFp_INCLUDE))
#define JavaSecuritySpecECFieldFp_

#define JavaSecuritySpecECField_RESTRICT 1
#define JavaSecuritySpecECField_INCLUDE 1
#include "../../../java/security/spec/ECField.h"

@class JavaMathBigInteger;

/*!
 @brief The parameters specifying a <i>prime finite field</i> of an
 elliptic curve.
 */
@interface JavaSecuritySpecECFieldFp : NSObject < JavaSecuritySpecECField >

#pragma mark Public

/*!
 @brief Creates a new prime finite field of an elliptic curve with the specified
 prime <code>p</code>.
 @param p
 the prime value <code>p</code>.
 @throws IllegalArgumentException
 if <code>p <= zero</code>.
 */
- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)p;

/*!
 @brief Returns whether the specified object is equal to this finite field.
 @param obj
 the object to compare to this finite field.
 @return <code>true</code> if the specified object is equal to this finite field,
 otherwise <code>false</code>.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the size of the finite field (in bits).
 @return the size of the finite field (in bits).
 */
- (jint)getFieldSize;

/*!
 @brief Returns the prime value <code>p</code> for this finite field.
 @return the prime value <code>p</code> for this finite field.
 */
- (JavaMathBigInteger *)getP;

/*!
 @brief Returns the hashcode value for this finite field.
 @return the hashcode value for this finite field.
 */
- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecECFieldFp)

FOUNDATION_EXPORT void JavaSecuritySpecECFieldFp_initWithJavaMathBigInteger_(JavaSecuritySpecECFieldFp *self, JavaMathBigInteger *p);

FOUNDATION_EXPORT JavaSecuritySpecECFieldFp *new_JavaSecuritySpecECFieldFp_initWithJavaMathBigInteger_(JavaMathBigInteger *p) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecECFieldFp)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecuritySpecECFieldFp_INCLUDE_ALL")
