//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CertStore.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertStore")
#ifdef RESTRICT_JavaSecurityCertCertStore
#define INCLUDE_ALL_JavaSecurityCertCertStore 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertStore 1
#endif
#undef RESTRICT_JavaSecurityCertCertStore

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertCertStore_) && (INCLUDE_ALL_JavaSecurityCertCertStore || defined(INCLUDE_JavaSecurityCertCertStore))
#define JavaSecurityCertCertStore_

@class JavaSecurityCertCertStoreSpi;
@class JavaSecurityProvider;
@protocol JavaSecurityCertCRLSelector;
@protocol JavaSecurityCertCertSelector;
@protocol JavaSecurityCertCertStoreParameters;
@protocol JavaUtilCollection;

/*!
 @brief A class for retrieving <code>Certificate</code>s and <code>CRL</code>s
  from a repository.
 <p>
  This class uses a provider-based architecture.
  To create a <code>CertStore</code>, call one of the static 
 <code>getInstance</code> methods, passing in the type of 
 <code>CertStore</code> desired, any applicable initialization parameters
  and optionally the name of the provider desired. 
 <p>
  Once the <code>CertStore</code> has been created, it can be used to
  retrieve <code>Certificate</code>s and <code>CRL</code>s by calling its 
 <code>getCertificates</code> and 
 <code>getCRLs</code> methods. 
 <p>
  Unlike a <code>KeyStore</code>, which provides access
  to a cache of private keys and trusted certificates, a 
 <code>CertStore</code> is designed to provide access to a potentially
  vast repository of untrusted certificates and CRLs. For example, an LDAP
  implementation of <code>CertStore</code> provides access to certificates
  and CRLs stored in one or more directories using the LDAP protocol and the
  schema as defined in the RFC service attribute. 
 <p> Android provides the following <code>CertStore</code> types: 
 <table>
      <thead>
          <tr>
              <th>Name</th>
              <th>Supported (API Levels)</th>
          </tr>
      </thead>
      <tbody>
          <tr>
              <td>Collection</td>
              <td>1+</td>
          </tr>
      </tbody>
  </table>
  This type is described in the <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertStore">
  CertStore section</a> of the
  Java Cryptography Architecture Standard Algorithm Name Documentation. 
 <p>
  <b>Concurrent Access</b>
  <p>
  All public methods of <code>CertStore</code> objects must be thread-safe.
  That is, multiple threads may concurrently invoke these methods on a
  single <code>CertStore</code> object (or more than one) with no
  ill effects. This allows a <code>CertPathBuilder</code> to search for a
  CRL while simultaneously searching for further certificates, for instance. 
 <p>
  The static methods of this class are also guaranteed to be thread-safe.
  Multiple threads may concurrently invoke the static methods defined in
  this class with no ill effects.
 @since 1.4
 @author Sean Mullan, Steve Hanna
 */
@interface JavaSecurityCertCertStore : NSObject

#pragma mark Public

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
  unless a non-null <code>CertSelector</code> is provided that
  includes specific criteria that can be used to find the certificates.
  Issuer and/or subject names are especially useful criteria.
 @param selector A  <code> CertSelector </code>  used to select which
     <code> Certificate </code> s should be returned. Specify  <code> null </code>
    to return all  <code> Certificate </code> s (if supported).
 @return A <code>Collection</code> of <code>Certificate</code>s that
          match the specified selector (never <code>null</code>)
 @throw CertStoreExceptionif an exception occurs
 */
- (id<JavaUtilCollection>)getCertificatesWithJavaSecurityCertCertSelector:(id<JavaSecurityCertCertSelector>)selector;

/*!
 @brief Returns the parameters used to initialize this <code>CertStore</code>.
 Note that the <code>CertStoreParameters</code> object is cloned before
  it is returned.
 @return the parameters used to initialize this <code>CertStore</code>
  (may be <code>null</code>)
 */
- (id<JavaSecurityCertCertStoreParameters>)getCertStoreParameters;

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
  unless a non-null <code>CRLSelector</code> is provided that
  includes specific criteria that can be used to find the CRLs.
  Issuer names and/or the certificate to be checked are especially useful.
 @param selector A  <code> CRLSelector </code>  used to select which
     <code> CRL </code> s should be returned. Specify  <code> null </code>
    to return all  <code> CRL </code> s (if supported).
 @return A <code>Collection</code> of <code>CRL</code>s that
          match the specified selector (never <code>null</code>)
 @throw CertStoreExceptionif an exception occurs
 */
- (id<JavaUtilCollection>)getCRLsWithJavaSecurityCertCRLSelector:(id<JavaSecurityCertCRLSelector>)selector;

/*!
 @brief Returns the default <code>CertStore</code> type as specified in the
  Java security properties file, or the string &quot;LDAP&quot; if no
  such property exists.The Java security properties file is located in
  the file named &lt;JAVA_HOME&gt;/lib/security/java.security.
 &lt;JAVA_HOME&gt; refers to the value of the java.home system property,
  and specifies the directory where the JRE is installed. 
 <p>The default <code>CertStore</code> type can be used by applications
  that do not want to use a hard-coded type when calling one of the 
 <code>getInstance</code> methods, and want to provide a default 
 <code>CertStore</code> type in case a user does not specify its own. 
 <p>The default <code>CertStore</code> type can be changed by setting
  the value of the "certstore.type" security property (in the Java
  security properties file) to the desired type.
 @return the default <code>CertStore</code> type as specified in the
  Java security properties file, or the string &quot;LDAP&quot;
  if no such property exists.
 */
+ (NSString *)getDefaultType;

/*!
 @brief Returns a <code>CertStore</code> object that implements the specified 
 <code>CertStore</code> type and is initialized with the specified
  parameters.
 <p> This method traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new CertStore object encapsulating the
  CertStoreSpi implementation from the first
  Provider that supports the specified type is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method. 
 <p>The <code>CertStore</code> that is returned is initialized with the
  specified <code>CertStoreParameters</code>. The type of parameters
  needed may vary between different types of <code>CertStore</code>s.
  Note that the specified <code>CertStoreParameters</code> object is
  cloned.
 @param type the name of the requested  <code> CertStore </code>  type.
   See the CertStore section in the  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertStore">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard types.
 @param params the initialization parameters (may be  <code> null </code>
  ).
 @return a <code>CertStore</code> object that implements the specified
           <code>CertStore</code> type.
 @throw NoSuchAlgorithmExceptionif no Provider supports a
           CertStoreSpi implementation for the specified type.
 @throw InvalidAlgorithmParameterExceptionif the specified
           initialization parameters are inappropriate for this          
 <code>CertStore</code>.
 - seealso: java.security.Provider
 */
+ (JavaSecurityCertCertStore *)getInstanceWithNSString:(NSString *)type
               withJavaSecurityCertCertStoreParameters:(id<JavaSecurityCertCertStoreParameters>)params;

/*!
 @brief Returns a <code>CertStore</code> object that implements the specified 
 <code>CertStore</code> type.
 <p> A new CertStore object encapsulating the
  CertStoreSpi implementation from the specified Provider
  object is returned.  Note that the specified Provider object
  does not have to be registered in the provider list. 
 <p>The <code>CertStore</code> that is returned is initialized with the
  specified <code>CertStoreParameters</code>. The type of parameters
  needed may vary between different types of <code>CertStore</code>s.
  Note that the specified <code>CertStoreParameters</code> object is
  cloned.
 @param type the requested  <code> CertStore </code>  type.
   See the CertStore section in the  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertStore">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard types.
 @param params the initialization parameters (may be  <code> null </code>
  ).
 @param provider the provider.
 @return a <code>CertStore</code> object that implements the
           specified type.
 @throw NoSuchAlgorithmExceptionif a CertStoreSpi
           implementation for the specified type is not available
           from the specified Provider object.
 @throw InvalidAlgorithmParameterExceptionif the specified
           initialization parameters are inappropriate for this          
 <code>CertStore</code>
 @throw IllegalArgumentExceptionif the <code>provider</code> is
           null.
 - seealso: java.security.Provider
 */
+ (JavaSecurityCertCertStore *)getInstanceWithNSString:(NSString *)type
               withJavaSecurityCertCertStoreParameters:(id<JavaSecurityCertCertStoreParameters>)params
                              withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a <code>CertStore</code> object that implements the specified 
 <code>CertStore</code> type.
 <p> A new CertStore object encapsulating the
  CertStoreSpi implementation from the specified provider
  is returned.  The specified provider must be registered
  in the security provider list. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method. 
 <p>The <code>CertStore</code> that is returned is initialized with the
  specified <code>CertStoreParameters</code>. The type of parameters
  needed may vary between different types of <code>CertStore</code>s.
  Note that the specified <code>CertStoreParameters</code> object is
  cloned.
 @param type the requested  <code> CertStore </code>  type.
   See the CertStore section in the  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertStore">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard types.
 @param params the initialization parameters (may be  <code> null </code>
  ).
 @param provider the name of the provider.
 @return a <code>CertStore</code> object that implements the
           specified type.
 @throw NoSuchAlgorithmExceptionif a CertStoreSpi
           implementation for the specified type is not
           available from the specified provider.
 @throw InvalidAlgorithmParameterExceptionif the specified
           initialization parameters are inappropriate for this          
 <code>CertStore</code>.
 @throw NoSuchProviderExceptionif the specified provider is not
           registered in the security provider list.
 @throw IllegalArgumentExceptionif the <code>provider</code> is
           null or empty.
 - seealso: java.security.Provider
 */
+ (JavaSecurityCertCertStore *)getInstanceWithNSString:(NSString *)type
               withJavaSecurityCertCertStoreParameters:(id<JavaSecurityCertCertStoreParameters>)params
                                          withNSString:(NSString *)provider;

/*!
 @brief Returns the provider of this <code>CertStore</code>.
 @return the provider of this <code>CertStore</code>
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Returns the type of this <code>CertStore</code>.
 @return the type of this <code>CertStore</code>
 */
- (NSString *)getType;

#pragma mark Protected

/*!
 @brief Creates a <code>CertStore</code> object of the given type, and
  encapsulates the given provider implementation (SPI object) in it.
 @param storeSpi the provider implementation
 @param provider the provider
 @param type the type
 @param params the initialization parameters (may be  <code> null </code>
  )
 */
- (instancetype __nonnull)initWithJavaSecurityCertCertStoreSpi:(JavaSecurityCertCertStoreSpi *)storeSpi
                                      withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                                  withNSString:(NSString *)type
                       withJavaSecurityCertCertStoreParameters:(id<JavaSecurityCertCertStoreParameters>)params;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertStore)

FOUNDATION_EXPORT void JavaSecurityCertCertStore_initWithJavaSecurityCertCertStoreSpi_withJavaSecurityProvider_withNSString_withJavaSecurityCertCertStoreParameters_(JavaSecurityCertCertStore *self, JavaSecurityCertCertStoreSpi *storeSpi, JavaSecurityProvider *provider, NSString *type, id<JavaSecurityCertCertStoreParameters> params);

FOUNDATION_EXPORT JavaSecurityCertCertStore *new_JavaSecurityCertCertStore_initWithJavaSecurityCertCertStoreSpi_withJavaSecurityProvider_withNSString_withJavaSecurityCertCertStoreParameters_(JavaSecurityCertCertStoreSpi *storeSpi, JavaSecurityProvider *provider, NSString *type, id<JavaSecurityCertCertStoreParameters> params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertStore *create_JavaSecurityCertCertStore_initWithJavaSecurityCertCertStoreSpi_withJavaSecurityProvider_withNSString_withJavaSecurityCertCertStoreParameters_(JavaSecurityCertCertStoreSpi *storeSpi, JavaSecurityProvider *provider, NSString *type, id<JavaSecurityCertCertStoreParameters> params);

FOUNDATION_EXPORT JavaSecurityCertCertStore *JavaSecurityCertCertStore_getInstanceWithNSString_withJavaSecurityCertCertStoreParameters_(NSString *type, id<JavaSecurityCertCertStoreParameters> params);

FOUNDATION_EXPORT JavaSecurityCertCertStore *JavaSecurityCertCertStore_getInstanceWithNSString_withJavaSecurityCertCertStoreParameters_withNSString_(NSString *type, id<JavaSecurityCertCertStoreParameters> params, NSString *provider);

FOUNDATION_EXPORT JavaSecurityCertCertStore *JavaSecurityCertCertStore_getInstanceWithNSString_withJavaSecurityCertCertStoreParameters_withJavaSecurityProvider_(NSString *type, id<JavaSecurityCertCertStoreParameters> params, JavaSecurityProvider *provider);

FOUNDATION_EXPORT NSString *JavaSecurityCertCertStore_getDefaultType(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertStore)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertStore")
