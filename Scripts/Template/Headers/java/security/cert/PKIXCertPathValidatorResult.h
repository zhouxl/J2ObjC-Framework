//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/PKIXCertPathValidatorResult.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertPKIXCertPathValidatorResult")
#ifdef RESTRICT_JavaSecurityCertPKIXCertPathValidatorResult
#define INCLUDE_ALL_JavaSecurityCertPKIXCertPathValidatorResult 0
#else
#define INCLUDE_ALL_JavaSecurityCertPKIXCertPathValidatorResult 1
#endif
#undef RESTRICT_JavaSecurityCertPKIXCertPathValidatorResult

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertPKIXCertPathValidatorResult_) && (INCLUDE_ALL_JavaSecurityCertPKIXCertPathValidatorResult || defined(INCLUDE_JavaSecurityCertPKIXCertPathValidatorResult))
#define JavaSecurityCertPKIXCertPathValidatorResult_

#define RESTRICT_JavaSecurityCertCertPathValidatorResult 1
#define INCLUDE_JavaSecurityCertCertPathValidatorResult 1
#include "../../../java/security/cert/CertPathValidatorResult.h"

@class JavaSecurityCertTrustAnchor;
@protocol JavaSecurityCertPolicyNode;
@protocol JavaSecurityPublicKey;

/*!
 @brief This class represents the successful result of the PKIX certification
  path validation algorithm.
 <p>Instances of <code>PKIXCertPathValidatorResult</code> are returned by the 
 <code>validate</code> method of 
 <code>CertPathValidator</code> objects implementing the PKIX algorithm. 
 <p> All <code>PKIXCertPathValidatorResult</code> objects contain the
  valid policy tree and subject public key resulting from the
  validation algorithm, as well as a <code>TrustAnchor</code> describing
  the certification authority (CA) that served as a trust anchor for the
  certification path. 
 <p>
  <b>Concurrent Access</b>
  <p>
  Unless otherwise specified, the methods defined in this class are not
  thread-safe. Multiple threads that need to access a single
  object concurrently should synchronize amongst themselves and
  provide the necessary locking. Multiple threads each manipulating
  separate objects need not synchronize.
 - seealso: CertPathValidatorResult
 @since 1.4
 @author Yassir Elley
 @author Sean Mullan
 */
@interface JavaSecurityCertPKIXCertPathValidatorResult : NSObject < JavaSecurityCertCertPathValidatorResult >

#pragma mark Public

/*!
 @brief Creates an instance of <code>PKIXCertPathValidatorResult</code>
  containing the specified parameters.
 @param trustAnchor a  <code> TrustAnchor </code>  describing the CA that
   served as a trust anchor for the certification path
 @param policyTree the immutable valid policy tree, or  <code> null </code>
   if there are no valid policies
 @param subjectPublicKey the public key of the subject
 @throw NullPointerExceptionif the <code>subjectPublicKey</code> or 
 <code>trustAnchor</code> parameters are <code>null</code>
 */
- (instancetype __nonnull)initWithJavaSecurityCertTrustAnchor:(JavaSecurityCertTrustAnchor *)trustAnchor
                               withJavaSecurityCertPolicyNode:(id<JavaSecurityCertPolicyNode>)policyTree
                                    withJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)subjectPublicKey;

/*!
 @brief Returns a copy of this object.
 @return the copy
 */
- (id)java_clone;

/*!
 @brief Returns the root node of the valid policy tree resulting from the
  PKIX certification path validation algorithm.The
  <code>PolicyNode</code> object that is returned and any objects that
  it returns through public methods are immutable.
 <p>Most applications will not need to examine the valid policy tree.
  They can achieve their policy processing goals by setting the
  policy-related parameters in <code>PKIXParameters</code>. However, more
  sophisticated applications, especially those that process policy
  qualifiers, may need to traverse the valid policy tree using the 
 <code>PolicyNode.getParent</code> and 
 <code>PolicyNode.getChildren</code> methods.
 @return the root node of the valid policy tree, or <code>null</code>
  if there are no valid policies
 */
- (id<JavaSecurityCertPolicyNode>)getPolicyTree;

/*!
 @brief Returns the public key of the subject (target) of the certification
  path, including any inherited public key parameters if applicable.
 @return the public key of the subject (never <code>null</code>)
 */
- (id<JavaSecurityPublicKey>)getPublicKey;

/*!
 @brief Returns the <code>TrustAnchor</code> describing the CA that served
  as a trust anchor for the certification path.
 @return the <code>TrustAnchor</code> (never <code>null</code>)
 */
- (JavaSecurityCertTrustAnchor *)getTrustAnchor;

/*!
 @brief Return a printable representation of this 
 <code>PKIXCertPathValidatorResult</code>.
 @return a <code>String</code> describing the contents of this
          <code>PKIXCertPathValidatorResult</code>
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertPKIXCertPathValidatorResult)

FOUNDATION_EXPORT void JavaSecurityCertPKIXCertPathValidatorResult_initWithJavaSecurityCertTrustAnchor_withJavaSecurityCertPolicyNode_withJavaSecurityPublicKey_(JavaSecurityCertPKIXCertPathValidatorResult *self, JavaSecurityCertTrustAnchor *trustAnchor, id<JavaSecurityCertPolicyNode> policyTree, id<JavaSecurityPublicKey> subjectPublicKey);

FOUNDATION_EXPORT JavaSecurityCertPKIXCertPathValidatorResult *new_JavaSecurityCertPKIXCertPathValidatorResult_initWithJavaSecurityCertTrustAnchor_withJavaSecurityCertPolicyNode_withJavaSecurityPublicKey_(JavaSecurityCertTrustAnchor *trustAnchor, id<JavaSecurityCertPolicyNode> policyTree, id<JavaSecurityPublicKey> subjectPublicKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertPKIXCertPathValidatorResult *create_JavaSecurityCertPKIXCertPathValidatorResult_initWithJavaSecurityCertTrustAnchor_withJavaSecurityCertPolicyNode_withJavaSecurityPublicKey_(JavaSecurityCertTrustAnchor *trustAnchor, id<JavaSecurityCertPolicyNode> policyTree, id<JavaSecurityPublicKey> subjectPublicKey);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertPKIXCertPathValidatorResult)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertPKIXCertPathValidatorResult")
