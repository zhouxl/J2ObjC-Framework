//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/KeyAgreement.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoKeyAgreement")
#ifdef RESTRICT_JavaxCryptoKeyAgreement
#define INCLUDE_ALL_JavaxCryptoKeyAgreement 0
#else
#define INCLUDE_ALL_JavaxCryptoKeyAgreement 1
#endif
#undef RESTRICT_JavaxCryptoKeyAgreement

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoKeyAgreement_) && (INCLUDE_ALL_JavaxCryptoKeyAgreement || defined(INCLUDE_JavaxCryptoKeyAgreement))
#define JavaxCryptoKeyAgreement_

@class IOSByteArray;
@class JavaSecurityProvider;
@class JavaSecuritySecureRandom;
@class JavaxCryptoKeyAgreementSpi;
@protocol JavaSecurityKey;
@protocol JavaSecuritySpecAlgorithmParameterSpec;
@protocol JavaxCryptoSecretKey;

/*!
 @brief This class provides the functionality of a key agreement (or key
  exchange) protocol.
 <p>
  The keys involved in establishing a shared secret are created by one of the
  key generators (<code>KeyPairGenerator</code> or 
 <code>KeyGenerator</code>), a <code>KeyFactory</code>, or as a result from
  an intermediate phase of the key agreement protocol. 
 <p> For each of the correspondents in the key exchange, <code>doPhase</code>
  needs to be called. For example, if this key exchange is with one other
  party, <code>doPhase</code> needs to be called once, with the 
 <code>lastPhase</code> flag set to <code>true</code>.
  If this key exchange is
  with two other parties, <code>doPhase</code> needs to be called twice,
  the first time setting the <code>lastPhase</code> flag to 
 <code>false</code>, and the second time setting it to <code>true</code>.
  There may be any number of parties involved in a key exchange. 
 <p> Android provides the following <code>KeyAgreement</code> algorithms: 
 <table>
      <thead>
          <tr>
              <th>Name</th>
              <th>Supported (API Levels)</th>
          </tr>
      </thead>
      <tbody>
          <tr>
              <td>DH</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>ECDH</td>
              <td>11+</td>
          </tr>
      </tbody>
  </table>
  This algorithm is described in the <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#KeyAgreement">
  KeyAgreement section</a> of the
  Java Cryptography Architecture Standard Algorithm Name Documentation.
 @author Jan Luehe
 - seealso: KeyGenerator
 - seealso: SecretKey
 @since 1.4
 */
@interface JavaxCryptoKeyAgreement : NSObject

#pragma mark Public

/*!
 @brief Executes the next phase of this key agreement with the given
  key that was received from one of the other parties involved in this key
  agreement.
 @param key the key for this phase. For example, in the case of  Diffie-Hellman between 2 parties, this would be the other party's
   Diffie-Hellman public key.
 @param lastPhase flag which indicates whether or not this is the last  phase of this key agreement.
 @return the (intermediate) key resulting from this phase, or null
  if this phase does not yield a key
 @throw InvalidKeyExceptionif the given key is inappropriate for
  this phase.
 @throw IllegalStateExceptionif this key agreement has not been
  initialized.
 */
- (id<JavaSecurityKey>)doPhaseWithJavaSecurityKey:(id<JavaSecurityKey>)key
                                      withBoolean:(jboolean)lastPhase;

/*!
 @brief Generates the shared secret and returns it in a new buffer.
 <p>This method resets this <code>KeyAgreement</code> object, so that it
  can be reused for further key agreements. Unless this key agreement is
  reinitialized with one of the <code>init</code> methods, the same
  private information and algorithm parameters will be used for
  subsequent key agreements.
 @return the new buffer with the shared secret
 @throw IllegalStateExceptionif this key agreement has not been
  completed yet
 */
- (IOSByteArray *)generateSecret;

/*!
 @brief Generates the shared secret, and places it into the buffer 
 <code>sharedSecret</code>, beginning at <code>offset</code> inclusive.
 <p>If the <code>sharedSecret</code> buffer is too small to hold the
  result, a <code>ShortBufferException</code> is thrown.
  In this case, this call should be repeated with a larger output buffer. 
 <p>This method resets this <code>KeyAgreement</code> object, so that it
  can be reused for further key agreements. Unless this key agreement is
  reinitialized with one of the <code>init</code> methods, the same
  private information and algorithm parameters will be used for
  subsequent key agreements.
 @param sharedSecret the buffer for the shared secret
 @param offset the offset in  <code> sharedSecret </code>  where the
   shared secret will be stored
 @return the number of bytes placed into <code>sharedSecret</code>
 @throw IllegalStateExceptionif this key agreement has not been
  completed yet
 @throw ShortBufferExceptionif the given output buffer is too small
  to hold the secret
 */
- (jint)generateSecretWithByteArray:(IOSByteArray *)sharedSecret
                            withInt:(jint)offset;

/*!
 @brief Creates the shared secret and returns it as a <code>SecretKey</code>
  object of the specified algorithm.
 <p>This method resets this <code>KeyAgreement</code> object, so that it
  can be reused for further key agreements. Unless this key agreement is
  reinitialized with one of the <code>init</code> methods, the same
  private information and algorithm parameters will be used for
  subsequent key agreements.
 @param algorithm the requested secret-key algorithm
 @return the shared secret key
 @throw IllegalStateExceptionif this key agreement has not been
  completed yet
 @throw NoSuchAlgorithmExceptionif the specified secret-key
  algorithm is not available
 @throw InvalidKeyExceptionif the shared secret-key material cannot
  be used to generate a secret key of the specified algorithm (e.g.,
  the key material is too short)
 */
- (id<JavaxCryptoSecretKey>)generateSecretWithNSString:(NSString *)algorithm;

/*!
 @brief Returns the algorithm name of this <code>KeyAgreement</code> object.
 <p>This is the same name that was specified in one of the 
 <code>getInstance</code> calls that created this 
 <code>KeyAgreement</code> object.
 @return the algorithm name of this <code>KeyAgreement</code> object.
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns a <code>KeyAgreement</code> object that implements the
  specified key agreement algorithm.
 <p> This method traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new KeyAgreement object encapsulating the
  KeyAgreementSpi implementation from the first
  Provider that supports the specified algorithm is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the standard name of the requested key agreement  algorithm.
   See the KeyAgreement section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#KeyAgreement">
   Java Cryptography Architecture Standard Algorithm Name Documentation
   for information about standard algorithm names.
 @return the new <code>KeyAgreement</code> object.
 @throw NullPointerExceptionif the specified algorithm
           is null.
 @throw NoSuchAlgorithmExceptionif no Provider supports a
           KeyAgreementSpi implementation for the
           specified algorithm.
 - seealso: java.security.Provider
 */
+ (JavaxCryptoKeyAgreement *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a <code>KeyAgreement</code> object that implements the
  specified key agreement algorithm.
 <p> A new KeyAgreement object encapsulating the
  KeyAgreementSpi implementation from the specified Provider
  object is returned.  Note that the specified Provider object
  does not have to be registered in the provider list.
 @param algorithm the standard name of the requested key agreement  algorithm.
   See the KeyAgreement section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#KeyAgreement">
   Java Cryptography Architecture Standard Algorithm Name Documentation
   for information about standard algorithm names.
 @param provider the provider.
 @return the new <code>KeyAgreement</code> object.
 @throw NullPointerExceptionif the specified algorithm
           is null.
 @throw NoSuchAlgorithmExceptionif a KeyAgreementSpi
           implementation for the specified algorithm is not available
           from the specified Provider object.
 @throw IllegalArgumentExceptionif the <code>provider</code>
           is null.
 - seealso: java.security.Provider
 */
+ (JavaxCryptoKeyAgreement *)getInstanceWithNSString:(NSString *)algorithm
                            withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a <code>KeyAgreement</code> object that implements the
  specified key agreement algorithm.
 <p> A new KeyAgreement object encapsulating the
  KeyAgreementSpi implementation from the specified provider
  is returned.  The specified provider must be registered
  in the security provider list. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the standard name of the requested key agreement  algorithm.
   See the KeyAgreement section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#KeyAgreement">
   Java Cryptography Architecture Standard Algorithm Name Documentation
   for information about standard algorithm names.
 @param provider the name of the provider.
 @return the new <code>KeyAgreement</code> object.
 @throw NullPointerExceptionif the specified algorithm
           is null.
 @throw NoSuchAlgorithmExceptionif a KeyAgreementSpi
           implementation for the specified algorithm is not
           available from the specified provider.
 @throw NoSuchProviderExceptionif the specified provider is not
           registered in the security provider list.
 @throw IllegalArgumentExceptionif the <code>provider</code>
           is null or empty.
 - seealso: java.security.Provider
 */
+ (JavaxCryptoKeyAgreement *)getInstanceWithNSString:(NSString *)algorithm
                                        withNSString:(NSString *)provider;

/*!
 @brief Returns the provider of this <code>KeyAgreement</code> object.
 @return the provider of this <code>KeyAgreement</code> object
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Initializes this key agreement with the given key, which is required to
  contain all the algorithm parameters required for this key agreement.
 <p> If this key agreement requires any random bytes, it will get
  them using the 
 <code><code>SecureRandom</code></code>
  implementation of the highest-priority
  installed provider as the source of randomness.
  (If none of the installed providers supply an implementation of
  SecureRandom, a system-provided source of randomness will be used.)
 @param key the party's private information. For example, in the case  of the Diffie-Hellman key agreement, this would be the party's own
   Diffie-Hellman private key.
 @throw InvalidKeyExceptionif the given key is
  inappropriate for this key agreement, e.g., is of the wrong type or
  has an incompatible algorithm type.
 */
- (void)init__WithJavaSecurityKey:(id<JavaSecurityKey>)key OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this key agreement with the given key and set of
  algorithm parameters.
 <p> If this key agreement requires any random bytes, it will get
  them using the 
 <code><code>SecureRandom</code></code>
  implementation of the highest-priority
  installed provider as the source of randomness.
  (If none of the installed providers supply an implementation of
  SecureRandom, a system-provided source of randomness will be used.)
 @param key the party's private information. For example, in the case  of the Diffie-Hellman key agreement, this would be the party's own
   Diffie-Hellman private key.
 @param params the key agreement parameters
 @throw InvalidKeyExceptionif the given key is
  inappropriate for this key agreement, e.g., is of the wrong type or
  has an incompatible algorithm type.
 @throw InvalidAlgorithmParameterExceptionif the given parameters
  are inappropriate for this key agreement.
 */
- (void)init__WithJavaSecurityKey:(id<JavaSecurityKey>)key
withJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this key agreement with the given key, set of
  algorithm parameters, and source of randomness.
 @param key the party's private information. For example, in the case  of the Diffie-Hellman key agreement, this would be the party's own
   Diffie-Hellman private key.
 @param params the key agreement parameters
 @param random the source of randomness
 @throw InvalidKeyExceptionif the given key is
  inappropriate for this key agreement, e.g., is of the wrong type or
  has an incompatible algorithm type.
 @throw InvalidAlgorithmParameterExceptionif the given parameters
  are inappropriate for this key agreement.
 */
- (void)init__WithJavaSecurityKey:(id<JavaSecurityKey>)key
withJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params
     withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this key agreement with the given key and source of
  randomness.The given key is required to contain all the algorithm
  parameters required for this key agreement.
 <p> If the key agreement algorithm requires random bytes, it gets them
  from the given source of randomness, <code>random</code>.
  However, if the underlying
  algorithm implementation does not require any random bytes, 
 <code>random</code> is ignored.
 @param key the party's private information. For example, in the case  of the Diffie-Hellman key agreement, this would be the party's own
   Diffie-Hellman private key.
 @param random the source of randomness
 @throw InvalidKeyExceptionif the given key is
  inappropriate for this key agreement, e.g., is of the wrong type or
  has an incompatible algorithm type.
 */
- (void)init__WithJavaSecurityKey:(id<JavaSecurityKey>)key
     withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

/*!
 @brief Creates a KeyAgreement object.
 @param keyAgreeSpi the delegate
 @param provider the provider
 @param algorithm the algorithm
 */
- (instancetype __nonnull)initWithJavaxCryptoKeyAgreementSpi:(JavaxCryptoKeyAgreementSpi *)keyAgreeSpi
                                    withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                                withNSString:(NSString *)algorithm;

#pragma mark Package-Private

/*!
 @brief Choose the Spi from the first provider available.Used if
  delayed provider selection is not possible because init()
  is not the first method called.
 */
- (void)chooseFirstProvider;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaxCryptoKeyAgreement)

FOUNDATION_EXPORT void JavaxCryptoKeyAgreement_initWithJavaxCryptoKeyAgreementSpi_withJavaSecurityProvider_withNSString_(JavaxCryptoKeyAgreement *self, JavaxCryptoKeyAgreementSpi *keyAgreeSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaxCryptoKeyAgreement *new_JavaxCryptoKeyAgreement_initWithJavaxCryptoKeyAgreementSpi_withJavaSecurityProvider_withNSString_(JavaxCryptoKeyAgreementSpi *keyAgreeSpi, JavaSecurityProvider *provider, NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoKeyAgreement *create_JavaxCryptoKeyAgreement_initWithJavaxCryptoKeyAgreementSpi_withJavaSecurityProvider_withNSString_(JavaxCryptoKeyAgreementSpi *keyAgreeSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaxCryptoKeyAgreement *JavaxCryptoKeyAgreement_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaxCryptoKeyAgreement *JavaxCryptoKeyAgreement_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaxCryptoKeyAgreement *JavaxCryptoKeyAgreement_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoKeyAgreement)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoKeyAgreement")
