//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CertStoreSpi.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertStoreSpi")
#ifdef RESTRICT_JavaSecurityCertCertStoreSpi
#define INCLUDE_ALL_JavaSecurityCertCertStoreSpi 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertStoreSpi 1
#endif
#undef RESTRICT_JavaSecurityCertCertStoreSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertCertStoreSpi_) && (INCLUDE_ALL_JavaSecurityCertCertStoreSpi || defined(INCLUDE_JavaSecurityCertCertStoreSpi))
#define JavaSecurityCertCertStoreSpi_

@protocol JavaSecurityCertCRLSelector;
@protocol JavaSecurityCertCertSelector;
@protocol JavaSecurityCertCertStoreParameters;
@protocol JavaUtilCollection;

/*!
 @brief The <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>CertStore</code> class.All <code>CertStore</code>
  implementations must include a class (the SPI class) that extends
  this class (<code>CertStoreSpi</code>), provides a constructor with
  a single argument of type <code>CertStoreParameters</code>, and implements
  all of its methods.
 In general, instances of this class should only be
  accessed through the <code>CertStore</code> class.
  For details, see the Java Cryptography Architecture. 
 <p>
  <b>Concurrent Access</b>
  <p>
  The public methods of all <code>CertStoreSpi</code> objects must be
  thread-safe. That is, multiple threads may concurrently invoke these
  methods on a single <code>CertStoreSpi</code> object (or more than one)
  with no ill effects. This allows a <code>CertPathBuilder</code> to search
  for a CRL while simultaneously searching for further certificates, for
  instance. 
 <p>
  Simple <code>CertStoreSpi</code> implementations will probably ensure
  thread safety by adding a <code>synchronized</code> keyword to their 
 <code>engineGetCertificates</code> and <code>engineGetCRLs</code> methods.
  More sophisticated ones may allow truly concurrent access.
 @since 1.4
 @author Steve Hanna
 */
@interface JavaSecurityCertCertStoreSpi : NSObject

#pragma mark Public

/*!
 @brief The sole constructor.
 @param params the initialization parameters (may be  <code> null </code>
  )
 @throw InvalidAlgorithmParameterExceptionif the initialization
  parameters are inappropriate for this <code>CertStoreSpi</code>
 */
- (instancetype __nonnull)initWithJavaSecurityCertCertStoreParameters:(id<JavaSecurityCertCertStoreParameters>)params;

/*!
 @brief Returns a <code>Collection</code> of <code>Certificate</code>s that
  match the specified selector.If no <code>Certificate</code>s
  match the selector, an empty <code>Collection</code> will be returned.
 <p>
  For some <code>CertStore</code> types, the resulting 
 <code>Collection</code> may not contain <b>all</b> of the 
 <code>Certificate</code>s that match the selector. For instance,
  an LDAP <code>CertStore</code> may not search all entries in the
  directory. Instead, it may just search entries that are likely to
  contain the <code>Certificate</code>s it is looking for. 
 <p>
  Some <code>CertStore</code> implementations (especially LDAP 
 <code>CertStore</code>s) may throw a <code>CertStoreException</code>
  unless a non-null <code>CertSelector</code> is provided that includes
  specific criteria that can be used to find the certificates. Issuer
  and/or subject names are especially useful criteria.
 @param selector A  <code> CertSelector </code>  used to select which
     <code> Certificate </code> s should be returned. Specify  <code> null </code>
    to return all  <code> Certificate </code> s (if supported).
 @return A <code>Collection</code> of <code>Certificate</code>s that
          match the specified selector (never <code>null</code>)
 @throw CertStoreExceptionif an exception occurs
 */
- (id<JavaUtilCollection>)engineGetCertificatesWithJavaSecurityCertCertSelector:(id<JavaSecurityCertCertSelector>)selector;

/*!
 @brief Returns a <code>Collection</code> of <code>CRL</code>s that
  match the specified selector.If no <code>CRL</code>s
  match the selector, an empty <code>Collection</code> will be returned.
 <p>
  For some <code>CertStore</code> types, the resulting 
 <code>Collection</code> may not contain <b>all</b> of the 
 <code>CRL</code>s that match the selector. For instance,
  an LDAP <code>CertStore</code> may not search all entries in the
  directory. Instead, it may just search entries that are likely to
  contain the <code>CRL</code>s it is looking for. 
 <p>
  Some <code>CertStore</code> implementations (especially LDAP 
 <code>CertStore</code>s) may throw a <code>CertStoreException</code>
  unless a non-null <code>CRLSelector</code> is provided that includes
  specific criteria that can be used to find the CRLs. Issuer names
  and/or the certificate to be checked are especially useful.
 @param selector A  <code> CRLSelector </code>  used to select which
     <code> CRL </code> s should be returned. Specify  <code> null </code>
    to return all  <code> CRL </code> s (if supported).
 @return A <code>Collection</code> of <code>CRL</code>s that
          match the specified selector (never <code>null</code>)
 @throw CertStoreExceptionif an exception occurs
 */
- (id<JavaUtilCollection>)engineGetCRLsWithJavaSecurityCertCRLSelector:(id<JavaSecurityCertCRLSelector>)selector;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertStoreSpi)

FOUNDATION_EXPORT void JavaSecurityCertCertStoreSpi_initWithJavaSecurityCertCertStoreParameters_(JavaSecurityCertCertStoreSpi *self, id<JavaSecurityCertCertStoreParameters> params);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertStoreSpi)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertStoreSpi")
