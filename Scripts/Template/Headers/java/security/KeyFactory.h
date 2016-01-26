//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/KeyFactory.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaSecurityKeyFactory_INCLUDE_ALL")
#ifdef JavaSecurityKeyFactory_RESTRICT
#define JavaSecurityKeyFactory_INCLUDE_ALL 0
#else
#define JavaSecurityKeyFactory_INCLUDE_ALL 1
#endif
#undef JavaSecurityKeyFactory_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityKeyFactory_) && (JavaSecurityKeyFactory_INCLUDE_ALL || defined(JavaSecurityKeyFactory_INCLUDE))
#define JavaSecurityKeyFactory_

@class IOSClass;
@class JavaSecurityKeyFactorySpi;
@class JavaSecurityProvider;
@protocol JavaSecurityKey;
@protocol JavaSecurityPrivateKey;
@protocol JavaSecurityPublicKey;
@protocol JavaSecuritySpecKeySpec;

/*!
 @brief <code>KeyFactory</code> is an engine class that can be used to translate between
 public and private key objects and convert keys between their external
 representation, that can be easily transported and their internal
 representation.
 */
@interface JavaSecurityKeyFactory : NSObject

#pragma mark Public

/*!
 @brief Generates a instance of <code>PrivateKey</code> from the given key
 specification.
 @param keySpec
 the specification of the private key.
 @return the private key.
 @throws InvalidKeySpecException
 if the specified <code>keySpec</code> is invalid.
 */
- (id<JavaSecurityPrivateKey>)generatePrivateWithJavaSecuritySpecKeySpec:(id<JavaSecuritySpecKeySpec>)keySpec;

/*!
 @brief Generates a instance of <code>PublicKey</code> from the given key
 specification.
 @param keySpec
 the specification of the public key
 @return the public key
 @throws InvalidKeySpecException
 if the specified <code>keySpec</code> is invalid
 */
- (id<JavaSecurityPublicKey>)generatePublicWithJavaSecuritySpecKeySpec:(id<JavaSecuritySpecKeySpec>)keySpec;

/*!
 @brief Returns the name of the algorithm associated with this <code>KeyFactory</code>
 .
 @return the name of the algorithm associated with this <code>KeyFactory</code>
 .
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns a new instance of <code>KeyFactory</code> that utilizes the specified
 algorithm.
 @param algorithm
 the name of the algorithm.
 @return a new instance of <code>KeyFactory</code> that utilizes the specified
 algorithm.
 @throws NoSuchAlgorithmException
 if no provider provides the requested algorithm.
 */
+ (JavaSecurityKeyFactory *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a new instance of <code>KeyFactory</code> that utilizes the specified
 algorithm from the specified provider.
 The <code>provider</code> supplied
 does not have to be registered.
 @param algorithm
 the name of the algorithm.
 @param provider
 the security provider.
 @return a new instance of <code>KeyFactory</code> that utilizes the specified
 algorithm from the specified provider.
 @throws NoSuchAlgorithmException
 if the provider does not provide the requested algorithm.
 @throws IllegalArgumentException if <code>provider == null</code>
 */
+ (JavaSecurityKeyFactory *)getInstanceWithNSString:(NSString *)algorithm
                           withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a new instance of <code>KeyFactory</code> that utilizes the specified
 algorithm from the specified provider.
 @param algorithm
 the name of the algorithm.
 @param provider
 the name of the provider.
 @return a new instance of <code>KeyFactory</code> that utilizes the specified
 algorithm from the specified provider.
 @throws NoSuchAlgorithmException
 if the provider does not provide the requested algorithm.
 @throws NoSuchProviderException
 if the requested provider is not available.
 @throws IllegalArgumentException if <code>provider == null || provider.isEmpty()</code>
 */
+ (JavaSecurityKeyFactory *)getInstanceWithNSString:(NSString *)algorithm
                                       withNSString:(NSString *)provider;

/*!
 @brief Returns the key specification for the specified key.
 @param key
 the key from which the specification is requested.
 @param keySpec
 the type of the requested <code>KeySpec</code>.
 @return the key specification for the specified key.
 @throws InvalidKeySpecException
 if the key can not be processed, or the requested requested
 <code>KeySpec</code> is inappropriate for the given key.
 */
- (id)getKeySpecWithJavaSecurityKey:(id<JavaSecurityKey>)key
                       withIOSClass:(IOSClass *)keySpec;

/*!
 @brief Returns the provider associated with this <code>KeyFactory</code>.
 @return the provider associated with this <code>KeyFactory</code>.
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Translates the given key into a key from this key factory.
 @param key
 the key to translate.
 @return the translated key.
 @throws InvalidKeyException
 if the specified key can not be translated by this key
 factory.
 */
- (id<JavaSecurityKey>)translateKeyWithJavaSecurityKey:(id<JavaSecurityKey>)key;

#pragma mark Protected

/*!
 @brief Constructs a new instance of <code>KeyFactory</code> with the specified
 arguments.
 @param keyFacSpi
 the concrete key factory service.
 @param provider
 the provider.
 @param algorithm
 the algorithm to use.
 */
- (instancetype)initWithJavaSecurityKeyFactorySpi:(JavaSecurityKeyFactorySpi *)keyFacSpi
                         withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                     withNSString:(NSString *)algorithm;

@end

J2OBJC_STATIC_INIT(JavaSecurityKeyFactory)

FOUNDATION_EXPORT void JavaSecurityKeyFactory_initWithJavaSecurityKeyFactorySpi_withJavaSecurityProvider_withNSString_(JavaSecurityKeyFactory *self, JavaSecurityKeyFactorySpi *keyFacSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityKeyFactory *new_JavaSecurityKeyFactory_initWithJavaSecurityKeyFactorySpi_withJavaSecurityProvider_withNSString_(JavaSecurityKeyFactorySpi *keyFacSpi, JavaSecurityProvider *provider, NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyFactory *JavaSecurityKeyFactory_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityKeyFactory *JavaSecurityKeyFactory_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaSecurityKeyFactory *JavaSecurityKeyFactory_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecurityKeyFactory_INCLUDE_ALL")
