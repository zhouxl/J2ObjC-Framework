//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/MacSpi.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoMacSpi")
#ifdef RESTRICT_JavaxCryptoMacSpi
#define INCLUDE_ALL_JavaxCryptoMacSpi 0
#else
#define INCLUDE_ALL_JavaxCryptoMacSpi 1
#endif
#undef RESTRICT_JavaxCryptoMacSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoMacSpi_) && (INCLUDE_ALL_JavaxCryptoMacSpi || defined(INCLUDE_JavaxCryptoMacSpi))
#define JavaxCryptoMacSpi_

@class IOSByteArray;
@class JavaNioByteBuffer;
@protocol JavaSecurityKey;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief This class defines the <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>Mac</code> class.
 All the abstract methods in this class must be implemented by each
  cryptographic service provider who wishes to supply the implementation
  of a particular MAC algorithm. 
 <p> Implementations are free to implement the Cloneable interface.
 @author Jan Luehe
 @since 1.4
 */
@interface JavaxCryptoMacSpi : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Returns a clone if the implementation is cloneable.
 @return a clone if the implementation is cloneable.
 @throw CloneNotSupportedExceptionif this is called
  on an implementation that does not support <code>Cloneable</code>.
 */
- (id)java_clone;

#pragma mark Protected

/*!
 @brief Completes the MAC computation and resets the MAC for further use,
  maintaining the secret key that the MAC was initialized with.
 @return the MAC result.
 */
- (IOSByteArray *)engineDoFinal;

/*!
 @brief Returns the length of the MAC in bytes.
 @return the MAC length in bytes.
 */
- (jint)engineGetMacLength;

/*!
 @brief Initializes the MAC with the given (secret) key and algorithm
  parameters.
 @param key the (secret) key.
 @param params the algorithm parameters.
 @throw InvalidKeyExceptionif the given key is inappropriate for
  initializing this MAC.
 @throw InvalidAlgorithmParameterExceptionif the given algorithm
  parameters are inappropriate for this MAC.
 */
- (void)engineInitWithJavaSecurityKey:(id<JavaSecurityKey>)key
withJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params;

/*!
 @brief Resets the MAC for further use, maintaining the secret key that the
  MAC was initialized with.
 */
- (void)engineReset;

/*!
 @brief Processes the given byte.
 @param input the input byte to be processed.
 */
- (void)engineUpdateWithByte:(jbyte)input;

/*!
 @brief Processes the first <code>len</code> bytes in <code>input</code>,
  starting at <code>offset</code> inclusive.
 @param input the input buffer.
 @param offset the offset in  <code> input </code>  where the input starts.
 @param len the number of bytes to process.
 */
- (void)engineUpdateWithByteArray:(IOSByteArray *)input
                          withInt:(jint)offset
                          withInt:(jint)len;

/*!
 @brief Processes <code>input.remaining()</code> bytes in the ByteBuffer 
 <code>input</code>, starting at <code>input.position()</code>.
 Upon return, the buffer's position will be equal to its limit;
  its limit will not have changed. 
 <p>Subclasses should consider overriding this method if they can
  process ByteBuffers more efficiently than byte arrays.
 @param input the ByteBuffer
 @since 1.5
 */
- (void)engineUpdateWithJavaNioByteBuffer:(JavaNioByteBuffer *)input;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoMacSpi)

FOUNDATION_EXPORT void JavaxCryptoMacSpi_init(JavaxCryptoMacSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoMacSpi)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoMacSpi")
