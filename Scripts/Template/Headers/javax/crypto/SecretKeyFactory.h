//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/SecretKeyFactory.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoSecretKeyFactory")
#ifdef RESTRICT_JavaxCryptoSecretKeyFactory
#define INCLUDE_ALL_JavaxCryptoSecretKeyFactory 0
#else
#define INCLUDE_ALL_JavaxCryptoSecretKeyFactory 1
#endif
#undef RESTRICT_JavaxCryptoSecretKeyFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoSecretKeyFactory_) && (INCLUDE_ALL_JavaxCryptoSecretKeyFactory || defined(INCLUDE_JavaxCryptoSecretKeyFactory))
#define JavaxCryptoSecretKeyFactory_

@class IOSClass;
@class JavaSecurityProvider;
@class JavaxCryptoSecretKeyFactorySpi;
@protocol JavaSecuritySpecKeySpec;
@protocol JavaxCryptoSecretKey;

/*!
 @brief This class represents a factory for secret keys.
 <P> Key factories are used to convert <I>keys</I> (opaque
  cryptographic keys of type <code>Key</code>) into <I>key specifications</I>
  (transparent representations of the underlying key material), and vice
  versa.
  Secret key factories operate only on secret (symmetric) keys. 
 <P> Key factories are bi-directional, i.e., they allow to build an opaque
  key object from a given key specification (key material), or to retrieve
  the underlying key material of a key object in a suitable format. 
 <P> Application developers should refer to their provider's documentation
  to find out which key specifications are supported by the 
 <code>generateSecret</code> and 
 <code>getKeySpec</code>
  methods.
  For example, the DES secret-key factory supplied by the "SunJCE" provider
  supports <code>DESKeySpec</code> as a transparent representation of DES
  keys, and that provider's secret-key factory for Triple DES keys supports 
 <code>DESedeKeySpec</code> as a transparent representation of Triple DES
  keys. 
 <p> Android provides the following <code>SecretKeyFactory</code> algorithms: 
 <table>
      <thead>
          <tr>
              <th>Name</th>
              <th>Supported (API Levels)</th>
          </tr>
      </thead>
      <tbody>
          <tr>
              <td>AES</td>
              <td>23+</td>
          </tr>
          <tr>
              <td>DES</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>DESede</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>HmacSHA1</td>
              <td>23+</td>
          </tr>
          <tr>
              <td>HmacSHA224</td>
              <td>23+</td>
          </tr>
          <tr>
              <td>HmacSHA256</td>
              <td>23+</td>
          </tr>
          <tr>
              <td>HmacSHA384</td>
              <td>23+</td>
          </tr>
          <tr>
              <td>HmacSHA512</td>
              <td>23+</td>
          </tr>
          <tr>
              <td>PBEwithHmacSHA1</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithMD5and128BITAES-CBC-OPENSSL</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithMD5and192BITAES-CBC-OPENSSL</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithMD5and256BITAES-CBC-OPENSSL</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithMD5andDES</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithMD5andRC2</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithSHA1andDES</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithSHA1andRC2</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithSHA256and128BITAES-CBC-BC</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithSHA256and192BITAES-CBC-BC</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithSHA256and256BITAES-CBC-BC</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithSHAand128BITAES-CBC-BC</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithSHAand128BITRC2-CBC</td>
              <td>10+</td>
          </tr>
          <tr>
              <td>PBEwithSHAand128BITRC4</td>
              <td>10+</td>
          </tr>
          <tr>
              <td>PBEwithSHAand192BITAES-CBC-BC</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithSHAand2-KEYTRIPLEDES-CBC</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithSHAand256BITAES-CBC-BC</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithSHAand3-KEYTRIPLEDES-CBC</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithSHAand40BITRC2-CBC</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PBEwithSHAand40BITRC4</td>
              <td>10+</td>
          </tr>
          <tr>
              <td>PBEwithSHAandTWOFISH-CBC</td>
              <td>10+</td>
          </tr>
          <tr>
              <td>PBKDF2withHmacSHA1</td>
              <td>10+</td>
          </tr>
          <tr>
              <td>PBKDF2withHmacSHA1and8BIT</td>
              <td>19+</td>
          </tr>
      </tbody>
  </table>
  These algorithms are described in the <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#SecretKeyFactory">
  SecretKeyFactory section</a> of the
  Java Cryptography Architecture Standard Algorithm Name Documentation.
 @author Jan Luehe
 - seealso: SecretKey
 - seealso: javax.crypto.spec.DESKeySpec
 - seealso: javax.crypto.spec.DESedeKeySpec
 - seealso: javax.crypto.spec.PBEKeySpec
 @since 1.4
 */
@interface JavaxCryptoSecretKeyFactory : NSObject

#pragma mark Public

/*!
 @brief Generates a <code>SecretKey</code> object from the provided key
  specification (key material).
 @param keySpec the specification (key material) of the secret key
 @return the secret key
 @throw InvalidKeySpecExceptionif the given key specification
  is inappropriate for this secret-key factory to produce a secret key.
 */
- (id<JavaxCryptoSecretKey>)generateSecretWithJavaSecuritySpecKeySpec:(id<JavaSecuritySpecKeySpec>)keySpec;

/*!
 @brief Returns the algorithm name of this <code>SecretKeyFactory</code> object.
 <p>This is the same name that was specified in one of the 
 <code>getInstance</code> calls that created this 
 <code>SecretKeyFactory</code> object.
 @return the algorithm name of this <code>SecretKeyFactory</code>
  object.
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns a <code>SecretKeyFactory</code> object that converts
  secret keys of the specified algorithm.
 <p> This method traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new SecretKeyFactory object encapsulating the
  SecretKeyFactorySpi implementation from the first
  Provider that supports the specified algorithm is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the standard name of the requested secret-key  algorithm.
   See the SecretKeyFactory section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#SecretKeyFactory">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @return the new <code>SecretKeyFactory</code> object.
 @throw NullPointerExceptionif the specified algorithm
           is null.
 @throw NoSuchAlgorithmExceptionif no Provider supports a
           SecretKeyFactorySpi implementation for the
           specified algorithm.
 - seealso: java.security.Provider
 */
+ (JavaxCryptoSecretKeyFactory *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a <code>SecretKeyFactory</code> object that converts
  secret keys of the specified algorithm.
 <p> A new SecretKeyFactory object encapsulating the
  SecretKeyFactorySpi implementation from the specified Provider
  object is returned.  Note that the specified Provider object
  does not have to be registered in the provider list.
 @param algorithm the standard name of the requested secret-key  algorithm.
   See the SecretKeyFactory section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#SecretKeyFactory">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @param provider the provider.
 @return the new <code>SecretKeyFactory</code> object.
 @throw NullPointerExceptionif the specified algorithm
  is null.
 @throw NoSuchAlgorithmExceptionif a SecretKeyFactorySpi
           implementation for the specified algorithm is not available
           from the specified Provider object.
 @throw IllegalArgumentExceptionif the <code>provider</code>
           is null.
 - seealso: java.security.Provider
 */
+ (JavaxCryptoSecretKeyFactory *)getInstanceWithNSString:(NSString *)algorithm
                                withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a <code>SecretKeyFactory</code> object that converts
  secret keys of the specified algorithm.
 <p> A new SecretKeyFactory object encapsulating the
  SecretKeyFactorySpi implementation from the specified provider
  is returned.  The specified provider must be registered
  in the security provider list. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the standard name of the requested secret-key  algorithm.
   See the SecretKeyFactory section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#SecretKeyFactory">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @param provider the name of the provider.
 @return the new <code>SecretKeyFactory</code> object.
 @throw NoSuchAlgorithmExceptionif a SecretKeyFactorySpi
           implementation for the specified algorithm is not
           available from the specified provider.
 @throw NullPointerExceptionif the specified algorithm
           is null.
 @throw NoSuchProviderExceptionif the specified provider is not
           registered in the security provider list.
 @throw IllegalArgumentExceptionif the <code>provider</code>
           is null or empty.
 - seealso: java.security.Provider
 */
+ (JavaxCryptoSecretKeyFactory *)getInstanceWithNSString:(NSString *)algorithm
                                            withNSString:(NSString *)provider;

/*!
 @brief Returns a specification (key material) of the given key object
  in the requested format.
 @param key the key
 @param keySpec the requested format in which the key material shall be  returned
 @return the underlying key specification (key material) in the
  requested format
 @throw InvalidKeySpecExceptionif the requested key specification is
  inappropriate for the given key (e.g., the algorithms associated with 
 <code>key</code> and <code>keySpec</code> do not match, or 
 <code>key</code> references a key on a cryptographic hardware device
  whereas <code>keySpec</code> is the specification of a software-based
  key), or the given key cannot be dealt with
  (e.g., the given key has an algorithm or format not supported by this
  secret-key factory).
 */
- (id<JavaSecuritySpecKeySpec>)getKeySpecWithJavaxCryptoSecretKey:(id<JavaxCryptoSecretKey>)key
                                                     withIOSClass:(IOSClass *)keySpec;

/*!
 @brief Returns the provider of this <code>SecretKeyFactory</code> object.
 @return the provider of this <code>SecretKeyFactory</code> object
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Translates a key object, whose provider may be unknown or potentially
  untrusted, into a corresponding key object of this secret-key factory.
 @param key the key whose provider is unknown or untrusted
 @return the translated key
 @throw InvalidKeyExceptionif the given key cannot be processed
  by this secret-key factory.
 */
- (id<JavaxCryptoSecretKey>)translateKeyWithJavaxCryptoSecretKey:(id<JavaxCryptoSecretKey>)key;

#pragma mark Protected

/*!
 @brief Creates a SecretKeyFactory object.
 @param keyFacSpi the delegate
 @param provider the provider
 @param algorithm the secret-key algorithm
 */
- (instancetype __nonnull)initWithJavaxCryptoSecretKeyFactorySpi:(JavaxCryptoSecretKeyFactorySpi *)keyFacSpi
                                        withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                                    withNSString:(NSString *)algorithm;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoSecretKeyFactory)

FOUNDATION_EXPORT void JavaxCryptoSecretKeyFactory_initWithJavaxCryptoSecretKeyFactorySpi_withJavaSecurityProvider_withNSString_(JavaxCryptoSecretKeyFactory *self, JavaxCryptoSecretKeyFactorySpi *keyFacSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaxCryptoSecretKeyFactory *new_JavaxCryptoSecretKeyFactory_initWithJavaxCryptoSecretKeyFactorySpi_withJavaSecurityProvider_withNSString_(JavaxCryptoSecretKeyFactorySpi *keyFacSpi, JavaSecurityProvider *provider, NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSecretKeyFactory *create_JavaxCryptoSecretKeyFactory_initWithJavaxCryptoSecretKeyFactorySpi_withJavaSecurityProvider_withNSString_(JavaxCryptoSecretKeyFactorySpi *keyFacSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaxCryptoSecretKeyFactory *JavaxCryptoSecretKeyFactory_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaxCryptoSecretKeyFactory *JavaxCryptoSecretKeyFactory_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaxCryptoSecretKeyFactory *JavaxCryptoSecretKeyFactory_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSecretKeyFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoSecretKeyFactory")
